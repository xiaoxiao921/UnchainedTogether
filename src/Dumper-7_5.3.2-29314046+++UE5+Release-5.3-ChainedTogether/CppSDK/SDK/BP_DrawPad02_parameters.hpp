#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DrawPad02

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DrawPad02.BP_DrawPad02_C.BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_396E[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_DrawPad02_C_BndEvt__BP_DrawPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_DrawPad02.BP_DrawPad02_C.ExecuteUbergraph_BP_DrawPad02
// 0x0120 (0x0120 - 0x0000)
struct BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_396F[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3970[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UCapsuleComponent*                      K2Node_DynamicCast_AsCapsule_Collision;            // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ComponentHasTag_ReturnValue;              // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02) == 0x000008, "Wrong alignment on BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02");
static_assert(sizeof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02) == 0x000120, "Wrong size on BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, EntryPoint) == 0x000000, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, CallFunc_HasAuthority_ReturnValue) == 0x000005, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, K2Node_DynamicCast_AsCapsule_Collision) == 0x000110, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::K2Node_DynamicCast_AsCapsule_Collision' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, CallFunc_Not_PreBool_ReturnValue) == 0x000119, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, CallFunc_ComponentHasTag_ReturnValue) == 0x00011A, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::CallFunc_ComponentHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02, Temp_bool_IsClosed_Variable) == 0x00011B, "Member 'BP_DrawPad02_C_ExecuteUbergraph_BP_DrawPad02::Temp_bool_IsClosed_Variable' has a wrong offset!");

// Function BP_DrawPad02.BP_DrawPad02_C.OnRep_On
// 0x0028 (0x0028 - 0x0000)
struct BP_DrawPad02_C_OnRep_On final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3971[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3972[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawPad02_C_OnRep_On) == 0x000008, "Wrong alignment on BP_DrawPad02_C_OnRep_On");
static_assert(sizeof(BP_DrawPad02_C_OnRep_On) == 0x000028, "Wrong size on BP_DrawPad02_C_OnRep_On");
static_assert(offsetof(BP_DrawPad02_C_OnRep_On, Temp_bool_Variable) == 0x000000, "Member 'BP_DrawPad02_C_OnRep_On::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_OnRep_On, Temp_object_Variable) == 0x000008, "Member 'BP_DrawPad02_C_OnRep_On::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_OnRep_On, Temp_object_Variable_1) == 0x000010, "Member 'BP_DrawPad02_C_OnRep_On::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_OnRep_On, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'BP_DrawPad02_C_OnRep_On::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawPad02_C_OnRep_On, K2Node_Select_Default) == 0x000020, "Member 'BP_DrawPad02_C_OnRep_On::K2Node_Select_Default' has a wrong offset!");

}

