#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_Group

#include "Basic.hpp"

#include "InGameLevelEditor_structs.hpp"


namespace SDK::Params
{

// Function Mod_Group.Mod_Group_C.AddActorsToGroup
// 0x0010 (0x0010 - 0x0000)
struct Mod_Group_C_AddActorsToGroup final
{
public:
	TArray<class AActor*>                         Actors;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Mod_Group_C_AddActorsToGroup) == 0x000008, "Wrong alignment on Mod_Group_C_AddActorsToGroup");
static_assert(sizeof(Mod_Group_C_AddActorsToGroup) == 0x000010, "Wrong size on Mod_Group_C_AddActorsToGroup");
static_assert(offsetof(Mod_Group_C_AddActorsToGroup, Actors) == 0x000000, "Member 'Mod_Group_C_AddActorsToGroup::Actors' has a wrong offset!");

// Function Mod_Group.Mod_Group_C.BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Mod_Group_C_BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature final
{
public:
	class FString                                 PropertyName;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_Group_C_BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature) == 0x000008, "Wrong alignment on Mod_Group_C_BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature");
static_assert(sizeof(Mod_Group_C_BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature) == 0x000010, "Wrong size on Mod_Group_C_BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature");
static_assert(offsetof(Mod_Group_C_BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature, PropertyName) == 0x000000, "Member 'Mod_Group_C_BndEvt__Mod_Group_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature::PropertyName' has a wrong offset!");

