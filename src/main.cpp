#include "config/config.hpp"
#include "dll_proxy/dll_proxy.hpp"
#include "gui/gui.hpp"
#include "gui/renderer.hpp"
#include "hooks/hooking.hpp"
#include "logger/exception_handler.hpp"
#include "lua_extensions/lua_manager_extension.hpp"
#include "lua_extensions/lua_module_ext.hpp"
#include "memory/byte_patch_manager.hpp"
#include "paths/paths.hpp"
#include "threads/thread_pool.hpp"
#include "threads/util.hpp"
#include "version.hpp"

#include <commctrl.h>
#include <logger/stack_trace.hpp>
#include <memory/gm_address.hpp>
#include <utf8.h>

//#include "debug/debug.hpp"

static bool g_has_last_stack_trace;
static std::stringstream g_last_stack_trace;

static std::wstring ToWide(std::string_view narrow)
{
	std::vector<uint8_t> cleanVec;
	cleanVec.reserve(narrow.size());

	std::wstring outVec;
	outVec.reserve(cleanVec.size());

	try
	{
		utf8::replace_invalid(narrow.begin(), narrow.end(), std::back_inserter(cleanVec));

		utf8::utf8to16(cleanVec.begin(), cleanVec.end(), std::back_inserter(outVec));
	}
	catch (utf8::exception& e)
	{
	}

	return std::move(outVec);
}

void ShowGoodMessageBox(std::wstring_view windowTitle, std::wstring_view content)
{
	TASKDIALOGCONFIG taskDialogConfig = {0};
	TASKDIALOG_BUTTON buttons[1];
	std::wstring mainInstruction = L"UnchainedTogether has stopped working";
	std::wstring tempSignature   = L"You can press Ctrl-C to copy the error message and paste it elsewhere.";
	taskDialogConfig.cbSize      = sizeof(taskDialogConfig);
	taskDialogConfig.hInstance   = GetModuleHandle(nullptr);
	taskDialogConfig.dwFlags = TDF_ENABLE_HYPERLINKS | TDF_EXPAND_FOOTER_AREA | /*TDF_SHOW_PROGRESS_BAR |*/ TDF_CALLBACK_TIMER | TDF_USE_COMMAND_LINKS | TDF_EXPANDED_BY_DEFAULT;
	taskDialogConfig.dwCommonButtons = TDCBF_CLOSE_BUTTON;
	//taskDialogConfig.cButtons               = 1;
	//taskDialogConfig.pButtons               = buttons;
	taskDialogConfig.pszWindowTitle         = windowTitle.data();
	taskDialogConfig.pszMainIcon            = MAKEINTRESOURCEW(-7); // shield bar w/ error color
	taskDialogConfig.pszMainInstruction     = mainInstruction.c_str();
	taskDialogConfig.pszContent             = content.data();
	taskDialogConfig.pszExpandedInformation = tempSignature.c_str();
	taskDialogConfig.pfCallback             = [](HWND hWnd, UINT type, WPARAM wParam, LPARAM lParam, LONG_PTR data)
	{
		if (type == TDN_HYPERLINK_CLICKED)
		{
			ShellExecuteW(nullptr, L"open", (LPCWSTR)lParam, nullptr, nullptr, SW_NORMAL);
		}
		else if (type == TDN_BUTTON_CLICKED)
		{
			if (wParam == 42)
			{
				SendMessageW(hWnd, TDM_ENABLE_BUTTON, 42, 0);
			}
			else
			{
				return S_OK;
			}
		}
		else if (type == TDN_CREATED)
		{
			SendMessage(hWnd, TDM_ENABLE_BUTTON, IDCLOSE, 0);
			//SendMessage(hWnd, TDM_SET_MARQUEE_PROGRESS_BAR, 1, 0);
			//SendMessage(hWnd, TDM_SET_PROGRESS_BAR_MARQUEE, 1, 15);
			SendMessage(hWnd, TDM_UPDATE_ICON, TDIE_ICON_MAIN, (LPARAM)TD_ERROR_ICON);
		}
		else if (type == TDN_TIMER)
		{
			SendMessage(hWnd, TDM_SET_ELEMENT_TEXT, TDE_EXPANDED_INFORMATION, (WPARAM)L"You can press Ctrl-C to copy the error message and paste it elsewhere.");

			SendMessage(hWnd, TDM_ENABLE_BUTTON, IDCLOSE, 1);
			//SendMessage(hWnd, TDM_SET_MARQUEE_PROGRESS_BAR, 0, 0);
			//SendMessage(hWnd, TDM_SET_PROGRESS_BAR_POS, 100, 0);
			//SendMessage(hWnd, TDM_SET_PROGRESS_BAR_STATE, PBST_NORMAL, 0);

			//if (crashId->empty())
			{
				//SendMessage(hWnd, TDM_SET_PROGRESS_BAR_STATE, PBST_ERROR, 0);
			}
		}

		return S_FALSE;
	};

	// make the disconnect message less confusing
	{
		taskDialogConfig.dwFlags     &= ~(TDF_USE_COMMAND_LINKS | TDF_EXPANDED_BY_DEFAULT);
		taskDialogConfig.pszMainIcon  = TD_WARNING_ICON;

		//std::wstring saveStr     = L"Save information";
		//buttons[0].pszButtonText = saveStr.c_str();

		//taskDialogConfig.dwFlags |= TDF_EXPANDED_BY_DEFAULT;
	}

	auto task_dialog_thread = std::thread(
	    [taskDialogConfig, buttons]()
	    {
		    TaskDialogIndirect(&taskDialogConfig, nullptr, nullptr, nullptr);
	    });
	task_dialog_thread.join();
}

