#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_SavedSetting

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_SavedSetting.S_SavedSetting
// 0x0020 (0x0020 - 0x0000)
struct FS_SavedSetting final
{
public:
	class FString                                 Identifier_2_7617B8CB46978CE31E6D118AF396C34A;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Value_4_441F27CA417E9E2A7D4D9F8785121DEE;          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_SavedSetting) == 0x000008, "Wrong alignment on FS_SavedSetting");
static_assert(sizeof(FS_SavedSetting) == 0x000020, "Wrong size on FS_SavedSetting");
static_assert(offsetof(FS_SavedSetting, Identifier_2_7617B8CB46978CE31E6D118AF396C34A) == 0x000000, "Member 'FS_SavedSetting::Identifier_2_7617B8CB46978CE31E6D118AF396C34A' has a wrong offset!");
static_assert(offsetof(FS_SavedSetting, Value_4_441F27CA417E9E2A7D4D9F8785121DEE) == 0x000010, "Member 'FS_SavedSetting::Value_4_441F27CA417E9E2A7D4D9F8785121DEE' has a wrong offset!");

}

