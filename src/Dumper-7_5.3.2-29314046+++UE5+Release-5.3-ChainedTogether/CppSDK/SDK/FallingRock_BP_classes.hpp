#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FallingRock_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FallingRock_BP.FallingRock_BP_C
// 0x0090 (0x0328 - 0x0298)
class AFallingRock_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraShakeSourceComponent*            CameraShakeSource;                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        FallingRockLoop;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_RockMinusEnd;                                   // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Rock;                                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_5F123D9E4CB87BBC8C420B8E62A01754; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_5F123D9E4CB87BBC8C420B8E62A01754; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32E8[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_C6B8547544F6CC6222C553A01B31625E; // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_C6B8547544F6CC6222C553A01B31625E; // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32E9[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndLocation;                                       // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Placer;                                            // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          RandomRot;                                         // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__FallingRock_BP_SM_Rock_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_FallingRock_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FallingRock_BP_C">();
	}
	static class AFallingRock_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFallingRock_BP_C>();
	}
};
static_assert(alignof(AFallingRock_BP_C) == 0x000008, "Wrong alignment on AFallingRock_BP_C");
static_assert(sizeof(AFallingRock_BP_C) == 0x000328, "Wrong size on AFallingRock_BP_C");
static_assert(offsetof(AFallingRock_BP_C, UberGraphFrame) == 0x000298, "Member 'AFallingRock_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, CameraShakeSource) == 0x0002A0, "Member 'AFallingRock_BP_C::CameraShakeSource' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, FallingRockLoop) == 0x0002A8, "Member 'AFallingRock_BP_C::FallingRockLoop' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, Arrow) == 0x0002B0, "Member 'AFallingRock_BP_C::Arrow' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, SM_RockMinusEnd) == 0x0002B8, "Member 'AFallingRock_BP_C::SM_RockMinusEnd' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, SM_Rock) == 0x0002C0, "Member 'AFallingRock_BP_C::SM_Rock' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, DefaultSceneRoot) == 0x0002C8, "Member 'AFallingRock_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, Timeline_0_NewTrack_0_5F123D9E4CB87BBC8C420B8E62A01754) == 0x0002D0, "Member 'AFallingRock_BP_C::Timeline_0_NewTrack_0_5F123D9E4CB87BBC8C420B8E62A01754' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, Timeline_0__Direction_5F123D9E4CB87BBC8C420B8E62A01754) == 0x0002D4, "Member 'AFallingRock_BP_C::Timeline_0__Direction_5F123D9E4CB87BBC8C420B8E62A01754' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, Timeline_0) == 0x0002D8, "Member 'AFallingRock_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, Timeline_NewTrack_0_C6B8547544F6CC6222C553A01B31625E) == 0x0002E0, "Member 'AFallingRock_BP_C::Timeline_NewTrack_0_C6B8547544F6CC6222C553A01B31625E' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, Timeline__Direction_C6B8547544F6CC6222C553A01B31625E) == 0x0002E4, "Member 'AFallingRock_BP_C::Timeline__Direction_C6B8547544F6CC6222C553A01B31625E' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, Timeline) == 0x0002E8, "Member 'AFallingRock_BP_C::Timeline' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, EndLocation) == 0x0002F0, "Member 'AFallingRock_BP_C::EndLocation' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, StartLocation) == 0x000308, "Member 'AFallingRock_BP_C::StartLocation' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, Placer) == 0x000320, "Member 'AFallingRock_BP_C::Placer' has a wrong offset!");
static_assert(offsetof(AFallingRock_BP_C, RandomRot) == 0x000321, "Member 'AFallingRock_BP_C::RandomRot' has a wrong offset!");

}

