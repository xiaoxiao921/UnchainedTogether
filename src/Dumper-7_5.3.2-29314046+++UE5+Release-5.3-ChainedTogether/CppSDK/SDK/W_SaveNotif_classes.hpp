#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SaveNotif

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SaveNotif.W_SaveNotif_C
// 0x0018 (0x02D8 - 0x02C0)
class UW_SaveNotif_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SaveAnim;                                          // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_71;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_SaveNotif(int32 EntryPoint);
	void Finished_EB27B56A43F6DC9CFAD37FBC83D41F19();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SaveNotif_C">();
	}
	static class UW_SaveNotif_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SaveNotif_C>();
	}
};
static_assert(alignof(UW_SaveNotif_C) == 0x000008, "Wrong alignment on UW_SaveNotif_C");
static_assert(sizeof(UW_SaveNotif_C) == 0x0002D8, "Wrong size on UW_SaveNotif_C");
static_assert(offsetof(UW_SaveNotif_C, UberGraphFrame) == 0x0002C0, "Member 'UW_SaveNotif_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SaveNotif_C, SaveAnim) == 0x0002C8, "Member 'UW_SaveNotif_C::SaveAnim' has a wrong offset!");
static_assert(offsetof(UW_SaveNotif_C, Image_71) == 0x0002D0, "Member 'UW_SaveNotif_C::Image_71' has a wrong offset!");

}

