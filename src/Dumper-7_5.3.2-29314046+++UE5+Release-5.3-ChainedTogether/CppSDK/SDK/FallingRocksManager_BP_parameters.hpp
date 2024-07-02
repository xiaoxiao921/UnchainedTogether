#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FallingRocksManager_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function FallingRocksManager_BP.FallingRocksManager_BP_C.ExecuteUbergraph_FallingRocksManager_BP
// 0x00D0 (0x00D0 - 0x0000)
struct FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C3D[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0020(0x0010)(ReferenceParm)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C3E[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFallingRock_BP_C*                      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C3F[0xC];                                     // 0x0044(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0050(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C40[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFallingRock_BP_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP) == 0x000010, "Wrong alignment on FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP");
static_assert(sizeof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP) == 0x0000D0, "Wrong size on FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, EntryPoint) == 0x000000, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_HasAuthority_ReturnValue) == 0x000005, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000020, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, K2Node_CustomEvent_Index) == 0x000030, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_Array_IsEmpty_ReturnValue) == 0x000034, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_Array_Get_Item) == 0x000038, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000040, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_GetTransform_ReturnValue) == 0x000050, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_RandomBool_ReturnValue) == 0x0000B8, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C0, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_SelectInt_ReturnValue) == 0x0000C8, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x0000CC, "Member 'FallingRocksManager_BP_C_ExecuteUbergraph_FallingRocksManager_BP::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");

// Function FallingRocksManager_BP.FallingRocksManager_BP_C.SpawnRockAll
// 0x0004 (0x0004 - 0x0000)
struct FallingRocksManager_BP_C_SpawnRockAll final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FallingRocksManager_BP_C_SpawnRockAll) == 0x000004, "Wrong alignment on FallingRocksManager_BP_C_SpawnRockAll");
static_assert(sizeof(FallingRocksManager_BP_C_SpawnRockAll) == 0x000004, "Wrong size on FallingRocksManager_BP_C_SpawnRockAll");
static_assert(offsetof(FallingRocksManager_BP_C_SpawnRockAll, Param_Index) == 0x000000, "Member 'FallingRocksManager_BP_C_SpawnRockAll::Param_Index' has a wrong offset!");

}

