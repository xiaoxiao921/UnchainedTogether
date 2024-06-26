#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CityHoleDoors

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CityHoleDoors.BP_CityHoleDoors_C
// 0x0040 (0x02D8 - 0x0298)
class ABP_CityHoleDoors_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_CC87747046F6E2D1DD752DBD72AB8844; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_CC87747046F6E2D1DD752DBD72AB8844; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C4[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          BeginClosed;                                       // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Close();
	void ExecuteUbergraph_BP_CityHoleDoors(int32 EntryPoint);
	void Open();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CityHoleDoors_C">();
	}
	static class ABP_CityHoleDoors_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CityHoleDoors_C>();
	}
};
static_assert(alignof(ABP_CityHoleDoors_C) == 0x000008, "Wrong alignment on ABP_CityHoleDoors_C");
static_assert(sizeof(ABP_CityHoleDoors_C) == 0x0002D8, "Wrong size on ABP_CityHoleDoors_C");
static_assert(offsetof(ABP_CityHoleDoors_C, UberGraphFrame) == 0x000298, "Member 'ABP_CityHoleDoors_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CityHoleDoors_C, Cube) == 0x0002A0, "Member 'ABP_CityHoleDoors_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_CityHoleDoors_C, StaticMesh1) == 0x0002A8, "Member 'ABP_CityHoleDoors_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_CityHoleDoors_C, StaticMesh) == 0x0002B0, "Member 'ABP_CityHoleDoors_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_CityHoleDoors_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_CityHoleDoors_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CityHoleDoors_C, Timeline_NewTrack_0_CC87747046F6E2D1DD752DBD72AB8844) == 0x0002C0, "Member 'ABP_CityHoleDoors_C::Timeline_NewTrack_0_CC87747046F6E2D1DD752DBD72AB8844' has a wrong offset!");
static_assert(offsetof(ABP_CityHoleDoors_C, Timeline__Direction_CC87747046F6E2D1DD752DBD72AB8844) == 0x0002C4, "Member 'ABP_CityHoleDoors_C::Timeline__Direction_CC87747046F6E2D1DD752DBD72AB8844' has a wrong offset!");
static_assert(offsetof(ABP_CityHoleDoors_C, Timeline) == 0x0002C8, "Member 'ABP_CityHoleDoors_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_CityHoleDoors_C, BeginClosed) == 0x0002D0, "Member 'ABP_CityHoleDoors_C::BeginClosed' has a wrong offset!");

}

