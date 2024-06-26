#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Aimant

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Aimant.BP_Aimant_C.CalculateForce
// 0x00E0 (0x00E0 - 0x0000)
struct BP_Aimant_C_CalculateForce final
{
public:
	class AActor*                                 Self2;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Force;                                             // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetDirectionUnitVector_ReturnValue;       // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Aimant_C_CalculateForce) == 0x000008, "Wrong alignment on BP_Aimant_C_CalculateForce");
static_assert(sizeof(BP_Aimant_C_CalculateForce) == 0x0000E0, "Wrong size on BP_Aimant_C_CalculateForce");
static_assert(offsetof(BP_Aimant_C_CalculateForce, Self2) == 0x000000, "Member 'BP_Aimant_C_CalculateForce::Self2' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, Force) == 0x000008, "Member 'BP_Aimant_C_CalculateForce::Force' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_Aimant_C_CalculateForce::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000038, "Member 'BP_Aimant_C_CalculateForce::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_GetDirectionUnitVector_ReturnValue) == 0x000050, "Member 'BP_Aimant_C_CalculateForce::CallFunc_GetDirectionUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000068, "Member 'BP_Aimant_C_CalculateForce::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000080, "Member 'BP_Aimant_C_CalculateForce::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_BreakVector_X) == 0x000098, "Member 'BP_Aimant_C_CalculateForce::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_BreakVector_Y) == 0x0000A0, "Member 'BP_Aimant_C_CalculateForce::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_BreakVector_Z) == 0x0000A8, "Member 'BP_Aimant_C_CalculateForce::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_BreakVector_X_1) == 0x0000B0, "Member 'BP_Aimant_C_CalculateForce::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_BreakVector_Y_1) == 0x0000B8, "Member 'BP_Aimant_C_CalculateForce::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_BreakVector_Z_1) == 0x0000C0, "Member 'BP_Aimant_C_CalculateForce::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_CalculateForce, CallFunc_MakeVector_ReturnValue) == 0x0000C8, "Member 'BP_Aimant_C_CalculateForce::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function BP_Aimant.BP_Aimant_C.ExecuteUbergraph_BP_Aimant
// 0x00F8 (0x00F8 - 0x0000)
struct BP_Aimant_C_ExecuteUbergraph_BP_Aimant final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4C[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0020(0x0010)(ReferenceParm)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors_1; // 0x0030(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MetallicObject_C> K2Node_DynamicCast_AsBPI_Metallic_Object;          // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4E[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character;                // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4F[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_CalculateForce_Force;                     // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalculateForce_Force_1;                   // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B50[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B51[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MoveCylinder_Alpha_ImplicitCast;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant) == 0x000008, "Wrong alignment on BP_Aimant_C_ExecuteUbergraph_BP_Aimant");
static_assert(sizeof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant) == 0x0000F8, "Wrong size on BP_Aimant_C_ExecuteUbergraph_BP_Aimant");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, EntryPoint) == 0x000000, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_HasAuthority_ReturnValue) == 0x000014, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000020, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_GetOverlappingActors_OverlappingActors_1) == 0x000030, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_GetOverlappingActors_OverlappingActors_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, K2Node_DynamicCast_AsBPI_Metallic_Object) == 0x000050, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::K2Node_DynamicCast_AsBPI_Metallic_Object' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, K2Node_DynamicCast_AsBPI_Character) == 0x000068, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::K2Node_DynamicCast_AsBPI_Character' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_CalculateForce_Force) == 0x000080, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_CalculateForce_Force' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_CalculateForce_Force_1) == 0x000098, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_CalculateForce_Force_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000B0, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Array_Length_ReturnValue_1) == 0x0000CC, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, Temp_int_Loop_Counter_Variable_1) == 0x0000D4, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D8, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000DC, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_MoveCylinder_Alpha_ImplicitCast) == 0x0000E8, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_MoveCylinder_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_ExecuteUbergraph_BP_Aimant, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x0000F0, "Member 'BP_Aimant_C_ExecuteUbergraph_BP_Aimant::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

// Function BP_Aimant.BP_Aimant_C.MoveCylinder
// 0x0158 (0x0158 - 0x0000)
struct BP_Aimant_C_MoveCylinder final
{
public:
	double                                        Alpha;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0068(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Aimant_C_MoveCylinder) == 0x000008, "Wrong alignment on BP_Aimant_C_MoveCylinder");
static_assert(sizeof(BP_Aimant_C_MoveCylinder) == 0x000158, "Wrong size on BP_Aimant_C_MoveCylinder");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, Alpha) == 0x000000, "Member 'BP_Aimant_C_MoveCylinder::Alpha' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_BreakVector_X) == 0x000008, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_BreakVector_Y) == 0x000010, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_BreakVector_Z) == 0x000018, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_BreakVector_X_1) == 0x000020, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_BreakVector_Y_1) == 0x000028, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_BreakVector_Z_1) == 0x000030, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_MakeVector_ReturnValue) == 0x000038, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_VLerp_ReturnValue) == 0x000050, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000068, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Aimant_C_MoveCylinder, CallFunc_VLerp_Alpha_ImplicitCast) == 0x000150, "Member 'BP_Aimant_C_MoveCylinder::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");

// Function BP_Aimant.BP_Aimant_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Aimant_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Aimant_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Aimant_C_ReceiveTick");
static_assert(sizeof(BP_Aimant_C_ReceiveTick) == 0x000004, "Wrong size on BP_Aimant_C_ReceiveTick");
static_assert(offsetof(BP_Aimant_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Aimant_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

