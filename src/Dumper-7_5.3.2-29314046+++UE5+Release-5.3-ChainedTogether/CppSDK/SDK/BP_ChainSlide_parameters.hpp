#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChainSlide

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ChainSlide.BP_ChainSlide_C.BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF5[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_ChainSlide.BP_ChainSlide_C.BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_ChainSlide_C_BndEvt__BP_ChainSlide_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_ChainSlide.BP_ChainSlide_C.ExecuteUbergraph_BP_ChainSlide
// 0x0270 (0x0270 - 0x0000)
struct BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF7[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF8[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0070(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0158(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character;                // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF9[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CFA[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors_1; // 0x01A8(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CFB[0x2];                                     // 0x01BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CFC[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors_2; // 0x01F8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CFD[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character_1;              // 0x0218(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CFE[0x6];                                     // 0x022A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetUpVector_ReturnValue;                  // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide) == 0x000008, "Wrong alignment on BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide");
static_assert(sizeof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide) == 0x000270, "Wrong size on BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, EntryPoint) == 0x000000, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000008, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000020, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, Temp_int_Array_Index_Variable_1) == 0x000044, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_Event_DeltaSeconds) == 0x000048, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000050, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000058, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000060, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000068, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_bFromSweep) == 0x00006C, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_SweepResult) == 0x000070, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000158, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Array_Get_Item) == 0x000168, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_DynamicCast_AsBPI_Character) == 0x000170, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_DynamicCast_AsBPI_Character' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_DynamicCast_bSuccess) == 0x000180, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Array_Length_ReturnValue) == 0x000184, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000188, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_OtherActor) == 0x000190, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_OtherComp) == 0x000198, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0001A0, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_GetOverlappingActors_OverlappingActors_1) == 0x0001A8, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_GetOverlappingActors_OverlappingActors_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, Temp_int_Loop_Counter_Variable_1) == 0x0001B8, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Array_IsEmpty_ReturnValue) == 0x0001BC, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Less_IntInt_ReturnValue) == 0x0001BD, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001C0, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_GetForwardVector_ReturnValue) == 0x0001C8, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001E0, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_GetOverlappingActors_OverlappingActors_2) == 0x0001F8, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_GetOverlappingActors_OverlappingActors_2' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Array_Get_Item_1) == 0x000208, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Array_Length_ReturnValue_1) == 0x000210, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_DynamicCast_AsBPI_Character_1) == 0x000218, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_DynamicCast_AsBPI_Character_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, K2Node_DynamicCast_bSuccess_1) == 0x000228, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Less_IntInt_ReturnValue_1) == 0x000229, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_GetUpVector_ReturnValue) == 0x000230, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000248, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide, CallFunc_Conv_VectorToString_ReturnValue) == 0x000260, "Member 'BP_ChainSlide_C_ExecuteUbergraph_BP_ChainSlide::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");

// Function BP_ChainSlide.BP_ChainSlide_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ChainSlide_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChainSlide_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ChainSlide_C_ReceiveTick");
static_assert(sizeof(BP_ChainSlide_C_ReceiveTick) == 0x000004, "Wrong size on BP_ChainSlide_C_ReceiveTick");
static_assert(offsetof(BP_ChainSlide_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ChainSlide_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

