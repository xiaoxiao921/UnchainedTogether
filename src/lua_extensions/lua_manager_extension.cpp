#include "lua_manager_extension.hpp"

#include "bindings/gui_ext.hpp"
#include "bindings/paths_ext.hpp"
#include "lua_module_ext.hpp"

namespace big::lua_manager_extension
{
	void init_lua_state(sol::state_view& state)
	{
		// clang-format off
		state.open_libraries(
			sol::lib::base,
			sol::lib::package,
			sol::lib::coroutine,
		    sol::lib::string,
		    sol::lib::os,
		    sol::lib::math,
			sol::lib::table,
			sol::lib::debug,
			sol::lib::bit32,
			sol::lib::io,
			sol::lib::utf8
		);
		// clang-format on
	}

	void init_lua_api(sol::state_view& state, sol::table& lua_ext)
	{
		// Let's keep that list sorted the same as the solution file explorer
		lua::gui_ext::bind(lua_ext);
		lua::paths_ext::bind(lua_ext);
	}
} // namespace big::lua_manager_extension
