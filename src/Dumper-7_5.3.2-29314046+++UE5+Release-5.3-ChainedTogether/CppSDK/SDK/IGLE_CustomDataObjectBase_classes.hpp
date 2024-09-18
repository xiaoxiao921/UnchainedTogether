#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_CustomDataObjectBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IGLE_CustomDataObjectBase.IGLE_CustomDataObjectBase_C
// 0x0068 (0x0090 - 0x0028)
class UIGLE_CustomDataObjectBase_C final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             EditorPawnTransform;                               // 0x0030(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_CustomDataObjectBase_C">();
	}
	static class UIGLE_CustomDataObjectBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_CustomDataObjectBase_C>();
	}
};
static_assert(alignof(UIGLE_CustomDataObjectBase_C) == 0x000010, "Wrong alignment on UIGLE_CustomDataObjectBase_C");
static_assert(sizeof(UIGLE_CustomDataObjectBase_C) == 0x000090, "Wrong size on UIGLE_CustomDataObjectBase_C");
static_assert(offsetof(UIGLE_CustomDataObjectBase_C, EditorPawnTransform) == 0x000030, "Member 'UIGLE_CustomDataObjectBase_C::EditorPawnTransform' has a wrong offset!");

}

