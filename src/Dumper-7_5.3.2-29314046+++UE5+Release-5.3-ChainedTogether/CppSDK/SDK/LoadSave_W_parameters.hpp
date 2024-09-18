#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadSave_W

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "S_BiomeSave_structs.hpp"
#include "S_ProgressSave_structs.hpp"


namespace SDK::Params
{

// Function LoadSave_W.LoadSave_W_C.AddPreviousSaveToList
// 0x00C0 (0x00C0 - 0x0000)
struct LoadSave_W_C_AddPreviousSaveToList final
{
public:
	struct FVector                                PlayerLocation;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Timer;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NumPlayers;                                        // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Mode_0;                                            // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class USaveSlot_W_C*                          CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Now_ReturnValue;                          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_BiomeSave                           K2Node_MakeStruct_S_BiomeSave;                     // 0x0088(0x0038)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadSave_W_C_AddPreviousSaveToList) == 0x000008, "Wrong alignment on LoadSave_W_C_AddPreviousSaveToList");
static_assert(sizeof(LoadSave_W_C_AddPreviousSaveToList) == 0x0000C0, "Wrong size on LoadSave_W_C_AddPreviousSaveToList");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, PlayerLocation) == 0x000000, "Member 'LoadSave_W_C_AddPreviousSaveToList::PlayerLocation' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, Timer) == 0x000018, "Member 'LoadSave_W_C_AddPreviousSaveToList::Timer' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, NumPlayers) == 0x000020, "Member 'LoadSave_W_C_AddPreviousSaveToList::NumPlayers' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, Mode_0) == 0x000030, "Member 'LoadSave_W_C_AddPreviousSaveToList::Mode_0' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, CallFunc_Create_ReturnValue) == 0x000040, "Member 'LoadSave_W_C_AddPreviousSaveToList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'LoadSave_W_C_AddPreviousSaveToList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, CallFunc_Now_ReturnValue) == 0x000058, "Member 'LoadSave_W_C_AddPreviousSaveToList::CallFunc_Now_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'LoadSave_W_C_AddPreviousSaveToList::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000070, "Member 'LoadSave_W_C_AddPreviousSaveToList::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, CallFunc_AddChild_ReturnValue) == 0x000080, "Member 'LoadSave_W_C_AddPreviousSaveToList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_AddPreviousSaveToList, K2Node_MakeStruct_S_BiomeSave) == 0x000088, "Member 'LoadSave_W_C_AddPreviousSaveToList::K2Node_MakeStruct_S_BiomeSave' has a wrong offset!");

// Function LoadSave_W.LoadSave_W_C.ExecuteUbergraph_LoadSave_W
// 0x0118 (0x0118 - 0x0000)
struct LoadSave_W_C_ExecuteUbergraph_LoadSave_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI;                    // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_ProgressSave                        CallFunc_Array_Get_Item;                           // 0x0070(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96[0x2];                                       // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_ProgressSave                        CallFunc_Array_Get_Item_1;                         // 0x0098(0x0020)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue_1;    // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BE[0x2];                                       // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_BiomeSave                           CallFunc_Array_Get_Item_2;                         // 0x00C0(0x0038)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveSlot_W_C*                          CallFunc_Create_ReturnValue;                       // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W) == 0x000008, "Wrong alignment on LoadSave_W_C_ExecuteUbergraph_LoadSave_W");
static_assert(sizeof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W) == 0x000118, "Wrong size on LoadSave_W_C_ExecuteUbergraph_LoadSave_W");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, EntryPoint) == 0x000000, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, Temp_int_Loop_Counter_Variable_1) == 0x000028, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Add_IntInt_ReturnValue_2) == 0x00002C, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, Temp_int_Array_Index_Variable_2) == 0x000030, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, Temp_int_Loop_Counter_Variable_2) == 0x000034, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Add_IntInt_ReturnValue_3) == 0x000038, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000040, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000050, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_GetGameInstance_ReturnValue) == 0x000058, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, K2Node_DynamicCast_AsCustom_GI) == 0x000060, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::K2Node_DynamicCast_AsCustom_GI' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Array_Get_Item) == 0x000070, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000095, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Array_Length_ReturnValue_1) == 0x0000B8, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000BC, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_EqualEqual_VectorVector_ReturnValue_1) == 0x0000BD, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_EqualEqual_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Array_Get_Item_2) == 0x0000C0, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Array_Length_ReturnValue_2) == 0x0000F8, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Array_IsEmpty_ReturnValue) == 0x0000FC, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000100, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Max_ReturnValue) == 0x000104, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_Create_ReturnValue) == 0x000108, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadSave_W_C_ExecuteUbergraph_LoadSave_W, CallFunc_AddChild_ReturnValue) == 0x000110, "Member 'LoadSave_W_C_ExecuteUbergraph_LoadSave_W::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}

