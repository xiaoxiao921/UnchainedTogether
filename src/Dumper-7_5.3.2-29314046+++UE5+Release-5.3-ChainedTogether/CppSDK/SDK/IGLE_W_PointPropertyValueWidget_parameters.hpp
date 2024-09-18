#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_PointPropertyValueWidget

#include "Basic.hpp"

#include "InGameLevelEditor_structs.hpp"


namespace SDK::Params
{

// Function IGLE_W_PointPropertyValueWidget.IGLE_W_PointPropertyValueWidget_C.ClearSelection
// 0x0018 (0x0018 - 0x0000)
struct IGLE_W_PointPropertyValueWidget_C_ClearSelection final
{
public:
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AIGLE_Pawn_Example_C*                   K2Node_DynamicCast_AsIGLE_Pawn_Example;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_PointPropertyValueWidget_C_ClearSelection) == 0x000008, "Wrong alignment on IGLE_W_PointPropertyValueWidget_C_ClearSelection");
static_assert(sizeof(IGLE_W_PointPropertyValueWidget_C_ClearSelection) == 0x000018, "Wrong size on IGLE_W_PointPropertyValueWidget_C_ClearSelection");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ClearSelection, CallFunc_GetPlayerPawn_ReturnValue) == 0x000000, "Member 'IGLE_W_PointPropertyValueWidget_C_ClearSelection::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ClearSelection, K2Node_DynamicCast_AsIGLE_Pawn_Example) == 0x000008, "Member 'IGLE_W_PointPropertyValueWidget_C_ClearSelection::K2Node_DynamicCast_AsIGLE_Pawn_Example' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ClearSelection, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'IGLE_W_PointPropertyValueWidget_C_ClearSelection::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function IGLE_W_PointPropertyValueWidget.IGLE_W_PointPropertyValueWidget_C.ExecuteUbergraph_IGLE_W_PointPropertyValueWidget
// 0x0038 (0x0038 - 0x0000)
struct IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_PropertyValueObject*              CallFunc_GetSelectedPointProperty_PropertyValue;   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UIGLE_PropertyValueObject*              CallFunc_GetSelectedPointProperty_PropertyValue_1; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UIGLE_SplinePointPropertyValueObject_C* K2Node_DynamicCast_AsIGLE_Spline_Point_Property_Value_Object; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_SplinePointPropertyValueObject_C* K2Node_DynamicCast_AsIGLE_Spline_Point_Property_Value_Object_1; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IGLE_TryCallOnPropertyValueChanged_Success; // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IGLE_TryCallOnPropertyValueChanged_Success_1; // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget) == 0x000008, "Wrong alignment on IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget");
static_assert(sizeof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget) == 0x000038, "Wrong size on IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget, EntryPoint) == 0x000000, "Member 'IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget, CallFunc_GetSelectedPointProperty_PropertyValue) == 0x000008, "Member 'IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget::CallFunc_GetSelectedPointProperty_PropertyValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget, CallFunc_GetSelectedPointProperty_PropertyValue_1) == 0x000010, "Member 'IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget::CallFunc_GetSelectedPointProperty_PropertyValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget, K2Node_DynamicCast_AsIGLE_Spline_Point_Property_Value_Object) == 0x000018, "Member 'IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget::K2Node_DynamicCast_AsIGLE_Spline_Point_Property_Value_Object' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget, K2Node_DynamicCast_AsIGLE_Spline_Point_Property_Value_Object_1) == 0x000028, "Member 'IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget::K2Node_DynamicCast_AsIGLE_Spline_Point_Property_Value_Object_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget, CallFunc_IGLE_TryCallOnPropertyValueChanged_Success) == 0x000031, "Member 'IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget::CallFunc_IGLE_TryCallOnPropertyValueChanged_Success' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget, CallFunc_IGLE_TryCallOnPropertyValueChanged_Success_1) == 0x000032, "Member 'IGLE_W_PointPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_PointPropertyValueWidget::CallFunc_IGLE_TryCallOnPropertyValueChanged_Success_1' has a wrong offset!");

// Function IGLE_W_PointPropertyValueWidget.IGLE_W_PointPropertyValueWidget_C.GetSelectedPointProperty
// 0x00D0 (0x00D0 - 0x0000)
struct IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty final
{
public:
	class UIGLE_PropertyValueObject*              PropertyValue;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AIGLE_Pawn_Example_C*                   K2Node_DynamicCast_AsIGLE_Pawn_Example;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_Set_ToArray_Result;                       // 0x0020(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMod_SplinePoint_C*                     K2Node_DynamicCast_AsMod_Spline_Point;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIGLEProperty                          CallFunc_GetPropertyByName_Property;               // 0x0048(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_GetPropertyByName_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty) == 0x000008, "Wrong alignment on IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty");
static_assert(sizeof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty) == 0x0000D0, "Wrong size on IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, PropertyValue) == 0x000000, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::PropertyValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, K2Node_DynamicCast_AsIGLE_Pawn_Example) == 0x000010, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::K2Node_DynamicCast_AsIGLE_Pawn_Example' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, CallFunc_Set_ToArray_Result) == 0x000020, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::CallFunc_Set_ToArray_Result' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, CallFunc_Array_Get_Item) == 0x000030, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, K2Node_DynamicCast_AsMod_Spline_Point) == 0x000038, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::K2Node_DynamicCast_AsMod_Spline_Point' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, CallFunc_GetPropertyByName_Property) == 0x000048, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::CallFunc_GetPropertyByName_Property' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty, CallFunc_GetPropertyByName_ReturnValue) == 0x0000C8, "Member 'IGLE_W_PointPropertyValueWidget_C_GetSelectedPointProperty::CallFunc_GetPropertyByName_ReturnValue' has a wrong offset!");

// Function IGLE_W_PointPropertyValueWidget.IGLE_W_PointPropertyValueWidget_C.GetText
// 0x0040 (0x0040 - 0x0000)
struct IGLE_W_PointPropertyValueWidget_C_GetText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UIGLE_SplinePointPropertyValueObject_C* K2Node_DynamicCast_AsIGLE_Spline_Point_Property_Value_Object; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
};
static_assert(alignof(IGLE_W_PointPropertyValueWidget_C_GetText) == 0x000008, "Wrong alignment on IGLE_W_PointPropertyValueWidget_C_GetText");
static_assert(sizeof(IGLE_W_PointPropertyValueWidget_C_GetText) == 0x000040, "Wrong size on IGLE_W_PointPropertyValueWidget_C_GetText");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetText, ReturnValue) == 0x000000, "Member 'IGLE_W_PointPropertyValueWidget_C_GetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetText, K2Node_DynamicCast_AsIGLE_Spline_Point_Property_Value_Object) == 0x000018, "Member 'IGLE_W_PointPropertyValueWidget_C_GetText::K2Node_DynamicCast_AsIGLE_Spline_Point_Property_Value_Object' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetText, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'IGLE_W_PointPropertyValueWidget_C_GetText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetText, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'IGLE_W_PointPropertyValueWidget_C_GetText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_PointPropertyValueWidget_C_GetText, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'IGLE_W_PointPropertyValueWidget_C_GetText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}
