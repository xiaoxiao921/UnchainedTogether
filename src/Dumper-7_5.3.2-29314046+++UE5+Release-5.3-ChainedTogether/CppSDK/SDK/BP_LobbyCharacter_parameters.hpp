#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LobbyCharacter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "E_ChoosenChar_structs.hpp"


namespace SDK::Params
{

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.AddCloth
// 0x00A0 (0x00A0 - 0x0000)
struct BP_LobbyCharacter_C_AddCloth final
{
public:
	class USkeletalMesh*                          NewMesh;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Tint;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E84[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E85[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LobbyCharacter_C_AddCloth) == 0x000010, "Wrong alignment on BP_LobbyCharacter_C_AddCloth");
static_assert(sizeof(BP_LobbyCharacter_C_AddCloth) == 0x0000A0, "Wrong size on BP_LobbyCharacter_C_AddCloth");
static_assert(offsetof(BP_LobbyCharacter_C_AddCloth, NewMesh) == 0x000000, "Member 'BP_LobbyCharacter_C_AddCloth::NewMesh' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_AddCloth, Tint) == 0x000008, "Member 'BP_LobbyCharacter_C_AddCloth::Tint' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_AddCloth, Temp_struct_Variable) == 0x000020, "Member 'BP_LobbyCharacter_C_AddCloth::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_AddCloth, CallFunc_AddComponent_ReturnValue) == 0x000080, "Member 'BP_LobbyCharacter_C_AddCloth::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_AddCloth, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000088, "Member 'BP_LobbyCharacter_C_AddCloth::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_AddCloth, CallFunc_GetMaterial_ReturnValue) == 0x000090, "Member 'BP_LobbyCharacter_C_AddCloth::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_AddCloth, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000098, "Member 'BP_LobbyCharacter_C_AddCloth::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.ExecuteUbergraph_BP_LobbyCharacter
// 0x0068 (0x0068 - 0x0000)
struct BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ChoosenChar                                 K2Node_Event_ChosenChar;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E86[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           K2Node_Event_PS;                                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_Pseudo_C*                            CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLocalMultiplayer_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E87[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameInstance_C>   K2Node_DynamicCast_AsBPI_Game_Instance;            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E88[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayersInSession_PlayersInSession;     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter) == 0x000008, "Wrong alignment on BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter");
static_assert(sizeof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter) == 0x000068, "Wrong size on BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, EntryPoint) == 0x000000, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, K2Node_Event_ChosenChar) == 0x000004, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::K2Node_Event_ChosenChar' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, K2Node_Event_PS) == 0x000008, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::K2Node_Event_PS' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, CallFunc_Create_ReturnValue) == 0x000010, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, CallFunc_GetLocalMultiplayer_ReturnValue) == 0x000018, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::CallFunc_GetLocalMultiplayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, CallFunc_GetGameInstance_ReturnValue) == 0x000020, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, K2Node_DynamicCast_AsBPI_Game_Instance) == 0x000028, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::K2Node_DynamicCast_AsBPI_Game_Instance' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, CallFunc_Array_Get_Item) == 0x00003C, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, CallFunc_GetPlayersInSession_PlayersInSession) == 0x000044, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::CallFunc_GetPlayersInSession_PlayersInSession' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, CallFunc_Conv_NameToString_ReturnValue) == 0x000048, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, CallFunc_Conv_StringToInt_ReturnValue) == 0x000058, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, CallFunc_Subtract_IntInt_ReturnValue) == 0x00005C, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000060, "Member 'BP_LobbyCharacter_C_ExecuteUbergraph_BP_LobbyCharacter::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.MakeBlack
// 0x0028 (0x0028 - 0x0000)
struct BP_LobbyCharacter_C_MakeBlack final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E89[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LobbyCharacter_C_MakeBlack) == 0x000008, "Wrong alignment on BP_LobbyCharacter_C_MakeBlack");
static_assert(sizeof(BP_LobbyCharacter_C_MakeBlack) == 0x000028, "Wrong size on BP_LobbyCharacter_C_MakeBlack");
static_assert(offsetof(BP_LobbyCharacter_C_MakeBlack, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_LobbyCharacter_C_MakeBlack::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_MakeBlack, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_LobbyCharacter_C_MakeBlack::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_MakeBlack, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_LobbyCharacter_C_MakeBlack::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_MakeBlack, CallFunc_GetMaterials_ReturnValue) == 0x000010, "Member 'BP_LobbyCharacter_C_MakeBlack::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_MakeBlack, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_LobbyCharacter_C_MakeBlack::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_MakeBlack, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'BP_LobbyCharacter_C_MakeBlack::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.OnRep_Chosen Char
// 0x0044 (0x0044 - 0x0000)
struct BP_LobbyCharacter_C_OnRep_Chosen_Char final
{
public:
	struct FLinearColor                           CallFunc_GetCharacterColor_Color;                  // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetCharacterColor_Color_1;                // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetCharacterColor_Color_2;                // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetCharacterColor_Color_3;                // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LobbyCharacter_C_OnRep_Chosen_Char) == 0x000004, "Wrong alignment on BP_LobbyCharacter_C_OnRep_Chosen_Char");
static_assert(sizeof(BP_LobbyCharacter_C_OnRep_Chosen_Char) == 0x000044, "Wrong size on BP_LobbyCharacter_C_OnRep_Chosen_Char");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_Chosen_Char, CallFunc_GetCharacterColor_Color) == 0x000000, "Member 'BP_LobbyCharacter_C_OnRep_Chosen_Char::CallFunc_GetCharacterColor_Color' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_Chosen_Char, CallFunc_GetCharacterColor_Color_1) == 0x000010, "Member 'BP_LobbyCharacter_C_OnRep_Chosen_Char::CallFunc_GetCharacterColor_Color_1' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_Chosen_Char, CallFunc_GetCharacterColor_Color_2) == 0x000020, "Member 'BP_LobbyCharacter_C_OnRep_Chosen_Char::CallFunc_GetCharacterColor_Color_2' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_Chosen_Char, CallFunc_GetCharacterColor_Color_3) == 0x000030, "Member 'BP_LobbyCharacter_C_OnRep_Chosen_Char::CallFunc_GetCharacterColor_Color_3' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_Chosen_Char, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'BP_LobbyCharacter_C_OnRep_Chosen_Char::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.OnRep_PlayerName
// 0x0010 (0x0010 - 0x0000)
struct BP_LobbyCharacter_C_OnRep_PlayerName final
{
public:
	class UW_Pseudo_C*                            CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLocalMultiplayer_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LobbyCharacter_C_OnRep_PlayerName) == 0x000008, "Wrong alignment on BP_LobbyCharacter_C_OnRep_PlayerName");
