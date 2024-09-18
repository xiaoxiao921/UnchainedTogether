#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_ColorPropertyValueWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "IGLE_W_PropertyValueWidgetBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IGLE_W_ColorPropertyValueWidget.IGLE_W_ColorPropertyValueWidget_C
// 0x0010 (0x02D8 - 0x02C8)
class UIGLE_W_ColorPropertyValueWidget_C final : public UIGLE_W_PropertyValueWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URamaColorPicker*                       RamaColorPicker_164;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__IGLE_W_StringPropertyValueWidget_RamaColorPicker_164_K2Node_ComponentBoundEvent_1_OnJoyColorChangedEvent__DelegateSignature(const struct FLinearColor& NewColor);
	void Construct();
	void ExecuteUbergraph_IGLE_W_ColorPropertyValueWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_W_ColorPropertyValueWidget_C">();
	}
	static class UIGLE_W_ColorPropertyValueWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_W_ColorPropertyValueWidget_C>();
	}
};
static_assert(alignof(UIGLE_W_ColorPropertyValueWidget_C) == 0x000008, "Wrong alignment on UIGLE_W_ColorPropertyValueWidget_C");
static_assert(sizeof(UIGLE_W_ColorPropertyValueWidget_C) == 0x0002D8, "Wrong size on UIGLE_W_ColorPropertyValueWidget_C");
static_assert(offsetof(UIGLE_W_ColorPropertyValueWidget_C, UberGraphFrame) == 0x0002C8, "Member 'UIGLE_W_ColorPropertyValueWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ColorPropertyValueWidget_C, RamaColorPicker_164) == 0x0002D0, "Member 'UIGLE_W_ColorPropertyValueWidget_C::RamaColorPicker_164' has a wrong offset!");

}

