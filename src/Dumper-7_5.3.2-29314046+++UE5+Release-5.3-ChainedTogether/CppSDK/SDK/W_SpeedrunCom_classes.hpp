#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SpeedrunCom

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Speedrun_IDAndName_structs.hpp"
#include "Speedrun_Variable_S_structs.hpp"
#include "Speedrun_Category_S_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SpeedrunCom.W_SpeedrunCom_C
// 0x0200 (0x04C0 - 0x02C0)
class UW_SpeedrunCom_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                OnePlayer_Button;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                TwoPlayer_Button;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ThreePlayer_Button;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                FourPlayer_Button;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_1;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_2;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_3;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_69;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Category_HB;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      CircularThrobber_127;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Runs_VerticalBox;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_1;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Variables_HB;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_40;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ComboBox_Leaderboard_C*              W_ComboBox_Leaderboard;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, struct FSpeedrun_Variable_S> Variables;                                         // 0x0358(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, struct FSpeedrun_Category_S> Categories;                                        // 0x03A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, struct FSpeedrun_IDAndName> Levels;                                            // 0x03F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             Get_Variables_Success;                             // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Get_Categories_Success;                            // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Get_Levels_Success;                                // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 SelectedCategoryID;                                // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 SelectedLevelID;                                   // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 VariableSearchSettings;                            // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          SearchingFullGameCategories;                       // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9[0x7];                                      // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UVaRestJsonValue*>               Runs;                                              // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__W_SpeedrunCom_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_SpeedrunCom_W_ComboBox_Leaderboard_K2Node_ComponentBoundEvent_2_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType, const class FString& ID);
	void Construct();
	class FString ConstructSearchURL();
	void CustomEvent(const class FString& NewSelection, const class FString& ID);
	void CustomEvent_0(const class FString& DefaultID);
	void CustomEvent_1(const class FString& NewSelection, const class FString& ID);
	void CustomEvent_2(const class FString& DefaultID);
	void Delimiter(class FString* DelimiterS);
	void ExecuteUbergraph_W_SpeedrunCom(int32 EntryPoint);
	void FindCategoryID_ByName(const class FString& CategoryName, const class FString& Type, class FString* CategoryID);
	void FormatURL(const class FString& URL, class FString* CompatibleURL);
	void Generate_Levels();
	void Get_Categories_Success__DelegateSignature(bool Success);
	void Get_Choices_And_Values(class UVaRestJsonObject* Self2, TArray<class FString>* IDs, TArray<class FString>* Names, class FString* DefaultID);
	void Get_Levels_Success__DelegateSignature(bool Success);
	void Get_Variables_Success__DelegateSignature(bool Success);
	void Level_Callback(class UVaRestRequestJSON* Request);
	void MakeVariablesSearchString(class FString* String);
	void OnCategoryChange(const class FString& NewSelection, const class FString& ID);
	void OnLevelsCallback(class UVaRestRequestJSON* Request);
	void OnRunsCallback(class UVaRestRequestJSON* Request);
	void OnVariablesCallback(class UVaRestRequestJSON* Request);
	void RefreshFromLevel(const class FString& Level_ID);
	void RefreshResults();
	void UpdateVariablesFromCategory(const class FString& CategoryID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SpeedrunCom_C">();
	}
	static class UW_SpeedrunCom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SpeedrunCom_C>();
	}
};
static_assert(alignof(UW_SpeedrunCom_C) == 0x000008, "Wrong alignment on UW_SpeedrunCom_C");
static_assert(sizeof(UW_SpeedrunCom_C) == 0x0004C0, "Wrong size on UW_SpeedrunCom_C");
static_assert(offsetof(UW_SpeedrunCom_C, UberGraphFrame) == 0x0002C0, "Member 'UW_SpeedrunCom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, OnePlayer_Button) == 0x0002C8, "Member 'UW_SpeedrunCom_C::OnePlayer_Button' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, TwoPlayer_Button) == 0x0002D0, "Member 'UW_SpeedrunCom_C::TwoPlayer_Button' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, ThreePlayer_Button) == 0x0002D8, "Member 'UW_SpeedrunCom_C::ThreePlayer_Button' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, FourPlayer_Button) == 0x0002E0, "Member 'UW_SpeedrunCom_C::FourPlayer_Button' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Border) == 0x0002E8, "Member 'UW_SpeedrunCom_C::Border' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Border_1) == 0x0002F0, "Member 'UW_SpeedrunCom_C::Border_1' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Border_2) == 0x0002F8, "Member 'UW_SpeedrunCom_C::Border_2' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Border_3) == 0x000300, "Member 'UW_SpeedrunCom_C::Border_3' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Button_69) == 0x000308, "Member 'UW_SpeedrunCom_C::Button_69' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Category_HB) == 0x000310, "Member 'UW_SpeedrunCom_C::Category_HB' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, CircularThrobber_127) == 0x000318, "Member 'UW_SpeedrunCom_C::CircularThrobber_127' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, HorizontalBox) == 0x000320, "Member 'UW_SpeedrunCom_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Runs_VerticalBox) == 0x000328, "Member 'UW_SpeedrunCom_C::Runs_VerticalBox' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, ScrollBox_0) == 0x000330, "Member 'UW_SpeedrunCom_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, ScrollBox_1) == 0x000338, "Member 'UW_SpeedrunCom_C::ScrollBox_1' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Variables_HB) == 0x000340, "Member 'UW_SpeedrunCom_C::Variables_HB' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, VerticalBox_40) == 0x000348, "Member 'UW_SpeedrunCom_C::VerticalBox_40' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, W_ComboBox_Leaderboard) == 0x000350, "Member 'UW_SpeedrunCom_C::W_ComboBox_Leaderboard' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Variables) == 0x000358, "Member 'UW_SpeedrunCom_C::Variables' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Categories) == 0x0003A8, "Member 'UW_SpeedrunCom_C::Categories' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Levels) == 0x0003F8, "Member 'UW_SpeedrunCom_C::Levels' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Get_Variables_Success) == 0x000448, "Member 'UW_SpeedrunCom_C::Get_Variables_Success' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Get_Categories_Success) == 0x000458, "Member 'UW_SpeedrunCom_C::Get_Categories_Success' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Get_Levels_Success) == 0x000468, "Member 'UW_SpeedrunCom_C::Get_Levels_Success' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, SelectedCategoryID) == 0x000478, "Member 'UW_SpeedrunCom_C::SelectedCategoryID' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, SelectedLevelID) == 0x000488, "Member 'UW_SpeedrunCom_C::SelectedLevelID' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, VariableSearchSettings) == 0x000498, "Member 'UW_SpeedrunCom_C::VariableSearchSettings' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, SearchingFullGameCategories) == 0x0004A8, "Member 'UW_SpeedrunCom_C::SearchingFullGameCategories' has a wrong offset!");
static_assert(offsetof(UW_SpeedrunCom_C, Runs) == 0x0004B0, "Member 'UW_SpeedrunCom_C::Runs' has a wrong offset!");

}

