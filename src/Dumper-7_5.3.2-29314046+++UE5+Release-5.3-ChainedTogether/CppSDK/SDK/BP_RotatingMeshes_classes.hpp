#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RotatingMeshes

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RotatingMeshes.BP_RotatingMeshes_C
// 0x00B0 (0x0348 - 0x0298)
class ABP_RotatingMeshes_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm4;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm3;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm5;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm2;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm1;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh5;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh4;                                       // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RepRot;                                            // 0x0320(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	double                                        Speed;                                             // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Inverse;                                           // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CustomEvent();
	void ExecuteUbergraph_BP_RotatingMeshes(int32 EntryPoint);
	void OnRep_RepRot();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RotatingMeshes_C">();
	}
	static class ABP_RotatingMeshes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RotatingMeshes_C>();
	}
};
static_assert(alignof(ABP_RotatingMeshes_C) == 0x000008, "Wrong alignment on ABP_RotatingMeshes_C");
static_assert(sizeof(ABP_RotatingMeshes_C) == 0x000348, "Wrong size on ABP_RotatingMeshes_C");
static_assert(offsetof(ABP_RotatingMeshes_C, UberGraphFrame) == 0x000298, "Member 'ABP_RotatingMeshes_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, C_TickOptimizer) == 0x0002A0, "Member 'ABP_RotatingMeshes_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, Audio) == 0x0002A8, "Member 'ABP_RotatingMeshes_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, SpringArm4) == 0x0002B0, "Member 'ABP_RotatingMeshes_C::SpringArm4' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, SpringArm3) == 0x0002B8, "Member 'ABP_RotatingMeshes_C::SpringArm3' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, SpringArm5) == 0x0002C0, "Member 'ABP_RotatingMeshes_C::SpringArm5' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, SpringArm2) == 0x0002C8, "Member 'ABP_RotatingMeshes_C::SpringArm2' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, SpringArm1) == 0x0002D0, "Member 'ABP_RotatingMeshes_C::SpringArm1' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, StaticMesh5) == 0x0002D8, "Member 'ABP_RotatingMeshes_C::StaticMesh5' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, StaticMesh4) == 0x0002E0, "Member 'ABP_RotatingMeshes_C::StaticMesh4' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, StaticMesh3) == 0x0002E8, "Member 'ABP_RotatingMeshes_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, StaticMesh2) == 0x0002F0, "Member 'ABP_RotatingMeshes_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, StaticMesh1) == 0x0002F8, "Member 'ABP_RotatingMeshes_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, SpringArm) == 0x000300, "Member 'ABP_RotatingMeshes_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, StaticMesh) == 0x000308, "Member 'ABP_RotatingMeshes_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, Sphere) == 0x000310, "Member 'ABP_RotatingMeshes_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, DefaultSceneRoot) == 0x000318, "Member 'ABP_RotatingMeshes_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, RepRot) == 0x000320, "Member 'ABP_RotatingMeshes_C::RepRot' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, Speed) == 0x000338, "Member 'ABP_RotatingMeshes_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_RotatingMeshes_C, Inverse) == 0x000340, "Member 'ABP_RotatingMeshes_C::Inverse' has a wrong offset!");

}
