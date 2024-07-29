#pragma once

#include <string>
#include <memory/gm_address.hpp>
#include "Dumper-7_5.3.2-29314046+++UE5+Release-5.3-ChainedTogether/CppSDK/SDK.hpp"

namespace big
{
	class Input
	{
	public:
		static SDK::FKey StringToKey(const std::wstring &key);
		static bool IsKeyDown(SDK::APlayerController* playerController, const std::wstring &key);
		static void PressKey(SDK::APlayerController* playerController, const std::wstring &key);
		static void ReleaseKey(SDK::APlayerController* playerController, const std::wstring &key);
	};
}
