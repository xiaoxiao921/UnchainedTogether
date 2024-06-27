#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Water_small_inverse_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass water_small_inverse_BP.water_small_inverse_BP_C
// 0x0028 (0x02C0 - 0x0298)
class AWater_small_inverse_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Trim_crown_end;                                    // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Trim_crown_corner_small_inverse;                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Floor_tile_1x1;                                    // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Water_corner_small_inverse;                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"water_small_inverse_BP_C">();
	}
	static class AWater_small_inverse_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWater_small_inverse_BP_C>();
	}
};
static_assert(alignof(AWater_small_inverse_BP_C) == 0x000008, "Wrong alignment on AWater_small_inverse_BP_C");
static_assert(sizeof(AWater_small_inverse_BP_C) == 0x0002C0, "Wrong size on AWater_small_inverse_BP_C");
static_assert(offsetof(AWater_small_inverse_BP_C, Trim_crown_end) == 0x000298, "Member 'AWater_small_inverse_BP_C::Trim_crown_end' has a wrong offset!");
static_assert(offsetof(AWater_small_inverse_BP_C, Trim_crown_corner_small_inverse) == 0x0002A0, "Member 'AWater_small_inverse_BP_C::Trim_crown_corner_small_inverse' has a wrong offset!");
static_assert(offsetof(AWater_small_inverse_BP_C, Floor_tile_1x1) == 0x0002A8, "Member 'AWater_small_inverse_BP_C::Floor_tile_1x1' has a wrong offset!");
static_assert(offsetof(AWater_small_inverse_BP_C, Water_corner_small_inverse) == 0x0002B0, "Member 'AWater_small_inverse_BP_C::Water_corner_small_inverse' has a wrong offset!");
static_assert(offsetof(AWater_small_inverse_BP_C, DefaultSceneRoot) == 0x0002B8, "Member 'AWater_small_inverse_BP_C::DefaultSceneRoot' has a wrong offset!");

}
