#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RotatingMeshes

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_RotatingMeshes.BP_RotatingMeshes_C.ExecuteUbergraph_BP_RotatingMeshes
// 0x0178 (0x0178 - 0x0000)
struct BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABD[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABE[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABF[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0080(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes) == 0x000008, "Wrong alignment on BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes");
static_assert(sizeof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes) == 0x000178, "Wrong size on BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, EntryPoint) == 0x000000, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed) == 0x000008, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, K2Node_Event_DeltaSeconds) == 0x000038, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_SelectFloat_ReturnValue) == 0x000040, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000050, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_MakeRotator_ReturnValue) == 0x000068, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000080, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000168, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000170, "Member 'BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

// Function BP_RotatingMeshes.BP_RotatingMeshes_C.OnRep_RepRot
// 0x00F0 (0x00F0 - 0x0000)
struct BP_RotatingMeshes_C_OnRep_RepRot final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0008(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_RotatingMeshes_C_OnRep_RepRot) == 0x000008, "Wrong alignment on BP_RotatingMeshes_C_OnRep_RepRot");
static_assert(sizeof(BP_RotatingMeshes_C_OnRep_RepRot) == 0x0000F0, "Wrong size on BP_RotatingMeshes_C_OnRep_RepRot");
static_assert(offsetof(BP_RotatingMeshes_C_OnRep_RepRot, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_RotatingMeshes_C_OnRep_RepRot::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingMeshes_C_OnRep_RepRot, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000008, "Member 'BP_RotatingMeshes_C_OnRep_RepRot::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function BP_RotatingMeshes.BP_RotatingMeshes_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_RotatingMeshes_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RotatingMeshes_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_RotatingMeshes_C_ReceiveTick");
static_assert(sizeof(BP_RotatingMeshes_C_ReceiveTick) == 0x000004, "Wrong size on BP_RotatingMeshes_C_ReceiveTick");
static_assert(offsetof(BP_RotatingMeshes_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_RotatingMeshes_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

