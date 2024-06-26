#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Attractor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Attractor.BP_Attractor_C
// 0x0060 (0x02F8 - 0x0298)
class ABP_Attractor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        ExpulseArrow;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Attractor;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ActorsToAttract;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        AttractionForce;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                         ActorsToExpulse;                                   // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          SphereExpulse_;                                    // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__BP_Attractor_Attractor_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_Attractor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_Attractor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_Attractor(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Attractor_C">();
	}
	static class ABP_Attractor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Attractor_C>();
	}
};
static_assert(alignof(ABP_Attractor_C) == 0x000008, "Wrong alignment on ABP_Attractor_C");
static_assert(sizeof(ABP_Attractor_C) == 0x0002F8, "Wrong size on ABP_Attractor_C");
static_assert(offsetof(ABP_Attractor_C, UberGraphFrame) == 0x000298, "Member 'ABP_Attractor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Attractor_C, C_TickOptimizer) == 0x0002A0, "Member 'ABP_Attractor_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_Attractor_C, ExpulseArrow) == 0x0002A8, "Member 'ABP_Attractor_C::ExpulseArrow' has a wrong offset!");
static_assert(offsetof(ABP_Attractor_C, Attractor) == 0x0002B0, "Member 'ABP_Attractor_C::Attractor' has a wrong offset!");
static_assert(offsetof(ABP_Attractor_C, Box) == 0x0002B8, "Member 'ABP_Attractor_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Attractor_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_Attractor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Attractor_C, ActorsToAttract) == 0x0002C8, "Member 'ABP_Attractor_C::ActorsToAttract' has a wrong offset!");
static_assert(offsetof(ABP_Attractor_C, AttractionForce) == 0x0002D8, "Member 'ABP_Attractor_C::AttractionForce' has a wrong offset!");
static_assert(offsetof(ABP_Attractor_C, ActorsToExpulse) == 0x0002E0, "Member 'ABP_Attractor_C::ActorsToExpulse' has a wrong offset!");
static_assert(offsetof(ABP_Attractor_C, SphereExpulse_) == 0x0002F0, "Member 'ABP_Attractor_C::SphereExpulse_' has a wrong offset!");

}

