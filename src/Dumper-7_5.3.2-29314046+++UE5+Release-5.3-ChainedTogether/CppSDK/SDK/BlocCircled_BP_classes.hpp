#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlocCircled_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BlocCircled_BP.BlocCircled_BP_C
// 0x0010 (0x02A8 - 0x0298)
class ABlocCircled_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_floor_bricks_02;                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlocCircled_BP_C">();
	}
	static class ABlocCircled_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABlocCircled_BP_C>();
	}
};
static_assert(alignof(ABlocCircled_BP_C) == 0x000008, "Wrong alignment on ABlocCircled_BP_C");
static_assert(sizeof(ABlocCircled_BP_C) == 0x0002A8, "Wrong size on ABlocCircled_BP_C");
static_assert(offsetof(ABlocCircled_BP_C, SM_floor_bricks_02) == 0x000298, "Member 'ABlocCircled_BP_C::SM_floor_bricks_02' has a wrong offset!");
static_assert(offsetof(ABlocCircled_BP_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABlocCircled_BP_C::DefaultSceneRoot' has a wrong offset!");

}
