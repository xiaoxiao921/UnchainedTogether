#pragma once

#include "lua/lua_module.hpp"

namespace big
{
	struct lua_module_data_ext
	{
	};

	class lua_module_ext : public lua_module
	{
	public:
		lua_module_data_ext m_data_ext;

		lua_module_ext(const module_info& module_info, sol::environment& env) :
		    lua_module(module_info, env)
		{
		}

		lua_module_ext(const module_info& module_info, sol::state_view& state) :
		    lua_module(module_info, state)
		{
		}

		inline void cleanup() override
		{
			lua_module::cleanup();

			m_data_ext = {};
		}
	};
} // namespace big
