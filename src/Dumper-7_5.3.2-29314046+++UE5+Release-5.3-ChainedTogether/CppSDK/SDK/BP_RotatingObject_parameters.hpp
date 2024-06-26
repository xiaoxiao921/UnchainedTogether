#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RotatingObject

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_RotatingObject.BP_RotatingObject_C.ExecuteUbergraph_BP_RotatingObject
// 0x0160 (0x0160 - 0x0000)
struct BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A87[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A88[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A89[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A8A[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddActorLocalRotation_SweepHitResult;  // 0x0068(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject) == 0x000008, "Wrong alignment on BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject");
static_assert(sizeof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject) == 0x000160, "Wrong size on BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, EntryPoint) == 0x000000, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, K2Node_Event_DeltaSeconds) == 0x000040, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, CallFunc_MakeRotator_ReturnValue) == 0x000050, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, CallFunc_K2_AddActorLocalRotation_SweepHitResult) == 0x000068, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::CallFunc_K2_AddActorLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000150, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000158, "Member 'BP_RotatingObject_C_ExecuteUbergraph_BP_RotatingObject::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_RotatingObject.BP_RotatingObject_C.OnRep_RepRot
// 0x0002 (0x0002 - 0x0000)
struct BP_RotatingObject_C_OnRep_RepRot final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RotatingObject_C_OnRep_RepRot) == 0x000001, "Wrong alignment on BP_RotatingObject_C_OnRep_RepRot");
static_assert(sizeof(BP_RotatingObject_C_OnRep_RepRot) == 0x000002, "Wrong size on BP_RotatingObject_C_OnRep_RepRot");
static_assert(offsetof(BP_RotatingObject_C_OnRep_RepRot, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_RotatingObject_C_OnRep_RepRot::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RotatingObject_C_OnRep_RepRot, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000001, "Member 'BP_RotatingObject_C_OnRep_RepRot::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

// Function BP_RotatingObject.BP_RotatingObject_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_RotatingObject_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RotatingObject_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_RotatingObject_C_ReceiveTick");
static_assert(sizeof(BP_RotatingObject_C_ReceiveTick) == 0x000004, "Wrong size on BP_RotatingObject_C_ReceiveTick");
static_assert(offsetof(BP_RotatingObject_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_RotatingObject_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

