#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_GroupProperty

#include "Basic.hpp"

#include "IGLE_PropertyValueObject_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IGLE_GroupProperty.IGLE_GroupProperty_C
// 0x0010 (0x0040 - 0x0030)
class UIGLE_GroupProperty_C final : public UIGLE_PropertyValueObject_Base_C
{
public:
	TArray<int64>                                 Group;                                             // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_GroupProperty_C">();
	}
	static class UIGLE_GroupProperty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_GroupProperty_C>();
	}
};
static_assert(alignof(UIGLE_GroupProperty_C) == 0x000008, "Wrong alignment on UIGLE_GroupProperty_C");
static_assert(sizeof(UIGLE_GroupProperty_C) == 0x000040, "Wrong size on UIGLE_GroupProperty_C");
static_assert(offsetof(UIGLE_GroupProperty_C, Group) == 0x000030, "Member 'UIGLE_GroupProperty_C::Group' has a wrong offset!");

}

