#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalLevelSlot_W

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LocalLevelSlot_W.LocalLevelSlot_W_C.ExecuteUbergraph_LocalLevelSlot_W
// 0x00F0 (0x00F0 - 0x0000)
struct LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetProjectDirectory_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UConfirmDeleteLevel_W_C*                CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class ULocalLevelSlot_W_C*>            CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ULocalLevelSlot_W_C*                    CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	class FString                                 CallFunc_GetPath_ReturnValue;                      // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUploadUGC_W_C*                         K2Node_DynamicCast_AsUpload_UGC_W;                 // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetProjectDirectory_ReturnValue_1;        // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertRelativePathToFull_ReturnValue;    // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI;                    // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertRelativePathToFull_ReturnValue_1;  // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W) == 0x000008, "Wrong alignment on LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W");
static_assert(sizeof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W) == 0x0000F0, "Wrong size on LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, EntryPoint) == 0x000000, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_GetProjectDirectory_ReturnValue) == 0x000008, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_GetProjectDirectory_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, Temp_int_Array_Index_Variable) == 0x000018, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_Create_ReturnValue) == 0x000020, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000028, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_Array_Get_Item) == 0x000038, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, K2Node_MakeStruct_Margin) == 0x000044, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, K2Node_MakeStruct_Margin_1) == 0x000054, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_GetPath_ReturnValue) == 0x000080, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_GetPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, K2Node_DynamicCast_AsUpload_UGC_W) == 0x000090, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::K2Node_DynamicCast_AsUpload_UGC_W' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, Temp_int_Loop_Counter_Variable) == 0x00009C, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_GetProjectDirectory_ReturnValue_1) == 0x0000A0, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_GetProjectDirectory_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_ConvertRelativePathToFull_ReturnValue) == 0x0000B0, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_ConvertRelativePathToFull_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_Less_IntInt_ReturnValue) == 0x0000C0, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_GetGameInstance_ReturnValue) == 0x0000C8, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, K2Node_DynamicCast_AsCustom_GI) == 0x0000D0, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::K2Node_DynamicCast_AsCustom_GI' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W, CallFunc_ConvertRelativePathToFull_ReturnValue_1) == 0x0000E0, "Member 'LocalLevelSlot_W_C_ExecuteUbergraph_LocalLevelSlot_W::CallFunc_ConvertRelativePathToFull_ReturnValue_1' has a wrong offset!");

// Function LocalLevelSlot_W.LocalLevelSlot_W_C.GetPath
// 0x0030 (0x0030 - 0x0000)
struct LocalLevelSlot_W_C_GetPath final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetProjectDirectory_ReturnValue;          // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertRelativePathToFull_ReturnValue;    // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LocalLevelSlot_W_C_GetPath) == 0x000008, "Wrong alignment on LocalLevelSlot_W_C_GetPath");
static_assert(sizeof(LocalLevelSlot_W_C_GetPath) == 0x000030, "Wrong size on LocalLevelSlot_W_C_GetPath");
static_assert(offsetof(LocalLevelSlot_W_C_GetPath, ReturnValue) == 0x000000, "Member 'LocalLevelSlot_W_C_GetPath::ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_GetPath, CallFunc_GetProjectDirectory_ReturnValue) == 0x000010, "Member 'LocalLevelSlot_W_C_GetPath::CallFunc_GetProjectDirectory_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalLevelSlot_W_C_GetPath, CallFunc_ConvertRelativePathToFull_ReturnValue) == 0x000020, "Member 'LocalLevelSlot_W_C_GetPath::CallFunc_ConvertRelativePathToFull_ReturnValue' has a wrong offset!");

}
