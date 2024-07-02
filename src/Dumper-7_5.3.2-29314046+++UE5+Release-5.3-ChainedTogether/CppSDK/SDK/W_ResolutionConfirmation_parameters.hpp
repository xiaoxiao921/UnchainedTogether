#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ResolutionConfirmation

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_ResolutionConfirmation.W_ResolutionConfirmation_C.ExecuteUbergraph_W_ResolutionConfirmation
// 0x0068 (0x0068 - 0x0000)
struct W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B1[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B2[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_SettingsMain_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	TScriptInterface<class IBPI_GameInstanceWithSave_C> K2Node_DynamicCast_AsBPI_Game_Instance_with_Save;  // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B3[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_SettingsMain_C*                      CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation) == 0x000008, "Wrong alignment on W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation");
static_assert(sizeof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation) == 0x000068, "Wrong size on W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, EntryPoint) == 0x000000, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_IsVisible_ReturnValue) == 0x000004, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, Temp_int_Array_Index_Variable) == 0x000010, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, Temp_int_Variable) == 0x000014, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_IsInViewport_ReturnValue) == 0x000020, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000030, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, K2Node_DynamicCast_AsBPI_Game_Instance_with_Save) == 0x000040, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::K2Node_DynamicCast_AsBPI_Game_Instance_with_Save' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_Array_Get_Item) == 0x000058, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'W_ResolutionConfirmation_C_ExecuteUbergraph_W_ResolutionConfirmation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_ResolutionConfirmation.W_ResolutionConfirmation_C.FocusOnSettingsMenu
// 0x0038 (0x0038 - 0x0000)
struct W_ResolutionConfirmation_C_FocusOnSettingsMenu final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UW_SettingsMain_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_SettingsMain_C*                      CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ResolutionConfirmation_C_FocusOnSettingsMenu) == 0x000008, "Wrong alignment on W_ResolutionConfirmation_C_FocusOnSettingsMenu");
static_assert(sizeof(W_ResolutionConfirmation_C_FocusOnSettingsMenu) == 0x000038, "Wrong size on W_ResolutionConfirmation_C_FocusOnSettingsMenu");
static_assert(offsetof(W_ResolutionConfirmation_C_FocusOnSettingsMenu, Temp_int_Array_Index_Variable) == 0x000000, "Member 'W_ResolutionConfirmation_C_FocusOnSettingsMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_FocusOnSettingsMenu, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'W_ResolutionConfirmation_C_FocusOnSettingsMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_FocusOnSettingsMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'W_ResolutionConfirmation_C_FocusOnSettingsMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_FocusOnSettingsMenu, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000010, "Member 'W_ResolutionConfirmation_C_FocusOnSettingsMenu::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_FocusOnSettingsMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'W_ResolutionConfirmation_C_FocusOnSettingsMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_FocusOnSettingsMenu, CallFunc_Array_Get_Item) == 0x000028, "Member 'W_ResolutionConfirmation_C_FocusOnSettingsMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_FocusOnSettingsMenu, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'W_ResolutionConfirmation_C_FocusOnSettingsMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_FocusOnSettingsMenu, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'W_ResolutionConfirmation_C_FocusOnSettingsMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ResolutionConfirmation_C_FocusOnSettingsMenu, CallFunc_IsInViewport_ReturnValue) == 0x000035, "Member 'W_ResolutionConfirmation_C_FocusOnSettingsMenu::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");

}

