#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Wall_Tomb_02_300_500

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Wall_Tomb_02_300_500.BP_Wall_Tomb_02_300_500_C
// 0x0010 (0x02B8 - 0x02A8)
class ABP_Wall_Tomb_02_300_500_C final : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                   WallTomb01_var05;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WallTombBackWall01_var01;                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Wall_Tomb_02_300_500_C">();
	}
	static class ABP_Wall_Tomb_02_300_500_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Wall_Tomb_02_300_500_C>();
	}
};
static_assert(alignof(ABP_Wall_Tomb_02_300_500_C) == 0x000008, "Wrong alignment on ABP_Wall_Tomb_02_300_500_C");
static_assert(sizeof(ABP_Wall_Tomb_02_300_500_C) == 0x0002B8, "Wrong size on ABP_Wall_Tomb_02_300_500_C");
static_assert(offsetof(ABP_Wall_Tomb_02_300_500_C, WallTomb01_var05) == 0x0002A8, "Member 'ABP_Wall_Tomb_02_300_500_C::WallTomb01_var05' has a wrong offset!");
static_assert(offsetof(ABP_Wall_Tomb_02_300_500_C, WallTombBackWall01_var01) == 0x0002B0, "Member 'ABP_Wall_Tomb_02_300_500_C::WallTombBackWall01_var01' has a wrong offset!");

}
