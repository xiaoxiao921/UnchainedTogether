#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CityHoleDoors

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CityHoleDoors.BP_CityHoleDoors_C.ExecuteUbergraph_BP_CityHoleDoors
// 0x0248 (0x0248 - 0x0000)
struct BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RLerp_ReturnValue_1;                      // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0058(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0140(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue_1;       // 0x0240(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors) == 0x000008, "Wrong alignment on BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors");
static_assert(sizeof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors) == 0x000248, "Wrong size on BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors");
static_assert(offsetof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors, EntryPoint) == 0x000000, "Member 'BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000020, "Member 'BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors, CallFunc_RLerp_ReturnValue) == 0x000028, "Member 'BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors, CallFunc_RLerp_ReturnValue_1) == 0x000040, "Member 'BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors::CallFunc_RLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000058, "Member 'BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000140, "Member 'BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000228, "Member 'BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors, CallFunc_SpawnSoundAtLocation_ReturnValue_1) == 0x000240, "Member 'BP_CityHoleDoors_C_ExecuteUbergraph_BP_CityHoleDoors::CallFunc_SpawnSoundAtLocation_ReturnValue_1' has a wrong offset!");

// Function BP_CityHoleDoors.BP_CityHoleDoors_C.UserConstructionScript
// 0x00E8 (0x00E8 - 0x0000)
struct BP_CityHoleDoors_C_UserConstructionScript final
{
public:
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0000(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_CityHoleDoors_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_CityHoleDoors_C_UserConstructionScript");
static_assert(sizeof(BP_CityHoleDoors_C_UserConstructionScript) == 0x0000E8, "Wrong size on BP_CityHoleDoors_C_UserConstructionScript");
static_assert(offsetof(BP_CityHoleDoors_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000000, "Member 'BP_CityHoleDoors_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

}

