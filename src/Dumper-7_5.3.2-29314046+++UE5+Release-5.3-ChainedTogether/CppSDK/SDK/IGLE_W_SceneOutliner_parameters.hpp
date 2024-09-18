#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_SceneOutliner

#include "Basic.hpp"


namespace SDK::Params
{

// Function IGLE_W_SceneOutliner.IGLE_W_SceneOutliner_C.ActorSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct IGLE_W_SceneOutliner_C_ActorSelected__DelegateSignature final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_SceneOutliner_C_ActorSelected__DelegateSignature) == 0x000008, "Wrong alignment on IGLE_W_SceneOutliner_C_ActorSelected__DelegateSignature");
static_assert(sizeof(IGLE_W_SceneOutliner_C_ActorSelected__DelegateSignature) == 0x000008, "Wrong size on IGLE_W_SceneOutliner_C_ActorSelected__DelegateSignature");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ActorSelected__DelegateSignature, Actor) == 0x000000, "Member 'IGLE_W_SceneOutliner_C_ActorSelected__DelegateSignature::Actor' has a wrong offset!");

// Function IGLE_W_SceneOutliner.IGLE_W_SceneOutliner_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct IGLE_W_SceneOutliner_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(IGLE_W_SceneOutliner_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on IGLE_W_SceneOutliner_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(IGLE_W_SceneOutliner_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on IGLE_W_SceneOutliner_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(IGLE_W_SceneOutliner_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'IGLE_W_SceneOutliner_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function IGLE_W_SceneOutliner.IGLE_W_SceneOutliner_C.ExecuteUbergraph_IGLE_W_SceneOutliner
// 0x0100 (0x0100 - 0x0000)
struct IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UIGLE_W_SceneOutliner_Entry_C*          CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_PlacableActor_1;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UIGLE_W_SceneOutliner_Entry_C*          CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_RuntimeSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UIGLE_RuntimeSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AIGLE_Pawn_EditorBase_C*                K2Node_DynamicCast_AsIGLE_Pawn_Editor_Base;        // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_Actor;                          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_CreateUndoAction;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_W_SceneOutliner_Entry_C*          CallFunc_Map_Find_Value_1;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Actor, bool CreateUndoAction)> K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* PlacableActor)>  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* PlacableActor)>  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x00A8(0x0018)(ConstParm)
	class AActor*                                 K2Node_CustomEvent_PlacableActor;                  // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                        CallFunc_PrepareSearchArray_Result;                // 0x00C8(0x0010)(ReferenceParm)
	class AMod_Group_C*                           K2Node_DynamicCast_AsMod_Group;                    // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMod_SplinePoint_C*                     K2Node_DynamicCast_AsMod_Spline_Point;             // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x2];                                       // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner) == 0x000008, "Wrong alignment on IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner");
