#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LadderTrap

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LadderTrap.BP_LadderTrap_C
// 0x00D8 (0x0370 - 0x0298)
class ABP_LadderTrap_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Target;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone6;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone8;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone9;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone10;                                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone2;                                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone7;                                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone11;                                            // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone5;                                             // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone3;                                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone;                                              // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone1;                                             // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cone4;                                             // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_A5918A0140B7D4CE7ACE10B8EE7BE159; // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_A5918A0140B7D4CE7ACE10B8EE7BE159; // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA6[0x3];                                     // 0x032D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitLoc;                                           // 0x0338(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLoc;                                         // 0x0350(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RepTL_Position;                                    // 0x0368(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_LadderTrap(int32 EntryPoint);
	void OnRep_RepTL_Position();
	void ReceiveBeginPlay();
	void RepTL();
	void Timeline__FinishedFunc();
	void Timeline__PlaySound__EventFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LadderTrap_C">();
	}
	static class ABP_LadderTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LadderTrap_C>();
	}
};
static_assert(alignof(ABP_LadderTrap_C) == 0x000008, "Wrong alignment on ABP_LadderTrap_C");
static_assert(sizeof(ABP_LadderTrap_C) == 0x000370, "Wrong size on ABP_LadderTrap_C");
static_assert(offsetof(ABP_LadderTrap_C, UberGraphFrame) == 0x000298, "Member 'ABP_LadderTrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Arrow) == 0x0002A0, "Member 'ABP_LadderTrap_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Target) == 0x0002A8, "Member 'ABP_LadderTrap_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Box) == 0x0002B0, "Member 'ABP_LadderTrap_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone6) == 0x0002B8, "Member 'ABP_LadderTrap_C::Cone6' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone8) == 0x0002C0, "Member 'ABP_LadderTrap_C::Cone8' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone9) == 0x0002C8, "Member 'ABP_LadderTrap_C::Cone9' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone10) == 0x0002D0, "Member 'ABP_LadderTrap_C::Cone10' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone2) == 0x0002D8, "Member 'ABP_LadderTrap_C::Cone2' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone7) == 0x0002E0, "Member 'ABP_LadderTrap_C::Cone7' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone11) == 0x0002E8, "Member 'ABP_LadderTrap_C::Cone11' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone5) == 0x0002F0, "Member 'ABP_LadderTrap_C::Cone5' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone3) == 0x0002F8, "Member 'ABP_LadderTrap_C::Cone3' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone) == 0x000300, "Member 'ABP_LadderTrap_C::Cone' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone1) == 0x000308, "Member 'ABP_LadderTrap_C::Cone1' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cone4) == 0x000310, "Member 'ABP_LadderTrap_C::Cone4' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Cube) == 0x000318, "Member 'ABP_LadderTrap_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, DefaultSceneRoot) == 0x000320, "Member 'ABP_LadderTrap_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Timeline_NewTrack_0_A5918A0140B7D4CE7ACE10B8EE7BE159) == 0x000328, "Member 'ABP_LadderTrap_C::Timeline_NewTrack_0_A5918A0140B7D4CE7ACE10B8EE7BE159' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Timeline__Direction_A5918A0140B7D4CE7ACE10B8EE7BE159) == 0x00032C, "Member 'ABP_LadderTrap_C::Timeline__Direction_A5918A0140B7D4CE7ACE10B8EE7BE159' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Timeline) == 0x000330, "Member 'ABP_LadderTrap_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, InitLoc) == 0x000338, "Member 'ABP_LadderTrap_C::InitLoc' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, TargetLoc) == 0x000350, "Member 'ABP_LadderTrap_C::TargetLoc' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, RepTL_Position) == 0x000368, "Member 'ABP_LadderTrap_C::RepTL_Position' has a wrong offset!");
static_assert(offsetof(ABP_LadderTrap_C, Active) == 0x00036C, "Member 'ABP_LadderTrap_C::Active' has a wrong offset!");

}
