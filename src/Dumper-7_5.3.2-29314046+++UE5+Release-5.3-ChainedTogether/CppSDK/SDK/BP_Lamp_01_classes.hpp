#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lamp_01

#include "Basic.hpp"

#include "BP_Lamp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Lamp_01.BP_Lamp_01_C
// 0x0000 (0x02F8 - 0x02F8)
class ABP_Lamp_01_C final : public ABP_Lamp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Lamp_01_C">();
	}
	static class ABP_Lamp_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lamp_01_C>();
	}
};
static_assert(alignof(ABP_Lamp_01_C) == 0x000008, "Wrong alignment on ABP_Lamp_01_C");
static_assert(sizeof(ABP_Lamp_01_C) == 0x0002F8, "Wrong size on ABP_Lamp_01_C");

}