static_assert(sizeof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner) == 0x000100, "Wrong size on IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, EntryPoint) == 0x000000, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::EntryPoint' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_Create_ReturnValue) == 0x000010, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_CustomEvent_PlacableActor_1) == 0x000018, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_CustomEvent_PlacableActor_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_Map_Find_Value) == 0x000020, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_Map_Remove_ReturnValue) == 0x000029, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000030, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000038, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000040, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_DynamicCast_AsIGLE_Pawn_Editor_Base) == 0x000048, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_DynamicCast_AsIGLE_Pawn_Editor_Base' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_CustomEvent_Actor) == 0x000058, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_CustomEvent_Actor' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_CustomEvent_CreateUndoAction) == 0x000060, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_CustomEvent_CreateUndoAction' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_Map_Find_Value_1) == 0x000068, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_Map_Find_ReturnValue_1) == 0x000070, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_CreateDelegate_OutputDelegate_1) == 0x000084, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_CreateDelegate_OutputDelegate_2) == 0x000094, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_ComponentBoundEvent_Text) == 0x0000A8, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_CustomEvent_PlacableActor) == 0x0000C0, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_CustomEvent_PlacableActor' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_PrepareSearchArray_Result) == 0x0000C8, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_PrepareSearchArray_Result' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_DynamicCast_AsMod_Group) == 0x0000D8, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_DynamicCast_AsMod_Group' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_DynamicCast_AsMod_Spline_Point) == 0x0000E8, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_DynamicCast_AsMod_Spline_Point' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, K2Node_DynamicCast_bSuccess_2) == 0x0000F0, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_TextIsEmpty_ReturnValue) == 0x0000F1, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_Array_Add_ReturnValue) == 0x0000F4, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000F8, "Member 'IGLE_W_SceneOutliner_C_ExecuteUbergraph_IGLE_W_SceneOutliner::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function IGLE_W_SceneOutliner.IGLE_W_SceneOutliner_C.FilterEntries
// 0x0078 (0x0078 - 0x0000)
struct IGLE_W_SceneOutliner_C_FilterEntries final
{
public:
	class FString                                 Substring;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        CallFunc_GetListItems_ReturnValue;                 // 0x0018(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UIGLE_W_SceneOutliner_Entry_C*          K2Node_DynamicCast_AsIGLE_W_Scene_Outliner_Entry;  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetPlacableName_ReturnValue;              // 0x0048(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_SceneOutliner_C_FilterEntries) == 0x000008, "Wrong alignment on IGLE_W_SceneOutliner_C_FilterEntries");
static_assert(sizeof(IGLE_W_SceneOutliner_C_FilterEntries) == 0x000078, "Wrong size on IGLE_W_SceneOutliner_C_FilterEntries");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, Substring) == 0x000000, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::Substring' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, Temp_int_Array_Index_Variable) == 0x000010, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, CallFunc_GetListItems_ReturnValue) == 0x000018, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::CallFunc_GetListItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, CallFunc_Array_Get_Item) == 0x000030, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, K2Node_DynamicCast_AsIGLE_W_Scene_Outliner_Entry) == 0x000038, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::K2Node_DynamicCast_AsIGLE_W_Scene_Outliner_Entry' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, CallFunc_GetPlacableName_ReturnValue) == 0x000048, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::CallFunc_GetPlacableName_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, CallFunc_Contains_ReturnValue) == 0x000074, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_FilterEntries, CallFunc_Less_IntInt_ReturnValue) == 0x000075, "Member 'IGLE_W_SceneOutliner_C_FilterEntries::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function IGLE_W_SceneOutliner.IGLE_W_SceneOutliner_C.OnPlacableDeletedInEditor
// 0x0008 (0x0008 - 0x0000)
struct IGLE_W_SceneOutliner_C_OnPlacableDeletedInEditor final
{
public:
	class AActor*                                 PlacableActor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_SceneOutliner_C_OnPlacableDeletedInEditor) == 0x000008, "Wrong alignment on IGLE_W_SceneOutliner_C_OnPlacableDeletedInEditor");
static_assert(sizeof(IGLE_W_SceneOutliner_C_OnPlacableDeletedInEditor) == 0x000008, "Wrong size on IGLE_W_SceneOutliner_C_OnPlacableDeletedInEditor");
static_assert(offsetof(IGLE_W_SceneOutliner_C_OnPlacableDeletedInEditor, PlacableActor) == 0x000000, "Member 'IGLE_W_SceneOutliner_C_OnPlacableDeletedInEditor::PlacableActor' has a wrong offset!");

// Function IGLE_W_SceneOutliner.IGLE_W_SceneOutliner_C.OnPlacablePlacedInEditor
// 0x0008 (0x0008 - 0x0000)
struct IGLE_W_SceneOutliner_C_OnPlacablePlacedInEditor final
{
public:
	class AActor*                                 PlacableActor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_SceneOutliner_C_OnPlacablePlacedInEditor) == 0x000008, "Wrong alignment on IGLE_W_SceneOutliner_C_OnPlacablePlacedInEditor");
static_assert(sizeof(IGLE_W_SceneOutliner_C_OnPlacablePlacedInEditor) == 0x000008, "Wrong size on IGLE_W_SceneOutliner_C_OnPlacablePlacedInEditor");
static_assert(offsetof(IGLE_W_SceneOutliner_C_OnPlacablePlacedInEditor, PlacableActor) == 0x000000, "Member 'IGLE_W_SceneOutliner_C_OnPlacablePlacedInEditor::PlacableActor' has a wrong offset!");

