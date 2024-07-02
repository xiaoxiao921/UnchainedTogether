#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lava

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Lava.BP_Lava_C.ExecuteUbergraph_BP_Lava
// 0x0118 (0x0118 - 0x0000)
struct BP_Lava_C_ExecuteUbergraph_BP_Lava final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34CB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34CC[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_NewLocation;                    // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lava_C_ExecuteUbergraph_BP_Lava) == 0x000008, "Wrong alignment on BP_Lava_C_ExecuteUbergraph_BP_Lava");
static_assert(sizeof(BP_Lava_C_ExecuteUbergraph_BP_Lava) == 0x000118, "Wrong size on BP_Lava_C_ExecuteUbergraph_BP_Lava");
static_assert(offsetof(BP_Lava_C_ExecuteUbergraph_BP_Lava, EntryPoint) == 0x000000, "Member 'BP_Lava_C_ExecuteUbergraph_BP_Lava::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_ExecuteUbergraph_BP_Lava, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_Lava_C_ExecuteUbergraph_BP_Lava::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_ExecuteUbergraph_BP_Lava, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_Lava_C_ExecuteUbergraph_BP_Lava::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_ExecuteUbergraph_BP_Lava, K2Node_CustomEvent_NewLocation) == 0x000010, "Member 'BP_Lava_C_ExecuteUbergraph_BP_Lava::K2Node_CustomEvent_NewLocation' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_ExecuteUbergraph_BP_Lava, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000028, "Member 'BP_Lava_C_ExecuteUbergraph_BP_Lava::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_ExecuteUbergraph_BP_Lava, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000110, "Member 'BP_Lava_C_ExecuteUbergraph_BP_Lava::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_Lava.BP_Lava_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Lava_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lava_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Lava_C_ReceiveTick");
static_assert(sizeof(BP_Lava_C_ReceiveTick) == 0x000004, "Wrong size on BP_Lava_C_ReceiveTick");
static_assert(offsetof(BP_Lava_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Lava_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Lava.BP_Lava_C.ResetAll
// 0x0018 (0x0018 - 0x0000)
struct BP_Lava_C_ResetAll final
{
public:
	struct FVector                                NewLocation;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lava_C_ResetAll) == 0x000008, "Wrong alignment on BP_Lava_C_ResetAll");
static_assert(sizeof(BP_Lava_C_ResetAll) == 0x000018, "Wrong size on BP_Lava_C_ResetAll");
static_assert(offsetof(BP_Lava_C_ResetAll, NewLocation) == 0x000000, "Member 'BP_Lava_C_ResetAll::NewLocation' has a wrong offset!");

// Function BP_Lava.BP_Lava_C.UpdateHeight
// 0x01D8 (0x01D8 - 0x0000)
struct BP_Lava_C_UpdateHeight final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34CD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34CE[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34CF[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;          // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddActorWorldOffset_SweepHitResult;    // 0x00F0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Lava_C_UpdateHeight) == 0x000008, "Wrong alignment on BP_Lava_C_UpdateHeight");
static_assert(sizeof(BP_Lava_C_UpdateHeight) == 0x0001D8, "Wrong size on BP_Lava_C_UpdateHeight");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_Lava_C_UpdateHeight::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'BP_Lava_C_UpdateHeight::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_Lava_C_UpdateHeight::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'BP_Lava_C_UpdateHeight::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_Lava_C_UpdateHeight::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_MapRangeClamped_ReturnValue) == 0x000038, "Member 'BP_Lava_C_UpdateHeight::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_BreakVector_X) == 0x000040, "Member 'BP_Lava_C_UpdateHeight::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_BreakVector_Y) == 0x000048, "Member 'BP_Lava_C_UpdateHeight::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_BreakVector_Z) == 0x000050, "Member 'BP_Lava_C_UpdateHeight::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_GetPlayerPawn_ReturnValue) == 0x000058, "Member 'BP_Lava_C_UpdateHeight::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_Lava_C_UpdateHeight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000068, "Member 'BP_Lava_C_UpdateHeight::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_BreakVector_X_1) == 0x000080, "Member 'BP_Lava_C_UpdateHeight::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_BreakVector_Y_1) == 0x000088, "Member 'BP_Lava_C_UpdateHeight::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_BreakVector_Z_1) == 0x000090, "Member 'BP_Lava_C_UpdateHeight::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000098, "Member 'BP_Lava_C_UpdateHeight::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'BP_Lava_C_UpdateHeight::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_Conv_DoubleToString_ReturnValue) == 0x0000A8, "Member 'BP_Lava_C_UpdateHeight::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_MapRangeClamped_ReturnValue_1) == 0x0000B8, "Member 'BP_Lava_C_UpdateHeight::CallFunc_MapRangeClamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'BP_Lava_C_UpdateHeight::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000C8, "Member 'BP_Lava_C_UpdateHeight::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000D0, "Member 'BP_Lava_C_UpdateHeight::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_MakeVector_ReturnValue) == 0x0000D8, "Member 'BP_Lava_C_UpdateHeight::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateHeight, CallFunc_K2_AddActorWorldOffset_SweepHitResult) == 0x0000F0, "Member 'BP_Lava_C_UpdateHeight::CallFunc_K2_AddActorWorldOffset_SweepHitResult' has a wrong offset!");

// Function BP_Lava.BP_Lava_C.UpdateVolume
// 0x00A0 (0x00A0 - 0x0000)
struct BP_Lava_C_UpdateVolume final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D0[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lava_C_UpdateVolume) == 0x000008, "Wrong alignment on BP_Lava_C_UpdateVolume");
static_assert(sizeof(BP_Lava_C_UpdateVolume) == 0x0000A0, "Wrong size on BP_Lava_C_UpdateVolume");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'BP_Lava_C_UpdateVolume::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_GetPlayerPawn_ReturnValue) == 0x000018, "Member 'BP_Lava_C_UpdateVolume::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000020, "Member 'BP_Lava_C_UpdateVolume::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_Lava_C_UpdateVolume::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000028, "Member 'BP_Lava_C_UpdateVolume::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000040, "Member 'BP_Lava_C_UpdateVolume::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_BreakVector_X) == 0x000058, "Member 'BP_Lava_C_UpdateVolume::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_BreakVector_Y) == 0x000060, "Member 'BP_Lava_C_UpdateVolume::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_BreakVector_Z) == 0x000068, "Member 'BP_Lava_C_UpdateVolume::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_BreakVector_X_1) == 0x000070, "Member 'BP_Lava_C_UpdateVolume::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_BreakVector_Y_1) == 0x000078, "Member 'BP_Lava_C_UpdateVolume::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_BreakVector_Z_1) == 0x000080, "Member 'BP_Lava_C_UpdateVolume::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000088, "Member 'BP_Lava_C_UpdateVolume::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_MapRangeClamped_ReturnValue) == 0x000090, "Member 'BP_Lava_C_UpdateVolume::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UpdateVolume, CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast) == 0x000098, "Member 'BP_Lava_C_UpdateVolume::CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast' has a wrong offset!");

// Function BP_Lava.BP_Lava_C.UserConstructionScript
// 0x0280 (0x0280 - 0x0000)
struct BP_Lava_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D3[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D4[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0100(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    CallFunc_AddComponent_ReturnValue;                 // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0168(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D5[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstance_ReturnValue;                  // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D6[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast; // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;   // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Lava_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_Lava_C_UserConstructionScript");
static_assert(sizeof(BP_Lava_C_UserConstructionScript) == 0x000280, "Wrong size on BP_Lava_C_UserConstructionScript");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'BP_Lava_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000030, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, Temp_int_Variable_1) == 0x000050, "Member 'BP_Lava_C_UserConstructionScript::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000058, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000060, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000070, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue_1) == 0x000088, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue_1) == 0x000100, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000160, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000168, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000250, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000254, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_AddInstance_ReturnValue) == 0x000258, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_AddInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast) == 0x000260, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000268, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Lava_C_UserConstructionScript, CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1) == 0x000270, "Member 'BP_Lava_C_UserConstructionScript::CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");

}