static LONG custom_exception_handler(EXCEPTION_POINTERS* exception_info)
{
	g_has_last_stack_trace = false;

	if (IsDebuggerPresent())
	{
		__debugbreak();

		return EXCEPTION_CONTINUE_SEARCH;
	}

	const auto exception_code = exception_info->ExceptionRecord->ExceptionCode;
	if (exception_code == EXCEPTION_BREAKPOINT || exception_code == DBG_PRINTEXCEPTION_C || exception_code == DBG_PRINTEXCEPTION_WIDE_C)
	{
		return EXCEPTION_CONTINUE_SEARCH;
	}

	big::stack_trace trace_;
	trace_.new_stack_trace(exception_info);
	// Do it twice so it doesnt print the module list to the user.
	big::stack_trace trace;
	trace.new_stack_trace(exception_info);

	LOG(ERROR) << trace;
	Logger::FlushQueue();

	g_last_stack_trace.clear();
	g_last_stack_trace << trace;
	g_has_last_stack_trace = true;

	return EXCEPTION_CONTINUE_SEARCH;
}

LONG __fastcall hook_global_cpp_try_catch(EXCEPTION_POINTERS* ExceptionInfo)
{
	big::vectored_exception_handler(ExceptionInfo);
	const auto res = custom_exception_handler(ExceptionInfo);

	static bool once = true;
	if (once && g_has_last_stack_trace)
	{
		const auto msg      = std::format("The game has encountered a fatal error\n{}", g_last_stack_trace.str());
		const auto msg_wide = ToWide(msg);
		ShowGoodMessageBox(L"UnchainedTogether", msg_wide);
		once = false;
	}

	return res;
}

