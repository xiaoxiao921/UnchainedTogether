#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DestructiveWall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DestructiveWall.BP_DestructiveWall_C
// 0x0020 (0x02B8 - 0x0298)
class ABP_DestructiveWall_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void Destroy();
	void ExecuteUbergraph_BP_DestructiveWall(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DestructiveWall_C">();
	}
	static class ABP_DestructiveWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DestructiveWall_C>();
	}
};
static_assert(alignof(ABP_DestructiveWall_C) == 0x000008, "Wrong alignment on ABP_DestructiveWall_C");
static_assert(sizeof(ABP_DestructiveWall_C) == 0x0002B8, "Wrong size on ABP_DestructiveWall_C");
static_assert(offsetof(ABP_DestructiveWall_C, UberGraphFrame) == 0x000298, "Member 'ABP_DestructiveWall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DestructiveWall_C, SkeletalMesh) == 0x0002A0, "Member 'ABP_DestructiveWall_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_DestructiveWall_C, StaticMesh) == 0x0002A8, "Member 'ABP_DestructiveWall_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DestructiveWall_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_DestructiveWall_C::DefaultSceneRoot' has a wrong offset!");

}

