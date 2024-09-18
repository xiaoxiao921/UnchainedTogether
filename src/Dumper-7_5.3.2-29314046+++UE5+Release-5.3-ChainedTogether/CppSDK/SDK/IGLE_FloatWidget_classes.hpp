#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_FloatWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "IGLE_W_PropertyValueWidgetBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IGLE_FloatWidget.IGLE_FloatWidget_C
// 0x0010 (0x02D8 - 0x02C8)
class UIGLE_FloatWidget_C final : public UIGLE_W_PropertyValueWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIGLE_SpinBox_C*                        IGLE_SpinBox_C_65;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__IGLE_FloatWidget_IGLE_SpinBox_C_65_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void Construct();
	void ExecuteUbergraph_IGLE_FloatWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_FloatWidget_C">();
	}
	static class UIGLE_FloatWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_FloatWidget_C>();
	}
};
static_assert(alignof(UIGLE_FloatWidget_C) == 0x000008, "Wrong alignment on UIGLE_FloatWidget_C");
static_assert(sizeof(UIGLE_FloatWidget_C) == 0x0002D8, "Wrong size on UIGLE_FloatWidget_C");
static_assert(offsetof(UIGLE_FloatWidget_C, UberGraphFrame) == 0x0002C8, "Member 'UIGLE_FloatWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIGLE_FloatWidget_C, IGLE_SpinBox_C_65) == 0x0002D0, "Member 'UIGLE_FloatWidget_C::IGLE_SpinBox_C_65' has a wrong offset!");

}
