#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotatePlank_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RotatePlank_BP.RotatePlank_BP_C
// 0x0038 (0x02D0 - 0x0298)
class ARotatePlank_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Invers_;                                           // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3821[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         RepZ;                                              // 0x02C8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void CustomEvent_0();
	void ExecuteUbergraph_RotatePlank_BP(int32 EntryPoint);
	void OnRep_RepRotation();
	void OnRep_RepZ();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RotatePlank_BP_C">();
	}
	static class ARotatePlank_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARotatePlank_BP_C>();
	}
};
static_assert(alignof(ARotatePlank_BP_C) == 0x000008, "Wrong alignment on ARotatePlank_BP_C");
static_assert(sizeof(ARotatePlank_BP_C) == 0x0002D0, "Wrong size on ARotatePlank_BP_C");
static_assert(offsetof(ARotatePlank_BP_C, UberGraphFrame) == 0x000298, "Member 'ARotatePlank_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARotatePlank_BP_C, C_TickOptimizer) == 0x0002A0, "Member 'ARotatePlank_BP_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ARotatePlank_BP_C, StaticMesh) == 0x0002A8, "Member 'ARotatePlank_BP_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ARotatePlank_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'ARotatePlank_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARotatePlank_BP_C, Invers_) == 0x0002B8, "Member 'ARotatePlank_BP_C::Invers_' has a wrong offset!");
static_assert(offsetof(ARotatePlank_BP_C, Speed) == 0x0002C0, "Member 'ARotatePlank_BP_C::Speed' has a wrong offset!");
static_assert(offsetof(ARotatePlank_BP_C, RepZ) == 0x0002C8, "Member 'ARotatePlank_BP_C::RepZ' has a wrong offset!");

}

