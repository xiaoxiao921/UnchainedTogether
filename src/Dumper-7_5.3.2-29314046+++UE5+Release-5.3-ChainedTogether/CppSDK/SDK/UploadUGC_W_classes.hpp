#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UploadUGC_W

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SteamCorePro_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UploadUGC_W.UploadUGC_W_C
// 0x0128 (0x03E8 - 0x02C0)
class UUploadUGC_W_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ButtonLeft_Image;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonMiddle_Image;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonRight_Image;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        ComboBoxString_120;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       ItemDescription_EditableTextBox;                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       ItemName_EditableTextBox;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               MyLevels_WrapBox;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       PreviewPath_EditableTextBox;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PublishLevel_Button;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PublishLevel_Text;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PublishLevelBorder_HB;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       Tags_EditableTextBox;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSteamUGCDetails                       Details;                                           // 0x0328(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FUGCUpdateHandle                       CurrentItemHandle;                                 // 0x03D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FString                                 ContentPath;                                       // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UploadUGC_W_PublishLevel_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UploadUGC_W(int32 EntryPoint);
	void OnCallback_4739FE9A4F2B1D96FC80EE9801D6B6DB(const struct FSubmitItemUpdateResult& Data, bool bWasSuccessful);
	void OnCallback_6323929A47D867C7CBDC2E8AC4BD04EF(const struct FCreateItemResult& Data, bool bWasSuccessful);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UploadUGC_W_C">();
	}
	static class UUploadUGC_W_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUploadUGC_W_C>();
	}
};
static_assert(alignof(UUploadUGC_W_C) == 0x000008, "Wrong alignment on UUploadUGC_W_C");
static_assert(sizeof(UUploadUGC_W_C) == 0x0003E8, "Wrong size on UUploadUGC_W_C");
static_assert(offsetof(UUploadUGC_W_C, UberGraphFrame) == 0x0002C0, "Member 'UUploadUGC_W_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, ButtonLeft_Image) == 0x0002C8, "Member 'UUploadUGC_W_C::ButtonLeft_Image' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, ButtonMiddle_Image) == 0x0002D0, "Member 'UUploadUGC_W_C::ButtonMiddle_Image' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, ButtonRight_Image) == 0x0002D8, "Member 'UUploadUGC_W_C::ButtonRight_Image' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, ComboBoxString_120) == 0x0002E0, "Member 'UUploadUGC_W_C::ComboBoxString_120' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, ItemDescription_EditableTextBox) == 0x0002E8, "Member 'UUploadUGC_W_C::ItemDescription_EditableTextBox' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, ItemName_EditableTextBox) == 0x0002F0, "Member 'UUploadUGC_W_C::ItemName_EditableTextBox' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, MyLevels_WrapBox) == 0x0002F8, "Member 'UUploadUGC_W_C::MyLevels_WrapBox' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, PreviewPath_EditableTextBox) == 0x000300, "Member 'UUploadUGC_W_C::PreviewPath_EditableTextBox' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, PublishLevel_Button) == 0x000308, "Member 'UUploadUGC_W_C::PublishLevel_Button' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, PublishLevel_Text) == 0x000310, "Member 'UUploadUGC_W_C::PublishLevel_Text' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, PublishLevelBorder_HB) == 0x000318, "Member 'UUploadUGC_W_C::PublishLevelBorder_HB' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, Tags_EditableTextBox) == 0x000320, "Member 'UUploadUGC_W_C::Tags_EditableTextBox' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, Details) == 0x000328, "Member 'UUploadUGC_W_C::Details' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, CurrentItemHandle) == 0x0003D0, "Member 'UUploadUGC_W_C::CurrentItemHandle' has a wrong offset!");
static_assert(offsetof(UUploadUGC_W_C, ContentPath) == 0x0003D8, "Member 'UUploadUGC_W_C::ContentPath' has a wrong offset!");

}
