#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_FloatProperty

#include "Basic.hpp"

#include "IGLE_PropertyValueObject_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IGLE_FloatProperty.IGLE_FloatProperty_C
// 0x0018 (0x0048 - 0x0030)
class UIGLE_FloatProperty_C final : public UIGLE_PropertyValueObject_Base_C
{
public:
	double                                        Float;                                             // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 NewVar;                                            // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_FloatProperty_C">();
	}
	static class UIGLE_FloatProperty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_FloatProperty_C>();
	}
};
static_assert(alignof(UIGLE_FloatProperty_C) == 0x000008, "Wrong alignment on UIGLE_FloatProperty_C");
static_assert(sizeof(UIGLE_FloatProperty_C) == 0x000048, "Wrong size on UIGLE_FloatProperty_C");
static_assert(offsetof(UIGLE_FloatProperty_C, Float) == 0x000030, "Member 'UIGLE_FloatProperty_C::Float' has a wrong offset!");
static_assert(offsetof(UIGLE_FloatProperty_C, NewVar) == 0x000038, "Member 'UIGLE_FloatProperty_C::NewVar' has a wrong offset!");

}

