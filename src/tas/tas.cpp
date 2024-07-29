#include "tas.hpp"

namespace big
{
	const std::string FILE_PATH = "./aaaaaaatest.movie";

	void tas::init()
	{
		LOG(DEBUG) << "Initialize TAS Tools...";
		LOG(DEBUG) << "ThreadId: " << GetCurrentThreadId();
		static auto hook_ = big::hooking::detour_hook_helper::add<tas::hook_char_tick>(
			"hook character tick",
			SDK::ABP_Character_C::StaticClass()->GetFunction("BP_Character_C", "ReceiveTick")->ExecFunction);

		static auto inside_UpdateTimeAndHandleMaxTickRate = gmAddress::scan("66 0F 5A C0 C6 05");
		static auto UpdateTimeAndHandleMaxTickRate = inside_UpdateTimeAndHandleMaxTickRate.offset(-0xCB);
		FApp_DeltaTime                       = inside_UpdateTimeAndHandleMaxTickRate.offset(30).rip().as<double*>();
		FApp_CurrentTime                     = inside_UpdateTimeAndHandleMaxTickRate.offset(-25).rip().as<double*>();
		FApp_LastTime                        = inside_UpdateTimeAndHandleMaxTickRate.offset(38).rip().as<double*>();
		FGenericPlatformTime_SecondsPerCycle = inside_UpdateTimeAndHandleMaxTickRate.offset(168).rip().as<double*>();

		static auto hook_deltaTimeSetter = big::hooking::detour_hook_helper::add<tas::hook_UEngine_UpdateTimeAndHandleMaxTickRate>("hook deltaTime setter", UpdateTimeAndHandleMaxTickRate);

		static auto GetMaxTickRateFunc = gmAddress::scan("48 83 EC 58 48 63 81 ? ? ? ? 45 33 C9");
		static auto hook_GetMaxTickRate_ = big::hooking::detour_hook_helper::add<hook_UGameEngine_GetMaxTickRate>("hook GetMaxTickRate", GetMaxTickRateFunc);

		CreateAndEnableHook(&Sleep, &SleepHookDisableRendering, &g_orig_Sleep);

		// Initialize Minhook
		if (MH_Initialize() != MH_OK)
		{
		}

		// Initialize mutex
		InitializeCriticalSection(&g_mutex);

		//CreateAndEnableHook(&QueryPerformanceCounter, &QueryPerformanceCounterHook, &g_orig_QueryPerformanceCounter);
		//CreateAndEnableHook(&QueryPerformanceFrequency, &QueryPerformanceFrequencyHook, &g_orig_QueryPerformanceFrequency);
		//QueryPerformanceFrequencyHook(&g_qpc.frequency);
		//*FGenericPlatformTime_SecondsPerCycle = 1.0 / (double)g_qpc.frequency.QuadPart;
		//g_orig_QueryPerformanceFrequency(&g_qpc.frequency);

		_pauseFrame = -1;
		_currentTimeScale = 1.0f;
		SDK::UWorld::GetWorld()->K2_GetWorldSettings()->TimeDilation = _currentTimeScale;

		LOG(DEBUG) << "TAS Tools initialized";
	}
	
	void tas::destroy()
	{
		_movie.stop();
	}

	void tas::SleepHookDisableRendering(DWORD milliseconds)
	{
		if (g_disable_rendering)
		{
			const auto current_thread = GetCurrentThreadId();
			if (current_thread == g_tick_thread || current_thread == g_render_thread)
			{
				return;
			}
		}

		g_orig_Sleep(milliseconds);
	}

	float tas::hook_UGameEngine_GetMaxTickRate(SDK::UGameEngine* this_, float deltaTime, bool allowFrameRateSmoothing)
	{
		auto res = big::g_hooking->get_original<hook_UGameEngine_GetMaxTickRate>()(this_, deltaTime, allowFrameRateSmoothing);

		if (g_disable_rendering)
		{
			res = 0;
		}

		return res;
	}

	template<typename T>
	void CreateAndEnableHook(void* target, void* detour, T** original)
	{
		MH_STATUS status = MH_CreateHook(target, detour, reinterpret_cast<void**>(original));
		if (status != MH_OK)
		{
			LOG(INFO) << "Failed to create hook: " << MH_StatusToString(status);
		}

		if (MH_EnableHook(target) != MH_OK)
		{
			LOG(INFO) << "Failed to enable hook";
		}
	}

	static BOOL WINAPI QueryPerformanceFrequencyHook(LARGE_INTEGER* f)
	{
		f->QuadPart = (ULONG64)1e7;
		return TRUE;
	}

	static BOOL WINAPI QueryPerformanceCounterHook(LARGE_INTEGER* f)
	{
		if (!g_game_thread)
		{
			++g_qpc.ticks;
		}
		f->QuadPart = g_qpc.ticks;
		return TRUE;
	}

