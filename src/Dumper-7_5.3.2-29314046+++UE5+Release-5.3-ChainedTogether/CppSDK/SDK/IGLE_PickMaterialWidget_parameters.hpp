#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_PickMaterialWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function IGLE_PickMaterialWidget.IGLE_PickMaterialWidget_C.ExecuteUbergraph_IGLE_PickMaterialWidget
// 0x0150 (0x0150 - 0x0000)
struct IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPickMaterial_W_C*                      CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class UObject*                                Temp_object_Variable_1;                            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0088(0x0018)()
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AIGLE_Pawn_Example_C*                   K2Node_DynamicCast_AsIGLE_Pawn_Example;            // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_PickMaterialProperty_C*           K2Node_DynamicCast_AsIGLE_Pick_Material_Property;  // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialInterface>      K2Node_CustomEvent_Material;                       // 0x00C8(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x00F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_PickMaterialProperty_C*           K2Node_DynamicCast_AsIGLE_Pick_Material_Property_1; // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IGLE_TryCallOnPropertyValueChanged_Success; // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_112[0x6];                                      // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_PickMaterialProperty_C*           K2Node_DynamicCast_AsIGLE_Pick_Material_Property_2; // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IGLE_TryCallOnPropertyValueChanged_Success_1; // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AIGLE_Pawn_Example_C*                   K2Node_DynamicCast_AsIGLE_Pawn_Example_1;          // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x013C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget) == 0x000008, "Wrong alignment on IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget");
static_assert(sizeof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget) == 0x000150, "Wrong size on IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, EntryPoint) == 0x000000, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_CustomEvent_Loaded_1) == 0x000010, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, Temp_object_Variable) == 0x000018, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_GetDisplayName_ReturnValue) == 0x000020, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_Replace_ReturnValue) == 0x000030, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_CustomEvent_Loaded) == 0x000040, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, Temp_object_Variable_1) == 0x000060, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_GetDisplayName_ReturnValue_1) == 0x000068, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_Replace_ReturnValue_1) == 0x000078, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000088, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000A0, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_AsIGLE_Pawn_Example) == 0x0000A8, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_AsIGLE_Pawn_Example' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_AsIGLE_Pick_Material_Property) == 0x0000B8, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_AsIGLE_Pick_Material_Property' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_CustomEvent_Material) == 0x0000C8, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_CustomEvent_Material' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000F0, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_CreateDelegate_OutputDelegate) == 0x0000F4, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_AsIGLE_Pick_Material_Property_1) == 0x000108, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_AsIGLE_Pick_Material_Property_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_bSuccess_2) == 0x000110, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_IGLE_TryCallOnPropertyValueChanged_Success) == 0x000111, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_IGLE_TryCallOnPropertyValueChanged_Success' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_AsIGLE_Pick_Material_Property_2) == 0x000118, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_AsIGLE_Pick_Material_Property_2' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_bSuccess_3) == 0x000120, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_IGLE_TryCallOnPropertyValueChanged_Success_1) == 0x000121, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_IGLE_TryCallOnPropertyValueChanged_Success_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000128, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_AsIGLE_Pawn_Example_1) == 0x000130, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_AsIGLE_Pawn_Example_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_DynamicCast_bSuccess_4) == 0x000138, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x00013C, "Member 'IGLE_PickMaterialWidget_C_ExecuteUbergraph_IGLE_PickMaterialWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function IGLE_PickMaterialWidget.IGLE_PickMaterialWidget_C.GetName
// 0x0088 (0x0088 - 0x0000)
struct IGLE_PickMaterialWidget_C_GetName final
{
public:
	class FString                                 SourceString;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ReturnParm)
	TArray<class FString>                         CallFunc_ParseIntoArray_ReturnValue;               // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_ParseIntoArray_ReturnValue_1;             // 0x0050(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
};
static_assert(alignof(IGLE_PickMaterialWidget_C_GetName) == 0x000008, "Wrong alignment on IGLE_PickMaterialWidget_C_GetName");
static_assert(sizeof(IGLE_PickMaterialWidget_C_GetName) == 0x000088, "Wrong size on IGLE_PickMaterialWidget_C_GetName");
static_assert(offsetof(IGLE_PickMaterialWidget_C_GetName, SourceString) == 0x000000, "Member 'IGLE_PickMaterialWidget_C_GetName::SourceString' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_GetName, ReturnValue) == 0x000010, "Member 'IGLE_PickMaterialWidget_C_GetName::ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_GetName, CallFunc_ParseIntoArray_ReturnValue) == 0x000028, "Member 'IGLE_PickMaterialWidget_C_GetName::CallFunc_ParseIntoArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_GetName, CallFunc_Array_LastIndex_ReturnValue) == 0x000038, "Member 'IGLE_PickMaterialWidget_C_GetName::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_GetName, CallFunc_Array_Get_Item) == 0x000040, "Member 'IGLE_PickMaterialWidget_C_GetName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_GetName, CallFunc_ParseIntoArray_ReturnValue_1) == 0x000050, "Member 'IGLE_PickMaterialWidget_C_GetName::CallFunc_ParseIntoArray_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_GetName, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'IGLE_PickMaterialWidget_C_GetName::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(IGLE_PickMaterialWidget_C_GetName, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'IGLE_PickMaterialWidget_C_GetName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function IGLE_PickMaterialWidget.IGLE_PickMaterialWidget_C.OnLoaded_0C0CB91D4327FF66ABDFAF833154F9DC
// 0x0008 (0x0008 - 0x0000)
struct IGLE_PickMaterialWidget_C_OnLoaded_0C0CB91D4327FF66ABDFAF833154F9DC final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_PickMaterialWidget_C_OnLoaded_0C0CB91D4327FF66ABDFAF833154F9DC) == 0x000008, "Wrong alignment on IGLE_PickMaterialWidget_C_OnLoaded_0C0CB91D4327FF66ABDFAF833154F9DC");
static_assert(sizeof(IGLE_PickMaterialWidget_C_OnLoaded_0C0CB91D4327FF66ABDFAF833154F9DC) == 0x000008, "Wrong size on IGLE_PickMaterialWidget_C_OnLoaded_0C0CB91D4327FF66ABDFAF833154F9DC");
static_assert(offsetof(IGLE_PickMaterialWidget_C_OnLoaded_0C0CB91D4327FF66ABDFAF833154F9DC, Loaded) == 0x000000, "Member 'IGLE_PickMaterialWidget_C_OnLoaded_0C0CB91D4327FF66ABDFAF833154F9DC::Loaded' has a wrong offset!");

