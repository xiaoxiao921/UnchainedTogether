#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Path_straight_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass path_straight_BP.path_straight_BP_C
// 0x0020 (0x02B8 - 0x0298)
class APath_straight_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   E1;                                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   E;                                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Floor_tile_1x1;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"path_straight_BP_C">();
	}
	static class APath_straight_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APath_straight_BP_C>();
	}
};
static_assert(alignof(APath_straight_BP_C) == 0x000008, "Wrong alignment on APath_straight_BP_C");
static_assert(sizeof(APath_straight_BP_C) == 0x0002B8, "Wrong size on APath_straight_BP_C");
static_assert(offsetof(APath_straight_BP_C, E1) == 0x000298, "Member 'APath_straight_BP_C::E1' has a wrong offset!");
static_assert(offsetof(APath_straight_BP_C, E) == 0x0002A0, "Member 'APath_straight_BP_C::E' has a wrong offset!");
static_assert(offsetof(APath_straight_BP_C, Floor_tile_1x1) == 0x0002A8, "Member 'APath_straight_BP_C::Floor_tile_1x1' has a wrong offset!");
static_assert(offsetof(APath_straight_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'APath_straight_BP_C::DefaultSceneRoot' has a wrong offset!");

}
