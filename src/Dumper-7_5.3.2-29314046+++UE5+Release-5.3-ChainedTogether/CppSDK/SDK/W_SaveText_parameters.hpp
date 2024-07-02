#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SaveText

#include "Basic.hpp"

#include "S_BiomeSave_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_SaveText.W_SaveText_C.ExecuteUbergraph_W_SaveText
// 0x01C0 (0x01C0 - 0x0000)
struct W_SaveText_C_ExecuteUbergraph_W_SaveText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3366[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_BiomeSave                           K2Node_CustomEvent_Save;                           // 0x0008(0x0038)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3367[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_ConvertTimeToTextFormat_ReturnValue;      // 0x0068(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetDate_ReturnValue;                      // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3368[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0118(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0150(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01A8(0x0018)()
};
static_assert(alignof(W_SaveText_C_ExecuteUbergraph_W_SaveText) == 0x000008, "Wrong alignment on W_SaveText_C_ExecuteUbergraph_W_SaveText");
static_assert(sizeof(W_SaveText_C_ExecuteUbergraph_W_SaveText) == 0x0001C0, "Wrong size on W_SaveText_C_ExecuteUbergraph_W_SaveText");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, EntryPoint) == 0x000000, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, K2Node_CustomEvent_Save) == 0x000008, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::K2Node_CustomEvent_Save' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_ConvertTimeToTextFormat_ReturnValue) == 0x000068, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_ConvertTimeToTextFormat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000080, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_TextToString_ReturnValue) == 0x000090, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000B8, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_GetDate_ReturnValue) == 0x0000C8, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_GetDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_BreakDateTime_Year) == 0x0000E8, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_BreakDateTime_Month) == 0x0000EC, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_BreakDateTime_Day) == 0x0000F0, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_BreakDateTime_Hour) == 0x0000F4, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_BreakDateTime_Minute) == 0x0000F8, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_BreakDateTime_Second) == 0x0000FC, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_BreakDateTime_Millisecond) == 0x000100, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000108, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_IntToText_ReturnValue) == 0x000118, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000130, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000140, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000150, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000168, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000178, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000188, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000198, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(W_SaveText_C_ExecuteUbergraph_W_SaveText, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001A8, "Member 'W_SaveText_C_ExecuteUbergraph_W_SaveText::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function W_SaveText.W_SaveText_C.UpdateText
// 0x0038 (0x0038 - 0x0000)
struct W_SaveText_C_UpdateText final
{
public:
	struct FS_BiomeSave                           Save;                                              // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SaveText_C_UpdateText) == 0x000008, "Wrong alignment on W_SaveText_C_UpdateText");
static_assert(sizeof(W_SaveText_C_UpdateText) == 0x000038, "Wrong size on W_SaveText_C_UpdateText");
static_assert(offsetof(W_SaveText_C_UpdateText, Save) == 0x000000, "Member 'W_SaveText_C_UpdateText::Save' has a wrong offset!");

}

