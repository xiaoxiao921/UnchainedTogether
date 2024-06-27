#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Placement_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Placement_BP.Placement_BP_C
// 0x0070 (0x0308 - 0x0298)
class APlacement_BP_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_Collision;                                     // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Static_Mesh_Component;                         // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Stay_Stright;                                      // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_Cable;                                         // 0x02AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Inherit_Rotation;                                  // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Spline_Only;                                       // 0x02AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Distance_Based_Placement;                      // 0x02AE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B61[0x1];                                     // 0x02AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Number_of_Mesh;                                    // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Number_Of_Cable;                                   // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Mesh_Scale;                                        // 0x02B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Distance;                                          // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        Cable_Ref;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Cable_Z_Offset;                                    // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Material_Tiling;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Cable_Width;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh;                                              // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Cable_Material;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Cables(int32 First_Index, int32 Last_Index, double Param_Distance, const struct FVector& Cable_Location);
	void Place_Meshes(int32 First_Index, int32 Last_Index, double Param_Distance, bool Use_Static_Mesh_Method);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Placement_BP_C">();
	}
	static class APlacement_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlacement_BP_C>();
	}
};
static_assert(alignof(APlacement_BP_C) == 0x000008, "Wrong alignment on APlacement_BP_C");
static_assert(sizeof(APlacement_BP_C) == 0x000308, "Wrong size on APlacement_BP_C");
static_assert(offsetof(APlacement_BP_C, Spline) == 0x000298, "Member 'APlacement_BP_C::Spline' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, DefaultSceneRoot) == 0x0002A0, "Member 'APlacement_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Add_Collision) == 0x0002A8, "Member 'APlacement_BP_C::Add_Collision' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Use_Static_Mesh_Component) == 0x0002A9, "Member 'APlacement_BP_C::Use_Static_Mesh_Component' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Stay_Stright) == 0x0002AA, "Member 'APlacement_BP_C::Stay_Stright' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Add_Cable) == 0x0002AB, "Member 'APlacement_BP_C::Add_Cable' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Inherit_Rotation) == 0x0002AC, "Member 'APlacement_BP_C::Inherit_Rotation' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Spline_Only) == 0x0002AD, "Member 'APlacement_BP_C::Spline_Only' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Use_Distance_Based_Placement) == 0x0002AE, "Member 'APlacement_BP_C::Use_Distance_Based_Placement' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Number_of_Mesh) == 0x0002B0, "Member 'APlacement_BP_C::Number_of_Mesh' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Number_Of_Cable) == 0x0002B4, "Member 'APlacement_BP_C::Number_Of_Cable' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Mesh_Scale) == 0x0002B8, "Member 'APlacement_BP_C::Mesh_Scale' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Distance) == 0x0002D0, "Member 'APlacement_BP_C::Distance' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Cable_Ref) == 0x0002D8, "Member 'APlacement_BP_C::Cable_Ref' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Cable_Z_Offset) == 0x0002E0, "Member 'APlacement_BP_C::Cable_Z_Offset' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Material_Tiling) == 0x0002E8, "Member 'APlacement_BP_C::Material_Tiling' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Cable_Width) == 0x0002F0, "Member 'APlacement_BP_C::Cable_Width' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Mesh) == 0x0002F8, "Member 'APlacement_BP_C::Mesh' has a wrong offset!");
static_assert(offsetof(APlacement_BP_C, Cable_Material) == 0x000300, "Member 'APlacement_BP_C::Cable_Material' has a wrong offset!");

}
