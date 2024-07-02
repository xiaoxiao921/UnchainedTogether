#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: V_SaveGame

#include "Basic.hpp"

#include "S_SavedSetting_structs.hpp"
#include "S_Setting_structs.hpp"


namespace SDK::Params
{

// Function V_SaveGame.V_SaveGame_C.AddRemoveMoney
// 0x0004 (0x0004 - 0x0000)
struct V_SaveGame_C_AddRemoveMoney final
{
public:
	int32                                         Delta;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(V_SaveGame_C_AddRemoveMoney) == 0x000004, "Wrong alignment on V_SaveGame_C_AddRemoveMoney");
static_assert(sizeof(V_SaveGame_C_AddRemoveMoney) == 0x000004, "Wrong size on V_SaveGame_C_AddRemoveMoney");
static_assert(offsetof(V_SaveGame_C_AddRemoveMoney, Delta) == 0x000000, "Member 'V_SaveGame_C_AddRemoveMoney::Delta' has a wrong offset!");

// Function V_SaveGame.V_SaveGame_C.ContainsSetting?
// 0x0048 (0x0048 - 0x0000)
struct V_SaveGame_C_ContainsSetting_ final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1745[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_SavedSetting                        CallFunc_Array_Get_Item;                           // 0x0020(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(V_SaveGame_C_ContainsSetting_) == 0x000008, "Wrong alignment on V_SaveGame_C_ContainsSetting_");
static_assert(sizeof(V_SaveGame_C_ContainsSetting_) == 0x000048, "Wrong size on V_SaveGame_C_ContainsSetting_");
static_assert(offsetof(V_SaveGame_C_ContainsSetting_, ID) == 0x000000, "Member 'V_SaveGame_C_ContainsSetting_::ID' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ContainsSetting_, ReturnValue) == 0x000010, "Member 'V_SaveGame_C_ContainsSetting_::ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ContainsSetting_, Temp_int_Array_Index_Variable) == 0x000014, "Member 'V_SaveGame_C_ContainsSetting_::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ContainsSetting_, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'V_SaveGame_C_ContainsSetting_::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ContainsSetting_, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'V_SaveGame_C_ContainsSetting_::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ContainsSetting_, CallFunc_Array_Get_Item) == 0x000020, "Member 'V_SaveGame_C_ContainsSetting_::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ContainsSetting_, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'V_SaveGame_C_ContainsSetting_::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ContainsSetting_, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'V_SaveGame_C_ContainsSetting_::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ContainsSetting_, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000045, "Member 'V_SaveGame_C_ContainsSetting_::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function V_SaveGame.V_SaveGame_C.DoesSettingStillExists?
// 0x00E0 (0x00E0 - 0x0000)
struct V_SaveGame_C_DoesSettingStillExists_ final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1746[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0018(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1747[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_Setting                             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0090)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1748[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1749[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(V_SaveGame_C_DoesSettingStillExists_) == 0x000008, "Wrong alignment on V_SaveGame_C_DoesSettingStillExists_");
static_assert(sizeof(V_SaveGame_C_DoesSettingStillExists_) == 0x0000E0, "Wrong size on V_SaveGame_C_DoesSettingStillExists_");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, ID) == 0x000000, "Member 'V_SaveGame_C_DoesSettingStillExists_::ID' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, ReturnValue) == 0x000010, "Member 'V_SaveGame_C_DoesSettingStillExists_::ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, Temp_int_Array_Index_Variable) == 0x000014, "Member 'V_SaveGame_C_DoesSettingStillExists_::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000018, "Member 'V_SaveGame_C_DoesSettingStillExists_::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, CallFunc_Array_Get_Item) == 0x000028, "Member 'V_SaveGame_C_DoesSettingStillExists_::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'V_SaveGame_C_DoesSettingStillExists_::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'V_SaveGame_C_DoesSettingStillExists_::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C8, "Member 'V_SaveGame_C_DoesSettingStillExists_::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, Temp_int_Loop_Counter_Variable) == 0x0000CC, "Member 'V_SaveGame_C_DoesSettingStillExists_::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'V_SaveGame_C_DoesSettingStillExists_::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'V_SaveGame_C_DoesSettingStillExists_::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_DoesSettingStillExists_, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000D8, "Member 'V_SaveGame_C_DoesSettingStillExists_::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function V_SaveGame.V_SaveGame_C.ExecuteUbergraph_V_SaveGame
// 0x0010 (0x0010 - 0x0000)
struct V_SaveGame_C_ExecuteUbergraph_V_SaveGame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Delta;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(V_SaveGame_C_ExecuteUbergraph_V_SaveGame) == 0x000004, "Wrong alignment on V_SaveGame_C_ExecuteUbergraph_V_SaveGame");
static_assert(sizeof(V_SaveGame_C_ExecuteUbergraph_V_SaveGame) == 0x000010, "Wrong size on V_SaveGame_C_ExecuteUbergraph_V_SaveGame");
static_assert(offsetof(V_SaveGame_C_ExecuteUbergraph_V_SaveGame, EntryPoint) == 0x000000, "Member 'V_SaveGame_C_ExecuteUbergraph_V_SaveGame::EntryPoint' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ExecuteUbergraph_V_SaveGame, K2Node_CustomEvent_Delta) == 0x000004, "Member 'V_SaveGame_C_ExecuteUbergraph_V_SaveGame::K2Node_CustomEvent_Delta' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ExecuteUbergraph_V_SaveGame, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'V_SaveGame_C_ExecuteUbergraph_V_SaveGame::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ExecuteUbergraph_V_SaveGame, CallFunc_Clamp_ReturnValue) == 0x00000C, "Member 'V_SaveGame_C_ExecuteUbergraph_V_SaveGame::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function V_SaveGame.V_SaveGame_C.GetSettingFromIdentifier
// 0x0060 (0x0060 - 0x0000)
struct V_SaveGame_C_GetSettingFromIdentifier final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Value;                                             // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_SavedSetting                        CallFunc_Array_Get_Item;                           // 0x0038(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(V_SaveGame_C_GetSettingFromIdentifier) == 0x000008, "Wrong alignment on V_SaveGame_C_GetSettingFromIdentifier");
static_assert(sizeof(V_SaveGame_C_GetSettingFromIdentifier) == 0x000060, "Wrong size on V_SaveGame_C_GetSettingFromIdentifier");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, ID) == 0x000000, "Member 'V_SaveGame_C_GetSettingFromIdentifier::ID' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, ReturnValue) == 0x000010, "Member 'V_SaveGame_C_GetSettingFromIdentifier::ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, Value) == 0x000018, "Member 'V_SaveGame_C_GetSettingFromIdentifier::Value' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, Temp_int_Array_Index_Variable) == 0x000028, "Member 'V_SaveGame_C_GetSettingFromIdentifier::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'V_SaveGame_C_GetSettingFromIdentifier::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'V_SaveGame_C_GetSettingFromIdentifier::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'V_SaveGame_C_GetSettingFromIdentifier::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, CallFunc_Array_Get_Item) == 0x000038, "Member 'V_SaveGame_C_GetSettingFromIdentifier::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'V_SaveGame_C_GetSettingFromIdentifier::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_GetSettingFromIdentifier, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000059, "Member 'V_SaveGame_C_GetSettingFromIdentifier::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function V_SaveGame.V_SaveGame_C.GetSettings
// 0x0010 (0x0010 - 0x0000)
struct V_SaveGame_C_GetSettings final
{
public:
	TArray<struct FS_SavedSetting>                Settings;                                          // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(V_SaveGame_C_GetSettings) == 0x000008, "Wrong alignment on V_SaveGame_C_GetSettings");
static_assert(sizeof(V_SaveGame_C_GetSettings) == 0x000010, "Wrong size on V_SaveGame_C_GetSettings");
static_assert(offsetof(V_SaveGame_C_GetSettings, Settings) == 0x000000, "Member 'V_SaveGame_C_GetSettings::Settings' has a wrong offset!");

// Function V_SaveGame.V_SaveGame_C.ModifySetting
// 0x0068 (0x0068 - 0x0000)
struct V_SaveGame_C_ModifySetting final
{
public:
	class FString                                 Identifier;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FS_SavedSetting                        Item;                                              // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174B[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_SavedSetting                        CallFunc_Array_Get_Item;                           // 0x0040(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(V_SaveGame_C_ModifySetting) == 0x000008, "Wrong alignment on V_SaveGame_C_ModifySetting");
static_assert(sizeof(V_SaveGame_C_ModifySetting) == 0x000068, "Wrong size on V_SaveGame_C_ModifySetting");
static_assert(offsetof(V_SaveGame_C_ModifySetting, Identifier) == 0x000000, "Member 'V_SaveGame_C_ModifySetting::Identifier' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ModifySetting, Item) == 0x000010, "Member 'V_SaveGame_C_ModifySetting::Item' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ModifySetting, Temp_int_Array_Index_Variable) == 0x000030, "Member 'V_SaveGame_C_ModifySetting::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ModifySetting, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'V_SaveGame_C_ModifySetting::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ModifySetting, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'V_SaveGame_C_ModifySetting::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ModifySetting, CallFunc_Array_Get_Item) == 0x000040, "Member 'V_SaveGame_C_ModifySetting::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ModifySetting, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'V_SaveGame_C_ModifySetting::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ModifySetting, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'V_SaveGame_C_ModifySetting::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_ModifySetting, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000065, "Member 'V_SaveGame_C_ModifySetting::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function V_SaveGame.V_SaveGame_C.UpdateSettingById
// 0x0088 (0x0088 - 0x0000)
struct V_SaveGame_C_UpdateSettingById final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Value;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174C[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174D[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_SavedSetting                        CallFunc_Array_Get_Item;                           // 0x0038(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174E[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_SavedSetting                        K2Node_SetFieldsInStruct_StructOut;                // 0x0060(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(V_SaveGame_C_UpdateSettingById) == 0x000008, "Wrong alignment on V_SaveGame_C_UpdateSettingById");
static_assert(sizeof(V_SaveGame_C_UpdateSettingById) == 0x000088, "Wrong size on V_SaveGame_C_UpdateSettingById");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, ID) == 0x000000, "Member 'V_SaveGame_C_UpdateSettingById::ID' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, Value) == 0x000010, "Member 'V_SaveGame_C_UpdateSettingById::Value' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, ReturnValue) == 0x000020, "Member 'V_SaveGame_C_UpdateSettingById::ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, Temp_int_Array_Index_Variable) == 0x000024, "Member 'V_SaveGame_C_UpdateSettingById::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'V_SaveGame_C_UpdateSettingById::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'V_SaveGame_C_UpdateSettingById::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'V_SaveGame_C_UpdateSettingById::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, CallFunc_Array_Get_Item) == 0x000038, "Member 'V_SaveGame_C_UpdateSettingById::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'V_SaveGame_C_UpdateSettingById::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, K2Node_SetFieldsInStruct_StructOut) == 0x000060, "Member 'V_SaveGame_C_UpdateSettingById::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(V_SaveGame_C_UpdateSettingById, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000080, "Member 'V_SaveGame_C_UpdateSettingById::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

}

