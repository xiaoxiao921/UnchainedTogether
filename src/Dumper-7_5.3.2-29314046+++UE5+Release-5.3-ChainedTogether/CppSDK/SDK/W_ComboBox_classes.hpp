#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ComboBox

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ComboBox.W_ComboBox_C
// 0x0070 (0x0330 - 0x02C0)
class UW_ComboBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ClickAnim;                                         // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UComboBoxString*                        ComboBoxString_75;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_122;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x02E0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                 SelectedOption;                                    // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UW_ComboChoice_C*>               Choices;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnComboSettingChange;                              // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          AddChoicesOnConstruct;                             // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_33E6[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFont*                                  Font;                                              // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddOptionsOnce(TArray<class FString>& Array);
	void AssignPressEvent(class UW_ComboChoice_C* ComboChoice);
	void BndEvt__W_ComboBox_ComboBoxString_75_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature();
	void Construct();
	class FString CropMicrophoneName(const class FString& SourceString);
	void ExecuteUbergraph_W_ComboBox(int32 EntryPoint);
	void InitColor();
	void LoadDebugSetting(bool Condition);
	void LoadPushToTalkSetting(bool UsePTT);
	void OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType);
	class UWidget* OnGenerateWidget_0(const class FString& Item);
	void PreConstruct(bool IsDesignTime);
	void Press_Event_0(const class FString& Item);
	void Refresh_Audio_Devices(TArray<class FString>& Array, const class FString& ID);
	void RefreshComboBoxContent(const struct FS_ComboBoxContent& Params_0, const class FString& Identifier);
	void SetSelectedOption(const class FString& Param_SelectedOption);
	void TryAddChoices();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ComboBox_C">();
	}
	static class UW_ComboBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ComboBox_C>();
	}
};
static_assert(alignof(UW_ComboBox_C) == 0x000008, "Wrong alignment on UW_ComboBox_C");
static_assert(sizeof(UW_ComboBox_C) == 0x000330, "Wrong size on UW_ComboBox_C");
static_assert(offsetof(UW_ComboBox_C, UberGraphFrame) == 0x0002C0, "Member 'UW_ComboBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ComboBox_C, ClickAnim) == 0x0002C8, "Member 'UW_ComboBox_C::ClickAnim' has a wrong offset!");
static_assert(offsetof(UW_ComboBox_C, ComboBoxString_75) == 0x0002D0, "Member 'UW_ComboBox_C::ComboBoxString_75' has a wrong offset!");
static_assert(offsetof(UW_ComboBox_C, Image_122) == 0x0002D8, "Member 'UW_ComboBox_C::Image_122' has a wrong offset!");
static_assert(offsetof(UW_ComboBox_C, Options) == 0x0002E0, "Member 'UW_ComboBox_C::Options' has a wrong offset!");
static_assert(offsetof(UW_ComboBox_C, SelectedOption) == 0x0002F0, "Member 'UW_ComboBox_C::SelectedOption' has a wrong offset!");
static_assert(offsetof(UW_ComboBox_C, Choices) == 0x000300, "Member 'UW_ComboBox_C::Choices' has a wrong offset!");
static_assert(offsetof(UW_ComboBox_C, OnComboSettingChange) == 0x000310, "Member 'UW_ComboBox_C::OnComboSettingChange' has a wrong offset!");
static_assert(offsetof(UW_ComboBox_C, AddChoicesOnConstruct) == 0x000320, "Member 'UW_ComboBox_C::AddChoicesOnConstruct' has a wrong offset!");
static_assert(offsetof(UW_ComboBox_C, Font) == 0x000328, "Member 'UW_ComboBox_C::Font' has a wrong offset!");

}

