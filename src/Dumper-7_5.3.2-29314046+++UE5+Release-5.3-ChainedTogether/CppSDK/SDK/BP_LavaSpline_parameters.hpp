#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LavaSpline

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_LavaSpline.BP_LavaSpline_C.ExecuteUbergraph_BP_LavaSpline
// 0x0004 (0x0004 - 0x0000)
struct BP_LavaSpline_C_ExecuteUbergraph_BP_LavaSpline final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LavaSpline_C_ExecuteUbergraph_BP_LavaSpline) == 0x000004, "Wrong alignment on BP_LavaSpline_C_ExecuteUbergraph_BP_LavaSpline");
static_assert(sizeof(BP_LavaSpline_C_ExecuteUbergraph_BP_LavaSpline) == 0x000004, "Wrong size on BP_LavaSpline_C_ExecuteUbergraph_BP_LavaSpline");
static_assert(offsetof(BP_LavaSpline_C_ExecuteUbergraph_BP_LavaSpline, EntryPoint) == 0x000000, "Member 'BP_LavaSpline_C_ExecuteUbergraph_BP_LavaSpline::EntryPoint' has a wrong offset!");

// Function BP_LavaSpline.BP_LavaSpline_C.UserConstructionScript
// 0x0130 (0x0130 - 0x0000)
struct BP_LavaSpline_C_UserConstructionScript final
{
public:
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9A[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9B[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9C[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue; // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1; // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1; // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9D[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast; // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast; // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast_1; // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LavaSpline_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_LavaSpline_C_UserConstructionScript");
static_assert(sizeof(BP_LavaSpline_C_UserConstructionScript) == 0x000130, "Wrong size on BP_LavaSpline_C_UserConstructionScript");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_GetSplineLength_ReturnValue) == 0x000000, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, Temp_struct_Variable) == 0x000010, "Member 'BP_LavaSpline_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_FTrunc_ReturnValue) == 0x000078, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000080, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, Temp_int_Variable) == 0x000088, "Member 'BP_LavaSpline_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000090, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000098, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0000A0, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue) == 0x0000A8, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1) == 0x0000C0, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue) == 0x0000D8, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1) == 0x0000F0, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000108, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000110, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast) == 0x000118, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast) == 0x00011C, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x000120, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_LavaSpline_C_UserConstructionScript, CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast_1) == 0x000124, "Member 'BP_LavaSpline_C_UserConstructionScript::CallFunc_GetTangentAtDistanceAlongSpline_Distance_ImplicitCast_1' has a wrong offset!");

}

