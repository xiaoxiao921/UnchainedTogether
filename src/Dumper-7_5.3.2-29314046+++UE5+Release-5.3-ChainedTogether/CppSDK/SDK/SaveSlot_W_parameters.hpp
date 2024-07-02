#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SaveSlot_W

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SaveSlot_W.SaveSlot_W_C.ExecuteUbergraph_SaveSlot_W
// 0x01E0 (0x01E0 - 0x0000)
struct SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_334D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI;                    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_334E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_ConvertTimeToTextFormat_ReturnValue;      // 0x0040(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	struct FDateTime                              CallFunc_GetDate_ReturnValue;                      // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00D0(0x0018)()
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_334F[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0118(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0x0190(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01A0(0x0018)()
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CreatingGameMenu_C> K2Node_DynamicCast_AsBPI_Creating_Game_Menu;       // 0x01C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3350[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W) == 0x000008, "Wrong alignment on SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W");
static_assert(sizeof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W) == 0x0001E0, "Wrong size on SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, EntryPoint) == 0x000000, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, Temp_int_Array_Index_Variable) == 0x000004, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, K2Node_DynamicCast_AsCustom_GI) == 0x000020, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::K2Node_DynamicCast_AsCustom_GI' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_ConvertTimeToTextFormat_ReturnValue) == 0x000040, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_ConvertTimeToTextFormat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_TextToString_ReturnValue) == 0x000068, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000078, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000088, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_GetDate_ReturnValue) == 0x0000C8, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_GetDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000D0, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_BreakDateTime_Year) == 0x0000E8, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_BreakDateTime_Month) == 0x0000EC, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_BreakDateTime_Day) == 0x0000F0, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_BreakDateTime_Hour) == 0x0000F4, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_BreakDateTime_Minute) == 0x0000F8, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_BreakDateTime_Second) == 0x0000FC, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_BreakDateTime_Millisecond) == 0x000100, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000108, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_IntToText_ReturnValue) == 0x000118, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000130, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000140, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000150, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000160, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000170, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000180, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_GetAllWidgetsWithInterface_FoundWidgets) == 0x000190, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_GetAllWidgetsWithInterface_FoundWidgets' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001A0, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Array_Get_Item) == 0x0001B8, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, K2Node_DynamicCast_AsBPI_Creating_Game_Menu) == 0x0001C0, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::K2Node_DynamicCast_AsBPI_Creating_Game_Menu' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, K2Node_DynamicCast_bSuccess_1) == 0x0001D0, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Array_Length_ReturnValue) == 0x0001D4, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W, CallFunc_Less_IntInt_ReturnValue) == 0x0001D8, "Member 'SaveSlot_W_C_ExecuteUbergraph_SaveSlot_W::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function SaveSlot_W.SaveSlot_W_C.GetBiomeByName
// 0x0070 (0x0070 - 0x0000)
struct SaveSlot_W_C_GetBiomeByName final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3351[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABiomeText_BP_C*                        Biome;                                             // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3352[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABiomeText_BP_C*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3353[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABiomeText_BP_C*                        CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SaveSlot_W_C_GetBiomeByName) == 0x000008, "Wrong alignment on SaveSlot_W_C_GetBiomeByName");
static_assert(sizeof(SaveSlot_W_C_GetBiomeByName) == 0x000070, "Wrong size on SaveSlot_W_C_GetBiomeByName");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, InString) == 0x000000, "Member 'SaveSlot_W_C_GetBiomeByName::InString' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, Found) == 0x000010, "Member 'SaveSlot_W_C_GetBiomeByName::Found' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, Biome) == 0x000018, "Member 'SaveSlot_W_C_GetBiomeByName::Biome' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'SaveSlot_W_C_GetBiomeByName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, Temp_int_Array_Index_Variable) == 0x000038, "Member 'SaveSlot_W_C_GetBiomeByName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'SaveSlot_W_C_GetBiomeByName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'SaveSlot_W_C_GetBiomeByName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, CallFunc_GetAllActorsOfClass_OutActors) == 0x000048, "Member 'SaveSlot_W_C_GetBiomeByName::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'SaveSlot_W_C_GetBiomeByName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, CallFunc_Array_Get_Item) == 0x000060, "Member 'SaveSlot_W_C_GetBiomeByName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'SaveSlot_W_C_GetBiomeByName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SaveSlot_W_C_GetBiomeByName, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000069, "Member 'SaveSlot_W_C_GetBiomeByName::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");

}

