#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InOutPillar_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass InOutPillar_BP.InOutPillar_BP_C
// 0x0068 (0x0300 - 0x0298)
class AInOutPillar_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Placer;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FrameA_05;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_993ABFDB44C89DB17A5E649E3A207950; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_993ABFDB44C89DB17A5E649E3A207950; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E34[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitLocation;                                      // 0x02C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          A;                                                 // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          MovingIn;                                          // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InOutPillar_BP(int32 EntryPoint);
	void MoveIn();
	void MoveOut();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InOutPillar_BP_C">();
	}
	static class AInOutPillar_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInOutPillar_BP_C>();
	}
};
static_assert(alignof(AInOutPillar_BP_C) == 0x000008, "Wrong alignment on AInOutPillar_BP_C");
static_assert(sizeof(AInOutPillar_BP_C) == 0x000300, "Wrong size on AInOutPillar_BP_C");
static_assert(offsetof(AInOutPillar_BP_C, UberGraphFrame) == 0x000298, "Member 'AInOutPillar_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, Placer) == 0x0002A0, "Member 'AInOutPillar_BP_C::Placer' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, SM_FrameA_05) == 0x0002A8, "Member 'AInOutPillar_BP_C::SM_FrameA_05' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'AInOutPillar_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, Timeline_NewTrack_0_993ABFDB44C89DB17A5E649E3A207950) == 0x0002B8, "Member 'AInOutPillar_BP_C::Timeline_NewTrack_0_993ABFDB44C89DB17A5E649E3A207950' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, Timeline__Direction_993ABFDB44C89DB17A5E649E3A207950) == 0x0002BC, "Member 'AInOutPillar_BP_C::Timeline__Direction_993ABFDB44C89DB17A5E649E3A207950' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, Timeline) == 0x0002C0, "Member 'AInOutPillar_BP_C::Timeline' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, InitLocation) == 0x0002C8, "Member 'AInOutPillar_BP_C::InitLocation' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, TargetLocation) == 0x0002E0, "Member 'AInOutPillar_BP_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, A) == 0x0002F8, "Member 'AInOutPillar_BP_C::A' has a wrong offset!");
static_assert(offsetof(AInOutPillar_BP_C, MovingIn) == 0x0002F9, "Member 'AInOutPillar_BP_C::MovingIn' has a wrong offset!");

}

