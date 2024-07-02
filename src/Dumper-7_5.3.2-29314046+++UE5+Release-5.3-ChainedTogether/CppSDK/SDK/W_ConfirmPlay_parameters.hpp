#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ConfirmPlay

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_ConfirmPlay.W_ConfirmPlay_C.ExecuteUbergraph_W_ConfirmPlay
// 0x0048 (0x0048 - 0x0000)
struct W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumPlayers_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_GameInstance_C>   K2Node_DynamicCast_AsBPI_Game_Instance;            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3220[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGS_Game_C*                             K2Node_DynamicCast_AsGS_Game;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay) == 0x000008, "Wrong alignment on W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay");
static_assert(sizeof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay) == 0x000048, "Wrong size on W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay");
static_assert(offsetof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay, EntryPoint) == 0x000000, "Member 'W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay, CallFunc_GetNumPlayers_ReturnValue) == 0x000010, "Member 'W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay::CallFunc_GetNumPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay, K2Node_DynamicCast_AsBPI_Game_Instance) == 0x000018, "Member 'W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay::K2Node_DynamicCast_AsBPI_Game_Instance' has a wrong offset!");
static_assert(offsetof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay, CallFunc_GetGameState_ReturnValue) == 0x000030, "Member 'W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay, K2Node_DynamicCast_AsGS_Game) == 0x000038, "Member 'W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay::K2Node_DynamicCast_AsGS_Game' has a wrong offset!");
static_assert(offsetof(W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'W_ConfirmPlay_C_ExecuteUbergraph_W_ConfirmPlay::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