// Function IGLE_W_SceneOutliner.IGLE_W_SceneOutliner_C.OnSelectionUpdated
// 0x0010 (0x0010 - 0x0000)
struct IGLE_W_SceneOutliner_C_OnSelectionUpdated final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CreateUndoAction;                                  // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_SceneOutliner_C_OnSelectionUpdated) == 0x000008, "Wrong alignment on IGLE_W_SceneOutliner_C_OnSelectionUpdated");
static_assert(sizeof(IGLE_W_SceneOutliner_C_OnSelectionUpdated) == 0x000010, "Wrong size on IGLE_W_SceneOutliner_C_OnSelectionUpdated");
static_assert(offsetof(IGLE_W_SceneOutliner_C_OnSelectionUpdated, Actor) == 0x000000, "Member 'IGLE_W_SceneOutliner_C_OnSelectionUpdated::Actor' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_OnSelectionUpdated, CreateUndoAction) == 0x000008, "Member 'IGLE_W_SceneOutliner_C_OnSelectionUpdated::CreateUndoAction' has a wrong offset!");

// Function IGLE_W_SceneOutliner.IGLE_W_SceneOutliner_C.PrepareSearchArray
// 0x00B8 (0x00B8 - 0x0000)
struct IGLE_W_SceneOutliner_C_PrepareSearchArray final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UObject*>                        Result;                                            // 0x0018(0x0010)(Parm, OutParm)
	TArray<class UObject*>                        ArrayLocal;                                        // 0x0028(0x0010)(Edit, BlueprintVisible)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_W_SceneOutliner_Entry_C*          K2Node_DynamicCast_AsIGLE_W_Scene_Outliner_Entry;  // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPlacableName_ReturnValue;              // 0x0088(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IGLE_W_SceneOutliner_C_PrepareSearchArray) == 0x000008, "Wrong alignment on IGLE_W_SceneOutliner_C_PrepareSearchArray");
static_assert(sizeof(IGLE_W_SceneOutliner_C_PrepareSearchArray) == 0x0000B8, "Wrong size on IGLE_W_SceneOutliner_C_PrepareSearchArray");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, InText) == 0x000000, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::InText' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, Result) == 0x000018, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::Result' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, ArrayLocal) == 0x000028, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::ArrayLocal' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_Conv_TextToString_ReturnValue) == 0x000038, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, Temp_int_Array_Index_Variable) == 0x000048, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_Subtract_IntInt_ReturnValue) == 0x000050, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000054, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_Array_Get_Item) == 0x000060, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000068, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, K2Node_DynamicCast_AsIGLE_W_Scene_Outliner_Entry) == 0x000070, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::K2Node_DynamicCast_AsIGLE_W_Scene_Outliner_Entry' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_Max_ReturnValue) == 0x00007C, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_GetPlacableName_ReturnValue) == 0x000088, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_GetPlacableName_ReturnValue' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000A0, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_PrepareSearchArray, CallFunc_Contains_ReturnValue) == 0x0000B0, "Member 'IGLE_W_SceneOutliner_C_PrepareSearchArray::CallFunc_Contains_ReturnValue' has a wrong offset!");

// Function IGLE_W_SceneOutliner.IGLE_W_SceneOutliner_C.SortOutlinerChildrenBySearchTerm
// 0x0060 (0x0060 - 0x0000)
struct IGLE_W_SceneOutliner_C_SortOutlinerChildrenBySearchTerm final
{
public:
	class FString                                 SearchString;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class AActor*>            RuntimeNameToPlacable;                             // 0x0010(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(IGLE_W_SceneOutliner_C_SortOutlinerChildrenBySearchTerm) == 0x000008, "Wrong alignment on IGLE_W_SceneOutliner_C_SortOutlinerChildrenBySearchTerm");
static_assert(sizeof(IGLE_W_SceneOutliner_C_SortOutlinerChildrenBySearchTerm) == 0x000060, "Wrong size on IGLE_W_SceneOutliner_C_SortOutlinerChildrenBySearchTerm");
static_assert(offsetof(IGLE_W_SceneOutliner_C_SortOutlinerChildrenBySearchTerm, SearchString) == 0x000000, "Member 'IGLE_W_SceneOutliner_C_SortOutlinerChildrenBySearchTerm::SearchString' has a wrong offset!");
static_assert(offsetof(IGLE_W_SceneOutliner_C_SortOutlinerChildrenBySearchTerm, RuntimeNameToPlacable) == 0x000010, "Member 'IGLE_W_SceneOutliner_C_SortOutlinerChildrenBySearchTerm::RuntimeNameToPlacable' has a wrong offset!");

}
