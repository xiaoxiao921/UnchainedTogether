#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ConfirmQuit

#include "Basic.hpp"

#include "S_BiomeSave_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function W_ConfirmQuit.W_ConfirmQuit_C.ExecuteUbergraph_W_ConfirmQuit
// 0x0250 (0x0250 - 0x0000)
struct W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33D6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33D7[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33D8[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_SettingsMain_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UW_SettingsMain_C*                      CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33D9[0x1];                                     // 0x0087(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Gamestate_C>      K2Node_DynamicCast_AsBPI_Gamestate;                // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33DA[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGS_Game_C*                             K2Node_DynamicCast_AsGS_Game;                      // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33DB[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_RescuePoint_C*>              CallFunc_GetAllActorsOfClassWithTag_OutActors;     // 0x00C0(0x0010)(ReferenceParm)
	TScriptInterface<class IBPI_ControllerWithSettings_C> K2Node_DynamicCast_AsBPI_Controller_with_Settings; // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33DC[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_RescuePoint_C*                      CallFunc_Array_Get_Item_1;                         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_SettingsMain_C*>              CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x00F0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UW_SettingsMain_C*                      CallFunc_Array_Get_Item_2;                         // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33DD[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI;                    // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33DE[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Now_ReturnValue;                          // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGS_Game_C*                             K2Node_DynamicCast_AsGS_Game_1;                    // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33DF[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_Height0_C*>                  CallFunc_GetAllActorsOfClass_OutActors;            // 0x0168(0x0010)(ReferenceParm)
	class ABP_Height0_C*                          CallFunc_Array_Get_Item_3;                         // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Success;                        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33E0[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_Lava_C*>                     CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0188(0x0010)(ReferenceParm)
	class ABP_Lava_C*                             CallFunc_Array_Get_Item_4;                         // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Success)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x01A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33E1[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_2;               // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGS_Game_C*                             K2Node_DynamicCast_AsGS_Game_2;                    // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33E2[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33E3[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_BiomeSave                           K2Node_MakeStruct_S_BiomeSave;                     // 0x0218(0x0038)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit) == 0x000008, "Wrong alignment on W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit");
static_assert(sizeof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit) == 0x000250, "Wrong size on W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, EntryPoint) == 0x000000, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_BreakVector_X) == 0x000030, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_BreakVector_Y) == 0x000038, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_BreakVector_Z) == 0x000040, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, Temp_bool_IsClosed_Variable) == 0x000050, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, Temp_bool_Has_Been_Initd_Variable) == 0x000051, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, Temp_int_Loop_Counter_Variable_1) == 0x000054, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, Temp_int_Array_Index_Variable_1) == 0x000058, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000068, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Array_Get_Item) == 0x000078, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_IsInViewport_ReturnValue) == 0x000085, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_IsServer_ReturnValue) == 0x000086, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetGameState_ReturnValue) == 0x000088, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_AsBPI_Gamestate) == 0x000090, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_AsBPI_Gamestate' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_AsGS_Game) == 0x0000A8, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_AsGS_Game' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000B8, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetAllActorsOfClassWithTag_OutActors) == 0x0000C0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetAllActorsOfClassWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_AsBPI_Controller_with_Settings) == 0x0000D0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_AsBPI_Controller_with_Settings' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_bSuccess_2) == 0x0000E0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Array_Get_Item_1) == 0x0000E8, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x0000F0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Array_Get_Item_2) == 0x000100, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Array_Length_ReturnValue_1) == 0x000108, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Less_IntInt_ReturnValue_1) == 0x00010C, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetGameInstance_ReturnValue) == 0x000110, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_AsCustom_GI) == 0x000118, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_AsCustom_GI' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_bSuccess_3) == 0x000120, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Now_ReturnValue) == 0x000128, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Now_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000130, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetGameState_ReturnValue_1) == 0x000138, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000140, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_AsGS_Game_1) == 0x000158, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_AsGS_Game_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_bSuccess_4) == 0x000160, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetAllActorsOfClass_OutActors) == 0x000168, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Array_Get_Item_3) == 0x000178, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_CustomEvent_Success) == 0x000180, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_CustomEvent_Success' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000188, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Array_Get_Item_4) == 0x000198, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_CreateDelegate_OutputDelegate) == 0x0001A0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_IsValid_ReturnValue) == 0x0001B0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_GetGameState_ReturnValue_2) == 0x0001B8, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_GetGameState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_AsGS_Game_2) == 0x0001C0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_AsGS_Game_2' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_DynamicCast_bSuccess_5) == 0x0001C8, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0001D0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_BreakVector_X_1) == 0x0001E8, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_BreakVector_Y_1) == 0x0001F0, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_BreakVector_Z_1) == 0x0001F8, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000200, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000208, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, CallFunc_Round_ReturnValue) == 0x000210, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit, K2Node_MakeStruct_S_BiomeSave) == 0x000218, "Member 'W_ConfirmQuit_C_ExecuteUbergraph_W_ConfirmQuit::K2Node_MakeStruct_S_BiomeSave' has a wrong offset!");

// Function W_ConfirmQuit.W_ConfirmQuit_C.ManualSaveFinished_Event
// 0x0001 (0x0001 - 0x0000)
struct W_ConfirmQuit_C_ManualSaveFinished_Event final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_ConfirmQuit_C_ManualSaveFinished_Event) == 0x000001, "Wrong alignment on W_ConfirmQuit_C_ManualSaveFinished_Event");
static_assert(sizeof(W_ConfirmQuit_C_ManualSaveFinished_Event) == 0x000001, "Wrong size on W_ConfirmQuit_C_ManualSaveFinished_Event");
static_assert(offsetof(W_ConfirmQuit_C_ManualSaveFinished_Event, Success) == 0x000000, "Member 'W_ConfirmQuit_C_ManualSaveFinished_Event::Success' has a wrong offset!");

}

