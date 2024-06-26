#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SPB_AutoPlacer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SPB_AutoPlacer.BP_SPB_AutoPlacer_C
// 0x00C8 (0x0360 - 0x0298)
class ABP_SPB_AutoPlacer_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere2;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere1;                                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline1;                                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_604C34534B3425406114A89B8221E540; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_604C34534B3425406114A89B8221E540; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34EA[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABridge_Spline_BP_C*                    Spline;                                            // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Duration;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsMoving;                                          // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34EB[0xF];                                     // 0x02F1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InitT;                                             // 0x0300(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_SPB_AutoPlacer_Sphere1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SPB_AutoPlacer_Sphere1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_SPB_AutoPlacer(int32 EntryPoint);
	void MoveAll();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResetAll();
	void StopTL();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SPB_AutoPlacer_C">();
	}
	static class ABP_SPB_AutoPlacer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SPB_AutoPlacer_C>();
	}
};
static_assert(alignof(ABP_SPB_AutoPlacer_C) == 0x000010, "Wrong alignment on ABP_SPB_AutoPlacer_C");
static_assert(sizeof(ABP_SPB_AutoPlacer_C) == 0x000360, "Wrong size on ABP_SPB_AutoPlacer_C");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, UberGraphFrame) == 0x000298, "Member 'ABP_SPB_AutoPlacer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, Sphere2) == 0x0002A0, "Member 'ABP_SPB_AutoPlacer_C::Sphere2' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, Sphere1) == 0x0002A8, "Member 'ABP_SPB_AutoPlacer_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, C_TickOptimizer) == 0x0002B0, "Member 'ABP_SPB_AutoPlacer_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, Sphere) == 0x0002B8, "Member 'ABP_SPB_AutoPlacer_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, Spline1) == 0x0002C0, "Member 'ABP_SPB_AutoPlacer_C::Spline1' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_SPB_AutoPlacer_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, Timeline_NewTrack_0_604C34534B3425406114A89B8221E540) == 0x0002D0, "Member 'ABP_SPB_AutoPlacer_C::Timeline_NewTrack_0_604C34534B3425406114A89B8221E540' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, Timeline__Direction_604C34534B3425406114A89B8221E540) == 0x0002D4, "Member 'ABP_SPB_AutoPlacer_C::Timeline__Direction_604C34534B3425406114A89B8221E540' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, Timeline) == 0x0002D8, "Member 'ABP_SPB_AutoPlacer_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, Spline) == 0x0002E0, "Member 'ABP_SPB_AutoPlacer_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, Duration) == 0x0002E8, "Member 'ABP_SPB_AutoPlacer_C::Duration' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, IsMoving) == 0x0002F0, "Member 'ABP_SPB_AutoPlacer_C::IsMoving' has a wrong offset!");
static_assert(offsetof(ABP_SPB_AutoPlacer_C, InitT) == 0x000300, "Member 'ABP_SPB_AutoPlacer_C::InitT' has a wrong offset!");

}

