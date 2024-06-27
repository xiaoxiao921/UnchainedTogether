#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotatePlank_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function RotatePlank_BP.RotatePlank_BP_C.ExecuteUbergraph_RotatePlank_BP
// 0x0188 (0x0188 - 0x0000)
struct RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A43[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A44[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A45[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A46[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x0080(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A47[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP) == 0x000008, "Wrong alignment on RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP");
static_assert(sizeof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP) == 0x000188, "Wrong size on RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, EntryPoint) == 0x000000, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed) == 0x000008, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_SelectFloat_ReturnValue) == 0x000040, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_MakeRotator_ReturnValue) == 0x000050, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000068, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x000080, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_BreakRotator_Roll) == 0x000168, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_BreakRotator_Pitch) == 0x00016C, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_BreakRotator_Yaw) == 0x000170, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000178, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000180, "Member 'RotatePlank_BP_C_ExecuteUbergraph_RotatePlank_BP::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function RotatePlank_BP.RotatePlank_BP_C.OnRep_RepRotation
// 0x00F0 (0x00F0 - 0x0000)
struct RotatePlank_BP_C_OnRep_RepRotation final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A48[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0008(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(RotatePlank_BP_C_OnRep_RepRotation) == 0x000008, "Wrong alignment on RotatePlank_BP_C_OnRep_RepRotation");
static_assert(sizeof(RotatePlank_BP_C_OnRep_RepRotation) == 0x0000F0, "Wrong size on RotatePlank_BP_C_OnRep_RepRotation");
static_assert(offsetof(RotatePlank_BP_C_OnRep_RepRotation, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'RotatePlank_BP_C_OnRep_RepRotation::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_OnRep_RepRotation, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000008, "Member 'RotatePlank_BP_C_OnRep_RepRotation::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function RotatePlank_BP.RotatePlank_BP_C.OnRep_RepZ
// 0x0108 (0x0108 - 0x0000)
struct RotatePlank_BP_C_OnRep_RepZ final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A49[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0020(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(RotatePlank_BP_C_OnRep_RepZ) == 0x000008, "Wrong alignment on RotatePlank_BP_C_OnRep_RepZ");
static_assert(sizeof(RotatePlank_BP_C_OnRep_RepZ) == 0x000108, "Wrong size on RotatePlank_BP_C_OnRep_RepZ");
static_assert(offsetof(RotatePlank_BP_C_OnRep_RepZ, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'RotatePlank_BP_C_OnRep_RepZ::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_OnRep_RepZ, CallFunc_MakeRotator_ReturnValue) == 0x000008, "Member 'RotatePlank_BP_C_OnRep_RepZ::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotatePlank_BP_C_OnRep_RepZ, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000020, "Member 'RotatePlank_BP_C_OnRep_RepZ::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function RotatePlank_BP.RotatePlank_BP_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct RotatePlank_BP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotatePlank_BP_C_ReceiveTick) == 0x000004, "Wrong alignment on RotatePlank_BP_C_ReceiveTick");
static_assert(sizeof(RotatePlank_BP_C_ReceiveTick) == 0x000004, "Wrong size on RotatePlank_BP_C_ReceiveTick");
static_assert(offsetof(RotatePlank_BP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'RotatePlank_BP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
