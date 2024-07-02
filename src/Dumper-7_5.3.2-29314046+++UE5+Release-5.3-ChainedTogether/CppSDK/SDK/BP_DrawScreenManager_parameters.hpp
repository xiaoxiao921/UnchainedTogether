#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DrawScreenManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DrawScreenManager.BP_DrawScreenManager_C.CheckDrawPadsOn
// 0x0070 (0x0070 - 0x0000)
struct BP_DrawScreenManager_C_CheckDrawPadsOn final
{
public:
	int32                                         InInt;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E36[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PadOnNum;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   IntTag;                                            // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E37[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CountActivatedPads_ReturnValue;           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActorComponent*>                CallFunc_GetComponentsByTag_ReturnValue;           // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E38[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DrawPad_C*                          CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActorHasTag_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E39[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawScreenManager_C_CheckDrawPadsOn) == 0x000008, "Wrong alignment on BP_DrawScreenManager_C_CheckDrawPadsOn");
static_assert(sizeof(BP_DrawScreenManager_C_CheckDrawPadsOn) == 0x000070, "Wrong size on BP_DrawScreenManager_C_CheckDrawPadsOn");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, InInt) == 0x000000, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::InInt' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, ReturnValue) == 0x000004, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, PadOnNum) == 0x000008, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::PadOnNum' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, IntTag) == 0x00000C, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::IntTag' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_Conv_StringToName_ReturnValue) == 0x00002C, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_CountActivatedPads_ReturnValue) == 0x00003C, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_CountActivatedPads_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_GetComponentsByTag_ReturnValue) == 0x000040, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000054, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_ActorHasTag_ReturnValue) == 0x000060, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_ActorHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CheckDrawPadsOn, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'BP_DrawScreenManager_C_CheckDrawPadsOn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DrawScreenManager.BP_DrawScreenManager_C.CountActivatedPads
// 0x0030 (0x0030 - 0x0000)
struct BP_DrawScreenManager_C_CountActivatedPads final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PadOnNum;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E3A[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DrawPad_C*                          CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawScreenManager_C_CountActivatedPads) == 0x000008, "Wrong alignment on BP_DrawScreenManager_C_CountActivatedPads");
static_assert(sizeof(BP_DrawScreenManager_C_CountActivatedPads) == 0x000030, "Wrong size on BP_DrawScreenManager_C_CountActivatedPads");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, ReturnValue) == 0x000000, "Member 'BP_DrawScreenManager_C_CountActivatedPads::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, PadOnNum) == 0x000004, "Member 'BP_DrawScreenManager_C_CountActivatedPads::PadOnNum' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_DrawScreenManager_C_CountActivatedPads::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_DrawScreenManager_C_CountActivatedPads::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_DrawScreenManager_C_CountActivatedPads::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, Temp_int_Variable) == 0x000014, "Member 'BP_DrawScreenManager_C_CountActivatedPads::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'BP_DrawScreenManager_C_CountActivatedPads::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_DrawScreenManager_C_CountActivatedPads::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_DrawScreenManager_C_CountActivatedPads::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_CountActivatedPads, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_DrawScreenManager_C_CountActivatedPads::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_DrawScreenManager.BP_DrawScreenManager_C.ExecuteUbergraph_BP_DrawScreenManager
// 0x0048 (0x0048 - 0x0000)
struct BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckDrawPadsOn_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E3B[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DrawPad_C*                          CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E3C[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E3D[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E3E[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager) == 0x000008, "Wrong alignment on BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager");
static_assert(sizeof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager) == 0x000048, "Wrong size on BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, EntryPoint) == 0x000000, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_CheckDrawPadsOn_ReturnValue) == 0x000014, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_CheckDrawPadsOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_HasAuthority_ReturnValue) == 0x000015, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_Array_Length_ReturnValue_1) == 0x000030, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000040, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_Less_IntInt_ReturnValue_1) == 0x000041, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager, CallFunc_Add_IntInt_ReturnValue_2) == 0x000044, "Member 'BP_DrawScreenManager_C_ExecuteUbergraph_BP_DrawScreenManager::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_DrawScreenManager.BP_DrawScreenManager_C.OnRep_Over
// 0x0048 (0x0048 - 0x0000)
struct BP_DrawScreenManager_C_OnRep_Over final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E3F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E40[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrawScreenManager_C_OnRep_Over) == 0x000008, "Wrong alignment on BP_DrawScreenManager_C_OnRep_Over");
static_assert(sizeof(BP_DrawScreenManager_C_OnRep_Over) == 0x000048, "Wrong size on BP_DrawScreenManager_C_OnRep_Over");
static_assert(offsetof(BP_DrawScreenManager_C_OnRep_Over, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_DrawScreenManager_C_OnRep_Over::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_OnRep_Over, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_DrawScreenManager_C_OnRep_Over::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_OnRep_Over, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_DrawScreenManager_C_OnRep_Over::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_OnRep_Over, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_DrawScreenManager_C_OnRep_Over::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_OnRep_Over, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000028, "Member 'BP_DrawScreenManager_C_OnRep_Over::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_OnRep_Over, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_DrawScreenManager_C_OnRep_Over::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_OnRep_Over, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'BP_DrawScreenManager_C_OnRep_Over::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_OnRep_Over, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BP_DrawScreenManager_C_OnRep_Over::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrawScreenManager_C_OnRep_Over, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_DrawScreenManager_C_OnRep_Over::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

