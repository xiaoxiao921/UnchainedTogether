#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SaveText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SaveText.W_SaveText_C
// 0x0028 (0x02E8 - 0x02C0)
class UW_SaveText_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Altitude_Txt;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BiomeName_txt;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SaveName_txt;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Time_txt;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_SaveText(int32 EntryPoint);
	void UpdateText(const struct FS_BiomeSave& Save);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SaveText_C">();
	}
	static class UW_SaveText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SaveText_C>();
	}
};
static_assert(alignof(UW_SaveText_C) == 0x000008, "Wrong alignment on UW_SaveText_C");
static_assert(sizeof(UW_SaveText_C) == 0x0002E8, "Wrong size on UW_SaveText_C");
static_assert(offsetof(UW_SaveText_C, UberGraphFrame) == 0x0002C0, "Member 'UW_SaveText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SaveText_C, Altitude_Txt) == 0x0002C8, "Member 'UW_SaveText_C::Altitude_Txt' has a wrong offset!");
static_assert(offsetof(UW_SaveText_C, BiomeName_txt) == 0x0002D0, "Member 'UW_SaveText_C::BiomeName_txt' has a wrong offset!");
static_assert(offsetof(UW_SaveText_C, SaveName_txt) == 0x0002D8, "Member 'UW_SaveText_C::SaveName_txt' has a wrong offset!");
static_assert(offsetof(UW_SaveText_C, Time_txt) == 0x0002E0, "Member 'UW_SaveText_C::Time_txt' has a wrong offset!");

}

