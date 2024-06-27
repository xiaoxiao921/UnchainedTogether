#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BreakableGlass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_BreakableGlass.BP_BreakableGlass_C.BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D30[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_BreakableGlass_C_BndEvt__BP_BreakableGlass_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_BreakableGlass.BP_BreakableGlass_C.ExecuteUbergraph_BP_BreakableGlass
// 0x0210 (0x0210 - 0x0000)
struct BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D31[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>         K2Node_MakeArray_Array_1;                          // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D32[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D33[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         K2Node_MakeArray_Array_2;                          // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D34[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0088(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;                           // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_CustomCar_C*                        K2Node_DynamicCast_AsBP_Custom_Car;                // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D35[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D36[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_1;                         // 0x0190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue_1;       // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast; // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SpawnSoundAtLocation_PitchMultiplier_ImplicitCast; // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast_1; // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SpawnSoundAtLocation_PitchMultiplier_ImplicitCast_1; // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass) == 0x000008, "Wrong alignment on BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass");
static_assert(sizeof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass) == 0x000210, "Wrong size on BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, EntryPoint) == 0x000000, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, Temp_int_Loop_Counter_Variable_1) == 0x000008, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, Temp_bool_IsClosed_Variable) == 0x000018, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, Temp_bool_Has_Been_Initd_Variable) == 0x000019, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_MakeArray_Array) == 0x000020, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_MakeArray_Array_1) == 0x000030, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Array_Length_ReturnValue_1) == 0x000044, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, Temp_int_Loop_Counter_Variable_2) == 0x00004C, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Less_IntInt_ReturnValue_1) == 0x000050, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Add_IntInt_ReturnValue_2) == 0x000054, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_MakeArray_Array_2) == 0x000058, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000068, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_ComponentBoundEvent_OtherActor) == 0x000070, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_ComponentBoundEvent_OtherComp) == 0x000078, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000080, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_ComponentBoundEvent_bFromSweep) == 0x000084, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_ComponentBoundEvent_SweepResult) == 0x000088, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Array_Get_Item) == 0x000170, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_DynamicCast_AsBP_Custom_Car) == 0x000178, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_DynamicCast_AsBP_Custom_Car' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, K2Node_DynamicCast_bSuccess) == 0x000180, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Array_Length_ReturnValue_2) == 0x000184, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Less_IntInt_ReturnValue_2) == 0x000188, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, Temp_int_Array_Index_Variable_2) == 0x00018C, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_Array_Get_Item_1) == 0x000190, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000198, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_RandomFloatInRange_ReturnValue) == 0x0001B0, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0001B8, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x0001C0, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001C8, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x0001E0, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x0001E8, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_SpawnSoundAtLocation_ReturnValue_1) == 0x0001F0, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_SpawnSoundAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_GetPlayerController_ReturnValue) == 0x0001F8, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast) == 0x000200, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_SpawnSoundAtLocation_PitchMultiplier_ImplicitCast) == 0x000204, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_SpawnSoundAtLocation_PitchMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast_1) == 0x000208, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass, CallFunc_SpawnSoundAtLocation_PitchMultiplier_ImplicitCast_1) == 0x00020C, "Member 'BP_BreakableGlass_C_ExecuteUbergraph_BP_BreakableGlass::CallFunc_SpawnSoundAtLocation_PitchMultiplier_ImplicitCast_1' has a wrong offset!");

// Function BP_BreakableGlass.BP_BreakableGlass_C.UserConstructionScript
// 0x02F0 (0x02F0 - 0x0000)
struct BP_BreakableGlass_C_UserConstructionScript final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;              // 0x00C0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable;                                // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_2;                              // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_3;                              // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_3;              // 0x0140(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstance_ReturnValue;                  // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstance_ReturnValue_1;                // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstance_ReturnValue_2;                // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D37[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_AddInstance_ReturnValue_3;                // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D38[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMeshComponent*>         K2Node_MakeArray_Array;                            // 0x01D8(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D39[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;                           // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D3A[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0200(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_BreakableGlass_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_BreakableGlass_C_UserConstructionScript");
static_assert(sizeof(BP_BreakableGlass_C_UserConstructionScript) == 0x0002F0, "Wrong size on BP_BreakableGlass_C_UserConstructionScript");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue_1) == 0x000060, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue_2) == 0x0000C0, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, Temp_int_Variable) == 0x000120, "Member 'BP_BreakableGlass_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, Temp_real_Variable) == 0x000124, "Member 'BP_BreakableGlass_C_UserConstructionScript::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, Temp_real_Variable_1) == 0x000128, "Member 'BP_BreakableGlass_C_UserConstructionScript::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, Temp_real_Variable_2) == 0x00012C, "Member 'BP_BreakableGlass_C_UserConstructionScript::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, Temp_real_Variable_3) == 0x000130, "Member 'BP_BreakableGlass_C_UserConstructionScript::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000134, "Member 'BP_BreakableGlass_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000138, "Member 'BP_BreakableGlass_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x00013C, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue_3) == 0x000140, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_RandomIntegerInRange_ReturnValue) == 0x0001A0, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_AddInstance_ReturnValue) == 0x0001A4, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_AddInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_AddInstance_ReturnValue_1) == 0x0001A8, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_AddInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, K2Node_Select_Default) == 0x0001AC, "Member 'BP_BreakableGlass_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_AddInstance_ReturnValue_2) == 0x0001B0, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_AddInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_MakeRotator_ReturnValue) == 0x0001B8, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_AddInstance_ReturnValue_3) == 0x0001D0, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_AddInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x0001D8, "Member 'BP_BreakableGlass_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x0001E8, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x0001F0, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x0001F8, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BreakableGlass_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000200, "Member 'BP_BreakableGlass_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

}
