#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Catapult

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Catapult.BP_Catapult_C
// 0x0110 (0x03A8 - 0x0298)
class ABP_Catapult_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxRight9;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxLeft08;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxLeft07;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxLeft06;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxLeft05;                                         // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxLeft04;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxLeft03;                                         // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxLeft02;                                         // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxLeft;                                           // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder1;                                         // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        ImpulseArrow;                                      // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxRight05;                                        // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxRight;                                          // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxRight02;                                        // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxRight06;                                        // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxRight07;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxRight04;                                        // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BoxRight03;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AButton_BP_C*                           ButtonToAttach;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          HideTop;                                           // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3C57[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         PawnsToLaunch;                                     // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        LaunchMultiplier;                                  // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        RepYaw;                                            // 0x0398(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Turn_Rate_Target;                                  // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Catapult(int32 EntryPoint);
	void GetBoxArray(TArray<class UBoxComponent*>* Array);
	void GetLeftBoxes(TArray<class UBoxComponent*>* Array);
	void GetRightBoxes(TArray<class UBoxComponent*>* Array);
	void IsActivated(bool* Activated);
	bool IsPlayerPushing();
	bool IsSomeoneInside(TArray<class UBoxComponent*>& Boxes);
	void Optimise(bool Param_Optimise);
	void PushAll();
	void Pushed();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Released();
	void ResetCatapult();
	void UpdateTurn(double* TurnRate);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Catapult_C">();
	}
	static class ABP_Catapult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Catapult_C>();
	}
};
static_assert(alignof(ABP_Catapult_C) == 0x000008, "Wrong alignment on ABP_Catapult_C");
static_assert(sizeof(ABP_Catapult_C) == 0x0003A8, "Wrong size on ABP_Catapult_C");
static_assert(offsetof(ABP_Catapult_C, UberGraphFrame) == 0x000298, "Member 'ABP_Catapult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, Box) == 0x0002A0, "Member 'ABP_Catapult_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxRight9) == 0x0002A8, "Member 'ABP_Catapult_C::BoxRight9' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxLeft08) == 0x0002B0, "Member 'ABP_Catapult_C::BoxLeft08' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxLeft07) == 0x0002B8, "Member 'ABP_Catapult_C::BoxLeft07' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxLeft06) == 0x0002C0, "Member 'ABP_Catapult_C::BoxLeft06' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxLeft05) == 0x0002C8, "Member 'ABP_Catapult_C::BoxLeft05' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxLeft04) == 0x0002D0, "Member 'ABP_Catapult_C::BoxLeft04' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxLeft03) == 0x0002D8, "Member 'ABP_Catapult_C::BoxLeft03' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxLeft02) == 0x0002E0, "Member 'ABP_Catapult_C::BoxLeft02' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxLeft) == 0x0002E8, "Member 'ABP_Catapult_C::BoxLeft' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, Cylinder1) == 0x0002F0, "Member 'ABP_Catapult_C::Cylinder1' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, Scene) == 0x0002F8, "Member 'ABP_Catapult_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, SkeletalMesh) == 0x000300, "Member 'ABP_Catapult_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, PhysicsConstraint) == 0x000308, "Member 'ABP_Catapult_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, ImpulseArrow) == 0x000310, "Member 'ABP_Catapult_C::ImpulseArrow' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, C_TickOptimizer) == 0x000318, "Member 'ABP_Catapult_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, Cylinder) == 0x000320, "Member 'ABP_Catapult_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxRight05) == 0x000328, "Member 'ABP_Catapult_C::BoxRight05' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxRight) == 0x000330, "Member 'ABP_Catapult_C::BoxRight' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxRight02) == 0x000338, "Member 'ABP_Catapult_C::BoxRight02' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxRight06) == 0x000340, "Member 'ABP_Catapult_C::BoxRight06' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxRight07) == 0x000348, "Member 'ABP_Catapult_C::BoxRight07' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxRight04) == 0x000350, "Member 'ABP_Catapult_C::BoxRight04' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, BoxRight03) == 0x000358, "Member 'ABP_Catapult_C::BoxRight03' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, StaticMesh) == 0x000360, "Member 'ABP_Catapult_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, DefaultSceneRoot) == 0x000368, "Member 'ABP_Catapult_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, ButtonToAttach) == 0x000370, "Member 'ABP_Catapult_C::ButtonToAttach' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, HideTop) == 0x000378, "Member 'ABP_Catapult_C::HideTop' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, PawnsToLaunch) == 0x000380, "Member 'ABP_Catapult_C::PawnsToLaunch' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, LaunchMultiplier) == 0x000390, "Member 'ABP_Catapult_C::LaunchMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, RepYaw) == 0x000398, "Member 'ABP_Catapult_C::RepYaw' has a wrong offset!");
static_assert(offsetof(ABP_Catapult_C, Turn_Rate_Target) == 0x0003A0, "Member 'ABP_Catapult_C::Turn_Rate_Target' has a wrong offset!");

}
