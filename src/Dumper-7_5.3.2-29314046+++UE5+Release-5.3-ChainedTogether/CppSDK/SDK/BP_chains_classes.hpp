#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_chains

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_chains.BP_Chains_C
// 0x0018 (0x02B0 - 0x0298)
class BP_chains::ABP_Chains_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Length;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass BP_chains.BP_Chains_C", true, "BP_Chains_C">();
	}
	static class BP_chains::ABP_Chains_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<BP_chains::ABP_Chains_C>();
	}
};
static_assert(alignof(BP_chains::ABP_Chains_C) == 0x000008, "Wrong alignment on BP_chains::ABP_Chains_C");
static_assert(sizeof(BP_chains::ABP_Chains_C) == 0x0002B0, "Wrong size on BP_chains::ABP_Chains_C");
static_assert(offsetof(BP_chains::ABP_Chains_C, Spline) == 0x000298, "Member 'BP_chains::ABP_Chains_C::Spline' has a wrong offset!");
static_assert(offsetof(BP_chains::ABP_Chains_C, DefaultSceneRoot) == 0x0002A0, "Member 'BP_chains::ABP_Chains_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(BP_chains::ABP_Chains_C, Length) == 0x0002A8, "Member 'BP_chains::ABP_Chains_C::Length' has a wrong offset!");

}

