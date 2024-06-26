#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pump

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Pump.BP_Pump_C.BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3842[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_Pump.BP_Pump_C.BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_Pump_C_BndEvt__BP_Pump_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_Pump.BP_Pump_C.ExecuteUbergraph_BP_Pump
// 0x02C0 (0x02C0 - 0x0000)
struct BP_Pump_C_ExecuteUbergraph_BP_Pump final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3843[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3844[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0070(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0158(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3845[0x3];                                     // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3846[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0190(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0278(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3847[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VLerp_ReturnValue_1;                      // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3848[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumPlayers_ReturnValue;                // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Pump_C_ExecuteUbergraph_BP_Pump) == 0x000008, "Wrong alignment on BP_Pump_C_ExecuteUbergraph_BP_Pump");
static_assert(sizeof(BP_Pump_C_ExecuteUbergraph_BP_Pump) == 0x0002C0, "Wrong size on BP_Pump_C_ExecuteUbergraph_BP_Pump");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, EntryPoint) == 0x000000, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000040, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_VLerp_ReturnValue) == 0x000058, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000070, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000158, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_Array_Length_ReturnValue) == 0x000168, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00016C, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000170, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_OtherActor) == 0x000178, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_OtherComp) == 0x000180, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000188, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_bFromSweep) == 0x00018C, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, K2Node_ComponentBoundEvent_SweepResult) == 0x000190, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000278, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_Add_IntInt_ReturnValue) == 0x000290, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_VLerp_ReturnValue_1) == 0x000298, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_NotEqual_VectorVector_ReturnValue) == 0x0002B0, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_NotEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_GetNumPlayers_ReturnValue) == 0x0002B4, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_GetNumPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Pump_C_ExecuteUbergraph_BP_Pump, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002B8, "Member 'BP_Pump_C_ExecuteUbergraph_BP_Pump::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

