#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Elevator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Elevator.BP_Elevator_C.ExecuteUbergraph_BP_Elevator
// 0x0570 (0x0570 - 0x0000)
struct BP_Elevator_C_ExecuteUbergraph_BP_Elevator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0008(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB8[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateTurn_TurnRate;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_ReturnValue;                    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue; // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB9[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddRelativeLocation_SweepHitResult;    // 0x00B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_BreakVector_X_2;                          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_3;                          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_3;                          // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_3;                          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue_1; // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABA[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_4;                          // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_4;                          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_4;                          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_2;       // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_3;       // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddRelativeLocation_SweepHitResult_1;  // 0x0258(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0340(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABB[0x7];                                     // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_5;                          // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_5;                          // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_5;                          // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_6;                          // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_6;                          // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_6;                          // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0468(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0480(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0568(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator) == 0x000008, "Wrong alignment on BP_Elevator_C_ExecuteUbergraph_BP_Elevator");
static_assert(sizeof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator) == 0x000570, "Wrong size on BP_Elevator_C_ExecuteUbergraph_BP_Elevator");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, EntryPoint) == 0x000000, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000008, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Array_IsEmpty_ReturnValue) == 0x000018, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_UpdateTurn_TurnRate) == 0x000020, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_UpdateTurn_TurnRate' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000028, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_FInterpTo_ReturnValue) == 0x000030, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue) == 0x000038, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X) == 0x000050, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y) == 0x000058, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z) == 0x000060, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X_1) == 0x000070, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y_1) == 0x000078, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z_1) == 0x000080, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000088, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000090, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000098, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_MakeVector_ReturnValue) == 0x0000A0, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_AddRelativeLocation_SweepHitResult) == 0x0000B8, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_AddRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X_2) == 0x0001A0, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y_2) == 0x0001A8, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z_2) == 0x0001B0, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X_3) == 0x0001B8, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y_3) == 0x0001C0, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z_3) == 0x0001C8, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue_1) == 0x0001D0, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001E8, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X_4) == 0x0001F0, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X_4' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y_4) == 0x0001F8, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y_4' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z_4) == 0x000200, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z_4' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_GetWorldDeltaSeconds_ReturnValue_2) == 0x000208, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_GetWorldDeltaSeconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_GetWorldDeltaSeconds_ReturnValue_3) == 0x000210, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_GetWorldDeltaSeconds_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000218, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000220, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_MakeVector_ReturnValue_1) == 0x000228, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_MakeRotator_ReturnValue) == 0x000240, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_AddRelativeLocation_SweepHitResult_1) == 0x000258, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_AddRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000340, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000428, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X_5) == 0x000430, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X_5' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y_5) == 0x000438, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y_5' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z_5) == 0x000440, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z_5' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_X_6) == 0x000448, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_X_6' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Y_6) == 0x000450, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Y_6' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_BreakVector_Z_6) == 0x000458, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_BreakVector_Z_6' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_FClamp_ReturnValue) == 0x000460, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_MakeVector_ReturnValue_2) == 0x000468, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000480, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_ExecuteUbergraph_BP_Elevator, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000568, "Member 'BP_Elevator_C_ExecuteUbergraph_BP_Elevator::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_Elevator.BP_Elevator_C.IsSomeoneInside
// 0x0040 (0x0040 - 0x0000)
struct BP_Elevator_C_IsSomeoneInside final
{
public:
	TArray<class UBoxComponent*>                  Boxes;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABC[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0028(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABD[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Elevator_C_IsSomeoneInside) == 0x000008, "Wrong alignment on BP_Elevator_C_IsSomeoneInside");
static_assert(sizeof(BP_Elevator_C_IsSomeoneInside) == 0x000040, "Wrong size on BP_Elevator_C_IsSomeoneInside");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, Boxes) == 0x000000, "Member 'BP_Elevator_C_IsSomeoneInside::Boxes' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, ReturnValue) == 0x000010, "Member 'BP_Elevator_C_IsSomeoneInside::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'BP_Elevator_C_IsSomeoneInside::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_Elevator_C_IsSomeoneInside::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_Elevator_C_IsSomeoneInside::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_Elevator_C_IsSomeoneInside::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000028, "Member 'BP_Elevator_C_IsSomeoneInside::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BP_Elevator_C_IsSomeoneInside::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, CallFunc_Array_IsEmpty_ReturnValue) == 0x000039, "Member 'BP_Elevator_C_IsSomeoneInside::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_IsSomeoneInside, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'BP_Elevator_C_IsSomeoneInside::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Elevator.BP_Elevator_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Elevator_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Elevator_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Elevator_C_ReceiveTick");
static_assert(sizeof(BP_Elevator_C_ReceiveTick) == 0x000004, "Wrong size on BP_Elevator_C_ReceiveTick");
static_assert(offsetof(BP_Elevator_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Elevator_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Elevator.BP_Elevator_C.UpdateTurn
// 0x00A0 (0x00A0 - 0x0000)
struct BP_Elevator_C_UpdateTurn final
{
public:
	double                                        Param_TurnRate;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewLocalVar;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABE[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ABF[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBoxComponent*>                  K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsSomeoneInside_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC0[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBoxComponent*>                  K2Node_MakeArray_Array_1;                          // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_IsSomeoneInside_ReturnValue_1;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Elevator_C_UpdateTurn) == 0x000008, "Wrong alignment on BP_Elevator_C_UpdateTurn");
static_assert(sizeof(BP_Elevator_C_UpdateTurn) == 0x0000A0, "Wrong size on BP_Elevator_C_UpdateTurn");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, Param_TurnRate) == 0x000000, "Member 'BP_Elevator_C_UpdateTurn::Param_TurnRate' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, NewLocalVar) == 0x000008, "Member 'BP_Elevator_C_UpdateTurn::NewLocalVar' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_BreakVector_X) == 0x000010, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_BreakVector_Y) == 0x000018, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_BreakVector_Z) == 0x000020, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_BreakVector_X_1) == 0x000030, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_BreakVector_Y_1) == 0x000038, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_BreakVector_Z_1) == 0x000040, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_BreakVector_X_2) == 0x000048, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_BreakVector_Y_2) == 0x000050, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_BreakVector_Z_2) == 0x000058, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, K2Node_MakeArray_Array) == 0x000070, "Member 'BP_Elevator_C_UpdateTurn::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_IsSomeoneInside_ReturnValue) == 0x000080, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_IsSomeoneInside_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, K2Node_MakeArray_Array_1) == 0x000088, "Member 'BP_Elevator_C_UpdateTurn::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateTurn, CallFunc_IsSomeoneInside_ReturnValue_1) == 0x000098, "Member 'BP_Elevator_C_UpdateTurn::CallFunc_IsSomeoneInside_ReturnValue_1' has a wrong offset!");

