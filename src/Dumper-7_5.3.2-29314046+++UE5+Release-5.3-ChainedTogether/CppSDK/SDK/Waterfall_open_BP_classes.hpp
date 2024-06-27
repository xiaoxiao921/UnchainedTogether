#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Waterfall_open_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass waterfall_open_BP.waterfall_open_BP_C
// 0x0028 (0x02C0 - 0x0298)
class AWaterfall_open_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Waterfall_ripple;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Waterfall_roller_high;                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Waterfall_FX;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Waterfall;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"waterfall_open_BP_C">();
	}
	static class AWaterfall_open_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterfall_open_BP_C>();
	}
};
static_assert(alignof(AWaterfall_open_BP_C) == 0x000008, "Wrong alignment on AWaterfall_open_BP_C");
static_assert(sizeof(AWaterfall_open_BP_C) == 0x0002C0, "Wrong size on AWaterfall_open_BP_C");
static_assert(offsetof(AWaterfall_open_BP_C, Waterfall_ripple) == 0x000298, "Member 'AWaterfall_open_BP_C::Waterfall_ripple' has a wrong offset!");
static_assert(offsetof(AWaterfall_open_BP_C, Waterfall_roller_high) == 0x0002A0, "Member 'AWaterfall_open_BP_C::Waterfall_roller_high' has a wrong offset!");
static_assert(offsetof(AWaterfall_open_BP_C, Waterfall_FX) == 0x0002A8, "Member 'AWaterfall_open_BP_C::Waterfall_FX' has a wrong offset!");
static_assert(offsetof(AWaterfall_open_BP_C, Waterfall) == 0x0002B0, "Member 'AWaterfall_open_BP_C::Waterfall' has a wrong offset!");
static_assert(offsetof(AWaterfall_open_BP_C, DefaultSceneRoot) == 0x0002B8, "Member 'AWaterfall_open_BP_C::DefaultSceneRoot' has a wrong offset!");

}
