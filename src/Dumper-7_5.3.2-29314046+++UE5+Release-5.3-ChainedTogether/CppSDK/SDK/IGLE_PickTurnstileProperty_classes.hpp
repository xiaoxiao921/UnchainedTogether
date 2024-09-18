#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_PickTurnstileProperty

#include "Basic.hpp"

#include "IGLE_PropertyValueObject_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IGLE_PickTurnstileProperty.IGLE_PickTurnstileProperty_C
// 0x0008 (0x0038 - 0x0030)
class UIGLE_PickTurnstileProperty_C final : public UIGLE_PropertyValueObject_Base_C
{
public:
	int64                                         PlacableID;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_PickTurnstileProperty_C">();
	}
	static class UIGLE_PickTurnstileProperty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_PickTurnstileProperty_C>();
	}
};
static_assert(alignof(UIGLE_PickTurnstileProperty_C) == 0x000008, "Wrong alignment on UIGLE_PickTurnstileProperty_C");
static_assert(sizeof(UIGLE_PickTurnstileProperty_C) == 0x000038, "Wrong size on UIGLE_PickTurnstileProperty_C");
static_assert(offsetof(UIGLE_PickTurnstileProperty_C, PlacableID) == 0x000030, "Member 'UIGLE_PickTurnstileProperty_C::PlacableID' has a wrong offset!");

}

