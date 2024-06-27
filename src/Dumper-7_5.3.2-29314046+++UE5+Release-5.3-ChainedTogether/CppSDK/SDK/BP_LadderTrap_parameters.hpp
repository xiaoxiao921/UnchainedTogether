#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LadderTrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_LadderTrap.BP_LadderTrap_C.BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA7[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_LadderTrap_C_BndEvt__BP_LadderTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_LadderTrap.BP_LadderTrap_C.ExecuteUbergraph_BP_LadderTrap
// 0x0308 (0x0308 - 0x0000)
struct BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA9[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0060(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetPlaybackPosition_ReturnValue;          // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CAA[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CAB[0x3];                                     // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0170(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlaybackPosition_ReturnValue_1;        // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CAC[0x3];                                     // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Character_C*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x02B8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CAD[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        CallFunc_Array_Get_Item;                           // 0x02D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CAE[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character;                // 0x02E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CAF[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPlaybackPosition_NewPosition_ImplicitCast; // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap) == 0x000008, "Wrong alignment on BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap");
static_assert(sizeof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap) == 0x000308, "Wrong size on BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, EntryPoint) == 0x000000, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000008, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_HasAuthority_ReturnValue) == 0x000038, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, Temp_int_Array_Index_Variable) == 0x000044, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_VLerp_ReturnValue) == 0x000048, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000060, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_GetPlaybackPosition_ReturnValue) == 0x000148, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_GetPlaybackPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_HasAuthority_ReturnValue_1) == 0x00014C, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000150, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, K2Node_ComponentBoundEvent_OtherActor) == 0x000158, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, K2Node_ComponentBoundEvent_OtherComp) == 0x000160, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000168, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, K2Node_ComponentBoundEvent_bFromSweep) == 0x00016C, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, K2Node_ComponentBoundEvent_SweepResult) == 0x000170, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_GetForwardVector_ReturnValue) == 0x000258, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000270, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_GetPlaybackPosition_ReturnValue_1) == 0x000288, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_GetPlaybackPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00028C, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000290, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x0002A8, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_RandomFloatInRange_ReturnValue) == 0x0002B0, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_GetAllActorsOfClass_OutActors) == 0x0002B8, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_Array_Length_ReturnValue) == 0x0002C8, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_Array_Get_Item) == 0x0002D0, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_Less_IntInt_ReturnValue) == 0x0002D8, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, K2Node_DynamicCast_AsBPI_Character) == 0x0002E0, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::K2Node_DynamicCast_AsBPI_Character' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, K2Node_DynamicCast_bSuccess) == 0x0002F0, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x0002F8, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap, CallFunc_SetPlaybackPosition_NewPosition_ImplicitCast) == 0x000300, "Member 'BP_LadderTrap_C_ExecuteUbergraph_BP_LadderTrap::CallFunc_SetPlaybackPosition_NewPosition_ImplicitCast' has a wrong offset!");

// Function BP_LadderTrap.BP_LadderTrap_C.OnRep_RepTL_Position
// 0x0001 (0x0001 - 0x0000)
struct BP_LadderTrap_C_OnRep_RepTL_Position final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LadderTrap_C_OnRep_RepTL_Position) == 0x000001, "Wrong alignment on BP_LadderTrap_C_OnRep_RepTL_Position");
static_assert(sizeof(BP_LadderTrap_C_OnRep_RepTL_Position) == 0x000001, "Wrong size on BP_LadderTrap_C_OnRep_RepTL_Position");
static_assert(offsetof(BP_LadderTrap_C_OnRep_RepTL_Position, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_LadderTrap_C_OnRep_RepTL_Position::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function BP_LadderTrap.BP_LadderTrap_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct BP_LadderTrap_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LadderTrap_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_LadderTrap_C_UserConstructionScript");
static_assert(sizeof(BP_LadderTrap_C_UserConstructionScript) == 0x000030, "Wrong size on BP_LadderTrap_C_UserConstructionScript");
static_assert(offsetof(BP_LadderTrap_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000000, "Member 'BP_LadderTrap_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LadderTrap_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000018, "Member 'BP_LadderTrap_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");

}
