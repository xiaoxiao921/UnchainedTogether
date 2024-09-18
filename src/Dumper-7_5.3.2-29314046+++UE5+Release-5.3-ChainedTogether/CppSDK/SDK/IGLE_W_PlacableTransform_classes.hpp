#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_PlacableTransform

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IGLE_W_PlacableTransform.IGLE_W_PlacableTransform_C
// 0x0090 (0x0350 - 0x02C0)
class UIGLE_W_PlacableTransform_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIGLE_W_Vec3Edit_C*                     LocationVec3Edit;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIGLE_W_Vec3Edit_C*                     RotationVec3Edit;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIGLE_W_Vec3Edit_C*                     ScaleVec3Edit;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTransform                             TransformTarget;                                   // 0x02E0(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTransformChanged;                                // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void ExecuteUbergraph_IGLE_W_PlacableTransform(int32 EntryPoint);
	void OnTransformChanged__DelegateSignature(const struct FTransform& NewTransform);
	void OnVectorValueChanged_Location(const struct FVector& NewValue);
	void OnVectorValueChanged_Rotation(const struct FVector& NewValue);
	void OnVectorValueChanged_Scale(const struct FVector& NewValue);
	void UpdateTransform(const struct FTransform& NewTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IGLE_W_PlacableTransform_C">();
	}
	static class UIGLE_W_PlacableTransform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIGLE_W_PlacableTransform_C>();
	}
};
static_assert(alignof(UIGLE_W_PlacableTransform_C) == 0x000010, "Wrong alignment on UIGLE_W_PlacableTransform_C");
static_assert(sizeof(UIGLE_W_PlacableTransform_C) == 0x000350, "Wrong size on UIGLE_W_PlacableTransform_C");
static_assert(offsetof(UIGLE_W_PlacableTransform_C, UberGraphFrame) == 0x0002C0, "Member 'UIGLE_W_PlacableTransform_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIGLE_W_PlacableTransform_C, LocationVec3Edit) == 0x0002C8, "Member 'UIGLE_W_PlacableTransform_C::LocationVec3Edit' has a wrong offset!");
static_assert(offsetof(UIGLE_W_PlacableTransform_C, RotationVec3Edit) == 0x0002D0, "Member 'UIGLE_W_PlacableTransform_C::RotationVec3Edit' has a wrong offset!");
static_assert(offsetof(UIGLE_W_PlacableTransform_C, ScaleVec3Edit) == 0x0002D8, "Member 'UIGLE_W_PlacableTransform_C::ScaleVec3Edit' has a wrong offset!");
static_assert(offsetof(UIGLE_W_PlacableTransform_C, TransformTarget) == 0x0002E0, "Member 'UIGLE_W_PlacableTransform_C::TransformTarget' has a wrong offset!");
static_assert(offsetof(UIGLE_W_PlacableTransform_C, OnTransformChanged) == 0x000340, "Member 'UIGLE_W_PlacableTransform_C::OnTransformChanged' has a wrong offset!");

}

