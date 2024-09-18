#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_Viewport

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IGLE_W_Viewport.IGLE_W_Viewport_C
// 0x0018 (0x02D8 - 0x02C0)
class UIGLE_W_Viewport_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Viewport;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ViewportMaterial;                                  // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_IGLE_W_Viewport(int32 EntryPoint);
	void SetViewportBaseViewTexture(class UTexture* Texture);
	void SetViewportSecondaryViewTexture(class UTexture* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_W_Viewport_C">();
	}
	static class UIGLE_W_Viewport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_W_Viewport_C>();
	}
};
static_assert(alignof(UIGLE_W_Viewport_C) == 0x000008, "Wrong alignment on UIGLE_W_Viewport_C");
static_assert(sizeof(UIGLE_W_Viewport_C) == 0x0002D8, "Wrong size on UIGLE_W_Viewport_C");
static_assert(offsetof(UIGLE_W_Viewport_C, UberGraphFrame) == 0x0002C0, "Member 'UIGLE_W_Viewport_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIGLE_W_Viewport_C, Viewport) == 0x0002C8, "Member 'UIGLE_W_Viewport_C::Viewport' has a wrong offset!");
static_assert(offsetof(UIGLE_W_Viewport_C, ViewportMaterial) == 0x0002D0, "Member 'UIGLE_W_Viewport_C::ViewportMaterial' has a wrong offset!");

}
