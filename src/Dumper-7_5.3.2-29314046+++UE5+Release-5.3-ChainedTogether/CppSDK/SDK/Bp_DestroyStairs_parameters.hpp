#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_DestroyStairs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Bp_DestroyStairs.Bp_DestroyStairs_C.BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A55[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Bp_DestroyStairs_C_BndEvt__Bp_DestroyStairs_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Bp_DestroyStairs.Bp_DestroyStairs_C.ExecuteUbergraph_Bp_DestroyStairs
// 0x0350 (0x0350 - 0x0000)
struct Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A56[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A57[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A58[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0050(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0150(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x02A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFS_MasterField_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0320(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_3;    // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue_1;       // 0x0348(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs) == 0x000010, "Wrong alignment on Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs");
static_assert(sizeof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs) == 0x000350, "Wrong size on Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, EntryPoint) == 0x000000, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::EntryPoint' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000020, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, Temp_bool_Has_Been_Initd_Variable) == 0x000028, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, Temp_bool_IsClosed_Variable) == 0x000029, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000030, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, K2Node_ComponentBoundEvent_OtherActor) == 0x000038, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, K2Node_ComponentBoundEvent_OtherComp) == 0x000040, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000048, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, K2Node_ComponentBoundEvent_bFromSweep) == 0x00004C, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, K2Node_ComponentBoundEvent_SweepResult) == 0x000050, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_VLerp_ReturnValue) == 0x000138, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000150, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000238, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_BreakVector_X) == 0x000250, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_BreakVector_Y) == 0x000258, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_BreakVector_Z) == 0x000260, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000268, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000270, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_MakeVector_ReturnValue) == 0x000288, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_MakeTransform_ReturnValue) == 0x0002A0, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000300, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000308, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_FinishSpawningActor_ReturnValue) == 0x000320, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_GetPlayerController_ReturnValue) == 0x000328, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_K2_GetComponentLocation_ReturnValue_3) == 0x000330, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_K2_GetComponentLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs, CallFunc_SpawnSoundAtLocation_ReturnValue_1) == 0x000348, "Member 'Bp_DestroyStairs_C_ExecuteUbergraph_Bp_DestroyStairs::CallFunc_SpawnSoundAtLocation_ReturnValue_1' has a wrong offset!");

// Function Bp_DestroyStairs.Bp_DestroyStairs_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct Bp_DestroyStairs_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Bp_DestroyStairs_C_UserConstructionScript) == 0x000008, "Wrong alignment on Bp_DestroyStairs_C_UserConstructionScript");
static_assert(sizeof(Bp_DestroyStairs_C_UserConstructionScript) == 0x000030, "Wrong size on Bp_DestroyStairs_C_UserConstructionScript");
static_assert(offsetof(Bp_DestroyStairs_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000000, "Member 'Bp_DestroyStairs_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_DestroyStairs_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000018, "Member 'Bp_DestroyStairs_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");

}

