#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SpeedrunPlayer

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_SpeedrunPlayer.W_SpeedrunPlayer_C.CustomEvent
// 0x0008 (0x0008 - 0x0000)
struct W_SpeedrunPlayer_C_CustomEvent final
{
public:
	class UVaRestRequestJSON*                     Request;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SpeedrunPlayer_C_CustomEvent) == 0x000008, "Wrong alignment on W_SpeedrunPlayer_C_CustomEvent");
static_assert(sizeof(W_SpeedrunPlayer_C_CustomEvent) == 0x000008, "Wrong size on W_SpeedrunPlayer_C_CustomEvent");
static_assert(offsetof(W_SpeedrunPlayer_C_CustomEvent, Request) == 0x000000, "Member 'W_SpeedrunPlayer_C_CustomEvent::Request' has a wrong offset!");

// Function W_SpeedrunPlayer.W_SpeedrunPlayer_C.ExecuteUbergraph_W_SpeedrunPlayer
// 0x0150 (0x0150 - 0x0000)
struct W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestRequestJSON*                     K2Node_CustomEvent_Request;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      CallFunc_GetResponseObject_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonValue*                       CallFunc_GetField_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonValue*                       CallFunc_GetField_ReturnValue_1;                   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue_1;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonValue*                       CallFunc_GetField_ReturnValue_2;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonValue*                       CallFunc_GetField_ReturnValue_3;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue_2;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringField_ReturnValue;               // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue_3;                   // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonValue*                       CallFunc_GetField_ReturnValue_4;                   // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UVaRestRequestJSON* Request)> K2Node_CreateDelegate_OutputDelegate;              // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVaRestJsonObject*                      CallFunc_AsObject_ReturnValue_4;                   // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStringField_ReturnValue_1;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0100(0x0018)()
	class UVaRestSubsystem*                       CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestSubsystem*                       CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVaRestJsonObject*                      CallFunc_ConstructVaRestJsonObject_ReturnValue;    // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0130(0x0018)()
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer) == 0x000008, "Wrong alignment on W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer");
static_assert(sizeof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer) == 0x000150, "Wrong size on W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, EntryPoint) == 0x000000, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, K2Node_CustomEvent_Request) == 0x000008, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::K2Node_CustomEvent_Request' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetResponseObject_ReturnValue) == 0x000018, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetResponseObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetField_ReturnValue) == 0x000020, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetField_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_AsObject_ReturnValue) == 0x000030, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_AsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetField_ReturnValue_1) == 0x000040, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_AsObject_ReturnValue_1) == 0x000048, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_AsObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetField_ReturnValue_2) == 0x000050, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetField_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetField_ReturnValue_3) == 0x000058, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetField_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_AsObject_ReturnValue_2) == 0x000060, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_AsObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_IsValid_ReturnValue_3) == 0x000068, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetStringField_ReturnValue) == 0x000070, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetStringField_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_AsObject_ReturnValue_3) == 0x000098, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_AsObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetField_ReturnValue_4) == 0x0000A0, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetField_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_IsValid_ReturnValue_4) == 0x0000A8, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, K2Node_CreateDelegate_OutputDelegate) == 0x0000AC, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_AsObject_ReturnValue_4) == 0x0000C0, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_AsObject_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetStringField_ReturnValue_1) == 0x0000C8, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetStringField_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_Concat_StrStr_ReturnValue) == 0x0000D8, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000E8, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000F0, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000100, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000118, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_GetEngineSubsystem_ReturnValue_1) == 0x000120, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_GetEngineSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_ConstructVaRestJsonObject_ReturnValue) == 0x000128, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_ConstructVaRestJsonObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000130, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer, CallFunc_Delay_Duration_ImplicitCast) == 0x000148, "Member 'W_SpeedrunPlayer_C_ExecuteUbergraph_W_SpeedrunPlayer::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}
