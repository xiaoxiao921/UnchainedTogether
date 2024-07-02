#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GM_Game

#include "Basic.hpp"


namespace SDK::Params
{

// Function GM_Game.GM_Game_C.ExecuteUbergraph_GM_Game
// 0x00E0 (0x00E0 - 0x0000)
struct GM_Game_C_ExecuteUbergraph_GM_Game final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Someone_Driving_Car_Server__ReturnValue; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A79[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CustomCar_C*                        CallFunc_Is_Someone_Driving_Car_Server__AsBP_Custom_Car; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_Event_ExitingController;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGS_Game_C*                             K2Node_DynamicCast_AsGS_Game;                      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A7A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGS_Game_C*                             K2Node_DynamicCast_AsGS_Game_1;                    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Nearest_Rescue_Point_Server__ReturnValue; // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A7B[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_RescuePoint_C*                      CallFunc_Get_Nearest_Rescue_Point_Server__Out;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Someone_Driving_Car_Server__ReturnValue_1; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A7C[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CustomCar_C*                        CallFunc_Is_Someone_Driving_Car_Server__AsBP_Custom_Car_1; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsA_CarOccupied_ReturnValue;              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A7D[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_2;               // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_Event_NewPlayer;                            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Gamestate_C>      K2Node_DynamicCast_AsBPI_Gamestate;                // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameBegun_HasBegun;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A7E[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_3;               // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGS_Game_C*                             K2Node_DynamicCast_AsGS_Game_2;                    // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A7F[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_4;               // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGS_Game_C*                             K2Node_DynamicCast_AsGS_Game_3;                    // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A80[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Gamestate_C>      K2Node_DynamicCast_AsBPI_Gamestate_1;              // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearestRescuePoint_Found;                 // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A81[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_RescuePoint_C*                      CallFunc_NearestRescuePoint_RescuePoint;           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GM_Game_C_ExecuteUbergraph_GM_Game) == 0x000008, "Wrong alignment on GM_Game_C_ExecuteUbergraph_GM_Game");
static_assert(sizeof(GM_Game_C_ExecuteUbergraph_GM_Game) == 0x0000E0, "Wrong size on GM_Game_C_ExecuteUbergraph_GM_Game");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, EntryPoint) == 0x000000, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::EntryPoint' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_Is_Someone_Driving_Car_Server__ReturnValue) == 0x000004, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_Is_Someone_Driving_Car_Server__ReturnValue' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_Is_Someone_Driving_Car_Server__AsBP_Custom_Car) == 0x000008, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_Is_Someone_Driving_Car_Server__AsBP_Custom_Car' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_Event_ExitingController) == 0x000010, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_Event_ExitingController' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_GetGameState_ReturnValue_1) == 0x000020, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_AsGS_Game) == 0x000028, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_AsGS_Game' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_AsGS_Game_1) == 0x000038, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_AsGS_Game_1' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_Get_Nearest_Rescue_Point_Server__ReturnValue) == 0x000041, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_Get_Nearest_Rescue_Point_Server__ReturnValue' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_Get_Nearest_Rescue_Point_Server__Out) == 0x000048, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_Get_Nearest_Rescue_Point_Server__Out' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_Is_Someone_Driving_Car_Server__ReturnValue_1) == 0x000050, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_Is_Someone_Driving_Car_Server__ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_Is_Someone_Driving_Car_Server__AsBP_Custom_Car_1) == 0x000058, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_Is_Someone_Driving_Car_Server__AsBP_Custom_Car_1' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_HasAuthority_ReturnValue) == 0x000060, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_IsA_CarOccupied_ReturnValue) == 0x000061, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_IsA_CarOccupied_ReturnValue' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_GetGameState_ReturnValue_2) == 0x000068, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_GetGameState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_Event_NewPlayer) == 0x000070, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_Event_NewPlayer' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_AsBPI_Gamestate) == 0x000078, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_AsBPI_Gamestate' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_bSuccess_2) == 0x000088, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_GetGameBegun_HasBegun) == 0x000089, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_GetGameBegun_HasBegun' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_GetGameState_ReturnValue_3) == 0x000090, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_GetGameState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_AsGS_Game_2) == 0x000098, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_AsGS_Game_2' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_bSuccess_3) == 0x0000A0, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_GetGameState_ReturnValue_4) == 0x0000A8, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_GetGameState_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_AsGS_Game_3) == 0x0000B0, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_AsGS_Game_3' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_bSuccess_4) == 0x0000B8, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_AsBPI_Gamestate_1) == 0x0000C0, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_AsBPI_Gamestate_1' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, K2Node_DynamicCast_bSuccess_5) == 0x0000D0, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_NearestRescuePoint_Found) == 0x0000D1, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_NearestRescuePoint_Found' has a wrong offset!");
static_assert(offsetof(GM_Game_C_ExecuteUbergraph_GM_Game, CallFunc_NearestRescuePoint_RescuePoint) == 0x0000D8, "Member 'GM_Game_C_ExecuteUbergraph_GM_Game::CallFunc_NearestRescuePoint_RescuePoint' has a wrong offset!");

