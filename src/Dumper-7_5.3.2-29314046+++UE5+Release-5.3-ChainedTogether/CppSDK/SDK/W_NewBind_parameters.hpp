#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_NewBind

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "EnhancedInput_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK::Params
{

// Function W_NewBind.W_NewBind_C.BndEvt__W_NewBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct W_NewBind_C_BndEvt__W_NewBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature final
{
public:
	struct FInputChord                            Param_SelectedKey;                                 // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(W_NewBind_C_BndEvt__W_NewBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature) == 0x000008, "Wrong alignment on W_NewBind_C_BndEvt__W_NewBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");
static_assert(sizeof(W_NewBind_C_BndEvt__W_NewBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature) == 0x000020, "Wrong size on W_NewBind_C_BndEvt__W_NewBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");
static_assert(offsetof(W_NewBind_C_BndEvt__W_NewBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature, Param_SelectedKey) == 0x000000, "Member 'W_NewBind_C_BndEvt__W_NewBind_InputKeySelector_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature::Param_SelectedKey' has a wrong offset!");

// Function W_NewBind.W_NewBind_C.ExecuteUbergraph_W_NewBind
// 0x00C8 (0x00C8 - 0x0000)
struct W_NewBind_C_ExecuteUbergraph_W_NewBind final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnhancedInputLocalPlayerSubsystem*     CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput;           // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputUserSettings*             CallFunc_GetUserSettings_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputLocalPlayerSubsystem*     CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput_1;         // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputUserSettings*             CallFunc_GetUserSettings_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                            K2Node_ComponentBoundEvent_SelectedKey;            // 0x0048(0x0020)(HasGetValueTypeHash)
	struct FMapPlayerKeyArgs                      K2Node_MakeStruct_MapPlayerKeyArgs;                // 0x0068(0x0040)()
	struct FGameplayTagContainer                  CallFunc_MapPlayerKey_FailureReason;               // 0x00A8(0x0020)()
};
static_assert(alignof(W_NewBind_C_ExecuteUbergraph_W_NewBind) == 0x000008, "Wrong alignment on W_NewBind_C_ExecuteUbergraph_W_NewBind");
static_assert(sizeof(W_NewBind_C_ExecuteUbergraph_W_NewBind) == 0x0000C8, "Wrong size on W_NewBind_C_ExecuteUbergraph_W_NewBind");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, EntryPoint) == 0x000000, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, CallFunc_GetUserSettings_self_CastInput) == 0x000010, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::CallFunc_GetUserSettings_self_CastInput' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, CallFunc_GetUserSettings_ReturnValue) == 0x000020, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::CallFunc_GetUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000028, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, CallFunc_GetUserSettings_self_CastInput_1) == 0x000030, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::CallFunc_GetUserSettings_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, CallFunc_GetUserSettings_ReturnValue_1) == 0x000040, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::CallFunc_GetUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, K2Node_ComponentBoundEvent_SelectedKey) == 0x000048, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::K2Node_ComponentBoundEvent_SelectedKey' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, K2Node_MakeStruct_MapPlayerKeyArgs) == 0x000068, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::K2Node_MakeStruct_MapPlayerKeyArgs' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_ExecuteUbergraph_W_NewBind, CallFunc_MapPlayerKey_FailureReason) == 0x0000A8, "Member 'W_NewBind_C_ExecuteUbergraph_W_NewBind::CallFunc_MapPlayerKey_FailureReason' has a wrong offset!");

// Function W_NewBind.W_NewBind_C.RefreshBind
// 0x00C8 (0x00C8 - 0x0000)
struct W_NewBind_C_RefreshBind final
{
public:
	struct FPlayerKeyMapping                      Key;                                               // 0x0000(0x0090)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                            K2Node_MakeStruct_InputChord;                      // 0x0098(0x0020)(HasGetValueTypeHash)
	class UInputKeySelector*                      K2Node_DynamicCast_AsInput_Key_Selector;           // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_NewBind_C_RefreshBind) == 0x000008, "Wrong alignment on W_NewBind_C_RefreshBind");
static_assert(sizeof(W_NewBind_C_RefreshBind) == 0x0000C8, "Wrong size on W_NewBind_C_RefreshBind");
static_assert(offsetof(W_NewBind_C_RefreshBind, Key) == 0x000000, "Member 'W_NewBind_C_RefreshBind::Key' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_RefreshBind, CallFunc_GetChildAt_ReturnValue) == 0x000090, "Member 'W_NewBind_C_RefreshBind::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_RefreshBind, K2Node_MakeStruct_InputChord) == 0x000098, "Member 'W_NewBind_C_RefreshBind::K2Node_MakeStruct_InputChord' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_RefreshBind, K2Node_DynamicCast_AsInput_Key_Selector) == 0x0000B8, "Member 'W_NewBind_C_RefreshBind::K2Node_DynamicCast_AsInput_Key_Selector' has a wrong offset!");
static_assert(offsetof(W_NewBind_C_RefreshBind, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'W_NewBind_C_RefreshBind::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
