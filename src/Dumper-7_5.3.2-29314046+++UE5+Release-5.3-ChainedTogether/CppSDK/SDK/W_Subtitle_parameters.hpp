#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Subtitle

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_Subtitle.W_Subtitle_C.ExecuteUbergraph_W_Subtitle
// 0x0020 (0x0020 - 0x0000)
struct W_Subtitle_C_ExecuteUbergraph_W_Subtitle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C90[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Subtitle_C_ExecuteUbergraph_W_Subtitle) == 0x000008, "Wrong alignment on W_Subtitle_C_ExecuteUbergraph_W_Subtitle");
static_assert(sizeof(W_Subtitle_C_ExecuteUbergraph_W_Subtitle) == 0x000020, "Wrong size on W_Subtitle_C_ExecuteUbergraph_W_Subtitle");
static_assert(offsetof(W_Subtitle_C_ExecuteUbergraph_W_Subtitle, EntryPoint) == 0x000000, "Member 'W_Subtitle_C_ExecuteUbergraph_W_Subtitle::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Subtitle_C_ExecuteUbergraph_W_Subtitle, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_Subtitle_C_ExecuteUbergraph_W_Subtitle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Subtitle_C_ExecuteUbergraph_W_Subtitle, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'W_Subtitle_C_ExecuteUbergraph_W_Subtitle::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Subtitle_C_ExecuteUbergraph_W_Subtitle, CallFunc_Delay_Duration_ImplicitCast) == 0x000018, "Member 'W_Subtitle_C_ExecuteUbergraph_W_Subtitle::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}