static_assert(sizeof(BP_LobbyCharacter_C_OnRep_PlayerName) == 0x000010, "Wrong size on BP_LobbyCharacter_C_OnRep_PlayerName");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_PlayerName, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_LobbyCharacter_C_OnRep_PlayerName::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_PlayerName, CallFunc_GetLocalMultiplayer_ReturnValue) == 0x000008, "Member 'BP_LobbyCharacter_C_OnRep_PlayerName::CallFunc_GetLocalMultiplayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_PlayerName, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000009, "Member 'BP_LobbyCharacter_C_OnRep_PlayerName::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.OnRep_PS
// 0x0028 (0x0028 - 0x0000)
struct BP_LobbyCharacter_C_OnRep_PS final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E8A[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APS_Lobby_C*                            K2Node_DynamicCast_AsPS_Lobby;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LobbyCharacter_C_OnRep_PS) == 0x000008, "Wrong alignment on BP_LobbyCharacter_C_OnRep_PS");
static_assert(sizeof(BP_LobbyCharacter_C_OnRep_PS) == 0x000028, "Wrong size on BP_LobbyCharacter_C_OnRep_PS");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_PS, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_LobbyCharacter_C_OnRep_PS::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_PS, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_LobbyCharacter_C_OnRep_PS::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_PS, CallFunc_HasAuthority_ReturnValue_1) == 0x000002, "Member 'BP_LobbyCharacter_C_OnRep_PS::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_PS, CallFunc_GetPlayerName_ReturnValue) == 0x000008, "Member 'BP_LobbyCharacter_C_OnRep_PS::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_PS, K2Node_DynamicCast_AsPS_Lobby) == 0x000018, "Member 'BP_LobbyCharacter_C_OnRep_PS::K2Node_DynamicCast_AsPS_Lobby' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_OnRep_PS, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_LobbyCharacter_C_OnRep_PS::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.RemoveClothes
// 0x0048 (0x0048 - 0x0000)
struct BP_LobbyCharacter_C_RemoveClothes final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E8B[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E8C[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetComponent*                       K2Node_DynamicCast_AsWidget_Component;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E8D[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LobbyCharacter_C_RemoveClothes) == 0x000008, "Wrong alignment on BP_LobbyCharacter_C_RemoveClothes");
static_assert(sizeof(BP_LobbyCharacter_C_RemoveClothes) == 0x000048, "Wrong size on BP_LobbyCharacter_C_RemoveClothes");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_LobbyCharacter_C_RemoveClothes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_LobbyCharacter_C_RemoveClothes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'BP_LobbyCharacter_C_RemoveClothes::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, CallFunc_GetChildrenComponents_Children) == 0x000010, "Member 'BP_LobbyCharacter_C_RemoveClothes::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_LobbyCharacter_C_RemoveClothes::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_LobbyCharacter_C_RemoveClothes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, K2Node_DynamicCast_AsWidget_Component) == 0x000030, "Member 'BP_LobbyCharacter_C_RemoveClothes::K2Node_DynamicCast_AsWidget_Component' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_LobbyCharacter_C_RemoveClothes::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00003C, "Member 'BP_LobbyCharacter_C_RemoveClothes::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, CallFunc_Max_ReturnValue) == 0x000040, "Member 'BP_LobbyCharacter_C_RemoveClothes::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_RemoveClothes, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000044, "Member 'BP_LobbyCharacter_C_RemoveClothes::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.ResetMaterials
// 0x0070 (0x0070 - 0x0000)
struct BP_LobbyCharacter_C_ResetMaterials final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E8E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0010(0x0010)(ReferenceParm)
	class USkeletalMesh*                          CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue;   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E8F[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSkeletalMaterial>              CallFunc_GetMaterials_ReturnValue_1;               // 0x0030(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E90[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkeletalMaterial                      CallFunc_Array_Get_Item;                           // 0x0048(0x0028)(NoDestructor)
};
static_assert(alignof(BP_LobbyCharacter_C_ResetMaterials) == 0x000008, "Wrong alignment on BP_LobbyCharacter_C_ResetMaterials");
static_assert(sizeof(BP_LobbyCharacter_C_ResetMaterials) == 0x000070, "Wrong size on BP_LobbyCharacter_C_ResetMaterials");
static_assert(offsetof(BP_LobbyCharacter_C_ResetMaterials, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_LobbyCharacter_C_ResetMaterials::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ResetMaterials, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_LobbyCharacter_C_ResetMaterials::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ResetMaterials, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_LobbyCharacter_C_ResetMaterials::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ResetMaterials, CallFunc_GetMaterials_ReturnValue) == 0x000010, "Member 'BP_LobbyCharacter_C_ResetMaterials::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ResetMaterials, CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue) == 0x000020, "Member 'BP_LobbyCharacter_C_ResetMaterials::CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ResetMaterials, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_LobbyCharacter_C_ResetMaterials::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ResetMaterials, CallFunc_GetMaterials_ReturnValue_1) == 0x000030, "Member 'BP_LobbyCharacter_C_ResetMaterials::CallFunc_GetMaterials_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ResetMaterials, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_LobbyCharacter_C_ResetMaterials::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LobbyCharacter_C_ResetMaterials, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_LobbyCharacter_C_ResetMaterials::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.SetAffectedPS
// 0x0008 (0x0008 - 0x0000)
struct BP_LobbyCharacter_C_SetAffectedPS final
{
public:
	class APlayerState*                           Param_Ps;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LobbyCharacter_C_SetAffectedPS) == 0x000008, "Wrong alignment on BP_LobbyCharacter_C_SetAffectedPS");
static_assert(sizeof(BP_LobbyCharacter_C_SetAffectedPS) == 0x000008, "Wrong size on BP_LobbyCharacter_C_SetAffectedPS");
static_assert(offsetof(BP_LobbyCharacter_C_SetAffectedPS, Param_Ps) == 0x000000, "Member 'BP_LobbyCharacter_C_SetAffectedPS::Param_Ps' has a wrong offset!");

// Function BP_LobbyCharacter.BP_LobbyCharacter_C.SetChosenChar
// 0x0001 (0x0001 - 0x0000)
struct BP_LobbyCharacter_C_SetChosenChar final
{
public:
	E_ChoosenChar                                 ChosenChar;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LobbyCharacter_C_SetChosenChar) == 0x000001, "Wrong alignment on BP_LobbyCharacter_C_SetChosenChar");
static_assert(sizeof(BP_LobbyCharacter_C_SetChosenChar) == 0x000001, "Wrong size on BP_LobbyCharacter_C_SetChosenChar");
static_assert(offsetof(BP_LobbyCharacter_C_SetChosenChar, ChosenChar) == 0x000000, "Member 'BP_LobbyCharacter_C_SetChosenChar::ChosenChar' has a wrong offset!");

}