// Function IGLE_PickMaterialWidget.IGLE_PickMaterialWidget_C.OnLoaded_C3FE7ADF4965EB35A69694BCDC7457D4
// 0x0008 (0x0008 - 0x0000)
struct IGLE_PickMaterialWidget_C_OnLoaded_C3FE7ADF4965EB35A69694BCDC7457D4 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_PickMaterialWidget_C_OnLoaded_C3FE7ADF4965EB35A69694BCDC7457D4) == 0x000008, "Wrong alignment on IGLE_PickMaterialWidget_C_OnLoaded_C3FE7ADF4965EB35A69694BCDC7457D4");
static_assert(sizeof(IGLE_PickMaterialWidget_C_OnLoaded_C3FE7ADF4965EB35A69694BCDC7457D4) == 0x000008, "Wrong size on IGLE_PickMaterialWidget_C_OnLoaded_C3FE7ADF4965EB35A69694BCDC7457D4");
static_assert(offsetof(IGLE_PickMaterialWidget_C_OnLoaded_C3FE7ADF4965EB35A69694BCDC7457D4, Loaded) == 0x000000, "Member 'IGLE_PickMaterialWidget_C_OnLoaded_C3FE7ADF4965EB35A69694BCDC7457D4::Loaded' has a wrong offset!");

// Function IGLE_PickMaterialWidget.IGLE_PickMaterialWidget_C.RefreshMaterial
// 0x0028 (0x0028 - 0x0000)
struct IGLE_PickMaterialWidget_C_RefreshMaterial final
{
public:
	TSoftObjectPtr<class UMaterialInterface>      Material;                                          // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_PickMaterialWidget_C_RefreshMaterial) == 0x000008, "Wrong alignment on IGLE_PickMaterialWidget_C_RefreshMaterial");
static_assert(sizeof(IGLE_PickMaterialWidget_C_RefreshMaterial) == 0x000028, "Wrong size on IGLE_PickMaterialWidget_C_RefreshMaterial");
static_assert(offsetof(IGLE_PickMaterialWidget_C_RefreshMaterial, Material) == 0x000000, "Member 'IGLE_PickMaterialWidget_C_RefreshMaterial::Material' has a wrong offset!");

}
