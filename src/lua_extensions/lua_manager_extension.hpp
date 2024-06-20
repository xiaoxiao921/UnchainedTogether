#pragma once

#include <lua/lua_manager.hpp>

namespace big::lua_manager_extension
{
	void init_lua_state(sol::state_view& state);
	void init_lua_api(sol::state_view& state, sol::table& lua_ext);
} // namespace big::lua_manager_extension
