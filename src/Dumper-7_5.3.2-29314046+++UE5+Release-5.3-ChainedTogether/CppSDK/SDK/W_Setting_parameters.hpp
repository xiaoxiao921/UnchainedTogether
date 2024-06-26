#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Setting

#include "Basic.hpp"

#include "S_Setting_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_Setting.W_Setting_C.BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct W_Setting_C_BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature final
{
public:
	class FString                                 NewSelection;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectType;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Setting_C_BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature) == 0x000008, "Wrong alignment on W_Setting_C_BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature");
static_assert(sizeof(W_Setting_C_BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature) == 0x000018, "Wrong size on W_Setting_C_BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature");
static_assert(offsetof(W_Setting_C_BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature, NewSelection) == 0x000000, "Member 'W_Setting_C_BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature::NewSelection' has a wrong offset!");
static_assert(offsetof(W_Setting_C_BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature, SelectType) == 0x000010, "Member 'W_Setting_C_BndEvt__W_Setting_W_ComboBox_K2Node_ComponentBoundEvent_1_OnComboSettingChange__DelegateSignature::SelectType' has a wrong offset!");

// Function W_Setting.W_Setting_C.BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct W_Setting_C_BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Setting;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Setting_C_BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature) == 0x000008, "Wrong alignment on W_Setting_C_BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");
static_assert(sizeof(W_Setting_C_BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature) == 0x000018, "Wrong size on W_Setting_C_BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");
static_assert(offsetof(W_Setting_C_BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature, Value) == 0x000000, "Member 'W_Setting_C_BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(W_Setting_C_BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature, Param_Setting) == 0x000008, "Member 'W_Setting_C_BndEvt__W_Setting_W_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature::Param_Setting' has a wrong offset!");

// Function W_Setting.W_Setting_C.ComboValueChanged__DelegateSignature
// 0x0038 (0x0038 - 0x0000)
struct W_Setting_C_ComboValueChanged__DelegateSignature final
{
public:
	class FString                                 NewSelection;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Identifier;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   SettingName;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_Setting_C_ComboValueChanged__DelegateSignature) == 0x000008, "Wrong alignment on W_Setting_C_ComboValueChanged__DelegateSignature");
static_assert(sizeof(W_Setting_C_ComboValueChanged__DelegateSignature) == 0x000038, "Wrong size on W_Setting_C_ComboValueChanged__DelegateSignature");
static_assert(offsetof(W_Setting_C_ComboValueChanged__DelegateSignature, NewSelection) == 0x000000, "Member 'W_Setting_C_ComboValueChanged__DelegateSignature::NewSelection' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ComboValueChanged__DelegateSignature, Identifier) == 0x000010, "Member 'W_Setting_C_ComboValueChanged__DelegateSignature::Identifier' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ComboValueChanged__DelegateSignature, SettingName) == 0x000020, "Member 'W_Setting_C_ComboValueChanged__DelegateSignature::SettingName' has a wrong offset!");

