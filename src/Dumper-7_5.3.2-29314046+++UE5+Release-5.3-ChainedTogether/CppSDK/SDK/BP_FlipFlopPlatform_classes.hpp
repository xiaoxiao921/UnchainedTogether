#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlipFlopPlatform

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FlipFlopPlatform.BP_FlipFlopPlatform_C
// 0x0080 (0x0318 - 0x0298)
class ABP_FlipFlopPlatform_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_0F99BFD143253019A12D75BBABC10D9E; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_0F99BFD143253019A12D75BBABC10D9E; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36AC[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         RepTL_Position;                                    // 0x02E0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36AD[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Start;                                             // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FRotator                               End;                                               // 0x0300(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void CustomEvent();
	void ExecuteUbergraph_BP_FlipFlopPlatform(int32 EntryPoint);
	void OnRep_RepTL_Position();
	void ReceiveBeginPlay();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FlipFlopPlatform_C">();
	}
	static class ABP_FlipFlopPlatform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FlipFlopPlatform_C>();
	}
};
static_assert(alignof(ABP_FlipFlopPlatform_C) == 0x000008, "Wrong alignment on ABP_FlipFlopPlatform_C");
static_assert(sizeof(ABP_FlipFlopPlatform_C) == 0x000318, "Wrong size on ABP_FlipFlopPlatform_C");
static_assert(offsetof(ABP_FlipFlopPlatform_C, UberGraphFrame) == 0x000298, "Member 'ABP_FlipFlopPlatform_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, Cube) == 0x0002A0, "Member 'ABP_FlipFlopPlatform_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, StaticMesh) == 0x0002A8, "Member 'ABP_FlipFlopPlatform_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, StaticMesh2) == 0x0002B0, "Member 'ABP_FlipFlopPlatform_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, StaticMesh1) == 0x0002B8, "Member 'ABP_FlipFlopPlatform_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, Sphere) == 0x0002C0, "Member 'ABP_FlipFlopPlatform_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_FlipFlopPlatform_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, Timeline_NewTrack_0_0F99BFD143253019A12D75BBABC10D9E) == 0x0002D0, "Member 'ABP_FlipFlopPlatform_C::Timeline_NewTrack_0_0F99BFD143253019A12D75BBABC10D9E' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, Timeline__Direction_0F99BFD143253019A12D75BBABC10D9E) == 0x0002D4, "Member 'ABP_FlipFlopPlatform_C::Timeline__Direction_0F99BFD143253019A12D75BBABC10D9E' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, Timeline) == 0x0002D8, "Member 'ABP_FlipFlopPlatform_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, RepTL_Position) == 0x0002E0, "Member 'ABP_FlipFlopPlatform_C::RepTL_Position' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, Start) == 0x0002E8, "Member 'ABP_FlipFlopPlatform_C::Start' has a wrong offset!");
static_assert(offsetof(ABP_FlipFlopPlatform_C, End) == 0x000300, "Member 'ABP_FlipFlopPlatform_C::End' has a wrong offset!");

}

