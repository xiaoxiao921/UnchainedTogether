#include "Input.hpp"

namespace big
{
	static auto InputKey = gmAddress::scan("4C 8B DC 49 89 5B 08 49 89 6B 10 49 89 73 18 49 89 7B 20 41 56 48 81 "
										   "EC ? ? ? ? 48 8B 05 ? ? ? ? 41 8B E8 49 89 43 A0 4C 8B F2")
							   .as_func<bool(SDK::APlayerController*, SDK::FKey, SDK::EInputEvent, float, bool)>();

	SDK::FKey Input::StringToKey(const std::wstring& keyName)
	{
		SDK::FKey key = SDK::FKey();
		key.KeyName = SDK::UKismetStringLibrary::Conv_StringToName(SDK::FString(keyName.c_str()));
		return key;
	}

	bool Input::IsKeyDown(SDK::APlayerController* playerController, const std::wstring& key)
	{
		return playerController->IsInputKeyDown(StringToKey(key));
	}

	void Input::PressKey(SDK::APlayerController* playerController, const std::wstring& key)
	{
		InputKey(playerController, StringToKey(key), SDK::EInputEvent::IE_Pressed, 1.f, false);
	}

	void Input::ReleaseKey(SDK::APlayerController* playerController, const std::wstring& key)
	{
		InputKey(playerController, StringToKey(key), SDK::EInputEvent::IE_Released, 1.f, false);
	}
}