#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VentiloTrap

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_VentiloTrap.BP_VentiloTrap_C.BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388D[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_VentiloTrap.BP_VentiloTrap_C.BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_VentiloTrap_C_BndEvt__BP_VentiloTrap_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_VentiloTrap.BP_VentiloTrap_C.ExecuteUbergraph_BP_VentiloTrap
// 0x02F8 (0x02F8 - 0x0000)
struct BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388F[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerState*                           CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3890[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPawn_ReturnValue;                      // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3891[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0090(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3892[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00C0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item_1;                         // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3893[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3894[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0200(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap) == 0x000008, "Wrong alignment on BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap");
static_assert(sizeof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap) == 0x0002F8, "Wrong size on BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, EntryPoint) == 0x000000, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, Temp_bool_IsClosed_Variable) == 0x000038, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, Temp_bool_Has_Been_Initd_Variable) == 0x000039, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_Event_DeltaSeconds) == 0x00003C, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_GetPlayerPawn_ReturnValue) == 0x000040, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed) == 0x000048, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_UpdateSpeedByPlayersNumber_ReturnSpeed' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_GetGameState_ReturnValue) == 0x000050, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000058, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Array_Get_Item) == 0x000070, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_GetPawn_ReturnValue) == 0x000080, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Less_IntInt_ReturnValue) == 0x000088, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000089, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000090, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x0000A0, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_OtherActor_1) == 0x0000A8, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_OtherComp_1) == 0x0000B0, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x0000B8, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000BC, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_SweepResult) == 0x0000C0, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Array_Get_Item_1) == 0x0001A8, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Array_Length_ReturnValue_1) == 0x0001B0, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001B4, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0001B8, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_OtherActor) == 0x0001C0, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_OtherComp) == 0x0001C8, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0001D0, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_SelectFloat_ReturnValue) == 0x0001D8, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0001E0, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_MakeRotator_ReturnValue) == 0x0001E8, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000200, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0002E8, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x0002F0, "Member 'BP_VentiloTrap_C_ExecuteUbergraph_BP_VentiloTrap::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

// Function BP_VentiloTrap.BP_VentiloTrap_C.OnRep_RepRot
// 0x00F0 (0x00F0 - 0x0000)
struct BP_VentiloTrap_C_OnRep_RepRot final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3895[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0008(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_VentiloTrap_C_OnRep_RepRot) == 0x000008, "Wrong alignment on BP_VentiloTrap_C_OnRep_RepRot");
static_assert(sizeof(BP_VentiloTrap_C_OnRep_RepRot) == 0x0000F0, "Wrong size on BP_VentiloTrap_C_OnRep_RepRot");
static_assert(offsetof(BP_VentiloTrap_C_OnRep_RepRot, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_VentiloTrap_C_OnRep_RepRot::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_OnRep_RepRot, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000008, "Member 'BP_VentiloTrap_C_OnRep_RepRot::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function BP_VentiloTrap.BP_VentiloTrap_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_VentiloTrap_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VentiloTrap_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_VentiloTrap_C_ReceiveTick");
static_assert(sizeof(BP_VentiloTrap_C_ReceiveTick) == 0x000004, "Wrong size on BP_VentiloTrap_C_ReceiveTick");
static_assert(offsetof(BP_VentiloTrap_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_VentiloTrap_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_VentiloTrap.BP_VentiloTrap_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct BP_VentiloTrap_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3896[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3897[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VentiloTrap_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_VentiloTrap_C_UserConstructionScript");
static_assert(sizeof(BP_VentiloTrap_C_UserConstructionScript) == 0x000038, "Wrong size on BP_VentiloTrap_C_UserConstructionScript");
static_assert(offsetof(BP_VentiloTrap_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_VentiloTrap_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_VentiloTrap_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_VentiloTrap_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_UserConstructionScript, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000010, "Member 'BP_VentiloTrap_C_UserConstructionScript::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_VentiloTrap_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_VentiloTrap_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_VentiloTrap_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_VentiloTrap_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

