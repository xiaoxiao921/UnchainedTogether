#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingSubCategory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SettingSubCategory_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SettingSubCategory.W_SettingSubCategory_C
// 0x0020 (0x02E0 - 0x02C0)
class UW_SettingSubCategory_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           SettingsBox;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SettingCategory_C*                   W_SettingCategory_1;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_SettingSubCategory                          SubCategory;                                       // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	class UW_Setting_C* AddSetting(const struct FS_Setting& Setting);
	void Construct();
	void ExecuteUbergraph_W_SettingSubCategory(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SettingSubCategory_C">();
	}
	static class UW_SettingSubCategory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SettingSubCategory_C>();
	}
};
static_assert(alignof(UW_SettingSubCategory_C) == 0x000008, "Wrong alignment on UW_SettingSubCategory_C");
static_assert(sizeof(UW_SettingSubCategory_C) == 0x0002E0, "Wrong size on UW_SettingSubCategory_C");
static_assert(offsetof(UW_SettingSubCategory_C, UberGraphFrame) == 0x0002C0, "Member 'UW_SettingSubCategory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SettingSubCategory_C, SettingsBox) == 0x0002C8, "Member 'UW_SettingSubCategory_C::SettingsBox' has a wrong offset!");
static_assert(offsetof(UW_SettingSubCategory_C, W_SettingCategory_1) == 0x0002D0, "Member 'UW_SettingSubCategory_C::W_SettingCategory_1' has a wrong offset!");
static_assert(offsetof(UW_SettingSubCategory_C, SubCategory) == 0x0002D8, "Member 'UW_SettingSubCategory_C::SubCategory' has a wrong offset!");

}

