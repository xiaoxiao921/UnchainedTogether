#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PassingTrain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PassingTrain.BP_PassingTrain_C.ExecuteUbergraph_BP_PassingTrain
// 0x03C8 (0x03C8 - 0x0000)
struct BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D00[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D01[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D02[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0070(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D03[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character;                // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D04[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x00D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x01C0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_2;     // 0x02C0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x03A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain) == 0x000008, "Wrong alignment on BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain");
static_assert(sizeof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain) == 0x0003C8, "Wrong size on BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, EntryPoint) == 0x000000, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000020, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_HasAuthority_ReturnValue) == 0x000038, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, Temp_int_Array_Index_Variable) == 0x000044, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_VLerp_ReturnValue) == 0x000050, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, K2Node_Event_DeltaSeconds) == 0x000068, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000070, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_Array_Get_Item) == 0x000080, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, K2Node_DynamicCast_AsBPI_Character) == 0x000090, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::K2Node_DynamicCast_AsBPI_Character' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_Less_IntInt_ReturnValue) == 0x0000A1, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_GetForwardVector_ReturnValue) == 0x0000A8, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000C0, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0000D8, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x0001C0, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0002A8, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_K2_SetWorldLocation_SweepHitResult_2) == 0x0002C0, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_K2_SetWorldLocation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_K2_GetComponentRotation_ReturnValue_1) == 0x0003A8, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_K2_GetComponentRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x0003C0, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x0003C4, "Member 'BP_PassingTrain_C_ExecuteUbergraph_BP_PassingTrain::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

// Function BP_PassingTrain.BP_PassingTrain_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PassingTrain_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PassingTrain_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PassingTrain_C_ReceiveTick");
static_assert(sizeof(BP_PassingTrain_C_ReceiveTick) == 0x000004, "Wrong size on BP_PassingTrain_C_ReceiveTick");
static_assert(offsetof(BP_PassingTrain_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PassingTrain_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
