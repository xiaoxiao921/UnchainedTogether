#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_WaterVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mod_WaterVolume.Mod_WaterVolume_C
// 0x0038 (0x02D0 - 0x0298)
class AMod_WaterVolume_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Plane;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UIGLE_InterfaceComponent*               IGLE_Interface;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                     WaterPP;                                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_Mod_WaterVolume(int32 EntryPoint);
	void OnEndOverlap(class UObject* Object);
	void OnOverlap(class UObject* Object);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mod_WaterVolume_C">();
	}
	static class AMod_WaterVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMod_WaterVolume_C>();
	}
};
static_assert(alignof(AMod_WaterVolume_C) == 0x000008, "Wrong alignment on AMod_WaterVolume_C");
static_assert(sizeof(AMod_WaterVolume_C) == 0x0002D0, "Wrong size on AMod_WaterVolume_C");
static_assert(offsetof(AMod_WaterVolume_C, UberGraphFrame) == 0x000298, "Member 'AMod_WaterVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMod_WaterVolume_C, Plane) == 0x0002A0, "Member 'AMod_WaterVolume_C::Plane' has a wrong offset!");
static_assert(offsetof(AMod_WaterVolume_C, IGLE_Interface) == 0x0002A8, "Member 'AMod_WaterVolume_C::IGLE_Interface' has a wrong offset!");
static_assert(offsetof(AMod_WaterVolume_C, Cube) == 0x0002B0, "Member 'AMod_WaterVolume_C::Cube' has a wrong offset!");
static_assert(offsetof(AMod_WaterVolume_C, Box) == 0x0002B8, "Member 'AMod_WaterVolume_C::Box' has a wrong offset!");
static_assert(offsetof(AMod_WaterVolume_C, DefaultSceneRoot) == 0x0002C0, "Member 'AMod_WaterVolume_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMod_WaterVolume_C, WaterPP) == 0x0002C8, "Member 'AMod_WaterVolume_C::WaterPP' has a wrong offset!");

}
