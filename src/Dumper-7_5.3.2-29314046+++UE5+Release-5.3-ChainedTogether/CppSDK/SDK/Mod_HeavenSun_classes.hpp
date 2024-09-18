#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_HeavenSun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mod_HeavenSun.Mod_HeavenSun_C
// 0x0050 (0x02E8 - 0x0298)
class AMod_HeavenSun_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIGLE_InterfaceComponent*               IGLE_Interface;                                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Sun;                                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int64                                         TriggerID;                                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Attract(class AActor* Actor);
	void BndEvt__Mod_HeavenSun_IGLE_Interface_K2Node_ComponentBoundEvent_2_IGLE_OnPropertyValueChanged__DelegateSignature(const class FString& PropertyName);
	void ExecuteUbergraph_Mod_HeavenSun(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Trigger(bool Start, class AActor* Actor, double Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mod_HeavenSun_C">();
	}
	static class AMod_HeavenSun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMod_HeavenSun_C>();
	}
};
static_assert(alignof(AMod_HeavenSun_C) == 0x000008, "Wrong alignment on AMod_HeavenSun_C");
static_assert(sizeof(AMod_HeavenSun_C) == 0x0002E8, "Wrong size on AMod_HeavenSun_C");
static_assert(offsetof(AMod_HeavenSun_C, UberGraphFrame) == 0x000298, "Member 'AMod_HeavenSun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMod_HeavenSun_C, IGLE_Interface) == 0x0002A0, "Member 'AMod_HeavenSun_C::IGLE_Interface' has a wrong offset!");
static_assert(offsetof(AMod_HeavenSun_C, C_TickOptimizer) == 0x0002A8, "Member 'AMod_HeavenSun_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(AMod_HeavenSun_C, StaticMesh1) == 0x0002B0, "Member 'AMod_HeavenSun_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(AMod_HeavenSun_C, StaticMesh) == 0x0002B8, "Member 'AMod_HeavenSun_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AMod_HeavenSun_C, Arrow) == 0x0002C0, "Member 'AMod_HeavenSun_C::Arrow' has a wrong offset!");
static_assert(offsetof(AMod_HeavenSun_C, NS_Sun) == 0x0002C8, "Member 'AMod_HeavenSun_C::NS_Sun' has a wrong offset!");
static_assert(offsetof(AMod_HeavenSun_C, Sphere) == 0x0002D0, "Member 'AMod_HeavenSun_C::Sphere' has a wrong offset!");
static_assert(offsetof(AMod_HeavenSun_C, DefaultSceneRoot) == 0x0002D8, "Member 'AMod_HeavenSun_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMod_HeavenSun_C, TriggerID) == 0x0002E0, "Member 'AMod_HeavenSun_C::TriggerID' has a wrong offset!");

}
