#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wings_W

#include "Basic.hpp"


namespace SDK::Params
{

// Function Wings_W.Wings_W_C.ExecuteUbergraph_Wings_W
// 0x0060 (0x0060 - 0x0000)
struct Wings_W_C_ExecuteUbergraph_Wings_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB1[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(Wings_W_C_ExecuteUbergraph_Wings_W) == 0x000008, "Wrong alignment on Wings_W_C_ExecuteUbergraph_Wings_W");
static_assert(sizeof(Wings_W_C_ExecuteUbergraph_Wings_W) == 0x000060, "Wrong size on Wings_W_C_ExecuteUbergraph_Wings_W");
static_assert(offsetof(Wings_W_C_ExecuteUbergraph_Wings_W, EntryPoint) == 0x000000, "Member 'Wings_W_C_ExecuteUbergraph_Wings_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(Wings_W_C_ExecuteUbergraph_Wings_W, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'Wings_W_C_ExecuteUbergraph_Wings_W::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wings_W_C_ExecuteUbergraph_Wings_W, Temp_bool_Has_Been_Initd_Variable) == 0x000010, "Member 'Wings_W_C_ExecuteUbergraph_Wings_W::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Wings_W_C_ExecuteUbergraph_Wings_W, Temp_bool_IsClosed_Variable) == 0x000011, "Member 'Wings_W_C_ExecuteUbergraph_Wings_W::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Wings_W_C_ExecuteUbergraph_Wings_W, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'Wings_W_C_ExecuteUbergraph_Wings_W::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wings_W_C_ExecuteUbergraph_Wings_W, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'Wings_W_C_ExecuteUbergraph_Wings_W::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wings_W_C_ExecuteUbergraph_Wings_W, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000030, "Member 'Wings_W_C_ExecuteUbergraph_Wings_W::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wings_W_C_ExecuteUbergraph_Wings_W, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'Wings_W_C_ExecuteUbergraph_Wings_W::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wings_W_C_ExecuteUbergraph_Wings_W, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'Wings_W_C_ExecuteUbergraph_Wings_W::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
