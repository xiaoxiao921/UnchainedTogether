#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloatingPlatform

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FloatingPlatform.BP_FloatingPlatform_C.BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B42[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_FloatingPlatform.BP_FloatingPlatform_C.CalculateRotation
// 0x0018 (0x0018 - 0x0000)
struct BP_FloatingPlatform_C_CalculateRotation final
{
public:
	struct FRotator                               NewLocalVar;                                       // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FloatingPlatform_C_CalculateRotation) == 0x000008, "Wrong alignment on BP_FloatingPlatform_C_CalculateRotation");
static_assert(sizeof(BP_FloatingPlatform_C_CalculateRotation) == 0x000018, "Wrong size on BP_FloatingPlatform_C_CalculateRotation");
static_assert(offsetof(BP_FloatingPlatform_C_CalculateRotation, NewLocalVar) == 0x000000, "Member 'BP_FloatingPlatform_C_CalculateRotation::NewLocalVar' has a wrong offset!");

// Function BP_FloatingPlatform.BP_FloatingPlatform_C.ExecuteUbergraph_BP_FloatingPlatform
// 0x0230 (0x0230 - 0x0000)
struct BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Optimise;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B43[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B44[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B45[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0148(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform) == 0x000008, "Wrong alignment on BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform");
static_assert(sizeof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform) == 0x000230, "Wrong size on BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, EntryPoint) == 0x000000, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, K2Node_Event_Optimise) == 0x000005, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::K2Node_Event_Optimise' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, CallFunc_IsPlaying_ReturnValue) == 0x000110, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000118, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, CallFunc_VLerp_ReturnValue) == 0x000130, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000148, "Member 'BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

// Function BP_FloatingPlatform.BP_FloatingPlatform_C.Optimise
// 0x0001 (0x0001 - 0x0000)
struct BP_FloatingPlatform_C_Optimise final
{
public:
	bool                                          Param_Optimise;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FloatingPlatform_C_Optimise) == 0x000001, "Wrong alignment on BP_FloatingPlatform_C_Optimise");
static_assert(sizeof(BP_FloatingPlatform_C_Optimise) == 0x000001, "Wrong size on BP_FloatingPlatform_C_Optimise");
static_assert(offsetof(BP_FloatingPlatform_C_Optimise, Param_Optimise) == 0x000000, "Member 'BP_FloatingPlatform_C_Optimise::Param_Optimise' has a wrong offset!");

// Function BP_FloatingPlatform.BP_FloatingPlatform_C.UserConstructionScript
// 0x0080 (0x0080 - 0x0000)
struct BP_FloatingPlatform_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B46[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FloatingPlatform_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_FloatingPlatform_C_UserConstructionScript");
static_assert(sizeof(BP_FloatingPlatform_C_UserConstructionScript) == 0x000080, "Wrong size on BP_FloatingPlatform_C_UserConstructionScript");
static_assert(offsetof(BP_FloatingPlatform_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_FloatingPlatform_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_FloatingPlatform_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FloatingPlatform_C_UserConstructionScript, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000020, "Member 'BP_FloatingPlatform_C_UserConstructionScript::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

}

