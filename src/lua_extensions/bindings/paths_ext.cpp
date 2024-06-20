#pragma once
#include "paths_ext.hpp"

#include "lua/lua_manager.hpp"

namespace lua::paths_ext
{
	static std::filesystem::path get_game_executable_folder()
	{
		char module_file_path[MAX_PATH];
		const auto path_size              = GetModuleFileNameA(nullptr, module_file_path, MAX_PATH);
		std::filesystem::path root_folder = std::string(module_file_path, path_size);
		root_folder                       = root_folder.parent_path();

		return root_folder;
	}

	void bind(sol::table& state)
	{
		auto ns = state["paths"].get_or_create<sol::table>();
	}
} // namespace lua::paths_ext
