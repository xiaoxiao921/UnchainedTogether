#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Fence

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Fence.B_Fence_C
// 0x0170 (0x0408 - 0x0298)
class AB_Fence_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberSections;                                    // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ComponentIndex;                                    // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentDistance;                                   // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Real_Section_Length;                               // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationFirstPoint;                                // 0x02C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TangetFirstPoint;                                  // 0x02D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationLastPoint;                                 // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TangetLastPoint;                                   // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentPoint;                                      // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38D9[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SectionLength;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_Modular_Fence;                                // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_Primary_Post;                                 // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh_Secondary_Post;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Style_Fence_;                                      // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Type_Fence;                                        // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Offset_Modular_Fence;                              // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationPost;                                      // 0x0358(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Material_Fence;                                    // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Closed_Loop;                                       // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38DA[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation_Post;                                     // 0x0378(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<bool>                                  Removed_Fence_Pieces;                              // 0x0390(0x0010)(Edit, BlueprintVisible)
	int32                                         NoRemovedFences;                                   // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Linear_Spline;                                     // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38DB[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      TempFenceMaterial;                                 // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Target_Scale;                                      // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstPost;                                         // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LastPost;                                          // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CustomFencesTables;                                // 0x03BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_38DC[0x5];                                     // 0x03BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDataTable*>                     FencesTables;                                      // 0x03C0(0x0010)(Edit, BlueprintVisible, AdvancedDisplay)
	bool                                          SnappingToTheGround;                               // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FenceFixedLength;                                  // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38DD[0x2];                                     // 0x03D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentNumberSection;                              // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SnappingSplineToTheGround;                         // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Snap_Location;                                     // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38DE[0x2];                                     // 0x03DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Snap_Location_Unit_Grid;                           // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int32                                         Snap_Location_Height_Grid;                         // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          Snap_Rotation;                                     // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38DF[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Snap_Rotation_Degrees;                             // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_38E0[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Zdifference;                                       // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UDataTable*>                     TempFencesTables;                                  // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Fence_C">();
	}
	static class AB_Fence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Fence_C>();
	}
};
static_assert(alignof(AB_Fence_C) == 0x000008, "Wrong alignment on AB_Fence_C");
static_assert(sizeof(AB_Fence_C) == 0x000408, "Wrong size on AB_Fence_C");
static_assert(offsetof(AB_Fence_C, Spline) == 0x000298, "Member 'AB_Fence_C::Spline' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, DefaultSceneRoot) == 0x0002A0, "Member 'AB_Fence_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, NumberSections) == 0x0002A8, "Member 'AB_Fence_C::NumberSections' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, ComponentIndex) == 0x0002AC, "Member 'AB_Fence_C::ComponentIndex' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, CurrentDistance) == 0x0002B0, "Member 'AB_Fence_C::CurrentDistance' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Real_Section_Length) == 0x0002B8, "Member 'AB_Fence_C::Real_Section_Length' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, LocationFirstPoint) == 0x0002C0, "Member 'AB_Fence_C::LocationFirstPoint' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, TangetFirstPoint) == 0x0002D8, "Member 'AB_Fence_C::TangetFirstPoint' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, LocationLastPoint) == 0x0002F0, "Member 'AB_Fence_C::LocationLastPoint' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, TangetLastPoint) == 0x000308, "Member 'AB_Fence_C::TangetLastPoint' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, CurrentPoint) == 0x000320, "Member 'AB_Fence_C::CurrentPoint' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, SectionLength) == 0x000328, "Member 'AB_Fence_C::SectionLength' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Mesh_Modular_Fence) == 0x000330, "Member 'AB_Fence_C::Mesh_Modular_Fence' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Mesh_Primary_Post) == 0x000338, "Member 'AB_Fence_C::Mesh_Primary_Post' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Mesh_Secondary_Post) == 0x000340, "Member 'AB_Fence_C::Mesh_Secondary_Post' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Style_Fence_) == 0x000348, "Member 'AB_Fence_C::Style_Fence_' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Type_Fence) == 0x00034C, "Member 'AB_Fence_C::Type_Fence' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Offset_Modular_Fence) == 0x000350, "Member 'AB_Fence_C::Offset_Modular_Fence' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, LocationPost) == 0x000358, "Member 'AB_Fence_C::LocationPost' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Material_Fence) == 0x000370, "Member 'AB_Fence_C::Material_Fence' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Closed_Loop) == 0x000374, "Member 'AB_Fence_C::Closed_Loop' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Rotation_Post) == 0x000378, "Member 'AB_Fence_C::Rotation_Post' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Removed_Fence_Pieces) == 0x000390, "Member 'AB_Fence_C::Removed_Fence_Pieces' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, NoRemovedFences) == 0x0003A0, "Member 'AB_Fence_C::NoRemovedFences' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Linear_Spline) == 0x0003A4, "Member 'AB_Fence_C::Linear_Spline' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, TempFenceMaterial) == 0x0003A8, "Member 'AB_Fence_C::TempFenceMaterial' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Target_Scale) == 0x0003B0, "Member 'AB_Fence_C::Target_Scale' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, FirstPost) == 0x0003B8, "Member 'AB_Fence_C::FirstPost' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, LastPost) == 0x0003B9, "Member 'AB_Fence_C::LastPost' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, CustomFencesTables) == 0x0003BA, "Member 'AB_Fence_C::CustomFencesTables' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, FencesTables) == 0x0003C0, "Member 'AB_Fence_C::FencesTables' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, SnappingToTheGround) == 0x0003D0, "Member 'AB_Fence_C::SnappingToTheGround' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, FenceFixedLength) == 0x0003D1, "Member 'AB_Fence_C::FenceFixedLength' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, CurrentNumberSection) == 0x0003D4, "Member 'AB_Fence_C::CurrentNumberSection' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, SnappingSplineToTheGround) == 0x0003D8, "Member 'AB_Fence_C::SnappingSplineToTheGround' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Snap_Location) == 0x0003D9, "Member 'AB_Fence_C::Snap_Location' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Snap_Location_Unit_Grid) == 0x0003DC, "Member 'AB_Fence_C::Snap_Location_Unit_Grid' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Snap_Location_Height_Grid) == 0x0003E0, "Member 'AB_Fence_C::Snap_Location_Height_Grid' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Snap_Rotation) == 0x0003E4, "Member 'AB_Fence_C::Snap_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Snap_Rotation_Degrees) == 0x0003E8, "Member 'AB_Fence_C::Snap_Rotation_Degrees' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, Zdifference) == 0x0003F0, "Member 'AB_Fence_C::Zdifference' has a wrong offset!");
static_assert(offsetof(AB_Fence_C, TempFencesTables) == 0x0003F8, "Member 'AB_Fence_C::TempFencesTables' has a wrong offset!");

}

