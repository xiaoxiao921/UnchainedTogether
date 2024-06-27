#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PivotStoneWall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PivotStoneWall.BP_PivotStoneWall_C.ExecuteUbergraph_BP_PivotStoneWall
// 0x02A0 (0x02A0 - 0x0000)
struct BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB1[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_Axis;                                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Target_C>         K2Node_DynamicCast_AsBPI_Target;                   // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB2[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Touched_Touched;                          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB3[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0088(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB4[0x2];                                     // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x0198(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0298(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall) == 0x000008, "Wrong alignment on BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall");
static_assert(sizeof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall) == 0x0002A0, "Wrong size on BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, EntryPoint) == 0x000000, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_HasAuthority_ReturnValue_1) == 0x000011, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, K2Node_Event_Axis) == 0x000018, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::K2Node_Event_Axis' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_BreakVector_X) == 0x000020, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_BreakVector_Y) == 0x000028, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_BreakVector_Z) == 0x000030, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_FClamp_ReturnValue) == 0x000048, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, K2Node_DynamicCast_AsBPI_Target) == 0x000050, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::K2Node_DynamicCast_AsBPI_Target' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_MakeVector_ReturnValue) == 0x000068, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_Touched_Touched) == 0x000080, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_Touched_Touched' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000088, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_Array_Length_ReturnValue) == 0x000170, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, Temp_int_Variable) == 0x000174, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_Less_IntInt_ReturnValue) == 0x000178, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000179, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_Add_IntInt_ReturnValue_1) == 0x00017C, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_VLerp_ReturnValue) == 0x000180, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x000198, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000280, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000298, "Member 'BP_PivotStoneWall_C_ExecuteUbergraph_BP_PivotStoneWall::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");

// Function BP_PivotStoneWall.BP_PivotStoneWall_C.GetPivotAlpha
// 0x0028 (0x0028 - 0x0000)
struct BP_PivotStoneWall_C_GetPivotAlpha final
{
public:
	double                                        Alpha;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PivotStoneWall_C_GetPivotAlpha) == 0x000008, "Wrong alignment on BP_PivotStoneWall_C_GetPivotAlpha");
static_assert(sizeof(BP_PivotStoneWall_C_GetPivotAlpha) == 0x000028, "Wrong size on BP_PivotStoneWall_C_GetPivotAlpha");
static_assert(offsetof(BP_PivotStoneWall_C_GetPivotAlpha, Alpha) == 0x000000, "Member 'BP_PivotStoneWall_C_GetPivotAlpha::Alpha' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_GetPivotAlpha, CallFunc_BreakVector_X) == 0x000008, "Member 'BP_PivotStoneWall_C_GetPivotAlpha::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_GetPivotAlpha, CallFunc_BreakVector_Y) == 0x000010, "Member 'BP_PivotStoneWall_C_GetPivotAlpha::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_GetPivotAlpha, CallFunc_BreakVector_Z) == 0x000018, "Member 'BP_PivotStoneWall_C_GetPivotAlpha::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_GetPivotAlpha, CallFunc_MapRangeClamped_ReturnValue) == 0x000020, "Member 'BP_PivotStoneWall_C_GetPivotAlpha::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");

// Function BP_PivotStoneWall.BP_PivotStoneWall_C.IsActivated
// 0x0001 (0x0001 - 0x0000)
struct BP_PivotStoneWall_C_IsActivated final
{
public:
	bool                                          Activated;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PivotStoneWall_C_IsActivated) == 0x000001, "Wrong alignment on BP_PivotStoneWall_C_IsActivated");
static_assert(sizeof(BP_PivotStoneWall_C_IsActivated) == 0x000001, "Wrong size on BP_PivotStoneWall_C_IsActivated");
static_assert(offsetof(BP_PivotStoneWall_C_IsActivated, Activated) == 0x000000, "Member 'BP_PivotStoneWall_C_IsActivated::Activated' has a wrong offset!");

// Function BP_PivotStoneWall.BP_PivotStoneWall_C.OnPivot
// 0x0008 (0x0008 - 0x0000)
struct BP_PivotStoneWall_C_OnPivot final
{
public:
	double                                        Axis;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PivotStoneWall_C_OnPivot) == 0x000008, "Wrong alignment on BP_PivotStoneWall_C_OnPivot");
static_assert(sizeof(BP_PivotStoneWall_C_OnPivot) == 0x000008, "Wrong size on BP_PivotStoneWall_C_OnPivot");
static_assert(offsetof(BP_PivotStoneWall_C_OnPivot, Axis) == 0x000000, "Member 'BP_PivotStoneWall_C_OnPivot::Axis' has a wrong offset!");

// Function BP_PivotStoneWall.BP_PivotStoneWall_C.UserConstructionScript
// 0x0108 (0x0108 - 0x0000)
struct BP_PivotStoneWall_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB5[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0020(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PivotStoneWall_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_PivotStoneWall_C_UserConstructionScript");
static_assert(sizeof(BP_PivotStoneWall_C_UserConstructionScript) == 0x000108, "Wrong size on BP_PivotStoneWall_C_UserConstructionScript");
static_assert(offsetof(BP_PivotStoneWall_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000000, "Member 'BP_PivotStoneWall_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000018, "Member 'BP_PivotStoneWall_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PivotStoneWall_C_UserConstructionScript, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000020, "Member 'BP_PivotStoneWall_C_UserConstructionScript::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}
