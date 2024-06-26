#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConstructionLift_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ConstructionLift_BP.ConstructionLift_BP_C
// 0x0040 (0x02D8 - 0x0298)
class AConstructionLift_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HourGlass;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_BCD2E3014A4DAAECD3A4499B8FF035A6; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_BCD2E3014A4DAAECD3A4499B8FF035A6; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB5[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        PauseDelay;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          A;                                                 // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ConstructionLift_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Repeat(bool Startb);
	void RptSrv();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConstructionLift_BP_C">();
	}
	static class AConstructionLift_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AConstructionLift_BP_C>();
	}
};
static_assert(alignof(AConstructionLift_BP_C) == 0x000008, "Wrong alignment on AConstructionLift_BP_C");
static_assert(sizeof(AConstructionLift_BP_C) == 0x0002D8, "Wrong size on AConstructionLift_BP_C");
static_assert(offsetof(AConstructionLift_BP_C, UberGraphFrame) == 0x000298, "Member 'AConstructionLift_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AConstructionLift_BP_C, C_TickOptimizer) == 0x0002A0, "Member 'AConstructionLift_BP_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(AConstructionLift_BP_C, HourGlass) == 0x0002A8, "Member 'AConstructionLift_BP_C::HourGlass' has a wrong offset!");
static_assert(offsetof(AConstructionLift_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'AConstructionLift_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AConstructionLift_BP_C, Timeline_0_NewTrack_0_BCD2E3014A4DAAECD3A4499B8FF035A6) == 0x0002B8, "Member 'AConstructionLift_BP_C::Timeline_0_NewTrack_0_BCD2E3014A4DAAECD3A4499B8FF035A6' has a wrong offset!");
static_assert(offsetof(AConstructionLift_BP_C, Timeline_0__Direction_BCD2E3014A4DAAECD3A4499B8FF035A6) == 0x0002BC, "Member 'AConstructionLift_BP_C::Timeline_0__Direction_BCD2E3014A4DAAECD3A4499B8FF035A6' has a wrong offset!");
static_assert(offsetof(AConstructionLift_BP_C, Timeline_0) == 0x0002C0, "Member 'AConstructionLift_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AConstructionLift_BP_C, PauseDelay) == 0x0002C8, "Member 'AConstructionLift_BP_C::PauseDelay' has a wrong offset!");
static_assert(offsetof(AConstructionLift_BP_C, A) == 0x0002D0, "Member 'AConstructionLift_BP_C::A' has a wrong offset!");

}

