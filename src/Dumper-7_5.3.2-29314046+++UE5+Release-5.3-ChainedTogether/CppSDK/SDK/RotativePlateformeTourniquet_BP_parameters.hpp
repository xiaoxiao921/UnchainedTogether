#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotativePlateformeTourniquet_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function RotativePlateformeTourniquet_BP.RotativePlateformeTourniquet_BP_C.ExecuteUbergraph_RotativePlateformeTourniquet_BP
// 0x0150 (0x0150 - 0x0000)
struct RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_393B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_393C[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_393D[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_Axis;                                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0060(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP) == 0x000008, "Wrong alignment on RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP");
static_assert(sizeof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP) == 0x000150, "Wrong size on RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, EntryPoint) == 0x000000, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000008, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, Temp_int_Array_Index_Variable) == 0x000028, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_HasAuthority_ReturnValue) == 0x00002C, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_Array_Get_Item) == 0x000030, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, K2Node_Event_Axis) == 0x000038, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::K2Node_Event_Axis' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_MakeRotator_ReturnValue) == 0x000048, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000060, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000148, "Member 'RotativePlateformeTourniquet_BP_C_ExecuteUbergraph_RotativePlateformeTourniquet_BP::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function RotativePlateformeTourniquet_BP.RotativePlateformeTourniquet_BP_C.GetPivotAlpha
// 0x0008 (0x0008 - 0x0000)
struct RotativePlateformeTourniquet_BP_C_GetPivotAlpha final
{
public:
	double                                        Alpha;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotativePlateformeTourniquet_BP_C_GetPivotAlpha) == 0x000008, "Wrong alignment on RotativePlateformeTourniquet_BP_C_GetPivotAlpha");
static_assert(sizeof(RotativePlateformeTourniquet_BP_C_GetPivotAlpha) == 0x000008, "Wrong size on RotativePlateformeTourniquet_BP_C_GetPivotAlpha");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_GetPivotAlpha, Alpha) == 0x000000, "Member 'RotativePlateformeTourniquet_BP_C_GetPivotAlpha::Alpha' has a wrong offset!");

// Function RotativePlateformeTourniquet_BP.RotativePlateformeTourniquet_BP_C.OnPivot
// 0x0008 (0x0008 - 0x0000)
struct RotativePlateformeTourniquet_BP_C_OnPivot final
{
public:
	double                                        Axis;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotativePlateformeTourniquet_BP_C_OnPivot) == 0x000008, "Wrong alignment on RotativePlateformeTourniquet_BP_C_OnPivot");
static_assert(sizeof(RotativePlateformeTourniquet_BP_C_OnPivot) == 0x000008, "Wrong size on RotativePlateformeTourniquet_BP_C_OnPivot");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_OnPivot, Axis) == 0x000000, "Member 'RotativePlateformeTourniquet_BP_C_OnPivot::Axis' has a wrong offset!");

// Function RotativePlateformeTourniquet_BP.RotativePlateformeTourniquet_BP_C.UserConstructionScript
// 0x0040 (0x0040 - 0x0000)
struct RotativePlateformeTourniquet_BP_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_393E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_393F[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3940[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RotativePlateformeTourniquet_BP_C_UserConstructionScript) == 0x000008, "Wrong alignment on RotativePlateformeTourniquet_BP_C_UserConstructionScript");
static_assert(sizeof(RotativePlateformeTourniquet_BP_C_UserConstructionScript) == 0x000040, "Wrong size on RotativePlateformeTourniquet_BP_C_UserConstructionScript");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'RotativePlateformeTourniquet_BP_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'RotativePlateformeTourniquet_BP_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'RotativePlateformeTourniquet_BP_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_UserConstructionScript, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000010, "Member 'RotativePlateformeTourniquet_BP_C_UserConstructionScript::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'RotativePlateformeTourniquet_BP_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000028, "Member 'RotativePlateformeTourniquet_BP_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'RotativePlateformeTourniquet_BP_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RotativePlateformeTourniquet_BP_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000038, "Member 'RotativePlateformeTourniquet_BP_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

