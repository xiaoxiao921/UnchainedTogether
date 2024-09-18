#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_Fog

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Mod_Fog.Mod_Fog_C.BndEvt__Mod_Fog_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Mod_Fog_C_BndEvt__Mod_Fog_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature final
{
public:
	class FString                                 PropertyName;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_Fog_C_BndEvt__Mod_Fog_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature) == 0x000008, "Wrong alignment on Mod_Fog_C_BndEvt__Mod_Fog_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature");
static_assert(sizeof(Mod_Fog_C_BndEvt__Mod_Fog_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature) == 0x000010, "Wrong size on Mod_Fog_C_BndEvt__Mod_Fog_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature");
static_assert(offsetof(Mod_Fog_C_BndEvt__Mod_Fog_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature, PropertyName) == 0x000000, "Member 'Mod_Fog_C_BndEvt__Mod_Fog_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature::PropertyName' has a wrong offset!");

// Function Mod_Fog.Mod_Fog_C.ExecuteUbergraph_Mod_Fog
// 0x0090 (0x0090 - 0x0000)
struct Mod_Fog_C_ExecuteUbergraph_Mod_Fog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGM_Game_C*                             K2Node_DynamicCast_AsGM_Game;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_PropertyName;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_PropertyValueObject*              CallFunc_GetPropertyValueByName_Value;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPropertyValueByName_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_FloatProperty_C*                  K2Node_DynamicCast_AsIGLE_Float_Property;          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_PropertyValueObject*              CallFunc_GetPropertyValueByName_Value_1;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPropertyValueByName_ReturnValue_1;     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIGLE_ColorPropertyValueObject_C*       K2Node_DynamicCast_AsIGLE_Color_Property_Value_Object; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFogDensity_Value_ImplicitCast;         // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog) == 0x000008, "Wrong alignment on Mod_Fog_C_ExecuteUbergraph_Mod_Fog");
static_assert(sizeof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog) == 0x000090, "Wrong size on Mod_Fog_C_ExecuteUbergraph_Mod_Fog");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, EntryPoint) == 0x000000, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, CallFunc_IsServer_ReturnValue) == 0x000010, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, K2Node_DynamicCast_AsGM_Game) == 0x000018, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::K2Node_DynamicCast_AsGM_Game' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, K2Node_ComponentBoundEvent_PropertyName) == 0x000028, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::K2Node_ComponentBoundEvent_PropertyName' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, K2Node_SwitchString_CmpSuccess) == 0x000038, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, CallFunc_GetPropertyValueByName_Value) == 0x000040, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::CallFunc_GetPropertyValueByName_Value' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, CallFunc_GetPropertyValueByName_ReturnValue) == 0x000048, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::CallFunc_GetPropertyValueByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, K2Node_DynamicCast_AsIGLE_Float_Property) == 0x000050, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::K2Node_DynamicCast_AsIGLE_Float_Property' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, CallFunc_GetPropertyValueByName_Value_1) == 0x000060, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::CallFunc_GetPropertyValueByName_Value_1' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, CallFunc_GetPropertyValueByName_ReturnValue_1) == 0x000068, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::CallFunc_GetPropertyValueByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000070, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, K2Node_DynamicCast_AsIGLE_Color_Property_Value_Object) == 0x000078, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::K2Node_DynamicCast_AsIGLE_Color_Property_Value_Object' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, CallFunc_Conv_LinearColorToColor_ReturnValue) == 0x000084, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::CallFunc_Conv_LinearColorToColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Fog_C_ExecuteUbergraph_Mod_Fog, CallFunc_SetFogDensity_Value_ImplicitCast) == 0x000088, "Member 'Mod_Fog_C_ExecuteUbergraph_Mod_Fog::CallFunc_SetFogDensity_Value_ImplicitCast' has a wrong offset!");

}
