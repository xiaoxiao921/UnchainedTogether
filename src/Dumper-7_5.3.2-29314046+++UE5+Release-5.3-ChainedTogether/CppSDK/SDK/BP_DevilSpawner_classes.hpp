#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DevilSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DevilSpawner.BP_DevilSpawner_C
// 0x0030 (0x02C8 - 0x0298)
class ABP_DevilSpawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         TextNumber;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_39A5[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Devil_C*                            NewVar_0;                                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_DevilSpawner_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_DevilSpawner(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DevilSpawner_C">();
	}
	static class ABP_DevilSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DevilSpawner_C>();
	}
};
static_assert(alignof(ABP_DevilSpawner_C) == 0x000008, "Wrong alignment on ABP_DevilSpawner_C");
static_assert(sizeof(ABP_DevilSpawner_C) == 0x0002C8, "Wrong size on ABP_DevilSpawner_C");
static_assert(offsetof(ABP_DevilSpawner_C, UberGraphFrame) == 0x000298, "Member 'ABP_DevilSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DevilSpawner_C, Arrow) == 0x0002A0, "Member 'ABP_DevilSpawner_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_DevilSpawner_C, Box) == 0x0002A8, "Member 'ABP_DevilSpawner_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_DevilSpawner_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_DevilSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DevilSpawner_C, TextNumber) == 0x0002B8, "Member 'ABP_DevilSpawner_C::TextNumber' has a wrong offset!");
static_assert(offsetof(ABP_DevilSpawner_C, NewVar_0) == 0x0002C0, "Member 'ABP_DevilSpawner_C::NewVar_0' has a wrong offset!");

}
