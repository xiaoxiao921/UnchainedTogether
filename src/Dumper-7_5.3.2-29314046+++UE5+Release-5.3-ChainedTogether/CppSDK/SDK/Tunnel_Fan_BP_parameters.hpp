#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tunnel_Fan_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Tunnel_Fan_BP.Tunnel_Fan_BP_C.ExecuteUbergraph_Tunnel_Fan_BP
// 0x0148 (0x0148 - 0x0000)
struct Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D37[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0048(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;            // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP) == 0x000008, "Wrong alignment on Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP");
static_assert(sizeof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP) == 0x000148, "Wrong size on Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, EntryPoint) == 0x000000, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000010, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_BreakRotator_Roll) == 0x000018, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_BreakRotator_Pitch) == 0x00001C, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_BreakRotator_Yaw) == 0x000020, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000028, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_MakeRotator_ReturnValue) == 0x000030, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000048, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000130, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000138, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000140, "Member 'Tunnel_Fan_BP_C_ExecuteUbergraph_Tunnel_Fan_BP::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");

// Function Tunnel_Fan_BP.Tunnel_Fan_BP_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Tunnel_Fan_BP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tunnel_Fan_BP_C_ReceiveTick) == 0x000004, "Wrong alignment on Tunnel_Fan_BP_C_ReceiveTick");
static_assert(sizeof(Tunnel_Fan_BP_C_ReceiveTick) == 0x000004, "Wrong size on Tunnel_Fan_BP_C_ReceiveTick");
static_assert(offsetof(Tunnel_Fan_BP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Tunnel_Fan_BP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

