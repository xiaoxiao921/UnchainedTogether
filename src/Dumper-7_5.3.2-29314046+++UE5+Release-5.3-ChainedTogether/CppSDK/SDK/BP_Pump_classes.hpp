#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pump

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pump.BP_Pump_C
// 0x0088 (0x0320 - 0x0298)
class ABP_Pump_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Top;                                               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Bottom;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_26F51C1941948D9A91558DA417744434; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_26F51C1941948D9A91558DA417744434; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3840[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitLoc;                                           // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitScale;                                         // 0x02F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_BP_Pump_C;                                   // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3841[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Mongoltfiere_C*                     Montgolfiere;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void CustomEvent_0();
	void ExecuteUbergraph_BP_Pump(int32 EntryPoint);
	void PlayTL();
	void ReceiveBeginPlay();
	void ReverseTL();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pump_C">();
	}
	static class ABP_Pump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pump_C>();
	}
};
static_assert(alignof(ABP_Pump_C) == 0x000008, "Wrong alignment on ABP_Pump_C");
static_assert(sizeof(ABP_Pump_C) == 0x000320, "Wrong size on ABP_Pump_C");
static_assert(offsetof(ABP_Pump_C, UberGraphFrame) == 0x000298, "Member 'ABP_Pump_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, C_TickOptimizer) == 0x0002A0, "Member 'ABP_Pump_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, Cylinder) == 0x0002A8, "Member 'ABP_Pump_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, Top) == 0x0002B0, "Member 'ABP_Pump_C::Top' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, StaticMesh1) == 0x0002B8, "Member 'ABP_Pump_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, Bottom) == 0x0002C0, "Member 'ABP_Pump_C::Bottom' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_Pump_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, Timeline_0_NewTrack_0_26F51C1941948D9A91558DA417744434) == 0x0002D0, "Member 'ABP_Pump_C::Timeline_0_NewTrack_0_26F51C1941948D9A91558DA417744434' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, Timeline_0__Direction_26F51C1941948D9A91558DA417744434) == 0x0002D4, "Member 'ABP_Pump_C::Timeline_0__Direction_26F51C1941948D9A91558DA417744434' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, Timeline_0) == 0x0002D8, "Member 'ABP_Pump_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, InitLoc) == 0x0002E0, "Member 'ABP_Pump_C::InitLoc' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, InitScale) == 0x0002F8, "Member 'ABP_Pump_C::InitScale' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, Index_BP_Pump_C) == 0x000310, "Member 'ABP_Pump_C::Index_BP_Pump_C' has a wrong offset!");
static_assert(offsetof(ABP_Pump_C, Montgolfiere) == 0x000318, "Member 'ABP_Pump_C::Montgolfiere' has a wrong offset!");

}
