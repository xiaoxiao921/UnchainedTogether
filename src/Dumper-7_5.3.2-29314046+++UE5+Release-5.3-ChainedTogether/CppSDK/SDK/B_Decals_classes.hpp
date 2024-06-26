#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Decals

#include "Basic.hpp"

#include "ST_DecalMaterialsBlueprint_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Decals.B_Decals_C
// 0x0098 (0x0330 - 0x0298)
class AB_Decals_C final : public AActor
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Category;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3956[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name_Category__Read_Only_;                         // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Type;                                              // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Material_Variation;                                // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Sort_Order_Decal;                                  // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3957[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDataTable*>                     Tables;                                            // 0x02D8(0x0010)(Edit, BlueprintVisible, AdvancedDisplay)
	TArray<struct FST_DecalMaterialsBlueprint>    Rules_Decals_Temp;                                 // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_DecalMaterialsBlueprint            TempMaterials;                                     // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialInterface*                     Overwrite_Decal;                                   // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Preserve_Decal__Overwrite__Minus_Button;           // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          Snap_Location;                                     // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Snap_Rotation;                                     // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3958[0x1];                                     // 0x0313(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Snap_Location_Unit_Grid;                           // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         Snap_Location_Height_Grid;                         // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         Snap_Rotation_Degrees;                             // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FST_DecalMaterialsBlueprint            Rules_Decals_Temp_For_Overwrite;                   // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Reconstruction();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Decals_C">();
	}
	static class AB_Decals_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Decals_C>();
	}
};
static_assert(alignof(AB_Decals_C) == 0x000008, "Wrong alignment on AB_Decals_C");
static_assert(sizeof(AB_Decals_C) == 0x000330, "Wrong size on AB_Decals_C");
static_assert(offsetof(AB_Decals_C, Arrow) == 0x000298, "Member 'AB_Decals_C::Arrow' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Decal) == 0x0002A0, "Member 'AB_Decals_C::Decal' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, DefaultSceneRoot) == 0x0002A8, "Member 'AB_Decals_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Category) == 0x0002B0, "Member 'AB_Decals_C::Category' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Name_Category__Read_Only_) == 0x0002B8, "Member 'AB_Decals_C::Name_Category__Read_Only_' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Type) == 0x0002C8, "Member 'AB_Decals_C::Type' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Material_Variation) == 0x0002CC, "Member 'AB_Decals_C::Material_Variation' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Sort_Order_Decal) == 0x0002D0, "Member 'AB_Decals_C::Sort_Order_Decal' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Tables) == 0x0002D8, "Member 'AB_Decals_C::Tables' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Rules_Decals_Temp) == 0x0002E8, "Member 'AB_Decals_C::Rules_Decals_Temp' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, TempMaterials) == 0x0002F8, "Member 'AB_Decals_C::TempMaterials' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Overwrite_Decal) == 0x000308, "Member 'AB_Decals_C::Overwrite_Decal' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Preserve_Decal__Overwrite__Minus_Button) == 0x000310, "Member 'AB_Decals_C::Preserve_Decal__Overwrite__Minus_Button' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Snap_Location) == 0x000311, "Member 'AB_Decals_C::Snap_Location' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Snap_Rotation) == 0x000312, "Member 'AB_Decals_C::Snap_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Snap_Location_Unit_Grid) == 0x000314, "Member 'AB_Decals_C::Snap_Location_Unit_Grid' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Snap_Location_Height_Grid) == 0x000318, "Member 'AB_Decals_C::Snap_Location_Height_Grid' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Snap_Rotation_Degrees) == 0x00031C, "Member 'AB_Decals_C::Snap_Rotation_Degrees' has a wrong offset!");
static_assert(offsetof(AB_Decals_C, Rules_Decals_Temp_For_Overwrite) == 0x000320, "Member 'AB_Decals_C::Rules_Decals_Temp_For_Overwrite' has a wrong offset!");

}