// Function GM_Game.GM_Game_C.IsA_CarOccupied
// 0x0038 (0x0038 - 0x0000)
struct GM_Game_C_IsA_CarOccupied final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A82[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CustomCar_C*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A83[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CustomCar_C*                        CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GM_Game_C_IsA_CarOccupied) == 0x000008, "Wrong alignment on GM_Game_C_IsA_CarOccupied");
static_assert(sizeof(GM_Game_C_IsA_CarOccupied) == 0x000038, "Wrong size on GM_Game_C_IsA_CarOccupied");
static_assert(offsetof(GM_Game_C_IsA_CarOccupied, ReturnValue) == 0x000000, "Member 'GM_Game_C_IsA_CarOccupied::ReturnValue' has a wrong offset!");
static_assert(offsetof(GM_Game_C_IsA_CarOccupied, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GM_Game_C_IsA_CarOccupied::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GM_Game_C_IsA_CarOccupied, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GM_Game_C_IsA_CarOccupied::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GM_Game_C_IsA_CarOccupied, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GM_Game_C_IsA_CarOccupied::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GM_Game_C_IsA_CarOccupied, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'GM_Game_C_IsA_CarOccupied::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(GM_Game_C_IsA_CarOccupied, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'GM_Game_C_IsA_CarOccupied::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GM_Game_C_IsA_CarOccupied, CallFunc_Array_Get_Item) == 0x000028, "Member 'GM_Game_C_IsA_CarOccupied::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GM_Game_C_IsA_CarOccupied, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'GM_Game_C_IsA_CarOccupied::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GM_Game_C_IsA_CarOccupied, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000031, "Member 'GM_Game_C_IsA_CarOccupied::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GM_Game.GM_Game_C.K2_OnLogout
// 0x0008 (0x0008 - 0x0000)
struct GM_Game_C_K2_OnLogout final
{
public:
	class AController*                            ExitingController;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GM_Game_C_K2_OnLogout) == 0x000008, "Wrong alignment on GM_Game_C_K2_OnLogout");
static_assert(sizeof(GM_Game_C_K2_OnLogout) == 0x000008, "Wrong size on GM_Game_C_K2_OnLogout");
static_assert(offsetof(GM_Game_C_K2_OnLogout, ExitingController) == 0x000000, "Member 'GM_Game_C_K2_OnLogout::ExitingController' has a wrong offset!");

// Function GM_Game.GM_Game_C.K2_PostLogin
// 0x0008 (0x0008 - 0x0000)
struct GM_Game_C_K2_PostLogin final
{
public:
	class APlayerController*                      NewPlayer;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GM_Game_C_K2_PostLogin) == 0x000008, "Wrong alignment on GM_Game_C_K2_PostLogin");
static_assert(sizeof(GM_Game_C_K2_PostLogin) == 0x000008, "Wrong size on GM_Game_C_K2_PostLogin");
static_assert(offsetof(GM_Game_C_K2_PostLogin, NewPlayer) == 0x000000, "Member 'GM_Game_C_K2_PostLogin::NewPlayer' has a wrong offset!");

}

