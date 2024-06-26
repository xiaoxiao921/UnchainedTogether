#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThunderWall

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ThunderWall.BP_ThunderWall_C
// 0x0020 (0x02B8 - 0x0298)
class ABP_ThunderWall_C final : public AActor
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RockWall;                                          // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObject*                                DestructibleMesh;                                  // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThunderWall_C">();
	}
	static class ABP_ThunderWall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThunderWall_C>();
	}
};
static_assert(alignof(ABP_ThunderWall_C) == 0x000008, "Wrong alignment on ABP_ThunderWall_C");
static_assert(sizeof(ABP_ThunderWall_C) == 0x0002B8, "Wrong size on ABP_ThunderWall_C");
static_assert(offsetof(ABP_ThunderWall_C, Arrow) == 0x000298, "Member 'ABP_ThunderWall_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_ThunderWall_C, RockWall) == 0x0002A0, "Member 'ABP_ThunderWall_C::RockWall' has a wrong offset!");
static_assert(offsetof(ABP_ThunderWall_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_ThunderWall_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ThunderWall_C, DestructibleMesh) == 0x0002B0, "Member 'ABP_ThunderWall_C::DestructibleMesh' has a wrong offset!");

}