	void tas::hook_UEngine_UpdateTimeAndHandleMaxTickRate(void* this_)
	{
		g_tick_thread = GetCurrentThreadId();

		big::g_hooking->get_original<hook_UEngine_UpdateTimeAndHandleMaxTickRate>()(this_);

		//static struct
		//{
		//	uint8_t state;
		//	LARGE_INTEGER time;
		//} last = {0};

		//if (!g_game_thread)
		//{
		//	LOG(DEBUG) << "Game ThreadId: " << GetCurrentThreadId();
		//	g_game_thread = GetCurrentThreadId();
		//}

		//LOCK();
		//g_qpc.ticks += 1'000'000;

		*FApp_CurrentTime = 0;
		*FApp_LastTime    = 0;
		*FApp_DeltaTime   = g_delta;

		//for (;;)
		//{
		//	LARGE_INTEGER t = {0};
		//	g_orig_QueryPerformanceCounter(&t);
		//	if ((double)(t.QuadPart - last.time.QuadPart) / (double)g_qpc.frequency.QuadPart >= g_delta)
		//	{
		//		break;
		//	}

		//	Sleep(0);
		//}

		//UNLOCK();

		//g_orig_QueryPerformanceCounter(&last.time);

		return;
	}


	constexpr double RadiansToDegree(double radians)
	{
		return radians / (M_PI / 180.0f);
	}

	void tas::disable_rendering(bool disable)
	{
		g_disable_rendering = disable;
		auto viewport = SDK::UEngine::GetEngine()->GameViewport;
		if (viewport)
			viewport->bDisableWorldRendering = g_disable_rendering;
	}

	void tas::hook_char_tick(SDK::ABP_Character_C* pawn, void* stack, void* result)
	{
		big::g_hooking->get_original<hook_char_tick>()(pawn, stack, result);

		if (!pawn || pawn->Class != SDK::ABP_Character_C::StaticClass())
		{
			return;
		}

		if (_pauseFrame > 0 && --_pauseFrame == 0)
			SDK::UWorld::GetWorld()->K2_GetWorldSettings()->TimeDilation = 0.0f;

		if (!PlayerController)
			return;

		//if (Input::IsKeyDown(PlayerController, L"ThumbMouseButton"))
		//{
		//	if (!_loadstate)
		//	{
		//		_movie.loadstate(PlayerController);
		//		_loadstate = true;
		//		LOG(DEBUG) << "Savestate loaded.";
		//	}
		//}
		//else
		//	_loadstate = false;
		//if (Input::IsKeyDown(PlayerController, L"ThumbMouseButton2"))
		//{
		//	if (!_savestate)
		//	{
		//		_movie.savestate(PlayerController);
		//		_savestate = true;
		//		LOG(DEBUG) << "Savestate saved.";
		//	}
		//}
		//else
		//	_savestate = false;

		if (!pawn->Grounded)
			_spacePressed = false;

		if (Input::IsKeyDown(PlayerController, L"RightMouseButton"))
		{
			if (pawn->Grounded && !_lastGrounded && !_spacePressed)
			{
				_spacePressed = true;
				pawn->Jump_Input();
			}
		}
		else if (Input::IsKeyDown(PlayerController, L"LeftMouseButton"))
		{
			if (!pawn->Grounded)
			{
				SDK::UCharacterMovementComponent* move = (SDK::UCharacterMovementComponent*)pawn->GetComponentByClass(SDK::UCharacterMovementComponent::StaticClass());
				SDK::FVector vel = pawn->CharacterVelocity;
				vel.Z = 0;
				double velMag = abs(vel.Magnitude());

				double velAngle = RadiansToDegree(atan2(vel.Y, vel.X));
				double accel = maxAccel * g_delta;

				//if (move)
				//{
				//	LOG(DEBUG) << "Max Acceleration: " << move->MaxAcceleration;
				//	LOG(DEBUG) << "Air Control: " << move->AirControl << ", Mult: " << move->AirControlBoostMultiplier << ", Thresh: " << move->AirControlBoostVelocityThreshold;
				//}

				//SDK::FVector acc = pawn->Acceleration;
				//acc.Z = 0;
				//double accMag = abs(acc.Magnitude());

				//LOG(DEBUG) << "Acceleration: " << accMag;

				double offset = RadiansToDegree(acos((maxAirVel - accel) / velMag));
				double val = velAngle;
				if (Input::IsKeyDown(PlayerController, L"A"))
				{
					if (!std::isnan(offset))
						val -= offset;
					PlayerController->ControlRotation.Yaw = val - angle;
				}
				else if (Input::IsKeyDown(PlayerController, L"D"))
				{
					if (!std::isnan(offset))
						val += offset;
					PlayerController->ControlRotation.Yaw = val + angle;
				}

				//LOG(DEBUG) << "Offset: " << offset << ", VelAngle: " << velAngle << ", Yaw: " << val;
				//LOG(DEBUG) << "=> Velocity: " << velMag;
				//LOG(DEBUG) << "Angle: " << angle << ", MaxAccel: " << maxAccel << ", MaxAirVel: " << maxAirVel;
			}
			else if (!_lastGrounded && !_spacePressed)
			{
				_spacePressed = true;
				pawn->Jump_Input();
			}
		}
		else
		{
			_spacePressed = false;
		}

		_movie.update(PlayerController);
		_lastGrounded = pawn->Grounded;

		if (_movie.is_end())
		{
			g_chained_together_freeze_state = true;
			LOG(DEBUG) << "Movie has ended.";
			disable_rendering(false);
		}
	}

