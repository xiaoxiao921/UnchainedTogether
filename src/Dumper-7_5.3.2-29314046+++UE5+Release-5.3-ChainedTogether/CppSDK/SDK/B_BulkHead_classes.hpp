#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BulkHead

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BulkHead.B_BulkHead_C
// 0x0050 (0x02E8 - 0x0298)
class AB_BulkHead_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Bulkhead;                                          // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Type;                                              // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Door_Type;                                         // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Door_Material;                                     // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3930[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Materials;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInterface*                     Overwrite_Bricks;                                  // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Overwrite_Metal;                                   // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Overwrite_Plaster;                                 // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          No_Door;                                           // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BulkHead_C">();
	}
	static class AB_BulkHead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BulkHead_C>();
	}
};
static_assert(alignof(AB_BulkHead_C) == 0x000008, "Wrong alignment on AB_BulkHead_C");
static_assert(sizeof(AB_BulkHead_C) == 0x0002E8, "Wrong size on AB_BulkHead_C");
static_assert(offsetof(AB_BulkHead_C, Bulkhead) == 0x000298, "Member 'AB_BulkHead_C::Bulkhead' has a wrong offset!");
static_assert(offsetof(AB_BulkHead_C, DefaultSceneRoot) == 0x0002A0, "Member 'AB_BulkHead_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_BulkHead_C, Type) == 0x0002A8, "Member 'AB_BulkHead_C::Type' has a wrong offset!");
static_assert(offsetof(AB_BulkHead_C, Door_Type) == 0x0002AC, "Member 'AB_BulkHead_C::Door_Type' has a wrong offset!");
static_assert(offsetof(AB_BulkHead_C, Door_Material) == 0x0002B0, "Member 'AB_BulkHead_C::Door_Material' has a wrong offset!");
static_assert(offsetof(AB_BulkHead_C, Materials) == 0x0002B8, "Member 'AB_BulkHead_C::Materials' has a wrong offset!");
static_assert(offsetof(AB_BulkHead_C, Overwrite_Bricks) == 0x0002C8, "Member 'AB_BulkHead_C::Overwrite_Bricks' has a wrong offset!");
static_assert(offsetof(AB_BulkHead_C, Overwrite_Metal) == 0x0002D0, "Member 'AB_BulkHead_C::Overwrite_Metal' has a wrong offset!");
static_assert(offsetof(AB_BulkHead_C, Overwrite_Plaster) == 0x0002D8, "Member 'AB_BulkHead_C::Overwrite_Plaster' has a wrong offset!");
static_assert(offsetof(AB_BulkHead_C, No_Door) == 0x0002E0, "Member 'AB_BulkHead_C::No_Door' has a wrong offset!");

}

