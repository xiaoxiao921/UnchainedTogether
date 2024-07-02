#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BackToMainMenu

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_BackToMainMenu.W_BackToMainMenu_C.AllPC_Ended
// 0x0038 (0x0038 - 0x0000)
struct W_BackToMainMenu_C_AllPC_Ended final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A63[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APC_Game_C*>                     CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A64[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APC_Game_C*                             CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_BackToMainMenu_C_AllPC_Ended) == 0x000008, "Wrong alignment on W_BackToMainMenu_C_AllPC_Ended");
static_assert(sizeof(W_BackToMainMenu_C_AllPC_Ended) == 0x000038, "Wrong size on W_BackToMainMenu_C_AllPC_Ended");
static_assert(offsetof(W_BackToMainMenu_C_AllPC_Ended, ReturnValue) == 0x000000, "Member 'W_BackToMainMenu_C_AllPC_Ended::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_AllPC_Ended, Temp_int_Array_Index_Variable) == 0x000004, "Member 'W_BackToMainMenu_C_AllPC_Ended::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_AllPC_Ended, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_BackToMainMenu_C_AllPC_Ended::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_AllPC_Ended, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'W_BackToMainMenu_C_AllPC_Ended::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_AllPC_Ended, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'W_BackToMainMenu_C_AllPC_Ended::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_AllPC_Ended, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'W_BackToMainMenu_C_AllPC_Ended::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_AllPC_Ended, CallFunc_Array_Get_Item) == 0x000028, "Member 'W_BackToMainMenu_C_AllPC_Ended::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_AllPC_Ended, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'W_BackToMainMenu_C_AllPC_Ended::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_BackToMainMenu.W_BackToMainMenu_C.ExecuteUbergraph_W_BackToMainMenu
// 0x0028 (0x0028 - 0x0000)
struct W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLocalMultiplayer_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A65[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APC_Game_C*                             K2Node_DynamicCast_AsPC_Game;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AllPC_Ended_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu) == 0x000008, "Wrong alignment on W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu");
static_assert(sizeof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu) == 0x000028, "Wrong size on W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu");
static_assert(offsetof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu, EntryPoint) == 0x000000, "Member 'W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu, CallFunc_GetLocalMultiplayer_ReturnValue) == 0x000004, "Member 'W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu::CallFunc_GetLocalMultiplayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu, K2Node_DynamicCast_AsPC_Game) == 0x000018, "Member 'W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu::K2Node_DynamicCast_AsPC_Game' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu, CallFunc_IsServer_ReturnValue) == 0x000021, "Member 'W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu, CallFunc_AllPC_Ended_ReturnValue) == 0x000022, "Member 'W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu::CallFunc_AllPC_Ended_ReturnValue' has a wrong offset!");

}

