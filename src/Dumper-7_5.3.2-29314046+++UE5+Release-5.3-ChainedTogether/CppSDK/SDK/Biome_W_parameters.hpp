#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Biome_W

#include "Basic.hpp"


namespace SDK::Params
{

// Function Biome_W.Biome_W_C.ExecuteUbergraph_Biome_W
// 0x0018 (0x0018 - 0x0000)
struct Biome_W_C_ExecuteUbergraph_Biome_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Biome_W_C_ExecuteUbergraph_Biome_W) == 0x000008, "Wrong alignment on Biome_W_C_ExecuteUbergraph_Biome_W");
static_assert(sizeof(Biome_W_C_ExecuteUbergraph_Biome_W) == 0x000018, "Wrong size on Biome_W_C_ExecuteUbergraph_Biome_W");
static_assert(offsetof(Biome_W_C_ExecuteUbergraph_Biome_W, EntryPoint) == 0x000000, "Member 'Biome_W_C_ExecuteUbergraph_Biome_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(Biome_W_C_ExecuteUbergraph_Biome_W, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'Biome_W_C_ExecuteUbergraph_Biome_W::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Biome_W_C_ExecuteUbergraph_Biome_W, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'Biome_W_C_ExecuteUbergraph_Biome_W::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

