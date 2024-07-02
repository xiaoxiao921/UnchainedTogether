#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThirdPerson_AnimBP_Torch

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK::Params
{

// Function ThirdPerson_AnimBP_Torch.ThirdPerson_AnimBP_Torch_C.ExecuteUbergraph_ThirdPerson_AnimBP_Torch
// 0x02E0 (0x02E0 - 0x0000)
struct ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD[0x4];                                       // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DE[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DF[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E0[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_2;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class Abp_ThirdPersonCharacter_SF_C*          K2Node_DynamicCast_AsBp_Third_Person_Character_SF; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E3[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable_3;                            // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_4;                            // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1; // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E5[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00F8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E6[0x1];                                       // 0x01E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E7[0x4];                                       // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0260(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E8[0x4];                                       // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_GetSurfaceType_ReturnValue;               // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_Select_Default;                             // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Set_Item_ImplicitCast;              // 0x02D0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x4];                                       // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast_1;       // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch) == 0x000008, "Wrong alignment on ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch");
static_assert(sizeof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch) == 0x0002E0, "Wrong size on ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, EntryPoint) == 0x000000, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::EntryPoint' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, Temp_object_Variable) == 0x000008, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, Temp_byte_Variable) == 0x000010, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, Temp_object_Variable_1) == 0x000018, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue) == 0x000020, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000030, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, K2Node_Event_DeltaTimeX) == 0x000034, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000038, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, Temp_object_Variable_2) == 0x000040, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, K2Node_DynamicCast_AsBp_Third_Person_Character_SF) == 0x000050, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::K2Node_DynamicCast_AsBp_Third_Person_Character_SF' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_GetVelocity_ReturnValue) == 0x000060, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_VSize_ReturnValue) == 0x000078, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, K2Node_SwitchEnum_CmpSuccess) == 0x000080, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_GetMovementComponent_ReturnValue) == 0x000088, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_IsFalling_ReturnValue) == 0x000090, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, Temp_object_Variable_3) == 0x000098, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, Temp_object_Variable_4) == 0x0000A0, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1) == 0x0000A8, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x0000AC, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x0000B0, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, K2Node_MakeArray_Array) == 0x0000B8, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C8, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_Add_VectorVector_ReturnValue) == 0x0000E0, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_LineTraceSingle_OutHit) == 0x0000F8, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_LineTraceSingle_ReturnValue) == 0x0001E0, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_bBlockingHit) == 0x0001E1, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001E2, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_Time) == 0x0001E4, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_Distance) == 0x0001E8, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_Location) == 0x0001F0, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_ImpactPoint) == 0x000208, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_Normal) == 0x000220, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_ImpactNormal) == 0x000238, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_PhysMat) == 0x000250, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_HitActor) == 0x000258, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_HitComponent) == 0x000260, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_HitBoneName) == 0x000268, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_BoneName) == 0x000270, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_HitItem) == 0x000278, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_ElementIndex) == 0x00027C, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_FaceIndex) == 0x000280, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_TraceStart) == 0x000288, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_BreakHitResult_TraceEnd) == 0x0002A0, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_GetSurfaceType_ReturnValue) == 0x0002B8, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_GetSurfaceType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, K2Node_Select_Default) == 0x0002C0, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x0002C8, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_Array_Set_Item_ImplicitCast) == 0x0002D0, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_Array_Set_Item_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch, CallFunc_Less_DoubleDouble_A_ImplicitCast_1) == 0x0002D8, "Member 'ThirdPerson_AnimBP_Torch_C_ExecuteUbergraph_ThirdPerson_AnimBP_Torch::CallFunc_Less_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

// Function ThirdPerson_AnimBP_Torch.ThirdPerson_AnimBP_Torch_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ThirdPerson_AnimBP_Torch_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ThirdPerson_AnimBP_Torch_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ThirdPerson_AnimBP_Torch_C_BlueprintUpdateAnimation");
static_assert(sizeof(ThirdPerson_AnimBP_Torch_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ThirdPerson_AnimBP_Torch_C_BlueprintUpdateAnimation");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ThirdPerson_AnimBP_Torch_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ThirdPerson_AnimBP_Torch.ThirdPerson_AnimBP_Torch_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ThirdPerson_AnimBP_Torch_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ThirdPerson_AnimBP_Torch_C_AnimGraph) == 0x000008, "Wrong alignment on ThirdPerson_AnimBP_Torch_C_AnimGraph");
static_assert(sizeof(ThirdPerson_AnimBP_Torch_C_AnimGraph) == 0x000010, "Wrong size on ThirdPerson_AnimBP_Torch_C_AnimGraph");
static_assert(offsetof(ThirdPerson_AnimBP_Torch_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ThirdPerson_AnimBP_Torch_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

