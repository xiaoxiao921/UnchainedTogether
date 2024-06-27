#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: banister_end_pillar_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass banister_end_pillar_BP.banister_end_pillar_BP_C
// 0x0020 (0x02B8 - 0x0298)
class Abanister_end_pillar_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Square_pillar;                                     // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMeshComponent1;                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMeshComponent0;                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"banister_end_pillar_BP_C">();
	}
	static class Abanister_end_pillar_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abanister_end_pillar_BP_C>();
	}
};
static_assert(alignof(Abanister_end_pillar_BP_C) == 0x000008, "Wrong alignment on Abanister_end_pillar_BP_C");
static_assert(sizeof(Abanister_end_pillar_BP_C) == 0x0002B8, "Wrong size on Abanister_end_pillar_BP_C");
static_assert(offsetof(Abanister_end_pillar_BP_C, Square_pillar) == 0x000298, "Member 'Abanister_end_pillar_BP_C::Square_pillar' has a wrong offset!");
static_assert(offsetof(Abanister_end_pillar_BP_C, StaticMeshComponent1) == 0x0002A0, "Member 'Abanister_end_pillar_BP_C::StaticMeshComponent1' has a wrong offset!");
static_assert(offsetof(Abanister_end_pillar_BP_C, StaticMeshComponent0) == 0x0002A8, "Member 'Abanister_end_pillar_BP_C::StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(Abanister_end_pillar_BP_C, SharedRoot) == 0x0002B0, "Member 'Abanister_end_pillar_BP_C::SharedRoot' has a wrong offset!");

}
