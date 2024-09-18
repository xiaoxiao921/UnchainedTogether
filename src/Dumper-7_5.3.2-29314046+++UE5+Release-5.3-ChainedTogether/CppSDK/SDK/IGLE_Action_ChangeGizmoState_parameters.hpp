#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_Action_ChangeGizmoState

#include "Basic.hpp"


namespace SDK::Params
{

// Function IGLE_Action_ChangeGizmoState.IGLE_Action_ChangeGizmoState_C.ExecuteUbergraph_IGLE_Action_ChangeGizmoState
// 0x0008 (0x0008 - 0x0000)
struct IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState) == 0x000004, "Wrong alignment on IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState");
static_assert(sizeof(IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState) == 0x000008, "Wrong size on IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState");
static_assert(offsetof(IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState, EntryPoint) == 0x000000, "Member 'IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState::EntryPoint' has a wrong offset!");
static_assert(offsetof(IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState, CallFunc_IsValid_ReturnValue_2) == 0x000006, "Member 'IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState, CallFunc_IsValid_ReturnValue_3) == 0x000007, "Member 'IGLE_Action_ChangeGizmoState_C_ExecuteUbergraph_IGLE_Action_ChangeGizmoState::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function IGLE_Action_ChangeGizmoState.IGLE_Action_ChangeGizmoState_C.GetFriendlyActionName
// 0x0010 (0x0010 - 0x0000)
struct IGLE_Action_ChangeGizmoState_C_GetFriendlyActionName final
{
public:
	class FString                                 OutName;                                           // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_Action_ChangeGizmoState_C_GetFriendlyActionName) == 0x000008, "Wrong alignment on IGLE_Action_ChangeGizmoState_C_GetFriendlyActionName");
static_assert(sizeof(IGLE_Action_ChangeGizmoState_C_GetFriendlyActionName) == 0x000010, "Wrong size on IGLE_Action_ChangeGizmoState_C_GetFriendlyActionName");
static_assert(offsetof(IGLE_Action_ChangeGizmoState_C_GetFriendlyActionName, OutName) == 0x000000, "Member 'IGLE_Action_ChangeGizmoState_C_GetFriendlyActionName::OutName' has a wrong offset!");

}