BOOL APIENTRY DllMain(HMODULE hmod, DWORD reason, PVOID)
{
	using namespace big;

	if (reason == DLL_PROCESS_ATTACH)
	{
		dll_proxy::init();

		if (!rom::is_rom_enabled())
		{
			return true;
		}

		// Lua API: Namespace
		// Name: rom
		rom::init("UnchainedTogether", "ChainedTogether-Win64-Shipping.exe", "rom");

		// Purposely leak it, we are not unloading this module in any case.
		auto exception_handling = new exception_handler();

		{
			static auto global_unreal_engine_try_catch_ptr = gmAddress::scan("E8 ? ? ? ? 90 33 C0 48 83 C4 28", "global_unreal_engine_try_catch_ptr");
			if (global_unreal_engine_try_catch_ptr)
			{
				static auto global_unreal_engine_try_catch = global_unreal_engine_try_catch_ptr.get_call();

				static auto hook_once = big::hooking::detour_hook_helper::add<hook_global_cpp_try_catch>(
				    "hook global unreal engine cpp try catch",
				    global_unreal_engine_try_catch);
			}
		}

		DisableThreadLibraryCalls(hmod);
		g_hmodule     = hmod;
		g_main_thread = CreateThread(
		    nullptr,
		    0,
		    [](PVOID) -> DWORD
		    {
			    //Sleep(5000);

			    // https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/setlocale-wsetlocale?view=msvc-170#utf-8-support
			    setlocale(LC_ALL, ".utf8");
			    // This also change things like stringstream outputs and add comma to numbers and things like that, we don't want that, so just set locale on the C apis instead.
			    //std::locale::global(std::locale(".utf8"));

			    std::filesystem::path root_folder = paths::get_project_root_folder();
			    g_file_manager.init(root_folder);
			    paths::init_dump_file_path();

			    big::config::init_general();

			    auto logger_instance = std::make_unique<logger>(rom::g_project_name, g_file_manager.get_project_file("./LogOutput.log"));
			    static struct logger_cleanup
			    {
				    ~logger_cleanup()
				    {
					    Logger::Destroy();
				    }
			    } g_logger_cleanup;

			    LOG(INFO) << rom::g_project_name;
			    LOGF(INFO, "Build (GIT SHA1): {}", version::GIT_SHA1);

#ifdef FINAL
			    LOG(INFO) << "This is a final build";
#endif

			    auto thread_pool_instance = std::make_unique<thread_pool>();
			    LOG(INFO) << "Thread pool initialized.";

			    auto byte_patch_manager_instance = std::make_unique<byte_patch_manager>();
			    LOG(INFO) << "Byte Patch Manager initialized.";

			    auto hooking_instance = std::make_unique<hooking>();
			    LOG(INFO) << "Hooking initialized.";

			    auto renderer_instance = std::make_unique<renderer>();
			    LOG(INFO) << "Renderer initialized.";

			    hotkey::init_hotkeys();

			    if (!g_abort)
			    {
				    g_hooking->enable();
				    LOG(INFO) << "Hooking enabled.";
			    }

			    g_running = true;

			    auto L = luaL_newstate();
			    auto lua_manager_instance =
			        std::make_unique<lua_manager>(L,
			                                      g_file_manager.get_project_folder("config"),
			                                      g_file_manager.get_project_folder("plugins_data"),
			                                      g_file_manager.get_project_folder("plugins"),
			                                      [](sol::state_view& state, sol::table& lua_ext)
			                                      {
				                                      lua_manager_extension::init_lua_api(state, lua_ext);
			                                      });
			    sol::state_view sol_state_view(L);
			    lua_manager_extension::init_lua_state(sol_state_view);
			    lua_manager_instance->init<lua_module_ext>();
			    LOG(INFO) << "Lua manager initialized.";

			    if (g_abort)
			    {
				    LOG(ERROR) << rom::g_project_name << "failed to init properly, exiting.";
				    g_running = false;
			    }

			    while (g_running)
			    {
				    std::this_thread::sleep_for(500ms);
			    }

			    g_hooking->disable();
			    LOG(INFO) << "Hooking disabled.";

			    // Make sure that all threads created don't have any blocking loops
			    // otherwise make sure that they have stopped executing
			    thread_pool_instance->destroy();
			    LOG(INFO) << "Destroyed thread pool.";

			    hooking_instance.reset();
			    LOG(INFO) << "Hooking uninitialized.";

			    renderer_instance.reset();
			    LOG(INFO) << "Renderer uninitialized.";

			    byte_patch_manager_instance.reset();
			    LOG(INFO) << "Byte Patch Manager uninitialized.";

			    thread_pool_instance.reset();
			    LOG(INFO) << "Thread pool uninitialized.";

			    LOG(INFO) << "Farewell!";
			    logger_instance->destroy();
			    logger_instance.reset();

			    CloseHandle(g_main_thread);
			    FreeLibraryAndExitThread(g_hmodule, 0);
		    },
		    nullptr,
		    0,
		    &g_main_thread_id);
	}

	return true;
}
