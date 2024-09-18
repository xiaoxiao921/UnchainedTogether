#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DownloadSubscribedWorkshop_W

#include "Basic.hpp"

#include "SteamCorePro_structs.hpp"


namespace SDK::Params
{

// Function DownloadSubscribedWorkshop_W.DownloadSubscribedWorkshop_W_C.ChangeFollowButtonState
// 0x0002 (0x0002 - 0x0000)
struct DownloadSubscribedWorkshop_W_C_ChangeFollowButtonState final
{
public:
	bool                                          Followed;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedsUpdate;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DownloadSubscribedWorkshop_W_C_ChangeFollowButtonState) == 0x000001, "Wrong alignment on DownloadSubscribedWorkshop_W_C_ChangeFollowButtonState");
static_assert(sizeof(DownloadSubscribedWorkshop_W_C_ChangeFollowButtonState) == 0x000002, "Wrong size on DownloadSubscribedWorkshop_W_C_ChangeFollowButtonState");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ChangeFollowButtonState, Followed) == 0x000000, "Member 'DownloadSubscribedWorkshop_W_C_ChangeFollowButtonState::Followed' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ChangeFollowButtonState, NeedsUpdate) == 0x000001, "Member 'DownloadSubscribedWorkshop_W_C_ChangeFollowButtonState::NeedsUpdate' has a wrong offset!");

// Function DownloadSubscribedWorkshop_W.DownloadSubscribedWorkshop_W_C.ExecuteUbergraph_DownloadSubscribedWorkshop_W
// 0x0128 (0x0128 - 0x0000)
struct DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	struct FDownloadItemResult                    K2Node_CustomEvent_Data_1;                         // 0x0020(0x0018)(ConstParm, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FDownloadItemResult& Data, bool bWasSuccessful)> K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDownloadItemResult                    Temp_struct_Variable;                              // 0x0050(0x0018)(NoDestructor)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
	TDelegate<void(struct FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRemoteStorageSubscribePublishedFileResult K2Node_CustomEvent_Data;                           // 0x00A0(0x0010)(ConstParm, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRemoteStorageSubscribePublishedFileResult Temp_struct_Variable_1;                            // 0x00B8(0x0010)(NoDestructor)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCustomGI_C*                            K2Node_DynamicCast_AsCustom_GI;                    // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USteamCoreProUGCAsyncActionDownloadItem* CallFunc_DownloadItemAsync_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemDownloadInfo_BytesDownloaded;      // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemDownloadInfo_BytesTotal;           // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemDownloadInfo_ReturnValue;          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USteamCoreProUGCAsyncActionSubscribeItem* CallFunc_SubscribeItemAsync_ReturnValue;           // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W) == 0x000008, "Wrong alignment on DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W");
static_assert(sizeof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W) == 0x000128, "Wrong size on DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, EntryPoint) == 0x000000, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::EntryPoint' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, K2Node_CustomEvent_Data_1) == 0x000020, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, K2Node_CustomEvent_bWasSuccessful_1) == 0x000038, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, Temp_bool_Variable) == 0x00004C, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, Temp_struct_Variable) == 0x000050, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000068, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, K2Node_CustomEvent_Data) == 0x0000A0, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, K2Node_CustomEvent_bWasSuccessful) == 0x0000B0, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, Temp_bool_Variable_1) == 0x0000B1, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, Temp_struct_Variable_1) == 0x0000B8, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_GetGameInstance_ReturnValue) == 0x0000C8, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, K2Node_DynamicCast_AsCustom_GI) == 0x0000D0, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::K2Node_DynamicCast_AsCustom_GI' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_DownloadItemAsync_ReturnValue) == 0x0000E0, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_DownloadItemAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_GetItemDownloadInfo_BytesDownloaded) == 0x0000E8, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_GetItemDownloadInfo_BytesDownloaded' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_GetItemDownloadInfo_BytesTotal) == 0x0000EC, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_GetItemDownloadInfo_BytesTotal' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_GetItemDownloadInfo_ReturnValue) == 0x0000F0, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_GetItemDownloadInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_Conv_IntToDouble_ReturnValue) == 0x0000F8, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000100, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000108, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_SubscribeItemAsync_ReturnValue) == 0x000118, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_SubscribeItemAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000124, "Member 'DownloadSubscribedWorkshop_W_C_ExecuteUbergraph_DownloadSubscribedWorkshop_W::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function DownloadSubscribedWorkshop_W.DownloadSubscribedWorkshop_W_C.OnCallback_35F27610440B47DF2C1E9B966B71FC53
// 0x0018 (0x0018 - 0x0000)
struct DownloadSubscribedWorkshop_W_C_OnCallback_35F27610440B47DF2C1E9B966B71FC53 final
{
public:
	struct FRemoteStorageSubscribePublishedFileResult Data;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bWasSuccessful;                                    // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DownloadSubscribedWorkshop_W_C_OnCallback_35F27610440B47DF2C1E9B966B71FC53) == 0x000008, "Wrong alignment on DownloadSubscribedWorkshop_W_C_OnCallback_35F27610440B47DF2C1E9B966B71FC53");
static_assert(sizeof(DownloadSubscribedWorkshop_W_C_OnCallback_35F27610440B47DF2C1E9B966B71FC53) == 0x000018, "Wrong size on DownloadSubscribedWorkshop_W_C_OnCallback_35F27610440B47DF2C1E9B966B71FC53");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_OnCallback_35F27610440B47DF2C1E9B966B71FC53, Data) == 0x000000, "Member 'DownloadSubscribedWorkshop_W_C_OnCallback_35F27610440B47DF2C1E9B966B71FC53::Data' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_OnCallback_35F27610440B47DF2C1E9B966B71FC53, bWasSuccessful) == 0x000010, "Member 'DownloadSubscribedWorkshop_W_C_OnCallback_35F27610440B47DF2C1E9B966B71FC53::bWasSuccessful' has a wrong offset!");

// Function DownloadSubscribedWorkshop_W.DownloadSubscribedWorkshop_W_C.OnCallback_773A01644FC9EF4EF48F248D980CB154
// 0x0020 (0x0020 - 0x0000)
struct DownloadSubscribedWorkshop_W_C_OnCallback_773A01644FC9EF4EF48F248D980CB154 final
{
public:
	struct FDownloadItemResult                    Data;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bWasSuccessful;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DownloadSubscribedWorkshop_W_C_OnCallback_773A01644FC9EF4EF48F248D980CB154) == 0x000008, "Wrong alignment on DownloadSubscribedWorkshop_W_C_OnCallback_773A01644FC9EF4EF48F248D980CB154");
