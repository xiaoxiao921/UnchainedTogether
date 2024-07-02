#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PortMovingPlate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PortMovingPlate.BP_PortMovingPlate_C
// 0x0068 (0x0300 - 0x0298)
class ABP_PortMovingPlate_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_VinceSync_C*                         C_VinceSync;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_MovablePortPlate;                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_A24CC50A4698D2398CA5D0B898E93513; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_A24CC50A4698D2398CA5D0B898E93513; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D38[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitLoc;                                           // 0x02D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                TargetLoc;                                         // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PortMovingPlate(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PortMovingPlate_C">();
	}
	static class ABP_PortMovingPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PortMovingPlate_C>();
	}
};
static_assert(alignof(ABP_PortMovingPlate_C) == 0x000008, "Wrong alignment on ABP_PortMovingPlate_C");
static_assert(sizeof(ABP_PortMovingPlate_C) == 0x000300, "Wrong size on ABP_PortMovingPlate_C");
static_assert(offsetof(ABP_PortMovingPlate_C, UberGraphFrame) == 0x000298, "Member 'ABP_PortMovingPlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PortMovingPlate_C, C_VinceSync) == 0x0002A0, "Member 'ABP_PortMovingPlate_C::C_VinceSync' has a wrong offset!");
static_assert(offsetof(ABP_PortMovingPlate_C, SM_MovablePortPlate) == 0x0002A8, "Member 'ABP_PortMovingPlate_C::SM_MovablePortPlate' has a wrong offset!");
static_assert(offsetof(ABP_PortMovingPlate_C, C_TickOptimizer) == 0x0002B0, "Member 'ABP_PortMovingPlate_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_PortMovingPlate_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_PortMovingPlate_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PortMovingPlate_C, Timeline_0_NewTrack_0_A24CC50A4698D2398CA5D0B898E93513) == 0x0002C0, "Member 'ABP_PortMovingPlate_C::Timeline_0_NewTrack_0_A24CC50A4698D2398CA5D0B898E93513' has a wrong offset!");
static_assert(offsetof(ABP_PortMovingPlate_C, Timeline_0__Direction_A24CC50A4698D2398CA5D0B898E93513) == 0x0002C4, "Member 'ABP_PortMovingPlate_C::Timeline_0__Direction_A24CC50A4698D2398CA5D0B898E93513' has a wrong offset!");
static_assert(offsetof(ABP_PortMovingPlate_C, Timeline_0) == 0x0002C8, "Member 'ABP_PortMovingPlate_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_PortMovingPlate_C, InitLoc) == 0x0002D0, "Member 'ABP_PortMovingPlate_C::InitLoc' has a wrong offset!");
static_assert(offsetof(ABP_PortMovingPlate_C, TargetLoc) == 0x0002E8, "Member 'ABP_PortMovingPlate_C::TargetLoc' has a wrong offset!");

}

