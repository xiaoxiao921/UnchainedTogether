#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WayWallManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_WayWallManager.BP_WayWallManager_C.BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE3[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_WayWallManager.BP_WayWallManager_C.BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_WayWallManager_C_BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_WayWallManager.BP_WayWallManager_C.ExecuteUbergraph_BP_WayWallManager
// 0x02F0 (0x02F0 - 0x0000)
struct BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumPlayers_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_2;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE4[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_3;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_4;                             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_5;                             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_6;                             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE5[0x8];                                     // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE6[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_7;                             // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_8;                             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE7[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE8[0x1];                                     // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE9[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_CustomEvent_Class;                          // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select_Default;                             // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AWayWall_BP_C*                          CallFunc_FinishSpawningActor_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CEA[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_2;       // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CEB[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CEC[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0150(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UClass*                                 K2Node_Select_Default_1;                           // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0240(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0250(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CED[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue_1;                       // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0268(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CEE[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_CustomSkyLight_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x0280(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable_2;                               // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CEF[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CustomSkyLight_C*                   CallFunc_Array_Get_Item;                           // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select_Default_2;                           // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors_1; // 0x02A8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue_1;              // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF0[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_1;                // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF1[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_A_ImplicitCast;                      // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_1; // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager) == 0x000010, "Wrong alignment on BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager");
static_assert(sizeof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager) == 0x0002F0, "Wrong size on BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, EntryPoint) == 0x000000, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_GetNumPlayers_ReturnValue) == 0x000004, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_GetNumPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_MapRangeClamped_ReturnValue) == 0x000010, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_class_Variable) == 0x000018, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_class_Variable_1) == 0x000020, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_class_Variable_2) == 0x000028, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_int_Variable) == 0x000030, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_class_Variable_3) == 0x000038, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_class_Variable_4) == 0x000040, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_class_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_class_Variable_5) == 0x000048, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_class_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_class_Variable_6) == 0x000050, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_class_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_int_Variable_1) == 0x0000C0, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_class_Variable_7) == 0x0000C8, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_class_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_class_Variable_8) == 0x0000D0, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_class_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_HasAuthority_ReturnValue) == 0x0000D8, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Lerp_ReturnValue) == 0x0000E0, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_HasAuthority_ReturnValue_1) == 0x0000E8, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_bool_IsClosed_Variable) == 0x0000E9, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_bool_Has_Been_Initd_Variable) == 0x0000EA, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_RandomIntegerInRange_ReturnValue) == 0x0000EC, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x0000F0, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_CustomEvent_Class) == 0x0000F8, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_CustomEvent_Class' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000100, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_Select_Default) == 0x000108, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_FinishSpawningActor_ReturnValue) == 0x000110, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_HasAuthority_ReturnValue_2) == 0x000118, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000120, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_RandomIntegerInRange_ReturnValue_2) == 0x000128, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_RandomIntegerInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000130, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000138, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000140, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000148, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_bFromSweep) == 0x00014C, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_SweepResult) == 0x000150, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_Select_Default_1) == 0x000238, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000240, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_OtherActor) == 0x000248, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_OtherComp) == 0x000250, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000258, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Lerp_ReturnValue_1) == 0x000260, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000268, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Array_IsEmpty_ReturnValue) == 0x000278, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_GetAllActorsOfClass_OutActors) == 0x000280, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, Temp_int_Variable_2) == 0x000290, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Array_Get_Item) == 0x000298, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, K2Node_Select_Default_2) == 0x0002A0, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_GetOverlappingActors_OverlappingActors_1) == 0x0002A8, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_GetOverlappingActors_OverlappingActors_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Array_IsEmpty_ReturnValue_1) == 0x0002B8, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Array_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Lerp_Alpha_ImplicitCast) == 0x0002C0, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Lerp_Alpha_ImplicitCast_1) == 0x0002C8, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Lerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast) == 0x0002D0, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x0002D4, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x0002D8, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_Lerp_A_ImplicitCast) == 0x0002E0, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_Lerp_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager, CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_1) == 0x0002E8, "Member 'BP_WayWallManager_C_ExecuteUbergraph_BP_WayWallManager::CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast_1' has a wrong offset!");

// Function BP_WayWallManager.BP_WayWallManager_C.SpawnClassAll
// 0x0008 (0x0008 - 0x0000)
struct BP_WayWallManager_C_SpawnClassAll final
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WayWallManager_C_SpawnClassAll) == 0x000008, "Wrong alignment on BP_WayWallManager_C_SpawnClassAll");
static_assert(sizeof(BP_WayWallManager_C_SpawnClassAll) == 0x000008, "Wrong size on BP_WayWallManager_C_SpawnClassAll");
static_assert(offsetof(BP_WayWallManager_C_SpawnClassAll, Param_Class) == 0x000000, "Member 'BP_WayWallManager_C_SpawnClassAll::Param_Class' has a wrong offset!");

}

