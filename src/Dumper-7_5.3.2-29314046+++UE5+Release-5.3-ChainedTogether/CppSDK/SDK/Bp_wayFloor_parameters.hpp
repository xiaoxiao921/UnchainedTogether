#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_wayFloor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Bp_wayFloor.Bp_wayFloor_C.BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C66[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Bp_wayFloor_C_BndEvt__Bp_wayFloor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Bp_wayFloor.Bp_wayFloor_C.ExecuteUbergraph_Bp_wayFloor
// 0x03F8 (0x03F8 - 0x0000)
struct Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C67[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C68[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0140(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x0228(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_2;     // 0x0310(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor) == 0x000008, "Wrong alignment on Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor");
static_assert(sizeof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor) == 0x0003F8, "Wrong size on Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, EntryPoint) == 0x000000, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::EntryPoint' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000110, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, CallFunc_VLerp_ReturnValue) == 0x000128, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000140, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x000228, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor, CallFunc_K2_SetWorldLocation_SweepHitResult_2) == 0x000310, "Member 'Bp_wayFloor_C_ExecuteUbergraph_Bp_wayFloor::CallFunc_K2_SetWorldLocation_SweepHitResult_2' has a wrong offset!");

// Function Bp_wayFloor.Bp_wayFloor_C.UserConstructionScript
// 0x0018 (0x0018 - 0x0000)
struct Bp_wayFloor_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Bp_wayFloor_C_UserConstructionScript) == 0x000008, "Wrong alignment on Bp_wayFloor_C_UserConstructionScript");
static_assert(sizeof(Bp_wayFloor_C_UserConstructionScript) == 0x000018, "Wrong size on Bp_wayFloor_C_UserConstructionScript");
static_assert(offsetof(Bp_wayFloor_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000000, "Member 'Bp_wayFloor_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

}

