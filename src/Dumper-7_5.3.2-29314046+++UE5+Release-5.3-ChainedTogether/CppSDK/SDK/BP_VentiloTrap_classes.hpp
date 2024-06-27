#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VentiloTrap

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VentiloTrap.BP_VentiloTrap_C
// 0x0078 (0x0310 - 0x0298)
class ABP_VentiloTrap_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Beam01_4;                                       // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Beam01_3;                                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Beam01_2;                                       // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Beam01_1;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               RepRot;                                            // 0x02F0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          IgnorePlayerNumber;                                // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void CustomEvent_1();
	void ExecuteUbergraph_BP_VentiloTrap(int32 EntryPoint);
	void OnRep_RepRot();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VentiloTrap_C">();
	}
	static class ABP_VentiloTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VentiloTrap_C>();
	}
};
static_assert(alignof(ABP_VentiloTrap_C) == 0x000008, "Wrong alignment on ABP_VentiloTrap_C");
static_assert(sizeof(ABP_VentiloTrap_C) == 0x000310, "Wrong size on ABP_VentiloTrap_C");
static_assert(offsetof(ABP_VentiloTrap_C, UberGraphFrame) == 0x000298, "Member 'ABP_VentiloTrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, Audio) == 0x0002A0, "Member 'ABP_VentiloTrap_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, Box) == 0x0002A8, "Member 'ABP_VentiloTrap_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, C_TickOptimizer) == 0x0002B0, "Member 'ABP_VentiloTrap_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, SM_Beam01_4) == 0x0002B8, "Member 'ABP_VentiloTrap_C::SM_Beam01_4' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, SM_Beam01_3) == 0x0002C0, "Member 'ABP_VentiloTrap_C::SM_Beam01_3' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, SM_Beam01_2) == 0x0002C8, "Member 'ABP_VentiloTrap_C::SM_Beam01_2' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, SM_Beam01_1) == 0x0002D0, "Member 'ABP_VentiloTrap_C::SM_Beam01_1' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, Sphere) == 0x0002D8, "Member 'ABP_VentiloTrap_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, DefaultSceneRoot) == 0x0002E0, "Member 'ABP_VentiloTrap_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, Speed) == 0x0002E8, "Member 'ABP_VentiloTrap_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, RepRot) == 0x0002F0, "Member 'ABP_VentiloTrap_C::RepRot' has a wrong offset!");
static_assert(offsetof(ABP_VentiloTrap_C, IgnorePlayerNumber) == 0x000308, "Member 'ABP_VentiloTrap_C::IgnorePlayerNumber' has a wrong offset!");

}