static_assert(sizeof(DownloadSubscribedWorkshop_W_C_OnCallback_773A01644FC9EF4EF48F248D980CB154) == 0x000020, "Wrong size on DownloadSubscribedWorkshop_W_C_OnCallback_773A01644FC9EF4EF48F248D980CB154");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_OnCallback_773A01644FC9EF4EF48F248D980CB154, Data) == 0x000000, "Member 'DownloadSubscribedWorkshop_W_C_OnCallback_773A01644FC9EF4EF48F248D980CB154::Data' has a wrong offset!");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_OnCallback_773A01644FC9EF4EF48F248D980CB154, bWasSuccessful) == 0x000018, "Member 'DownloadSubscribedWorkshop_W_C_OnCallback_773A01644FC9EF4EF48F248D980CB154::bWasSuccessful' has a wrong offset!");

// Function DownloadSubscribedWorkshop_W.DownloadSubscribedWorkshop_W_C.OnDownloaded__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct DownloadSubscribedWorkshop_W_C_OnDownloaded__DelegateSignature final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DownloadSubscribedWorkshop_W_C_OnDownloaded__DelegateSignature) == 0x000001, "Wrong alignment on DownloadSubscribedWorkshop_W_C_OnDownloaded__DelegateSignature");
static_assert(sizeof(DownloadSubscribedWorkshop_W_C_OnDownloaded__DelegateSignature) == 0x000001, "Wrong size on DownloadSubscribedWorkshop_W_C_OnDownloaded__DelegateSignature");
static_assert(offsetof(DownloadSubscribedWorkshop_W_C_OnDownloaded__DelegateSignature, Success) == 0x000000, "Member 'DownloadSubscribedWorkshop_W_C_OnDownloaded__DelegateSignature::Success' has a wrong offset!");

}
