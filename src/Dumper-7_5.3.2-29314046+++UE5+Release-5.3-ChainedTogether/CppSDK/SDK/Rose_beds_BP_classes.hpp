#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rose_beds_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass rose_beds_BP.rose_beds_BP_C
// 0x0058 (0x02F0 - 0x0298)
class ARose_beds_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Rose_bush_3;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Rose_bush_2;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Rose_bush_1;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Flower_bed_short_StaticMeshComponent0;             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             Rose_colour_array;                                 // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Rose_colour_picker;                                // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36B5[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMesh*>                    Mesh_array;                                        // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                          Stream;                                            // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"rose_beds_BP_C">();
	}
	static class ARose_beds_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARose_beds_BP_C>();
	}
};
static_assert(alignof(ARose_beds_BP_C) == 0x000008, "Wrong alignment on ARose_beds_BP_C");
static_assert(sizeof(ARose_beds_BP_C) == 0x0002F0, "Wrong size on ARose_beds_BP_C");
static_assert(offsetof(ARose_beds_BP_C, Rose_bush_3) == 0x000298, "Member 'ARose_beds_BP_C::Rose_bush_3' has a wrong offset!");
static_assert(offsetof(ARose_beds_BP_C, Rose_bush_2) == 0x0002A0, "Member 'ARose_beds_BP_C::Rose_bush_2' has a wrong offset!");
static_assert(offsetof(ARose_beds_BP_C, Rose_bush_1) == 0x0002A8, "Member 'ARose_beds_BP_C::Rose_bush_1' has a wrong offset!");
static_assert(offsetof(ARose_beds_BP_C, Flower_bed_short_StaticMeshComponent0) == 0x0002B0, "Member 'ARose_beds_BP_C::Flower_bed_short_StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(ARose_beds_BP_C, SharedRoot) == 0x0002B8, "Member 'ARose_beds_BP_C::SharedRoot' has a wrong offset!");
static_assert(offsetof(ARose_beds_BP_C, Rose_colour_array) == 0x0002C0, "Member 'ARose_beds_BP_C::Rose_colour_array' has a wrong offset!");
static_assert(offsetof(ARose_beds_BP_C, Rose_colour_picker) == 0x0002D0, "Member 'ARose_beds_BP_C::Rose_colour_picker' has a wrong offset!");
static_assert(offsetof(ARose_beds_BP_C, Mesh_array) == 0x0002D8, "Member 'ARose_beds_BP_C::Mesh_array' has a wrong offset!");
static_assert(offsetof(ARose_beds_BP_C, Stream) == 0x0002E8, "Member 'ARose_beds_BP_C::Stream' has a wrong offset!");

}

