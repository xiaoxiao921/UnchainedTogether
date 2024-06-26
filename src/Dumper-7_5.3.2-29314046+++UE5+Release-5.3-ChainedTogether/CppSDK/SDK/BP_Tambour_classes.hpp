#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tambour

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Tambour.BP_Tambour_C
// 0x0040 (0x02D8 - 0x0298)
class ABP_Tambour_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_A1F7A8004AF7B9B6CA6DBFBED3679F32; // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_A1F7A8004AF7B9B6CA6DBFBED3679F32; // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AA6[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Animate();
	void BndEvt__BP_Tambour_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_Tambour(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tambour_C">();
	}
	static class ABP_Tambour_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Tambour_C>();
	}
};
static_assert(alignof(ABP_Tambour_C) == 0x000008, "Wrong alignment on ABP_Tambour_C");
static_assert(sizeof(ABP_Tambour_C) == 0x0002D8, "Wrong size on ABP_Tambour_C");
static_assert(offsetof(ABP_Tambour_C, UberGraphFrame) == 0x000298, "Member 'ABP_Tambour_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Tambour_C, C_TickOptimizer) == 0x0002A0, "Member 'ABP_Tambour_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_Tambour_C, Cylinder) == 0x0002A8, "Member 'ABP_Tambour_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_Tambour_C, StaticMesh) == 0x0002B0, "Member 'ABP_Tambour_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Tambour_C, Scene) == 0x0002B8, "Member 'ABP_Tambour_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Tambour_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_Tambour_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Tambour_C, Timeline_0_NewTrack_0_A1F7A8004AF7B9B6CA6DBFBED3679F32) == 0x0002C8, "Member 'ABP_Tambour_C::Timeline_0_NewTrack_0_A1F7A8004AF7B9B6CA6DBFBED3679F32' has a wrong offset!");
static_assert(offsetof(ABP_Tambour_C, Timeline_0__Direction_A1F7A8004AF7B9B6CA6DBFBED3679F32) == 0x0002CC, "Member 'ABP_Tambour_C::Timeline_0__Direction_A1F7A8004AF7B9B6CA6DBFBED3679F32' has a wrong offset!");
static_assert(offsetof(ABP_Tambour_C, Timeline_0) == 0x0002D0, "Member 'ABP_Tambour_C::Timeline_0' has a wrong offset!");

}

