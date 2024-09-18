#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DownloadHUD_w

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DownloadHUD_w.DownloadHUD_w_C
// 0x0010 (0x02D0 - 0x02C0)
class UDownloadHUD_w_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ScrollBox_59;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AddChild(class UDownloadSubscribedWorkshop_W_C* WorkshopDownload);
	void ExecuteUbergraph_DownloadHUD_w(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DownloadHUD_w_C">();
	}
	static class UDownloadHUD_w_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDownloadHUD_w_C>();
	}
};
static_assert(alignof(UDownloadHUD_w_C) == 0x000008, "Wrong alignment on UDownloadHUD_w_C");
static_assert(sizeof(UDownloadHUD_w_C) == 0x0002D0, "Wrong size on UDownloadHUD_w_C");
static_assert(offsetof(UDownloadHUD_w_C, UberGraphFrame) == 0x0002C0, "Member 'UDownloadHUD_w_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDownloadHUD_w_C, ScrollBox_59) == 0x0002C8, "Member 'UDownloadHUD_w_C::ScrollBox_59' has a wrong offset!");

}

