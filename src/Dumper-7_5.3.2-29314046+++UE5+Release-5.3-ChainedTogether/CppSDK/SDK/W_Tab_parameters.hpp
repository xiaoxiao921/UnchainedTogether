#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Tab

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_Tab.W_Tab_C.ExecuteUbergraph_W_Tab
// 0x0250 (0x0250 - 0x0000)
struct W_Tab_C_ExecuteUbergraph_W_Tab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0xC];                                       // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0020(0x00D0)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_108[0x8];                                      // 0x0108(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0110(0x00D0)()
	bool                                          K2Node_Event_Selected;                             // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_Event_Parent;                               // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_WidgetSettings_C> K2Node_DynamicCast_AsBPI_Widget_Settings;          // 0x01F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UW_Tab_C*>                       CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0210(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UW_Tab_C*                               CallFunc_Array_Get_Item;                           // 0x0220(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_WidgetTab_C>      CallFunc_SetSelected_self_CastInput;               // 0x0230(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Tab_C_ExecuteUbergraph_W_Tab) == 0x000010, "Wrong alignment on W_Tab_C_ExecuteUbergraph_W_Tab");
static_assert(sizeof(W_Tab_C_ExecuteUbergraph_W_Tab) == 0x000250, "Wrong size on W_Tab_C_ExecuteUbergraph_W_Tab");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, EntryPoint) == 0x000000, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, Temp_bool_Variable) == 0x000004, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, Temp_byte_Variable) == 0x000005, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, Temp_byte_Variable_1) == 0x000006, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, Temp_int_Array_Index_Variable) == 0x000008, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, K2Node_Select_Default) == 0x00000C, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, K2Node_MakeStruct_SlateBrush) == 0x000020, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, K2Node_Event_IsDesignTime) == 0x0000F4, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, K2Node_MakeStruct_Margin) == 0x0000F8, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, K2Node_MakeStruct_SlateBrush_1) == 0x000110, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, K2Node_Event_Selected) == 0x0001E0, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::K2Node_Event_Selected' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, CallFunc_PlayAnimation_ReturnValue) == 0x0001E8, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, K2Node_Event_Parent) == 0x0001F0, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::K2Node_Event_Parent' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, K2Node_DynamicCast_AsBPI_Widget_Settings) == 0x0001F8, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::K2Node_DynamicCast_AsBPI_Widget_Settings' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, K2Node_DynamicCast_bSuccess) == 0x000208, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000210, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, CallFunc_Array_Get_Item) == 0x000220, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, CallFunc_Array_Length_ReturnValue) == 0x000228, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, CallFunc_SetSelected_self_CastInput) == 0x000230, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::CallFunc_SetSelected_self_CastInput' has a wrong offset!");
static_assert(offsetof(W_Tab_C_ExecuteUbergraph_W_Tab, CallFunc_Less_IntInt_ReturnValue) == 0x000240, "Member 'W_Tab_C_ExecuteUbergraph_W_Tab::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_Tab.W_Tab_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Tab_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Tab_C_PreConstruct) == 0x000001, "Wrong alignment on W_Tab_C_PreConstruct");
static_assert(sizeof(W_Tab_C_PreConstruct) == 0x000001, "Wrong size on W_Tab_C_PreConstruct");
static_assert(offsetof(W_Tab_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Tab_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Tab.W_Tab_C.SetParentWidget
// 0x0008 (0x0008 - 0x0000)
struct W_Tab_C_SetParentWidget final
{
public:
	class UUserWidget*                            Parent;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Tab_C_SetParentWidget) == 0x000008, "Wrong alignment on W_Tab_C_SetParentWidget");
static_assert(sizeof(W_Tab_C_SetParentWidget) == 0x000008, "Wrong size on W_Tab_C_SetParentWidget");
static_assert(offsetof(W_Tab_C_SetParentWidget, Parent) == 0x000000, "Member 'W_Tab_C_SetParentWidget::Parent' has a wrong offset!");

// Function W_Tab.W_Tab_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct W_Tab_C_SetSelected final
{
public:
	bool                                          Selected_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Tab_C_SetSelected) == 0x000001, "Wrong alignment on W_Tab_C_SetSelected");
static_assert(sizeof(W_Tab_C_SetSelected) == 0x000001, "Wrong size on W_Tab_C_SetSelected");
static_assert(offsetof(W_Tab_C_SetSelected, Selected_0) == 0x000000, "Member 'W_Tab_C_SetSelected::Selected_0' has a wrong offset!");

}

