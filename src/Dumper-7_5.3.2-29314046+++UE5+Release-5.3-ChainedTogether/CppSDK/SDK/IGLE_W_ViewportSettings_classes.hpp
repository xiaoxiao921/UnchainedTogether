#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_ViewportSettings

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "IGLE_E_GizmoMode_structs.hpp"
#include "IGLE_E_GizmoSpace_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IGLE_W_ViewportSettings.IGLE_W_ViewportSettings_C
// 0x0068 (0x0328 - 0x02C0)
class UIGLE_W_ViewportSettings_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             CameraSpeed;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RotateImage;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                RotationButton;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIGLE_Example_ComboBox_C*               RotationSnapComboBox;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ScaleButton;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ScaleImage;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIGLE_Example_ComboBox_C*               ScaleSnapComboBox;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIGLE_Example_Button_Opaque_C*          SpaceButton;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SpaceText;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                TranslateButton;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TranslateImage;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIGLE_Example_ComboBox_C*               TranslationSnapComboBox;                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__IGLE_W_ViewportSettings_RotationButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IGLE_W_ViewportSettings_ScaleButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__IGLE_W_ViewportSettings_TranslateButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__RotationSnapComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__ScaleSnapComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__SpaceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TranslationSnapComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Construct();
	void ExecuteUbergraph_IGLE_W_ViewportSettings(int32 EntryPoint);
	void HighlightGizmoMode(int32 Index_0);
	void SwitchGizmoMode(EIGLE_E_GizmoMode Mode);
	void UpdateValues();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_W_ViewportSettings_C">();
	}
	static class UIGLE_W_ViewportSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_W_ViewportSettings_C>();
	}
};
static_assert(alignof(UIGLE_W_ViewportSettings_C) == 0x000008, "Wrong alignment on UIGLE_W_ViewportSettings_C");
static_assert(sizeof(UIGLE_W_ViewportSettings_C) == 0x000328, "Wrong size on UIGLE_W_ViewportSettings_C");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, UberGraphFrame) == 0x0002C0, "Member 'UIGLE_W_ViewportSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, CameraSpeed) == 0x0002C8, "Member 'UIGLE_W_ViewportSettings_C::CameraSpeed' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, RotateImage) == 0x0002D0, "Member 'UIGLE_W_ViewportSettings_C::RotateImage' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, RotationButton) == 0x0002D8, "Member 'UIGLE_W_ViewportSettings_C::RotationButton' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, RotationSnapComboBox) == 0x0002E0, "Member 'UIGLE_W_ViewportSettings_C::RotationSnapComboBox' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, ScaleButton) == 0x0002E8, "Member 'UIGLE_W_ViewportSettings_C::ScaleButton' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, ScaleImage) == 0x0002F0, "Member 'UIGLE_W_ViewportSettings_C::ScaleImage' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, ScaleSnapComboBox) == 0x0002F8, "Member 'UIGLE_W_ViewportSettings_C::ScaleSnapComboBox' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, SpaceButton) == 0x000300, "Member 'UIGLE_W_ViewportSettings_C::SpaceButton' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, SpaceText) == 0x000308, "Member 'UIGLE_W_ViewportSettings_C::SpaceText' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, TranslateButton) == 0x000310, "Member 'UIGLE_W_ViewportSettings_C::TranslateButton' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, TranslateImage) == 0x000318, "Member 'UIGLE_W_ViewportSettings_C::TranslateImage' has a wrong offset!");
static_assert(offsetof(UIGLE_W_ViewportSettings_C, TranslationSnapComboBox) == 0x000320, "Member 'UIGLE_W_ViewportSettings_C::TranslationSnapComboBox' has a wrong offset!");

}

