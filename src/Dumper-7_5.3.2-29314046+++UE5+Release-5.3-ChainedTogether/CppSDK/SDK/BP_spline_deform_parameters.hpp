#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_spline_deform

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_spline_deform.BP_spline_deform_C.UserConstructionScript
// 0x0100 (0x0100 - 0x0000)
struct BP_spline_deform_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_377C[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_377D[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_377E[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_377F[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3780[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTangentAtSplinePoint_ReturnValue;      // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3781[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtSplinePoint_ReturnValue_1;    // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_spline_deform_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_spline_deform_C_UserConstructionScript");
static_assert(sizeof(BP_spline_deform_C_UserConstructionScript) == 0x000100, "Wrong size on BP_spline_deform_C_UserConstructionScript");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'BP_spline_deform_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, Temp_struct_Variable) == 0x000010, "Member 'BP_spline_deform_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000078, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000080, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000084, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000088, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_K2_AttachToComponent_ReturnValue) == 0x00008C, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x000090, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_GetTangentAtSplinePoint_ReturnValue) == 0x000098, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_GetTangentAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x0000B8, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_GetTangentAtSplinePoint_ReturnValue_1) == 0x0000D0, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_GetTangentAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_spline_deform_C_UserConstructionScript, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x0000E8, "Member 'BP_spline_deform_C_UserConstructionScript::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");

}

