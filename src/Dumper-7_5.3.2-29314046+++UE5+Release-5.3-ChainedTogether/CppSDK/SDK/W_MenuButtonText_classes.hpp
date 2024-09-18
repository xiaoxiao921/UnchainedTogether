#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MenuButtonText

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Buttons_E_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_MenuButtonText.W_MenuButtonText_C
// 0x0058 (0x0318 - 0x02C0)
class UW_MenuButtonText_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ImageZoom;                                         // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_37;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_31;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Size;                                              // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                            InitialColor;                                      // 0x02FC(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Image;                                             // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EButtons_E                                    Button;                                            // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_MenuButtonText(int32 EntryPoint);
	void Hovered();
	void PreConstruct(bool IsDesignTime);
	void SetText(const class FText& InText);
	void Unhovered();
	void UpdateSize(int32 In_Font_Info_Size);
	void UpdateText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_MenuButtonText_C">();
	}
	static class UW_MenuButtonText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_MenuButtonText_C>();
	}
};
static_assert(alignof(UW_MenuButtonText_C) == 0x000008, "Wrong alignment on UW_MenuButtonText_C");
static_assert(sizeof(UW_MenuButtonText_C) == 0x000318, "Wrong size on UW_MenuButtonText_C");
static_assert(offsetof(UW_MenuButtonText_C, UberGraphFrame) == 0x0002C0, "Member 'UW_MenuButtonText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_MenuButtonText_C, ImageZoom) == 0x0002C8, "Member 'UW_MenuButtonText_C::ImageZoom' has a wrong offset!");
static_assert(offsetof(UW_MenuButtonText_C, Image_37) == 0x0002D0, "Member 'UW_MenuButtonText_C::Image_37' has a wrong offset!");
static_assert(offsetof(UW_MenuButtonText_C, TextBlock_31) == 0x0002D8, "Member 'UW_MenuButtonText_C::TextBlock_31' has a wrong offset!");
static_assert(offsetof(UW_MenuButtonText_C, Text) == 0x0002E0, "Member 'UW_MenuButtonText_C::Text' has a wrong offset!");
static_assert(offsetof(UW_MenuButtonText_C, Size) == 0x0002F8, "Member 'UW_MenuButtonText_C::Size' has a wrong offset!");
static_assert(offsetof(UW_MenuButtonText_C, InitialColor) == 0x0002FC, "Member 'UW_MenuButtonText_C::InitialColor' has a wrong offset!");
static_assert(offsetof(UW_MenuButtonText_C, Image) == 0x000310, "Member 'UW_MenuButtonText_C::Image' has a wrong offset!");
static_assert(offsetof(UW_MenuButtonText_C, Button) == 0x000311, "Member 'UW_MenuButtonText_C::Button' has a wrong offset!");

}