// Function Mod_Group.Mod_Group_C.ExecuteUbergraph_Mod_Group
// 0x0228 (0x0228 - 0x0000)
struct Mod_Group_C_ExecuteUbergraph_Mod_Group final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGM_Game_C*                             K2Node_DynamicCast_AsGM_Game;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_CustomEvent_Actors;                         // 0x0030(0x0010)(ConstParm, ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FIGLEProperty                          CallFunc_GetPropertyByName_Property;               // 0x0048(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_GetPropertyByName_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Find_Group_By_Placable_Found;             // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int64>                                 CallFunc_Find_Group_By_Placable_Group;             // 0x00D0(0x0010)(ReferenceParm)
	class AMod_Group_C*                           CallFunc_Find_Group_By_Placable_GroupActor;        // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UIGLE_GroupProperty_C*                  K2Node_DynamicCast_AsIGLE_Group_Property;          // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_InterfaceComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_PropertyName;           // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIGLEProperty                          CallFunc_GetPropertyByName_Property_1;             // 0x0120(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_GetPropertyByName_ReturnValue_1;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x3];                                      // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIGLE_GroupProperty_C*                  K2Node_DynamicCast_AsIGLE_Group_Property_1;        // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B2[0x6];                                      // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Array_Get_Item_1;                         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPlacableByID_Found;                    // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetPlacableByID_Actor;                    // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0200(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x0218(0x0010)(ReferenceParm)
};
static_assert(alignof(Mod_Group_C_ExecuteUbergraph_Mod_Group) == 0x000008, "Wrong alignment on Mod_Group_C_ExecuteUbergraph_Mod_Group");
static_assert(sizeof(Mod_Group_C_ExecuteUbergraph_Mod_Group) == 0x000228, "Wrong size on Mod_Group_C_ExecuteUbergraph_Mod_Group");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, EntryPoint) == 0x000000, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetGameMode_ReturnValue) == 0x000018, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_DynamicCast_AsGM_Game) == 0x000020, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_DynamicCast_AsGM_Game' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_IsServer_ReturnValue) == 0x000029, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_CustomEvent_Actors) == 0x000030, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_CustomEvent_Actors' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Array_Get_Item) == 0x000040, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetPropertyByName_Property) == 0x000048, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetPropertyByName_Property' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetPropertyByName_ReturnValue) == 0x0000C8, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetPropertyByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Find_Group_By_Placable_Found) == 0x0000C9, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Find_Group_By_Placable_Found' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Find_Group_By_Placable_Group) == 0x0000D0, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Find_Group_By_Placable_Group' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Find_Group_By_Placable_GroupActor) == 0x0000E0, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Find_Group_By_Placable_GroupActor' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_DynamicCast_AsIGLE_Group_Property) == 0x0000E8, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_DynamicCast_AsIGLE_Group_Property' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_DynamicCast_bSuccess_1) == 0x0000F0, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetComponentByClass_ReturnValue) == 0x0000F8, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Array_Add_ReturnValue) == 0x000104, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_ComponentBoundEvent_PropertyName) == 0x000108, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_ComponentBoundEvent_PropertyName' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_SwitchString_CmpSuccess) == 0x000118, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetPropertyByName_Property_1) == 0x000120, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetPropertyByName_Property_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetPropertyByName_ReturnValue_1) == 0x0001A0, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetPropertyByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, Temp_int_Loop_Counter_Variable_1) == 0x0001A4, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_DynamicCast_AsIGLE_Group_Property_1) == 0x0001A8, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_DynamicCast_AsIGLE_Group_Property_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_DynamicCast_bSuccess_2) == 0x0001B0, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Less_IntInt_ReturnValue) == 0x0001B1, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Array_Get_Item_1) == 0x0001B8, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Array_Length_ReturnValue_1) == 0x0001C0, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetPlacableByID_Found) == 0x0001C4, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetPlacableByID_Found' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetPlacableByID_Actor) == 0x0001C8, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetPlacableByID_Actor' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001D0, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001D4, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetDisplayName_ReturnValue) == 0x0001D8, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Conv_StringToName_ReturnValue) == 0x0001E8, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_GetDisplayName_ReturnValue_1) == 0x0001F0, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_MakeArray_Array) == 0x000200, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000210, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_ExecuteUbergraph_Mod_Group, K2Node_MakeArray_Array_1) == 0x000218, "Member 'Mod_Group_C_ExecuteUbergraph_Mod_Group::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function Mod_Group.Mod_Group_C.GetPlacableByID
// 0x0060 (0x0060 - 0x0000)
struct Mod_Group_C_GetPlacableByID final
{
public:
	int64                                         A;                                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_IGLE_GetAllPlacableActorsInLevel_AllPlacableActors; // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIGLE_InterfaceComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_Group_C_GetPlacableByID) == 0x000008, "Wrong alignment on Mod_Group_C_GetPlacableByID");
static_assert(sizeof(Mod_Group_C_GetPlacableByID) == 0x000060, "Wrong size on Mod_Group_C_GetPlacableByID");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, A) == 0x000000, "Member 'Mod_Group_C_GetPlacableByID::A' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, Found) == 0x000008, "Member 'Mod_Group_C_GetPlacableByID::Found' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, Actor) == 0x000010, "Member 'Mod_Group_C_GetPlacableByID::Actor' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, Temp_int_Array_Index_Variable) == 0x000018, "Member 'Mod_Group_C_GetPlacableByID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'Mod_Group_C_GetPlacableByID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'Mod_Group_C_GetPlacableByID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, CallFunc_IGLE_GetAllPlacableActorsInLevel_AllPlacableActors) == 0x000028, "Member 'Mod_Group_C_GetPlacableByID::CallFunc_IGLE_GetAllPlacableActorsInLevel_AllPlacableActors' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'Mod_Group_C_GetPlacableByID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, CallFunc_Array_Get_Item) == 0x000040, "Member 'Mod_Group_C_GetPlacableByID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'Mod_Group_C_GetPlacableByID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'Mod_Group_C_GetPlacableByID::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_Group_C_GetPlacableByID, CallFunc_EqualEqual_Int64Int64_ReturnValue) == 0x000058, "Member 'Mod_Group_C_GetPlacableByID::CallFunc_EqualEqual_Int64Int64_ReturnValue' has a wrong offset!");

}