// Function BP_Elevator.BP_Elevator_C.UpdateVolume
// 0x0050 (0x0050 - 0x0000)
struct BP_Elevator_C_UpdateVolume final
{
public:
	struct FVector                                CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue; // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast; // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Elevator_C_UpdateVolume) == 0x000008, "Wrong alignment on BP_Elevator_C_UpdateVolume");
static_assert(sizeof(BP_Elevator_C_UpdateVolume) == 0x000050, "Wrong size on BP_Elevator_C_UpdateVolume");
static_assert(offsetof(BP_Elevator_C_UpdateVolume, CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue) == 0x000000, "Member 'BP_Elevator_C_UpdateVolume::CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateVolume, CallFunc_BreakVector_X) == 0x000018, "Member 'BP_Elevator_C_UpdateVolume::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateVolume, CallFunc_BreakVector_Y) == 0x000020, "Member 'BP_Elevator_C_UpdateVolume::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateVolume, CallFunc_BreakVector_Z) == 0x000028, "Member 'BP_Elevator_C_UpdateVolume::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateVolume, CallFunc_Abs_ReturnValue) == 0x000030, "Member 'BP_Elevator_C_UpdateVolume::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateVolume, CallFunc_MapRangeClamped_ReturnValue) == 0x000038, "Member 'BP_Elevator_C_UpdateVolume::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateVolume, CallFunc_MapRangeClamped_ReturnValue_1) == 0x000040, "Member 'BP_Elevator_C_UpdateVolume::CallFunc_MapRangeClamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateVolume, CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast) == 0x000048, "Member 'BP_Elevator_C_UpdateVolume::CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UpdateVolume, CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast) == 0x00004C, "Member 'BP_Elevator_C_UpdateVolume::CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast' has a wrong offset!");

// Function BP_Elevator.BP_Elevator_C.UserConstructionScript
// 0x0100 (0x0100 - 0x0000)
struct BP_Elevator_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0018(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Elevator_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Elevator_C_UserConstructionScript");
static_assert(sizeof(BP_Elevator_C_UserConstructionScript) == 0x000100, "Wrong size on BP_Elevator_C_UserConstructionScript");
static_assert(offsetof(BP_Elevator_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000000, "Member 'BP_Elevator_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Elevator_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000018, "Member 'BP_Elevator_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