	void tas::on_tick(bool ingame, SDK::APlayerController* playerController)
	{
		if (!ingame && _lastInGame)
		{
			PlayerController = nullptr;
			_movie.stop();
		}

		if (ingame && !_lastInGame)
		{
			disable_rendering(!_movie.Recording && _fastForward);

			SDK::UWorld::GetWorld()->K2_GetWorldSettings()->TimeDilation = _currentTimeScale;
			PlayerController = playerController;
			SDK::ABP_Character_C* pawn = (decltype(pawn))playerController->Pawn;
		}

		_lastInGame = ingame;

		if (!PlayerController)
			return;
	}

	void tas::wndproc(UINT msg, WPARAM wparam, LPARAM lparam)
	{
		if (msg == WM_KEYUP)
		{
			if (wparam == 'O')
			{
				angle -= 1.0;
				LOG(DEBUG) << "Angle: " << angle;
			}
			if (wparam == 'P')
			{
				angle += 1.0;
				LOG(DEBUG) << "Angle: " << angle;
			}

			if (wparam == 'K')
			{
				maxAccel -= 50.0;
				LOG(DEBUG) << "Max Accel: " << maxAccel;
			}
			if (wparam == 'L')
			{
				maxAccel += 50.0;
				LOG(DEBUG) << "Max Accel: " << maxAccel;
			}

			if (wparam == 'N')
			{
				maxAirVel -= 10.0;
				LOG(DEBUG) << "Max Air Vel: " << maxAirVel;
			}
			if (wparam == 'M')
			{
				maxAirVel += 10.0;
				LOG(DEBUG) << "Max Air Vel: " << maxAirVel;
			}

			if (wparam == VK_NUMPAD1)
			{
				LOG(DEBUG) << "Preparing for moving recording...";
				_movie.init(FILE_PATH, true);
				LOG(DEBUG) << "Done.";
			}

			if (wparam == VK_NUMPAD2)
			{
				LOG(DEBUG) << "Preparing for moving playback...";
				_movie.init(FILE_PATH, false);
				LOG(DEBUG) << "Done.";
			}

			if (wparam == VK_NUMPAD3)
			{
				_fastForward = !_fastForward;
				LOG(DEBUG) << "Fastfoward next replay " << _fastForward ? "ENABLED" : "DISABLED";
			}

			if (wparam == VK_NUMPAD0)
			{
				LOG(DEBUG) << "Started rerecording over movie";
				_movie.start_rerecord(PlayerController);
			}

			if (wparam == VK_OEM_4)
			{
				_currentTimeScale -= 0.1f;
				SDK::UWorld::GetWorld()->K2_GetWorldSettings()->TimeDilation = _currentTimeScale;
				LOG(INFO) << "Time scale is now " << _currentTimeScale;
			}

			if (wparam == VK_OEM_6)
			{
				_currentTimeScale += 0.1f;
				SDK::UWorld::GetWorld()->K2_GetWorldSettings()->TimeDilation = _currentTimeScale;
				LOG(INFO) << "Time scale is now " << _currentTimeScale;
			}

			if (wparam == VK_OEM_2)
			{
				_currentTimeScale = 1.0f;
				SDK::UWorld::GetWorld()->K2_GetWorldSettings()->TimeDilation = _currentTimeScale;
				LOG(INFO) << "Time reset to 1.0";
			}

			if (wparam == VK_OEM_3)
			{
				_pauseFrame = 1;
				SDK::UWorld::GetWorld()->K2_GetWorldSettings()->TimeDilation = _currentTimeScale;
			}

			if (wparam == VK_OEM_102)
			{
				_pauseFrame = -1;
				SDK::UWorld::GetWorld()->K2_GetWorldSettings()->TimeDilation = _currentTimeScale;
			}
		}
	}
}