// Function W_Setting.W_Setting_C.ExecuteUbergraph_W_Setting
// 0x0038 (0x0038 - 0x0000)
struct W_Setting_C_ExecuteUbergraph_W_Setting final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33D3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_ComponentBoundEvent_Value;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_Setting;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_NewSelection;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectType;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Setting_C_ExecuteUbergraph_W_Setting) == 0x000008, "Wrong alignment on W_Setting_C_ExecuteUbergraph_W_Setting");
static_assert(sizeof(W_Setting_C_ExecuteUbergraph_W_Setting) == 0x000038, "Wrong size on W_Setting_C_ExecuteUbergraph_W_Setting");
static_assert(offsetof(W_Setting_C_ExecuteUbergraph_W_Setting, EntryPoint) == 0x000000, "Member 'W_Setting_C_ExecuteUbergraph_W_Setting::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ExecuteUbergraph_W_Setting, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'W_Setting_C_ExecuteUbergraph_W_Setting::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ExecuteUbergraph_W_Setting, K2Node_ComponentBoundEvent_Value) == 0x000008, "Member 'W_Setting_C_ExecuteUbergraph_W_Setting::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ExecuteUbergraph_W_Setting, K2Node_ComponentBoundEvent_Setting) == 0x000010, "Member 'W_Setting_C_ExecuteUbergraph_W_Setting::K2Node_ComponentBoundEvent_Setting' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ExecuteUbergraph_W_Setting, K2Node_ComponentBoundEvent_NewSelection) == 0x000020, "Member 'W_Setting_C_ExecuteUbergraph_W_Setting::K2Node_ComponentBoundEvent_NewSelection' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ExecuteUbergraph_W_Setting, K2Node_ComponentBoundEvent_SelectType) == 0x000030, "Member 'W_Setting_C_ExecuteUbergraph_W_Setting::K2Node_ComponentBoundEvent_SelectType' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ExecuteUbergraph_W_Setting, K2Node_SwitchEnum_CmpSuccess_1) == 0x000031, "Member 'W_Setting_C_ExecuteUbergraph_W_Setting::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ExecuteUbergraph_W_Setting, K2Node_Event_IsDesignTime) == 0x000032, "Member 'W_Setting_C_ExecuteUbergraph_W_Setting::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_Setting_C_ExecuteUbergraph_W_Setting, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000033, "Member 'W_Setting_C_ExecuteUbergraph_W_Setting::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function W_Setting.W_Setting_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_Setting_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Setting_C_PreConstruct) == 0x000001, "Wrong alignment on W_Setting_C_PreConstruct");
static_assert(sizeof(W_Setting_C_PreConstruct) == 0x000001, "Wrong size on W_Setting_C_PreConstruct");
static_assert(offsetof(W_Setting_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_Setting_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_Setting.W_Setting_C.RefreshAudioDevices
// 0x0030 (0x0030 - 0x0000)
struct W_Setting_C_RefreshAudioDevices final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerController_C> K2Node_DynamicCast_AsBPI_Player_Controller;        // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33D4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetAudioDevices_Devices;                  // 0x0020(0x0010)(ReferenceParm)
};
static_assert(alignof(W_Setting_C_RefreshAudioDevices) == 0x000008, "Wrong alignment on W_Setting_C_RefreshAudioDevices");
static_assert(sizeof(W_Setting_C_RefreshAudioDevices) == 0x000030, "Wrong size on W_Setting_C_RefreshAudioDevices");
static_assert(offsetof(W_Setting_C_RefreshAudioDevices, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'W_Setting_C_RefreshAudioDevices::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Setting_C_RefreshAudioDevices, K2Node_DynamicCast_AsBPI_Player_Controller) == 0x000008, "Member 'W_Setting_C_RefreshAudioDevices::K2Node_DynamicCast_AsBPI_Player_Controller' has a wrong offset!");
static_assert(offsetof(W_Setting_C_RefreshAudioDevices, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'W_Setting_C_RefreshAudioDevices::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_Setting_C_RefreshAudioDevices, CallFunc_GetAudioDevices_Devices) == 0x000020, "Member 'W_Setting_C_RefreshAudioDevices::CallFunc_GetAudioDevices_Devices' has a wrong offset!");

// Function W_Setting.W_Setting_C.RefreshBind
// 0x0010 (0x0010 - 0x0000)
struct W_Setting_C_RefreshBind final
{
public:
	class FString                                 Identifier;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Setting_C_RefreshBind) == 0x000008, "Wrong alignment on W_Setting_C_RefreshBind");
static_assert(sizeof(W_Setting_C_RefreshBind) == 0x000010, "Wrong size on W_Setting_C_RefreshBind");
static_assert(offsetof(W_Setting_C_RefreshBind, Identifier) == 0x000000, "Member 'W_Setting_C_RefreshBind::Identifier' has a wrong offset!");

// Function W_Setting.W_Setting_C.RefreshComboBox
// 0x00A0 (0x00A0 - 0x0000)
struct W_Setting_C_RefreshComboBox final
{
public:
	struct FS_Setting                             S_Setting;                                         // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class FString                                 Identifier;                                        // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Setting_C_RefreshComboBox) == 0x000008, "Wrong alignment on W_Setting_C_RefreshComboBox");
static_assert(sizeof(W_Setting_C_RefreshComboBox) == 0x0000A0, "Wrong size on W_Setting_C_RefreshComboBox");
static_assert(offsetof(W_Setting_C_RefreshComboBox, S_Setting) == 0x000000, "Member 'W_Setting_C_RefreshComboBox::S_Setting' has a wrong offset!");
static_assert(offsetof(W_Setting_C_RefreshComboBox, Identifier) == 0x000090, "Member 'W_Setting_C_RefreshComboBox::Identifier' has a wrong offset!");

// Function W_Setting.W_Setting_C.RefreshSlider
// 0x0090 (0x0090 - 0x0000)
struct W_Setting_C_RefreshSlider final
{
public:
	struct FS_Setting                             S_Setting;                                         // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(W_Setting_C_RefreshSlider) == 0x000008, "Wrong alignment on W_Setting_C_RefreshSlider");
static_assert(sizeof(W_Setting_C_RefreshSlider) == 0x000090, "Wrong size on W_Setting_C_RefreshSlider");
static_assert(offsetof(W_Setting_C_RefreshSlider, S_Setting) == 0x000000, "Member 'W_Setting_C_RefreshSlider::S_Setting' has a wrong offset!");

// Function W_Setting.W_Setting_C.SliderValueChanged__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct W_Setting_C_SliderValueChanged__DelegateSignature final
{
public:
	double                                        NewValue;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Identifier;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   SettingName;                                       // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(W_Setting_C_SliderValueChanged__DelegateSignature) == 0x000008, "Wrong alignment on W_Setting_C_SliderValueChanged__DelegateSignature");
static_assert(sizeof(W_Setting_C_SliderValueChanged__DelegateSignature) == 0x000030, "Wrong size on W_Setting_C_SliderValueChanged__DelegateSignature");
static_assert(offsetof(W_Setting_C_SliderValueChanged__DelegateSignature, NewValue) == 0x000000, "Member 'W_Setting_C_SliderValueChanged__DelegateSignature::NewValue' has a wrong offset!");
static_assert(offsetof(W_Setting_C_SliderValueChanged__DelegateSignature, Identifier) == 0x000008, "Member 'W_Setting_C_SliderValueChanged__DelegateSignature::Identifier' has a wrong offset!");
static_assert(offsetof(W_Setting_C_SliderValueChanged__DelegateSignature, SettingName) == 0x000018, "Member 'W_Setting_C_SliderValueChanged__DelegateSignature::SettingName' has a wrong offset!");

}

