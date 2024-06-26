#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Stairs_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Stairs_BP.Stairs_BP_C
// 0x00D8 (0x0370 - 0x0298)
class AStairs_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        StairsSound;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_5_NewTrack_0_7B6223F14C1880D9676DB58CDB8E428B; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_5__Direction_7B6223F14C1880D9676DB58CDB8E428B; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E0A[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_5;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_4_NewTrack_0_289F049049CC53542FA2088C05089FD2; // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_4__Direction_289F049049CC53542FA2088C05089FD2; // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E0B[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_4;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_3_NewTrack_0_EE0A2D6A46CE2098D8A2758445702B40; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_3__Direction_EE0A2D6A46CE2098D8A2758445702B40; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E0C[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_3;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_NewTrack_0_64E50BA34761ED038EC3EE9A2C44DCBF; // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_64E50BA34761ED038EC3EE9A2C44DCBF; // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E0D[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_NewTrack_0_E6C0685B4A5584360298F9BE92ABE92E; // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_E6C0685B4A5584360298F9BE92ABE92E; // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E0E[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_429C5E1F4437819DB5BEFA800839F763; // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_429C5E1F4437819DB5BEFA800839F763; // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E0F[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberStairs;                                      // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E10[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Spacing;                                           // 0x0320(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Time;                                              // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           StairsComponents;                                  // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         StairIndex;                                        // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E11[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SizeY;                                             // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Size;                                              // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AAmbientSound*                          AmbientMusic;                                      // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Stairs_BP(int32 EntryPoint);
	void HideStairs();
	void IsActivated(bool* Activated);
	void Pushed();
	void ReceiveBeginPlay();
	void Released();
	void ResetDoOnce();
	void ShowStairs();
	void ShowStairsAll();
	void StairLoop();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Stairs_BP_C">();
	}
	static class AStairs_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStairs_BP_C>();
	}
};
static_assert(alignof(AStairs_BP_C) == 0x000008, "Wrong alignment on AStairs_BP_C");
static_assert(sizeof(AStairs_BP_C) == 0x000370, "Wrong size on AStairs_BP_C");
static_assert(offsetof(AStairs_BP_C, UberGraphFrame) == 0x000298, "Member 'AStairs_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, C_TickOptimizer) == 0x0002A0, "Member 'AStairs_BP_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, StairsSound) == 0x0002A8, "Member 'AStairs_BP_C::StairsSound' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'AStairs_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_5_NewTrack_0_7B6223F14C1880D9676DB58CDB8E428B) == 0x0002B8, "Member 'AStairs_BP_C::Timeline_5_NewTrack_0_7B6223F14C1880D9676DB58CDB8E428B' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_5__Direction_7B6223F14C1880D9676DB58CDB8E428B) == 0x0002BC, "Member 'AStairs_BP_C::Timeline_5__Direction_7B6223F14C1880D9676DB58CDB8E428B' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_5) == 0x0002C0, "Member 'AStairs_BP_C::Timeline_5' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_4_NewTrack_0_289F049049CC53542FA2088C05089FD2) == 0x0002C8, "Member 'AStairs_BP_C::Timeline_4_NewTrack_0_289F049049CC53542FA2088C05089FD2' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_4__Direction_289F049049CC53542FA2088C05089FD2) == 0x0002CC, "Member 'AStairs_BP_C::Timeline_4__Direction_289F049049CC53542FA2088C05089FD2' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_4) == 0x0002D0, "Member 'AStairs_BP_C::Timeline_4' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_3_NewTrack_0_EE0A2D6A46CE2098D8A2758445702B40) == 0x0002D8, "Member 'AStairs_BP_C::Timeline_3_NewTrack_0_EE0A2D6A46CE2098D8A2758445702B40' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_3__Direction_EE0A2D6A46CE2098D8A2758445702B40) == 0x0002DC, "Member 'AStairs_BP_C::Timeline_3__Direction_EE0A2D6A46CE2098D8A2758445702B40' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_3) == 0x0002E0, "Member 'AStairs_BP_C::Timeline_3' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_2_NewTrack_0_64E50BA34761ED038EC3EE9A2C44DCBF) == 0x0002E8, "Member 'AStairs_BP_C::Timeline_2_NewTrack_0_64E50BA34761ED038EC3EE9A2C44DCBF' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_2__Direction_64E50BA34761ED038EC3EE9A2C44DCBF) == 0x0002EC, "Member 'AStairs_BP_C::Timeline_2__Direction_64E50BA34761ED038EC3EE9A2C44DCBF' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_2) == 0x0002F0, "Member 'AStairs_BP_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_1_NewTrack_0_E6C0685B4A5584360298F9BE92ABE92E) == 0x0002F8, "Member 'AStairs_BP_C::Timeline_1_NewTrack_0_E6C0685B4A5584360298F9BE92ABE92E' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_1__Direction_E6C0685B4A5584360298F9BE92ABE92E) == 0x0002FC, "Member 'AStairs_BP_C::Timeline_1__Direction_E6C0685B4A5584360298F9BE92ABE92E' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_1) == 0x000300, "Member 'AStairs_BP_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_0_NewTrack_0_429C5E1F4437819DB5BEFA800839F763) == 0x000308, "Member 'AStairs_BP_C::Timeline_0_NewTrack_0_429C5E1F4437819DB5BEFA800839F763' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_0__Direction_429C5E1F4437819DB5BEFA800839F763) == 0x00030C, "Member 'AStairs_BP_C::Timeline_0__Direction_429C5E1F4437819DB5BEFA800839F763' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Timeline_0) == 0x000310, "Member 'AStairs_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, NumberStairs) == 0x000318, "Member 'AStairs_BP_C::NumberStairs' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Spacing) == 0x000320, "Member 'AStairs_BP_C::Spacing' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Time) == 0x000338, "Member 'AStairs_BP_C::Time' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, StairsComponents) == 0x000340, "Member 'AStairs_BP_C::StairsComponents' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, StairIndex) == 0x000350, "Member 'AStairs_BP_C::StairIndex' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, SizeY) == 0x000358, "Member 'AStairs_BP_C::SizeY' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, Size) == 0x000360, "Member 'AStairs_BP_C::Size' has a wrong offset!");
static_assert(offsetof(AStairs_BP_C, AmbientMusic) == 0x000368, "Member 'AStairs_BP_C::AmbientMusic' has a wrong offset!");

}

