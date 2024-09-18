#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DownloadHUD_w

#include "Basic.hpp"


namespace SDK::Params
{

// Function DownloadHUD_w.DownloadHUD_w_C.AddChild
// 0x0008 (0x0008 - 0x0000)
struct DownloadHUD_w_C_AddChild final
{
public:
	class UDownloadSubscribedWorkshop_W_C*        WorkshopDownload;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DownloadHUD_w_C_AddChild) == 0x000008, "Wrong alignment on DownloadHUD_w_C_AddChild");
static_assert(sizeof(DownloadHUD_w_C_AddChild) == 0x000008, "Wrong size on DownloadHUD_w_C_AddChild");
static_assert(offsetof(DownloadHUD_w_C_AddChild, WorkshopDownload) == 0x000000, "Member 'DownloadHUD_w_C_AddChild::WorkshopDownload' has a wrong offset!");

// Function DownloadHUD_w.DownloadHUD_w_C.ExecuteUbergraph_DownloadHUD_w
// 0x0018 (0x0018 - 0x0000)
struct DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDownloadSubscribedWorkshop_W_C*        K2Node_CustomEvent_workshopDownload;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w) == 0x000008, "Wrong alignment on DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w");
static_assert(sizeof(DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w) == 0x000018, "Wrong size on DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w");
static_assert(offsetof(DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w, EntryPoint) == 0x000000, "Member 'DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w::EntryPoint' has a wrong offset!");
static_assert(offsetof(DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w, K2Node_CustomEvent_workshopDownload) == 0x000008, "Member 'DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w::K2Node_CustomEvent_workshopDownload' has a wrong offset!");
static_assert(offsetof(DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'DownloadHUD_w_C_ExecuteUbergraph_DownloadHUD_w::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}
