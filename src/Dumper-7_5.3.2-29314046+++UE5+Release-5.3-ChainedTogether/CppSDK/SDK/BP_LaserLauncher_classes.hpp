#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LaserLauncher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LaserLauncher.BP_LaserLauncher_C
// 0x0038 (0x02D0 - 0x0298)
class ABP_LaserLauncher_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          On;                                                // 0x02C0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AEB[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_LaserCenter_C*                      LaserCenter;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BeamOnSRV(bool Param_On);
	void ExecuteUbergraph_BP_LaserLauncher(int32 EntryPoint);
	void OnRep_On();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LaserLauncher_C">();
	}
	static class ABP_LaserLauncher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LaserLauncher_C>();
	}
};
static_assert(alignof(ABP_LaserLauncher_C) == 0x000008, "Wrong alignment on ABP_LaserLauncher_C");
static_assert(sizeof(ABP_LaserLauncher_C) == 0x0002D0, "Wrong size on ABP_LaserLauncher_C");
static_assert(offsetof(ABP_LaserLauncher_C, UberGraphFrame) == 0x000298, "Member 'ABP_LaserLauncher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LaserLauncher_C, Cylinder) == 0x0002A0, "Member 'ABP_LaserLauncher_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_LaserLauncher_C, Sphere) == 0x0002A8, "Member 'ABP_LaserLauncher_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_LaserLauncher_C, StaticMesh) == 0x0002B0, "Member 'ABP_LaserLauncher_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_LaserLauncher_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_LaserLauncher_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LaserLauncher_C, On) == 0x0002C0, "Member 'ABP_LaserLauncher_C::On' has a wrong offset!");
static_assert(offsetof(ABP_LaserLauncher_C, LaserCenter) == 0x0002C8, "Member 'ABP_LaserLauncher_C::LaserCenter' has a wrong offset!");

}

