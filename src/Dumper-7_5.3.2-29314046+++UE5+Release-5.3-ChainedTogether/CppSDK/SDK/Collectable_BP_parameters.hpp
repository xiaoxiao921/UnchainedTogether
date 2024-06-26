#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Collectable_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Collectable_BP.Collectable_BP_C.BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37F7[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Collectable_BP_C_BndEvt__Collectable_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Collectable_BP.Collectable_BP_C.ExecuteUbergraph_Collectable_BP
// 0x0320 (0x0320 - 0x0000)
struct Collectable_BP_C_ExecuteUbergraph_Collectable_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37F8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWings_W_C*                             CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue_1;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37F9[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FA[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0050(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FB[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0160(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FC[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_GameInstance_C>   K2Node_DynamicCast_AsBPI_Game_Instance;            // 0x0260(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FD[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0278(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameInstance_C>   K2Node_DynamicCast_AsBPI_Game_Instance_1;          // 0x0280(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FE[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetCollectedWings_Wings;                  // 0x0298(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37FF[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameInstance_C>   K2Node_DynamicCast_AsBPI_Game_Instance_2;          // 0x02B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3800[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetCollectedWings_Wings_1;                // 0x02D0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3801[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_1;                // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;   // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP) == 0x000008, "Wrong alignment on Collectable_BP_C_ExecuteUbergraph_Collectable_BP");
static_assert(sizeof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP) == 0x000320, "Wrong size on Collectable_BP_C_ExecuteUbergraph_Collectable_BP");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, EntryPoint) == 0x000000, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Create_ReturnValue) == 0x000008, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Lerp_ReturnValue) == 0x000010, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Lerp_ReturnValue_1) == 0x000018, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, Temp_bool_Has_Been_Initd_Variable) == 0x000020, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, Temp_bool_IsClosed_Variable) == 0x000021, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_Event_DeltaSeconds) == 0x000024, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000030, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_ComponentBoundEvent_OtherActor) == 0x000038, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_ComponentBoundEvent_OtherComp) == 0x000040, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000048, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_ComponentBoundEvent_bFromSweep) == 0x00004C, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_ComponentBoundEvent_SweepResult) == 0x000050, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_MakeRotator_ReturnValue) == 0x000138, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_DynamicCast_AsPawn) == 0x000150, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000160, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_GetPlayerPawn_ReturnValue) == 0x000248, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_GetGameInstance_ReturnValue) == 0x000250, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000258, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_DynamicCast_AsBPI_Game_Instance) == 0x000260, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_DynamicCast_AsBPI_Game_Instance' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_DynamicCast_bSuccess_1) == 0x000270, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_GetGameInstance_ReturnValue_1) == 0x000278, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_DynamicCast_AsBPI_Game_Instance_1) == 0x000280, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_DynamicCast_AsBPI_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_DynamicCast_bSuccess_2) == 0x000290, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_GetCollectedWings_Wings) == 0x000298, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_GetCollectedWings_Wings' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Array_Contains_ReturnValue) == 0x0002A8, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_GetGameInstance_ReturnValue_2) == 0x0002B0, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_DynamicCast_AsBPI_Game_Instance_2) == 0x0002B8, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_DynamicCast_AsBPI_Game_Instance_2' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, K2Node_DynamicCast_bSuccess_3) == 0x0002C8, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_GetCollectedWings_Wings_1) == 0x0002D0, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_GetCollectedWings_Wings_1' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Array_Length_ReturnValue) == 0x0002E0, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Conv_IntToString_ReturnValue) == 0x0002E8, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Lerp_Alpha_ImplicitCast) == 0x0002F8, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Lerp_Alpha_ImplicitCast_1) == 0x000300, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Lerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x000308, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x00030C, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000310, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Collectable_BP_C_ExecuteUbergraph_Collectable_BP, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000318, "Member 'Collectable_BP_C_ExecuteUbergraph_Collectable_BP::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function Collectable_BP.Collectable_BP_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Collectable_BP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Collectable_BP_C_ReceiveTick) == 0x000004, "Wrong alignment on Collectable_BP_C_ReceiveTick");
static_assert(sizeof(Collectable_BP_C_ReceiveTick) == 0x000004, "Wrong size on Collectable_BP_C_ReceiveTick");
static_assert(offsetof(Collectable_BP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Collectable_BP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function Collectable_BP.Collectable_BP_C.UserConstructionScript
// 0x0008 (0x0008 - 0x0000)
struct Collectable_BP_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Collectable_BP_C_UserConstructionScript) == 0x000008, "Wrong alignment on Collectable_BP_C_UserConstructionScript");
static_assert(sizeof(Collectable_BP_C_UserConstructionScript) == 0x000008, "Wrong size on Collectable_BP_C_UserConstructionScript");
static_assert(offsetof(Collectable_BP_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'Collectable_BP_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

