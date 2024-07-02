#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LeaderboardSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LeaderboardSwitcher.W_LeaderboardSwitcher_C
// 0x00A0 (0x0360 - 0x02C0)
class UW_LeaderboardSwitcher_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                OnePlayerButton;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                TwoPlayersButton;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ThreePlayersButton;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                FourPlayersButton;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BackButton_1;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_1;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_2;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_4;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_10;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_144;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Speedrun_Button;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Leaderboard_C*                       W_Leaderboard;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Leaderboard_C*                       W_Leaderboard_1;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Leaderboard_C*                       W_Leaderboard_2;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Leaderboard_C*                       W_Leaderboard_3;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SpeedrunCom_C*                       W_SpeedrunCom;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__W_LeaderboardSwitcher_1PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_LeaderboardSwitcher_2PlayersButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_LeaderboardSwitcher_3PlayersButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_LeaderboardSwitcher_4PlayersButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_LeaderboardSwitcher_BackButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_LeaderboardSwitcher_Speedrun_Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void DeselectAllTabs();
	void ExecuteUbergraph_W_LeaderboardSwitcher(int32 EntryPoint);
	void SelectTab(class UBorder* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LeaderboardSwitcher_C">();
	}
	static class UW_LeaderboardSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LeaderboardSwitcher_C>();
	}
};
static_assert(alignof(UW_LeaderboardSwitcher_C) == 0x000008, "Wrong alignment on UW_LeaderboardSwitcher_C");
static_assert(sizeof(UW_LeaderboardSwitcher_C) == 0x000360, "Wrong size on UW_LeaderboardSwitcher_C");
static_assert(offsetof(UW_LeaderboardSwitcher_C, UberGraphFrame) == 0x0002C0, "Member 'UW_LeaderboardSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, NewAnimation) == 0x0002C8, "Member 'UW_LeaderboardSwitcher_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, OnePlayerButton) == 0x0002D0, "Member 'UW_LeaderboardSwitcher_C::OnePlayerButton' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, TwoPlayersButton) == 0x0002D8, "Member 'UW_LeaderboardSwitcher_C::TwoPlayersButton' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, ThreePlayersButton) == 0x0002E0, "Member 'UW_LeaderboardSwitcher_C::ThreePlayersButton' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, FourPlayersButton) == 0x0002E8, "Member 'UW_LeaderboardSwitcher_C::FourPlayersButton' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, BackButton_1) == 0x0002F0, "Member 'UW_LeaderboardSwitcher_C::BackButton_1' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, Border) == 0x0002F8, "Member 'UW_LeaderboardSwitcher_C::Border' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, Border_1) == 0x000300, "Member 'UW_LeaderboardSwitcher_C::Border_1' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, Border_2) == 0x000308, "Member 'UW_LeaderboardSwitcher_C::Border_2' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, Border_4) == 0x000310, "Member 'UW_LeaderboardSwitcher_C::Border_4' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, Border_10) == 0x000318, "Member 'UW_LeaderboardSwitcher_C::Border_10' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, Border_144) == 0x000320, "Member 'UW_LeaderboardSwitcher_C::Border_144' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, Speedrun_Button) == 0x000328, "Member 'UW_LeaderboardSwitcher_C::Speedrun_Button' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, W_Leaderboard) == 0x000330, "Member 'UW_LeaderboardSwitcher_C::W_Leaderboard' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, W_Leaderboard_1) == 0x000338, "Member 'UW_LeaderboardSwitcher_C::W_Leaderboard_1' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, W_Leaderboard_2) == 0x000340, "Member 'UW_LeaderboardSwitcher_C::W_Leaderboard_2' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, W_Leaderboard_3) == 0x000348, "Member 'UW_LeaderboardSwitcher_C::W_Leaderboard_3' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, W_SpeedrunCom) == 0x000350, "Member 'UW_LeaderboardSwitcher_C::W_SpeedrunCom' has a wrong offset!");
static_assert(offsetof(UW_LeaderboardSwitcher_C, WidgetSwitcher_0) == 0x000358, "Member 'UW_LeaderboardSwitcher_C::WidgetSwitcher_0' has a wrong offset!");

}

