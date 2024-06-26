#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SM_bone_leg_Straight_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SM_bone_leg_Straight_BP.SM_bone_leg_Straight_BP_C
// 0x0008 (0x02A0 - 0x0298)
class ASM_bone_leg_Straight_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SM_bone_leg_Straight_BP_C">();
	}
	static class ASM_bone_leg_Straight_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASM_bone_leg_Straight_BP_C>();
	}
};
static_assert(alignof(ASM_bone_leg_Straight_BP_C) == 0x000008, "Wrong alignment on ASM_bone_leg_Straight_BP_C");
static_assert(sizeof(ASM_bone_leg_Straight_BP_C) == 0x0002A0, "Wrong size on ASM_bone_leg_Straight_BP_C");
static_assert(offsetof(ASM_bone_leg_Straight_BP_C, StaticMesh) == 0x000298, "Member 'ASM_bone_leg_Straight_BP_C::StaticMesh' has a wrong offset!");

}

