#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wind_Turbine_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Wind_Turbine_BP.Wind_Turbine_BP_C
// 0x0028 (0x02C0 - 0x0298)
class AWind_Turbine_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Helix;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Body;                                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Rotation_Rate;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Rotation_Angle;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Wind_Turbine_BP_C">();
	}
	static class AWind_Turbine_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWind_Turbine_BP_C>();
	}
};
static_assert(alignof(AWind_Turbine_BP_C) == 0x000008, "Wrong alignment on AWind_Turbine_BP_C");
static_assert(sizeof(AWind_Turbine_BP_C) == 0x0002C0, "Wrong size on AWind_Turbine_BP_C");
static_assert(offsetof(AWind_Turbine_BP_C, Helix) == 0x000298, "Member 'AWind_Turbine_BP_C::Helix' has a wrong offset!");
static_assert(offsetof(AWind_Turbine_BP_C, Body) == 0x0002A0, "Member 'AWind_Turbine_BP_C::Body' has a wrong offset!");
static_assert(offsetof(AWind_Turbine_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'AWind_Turbine_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AWind_Turbine_BP_C, Rotation_Rate) == 0x0002B0, "Member 'AWind_Turbine_BP_C::Rotation_Rate' has a wrong offset!");
static_assert(offsetof(AWind_Turbine_BP_C, Rotation_Angle) == 0x0002B8, "Member 'AWind_Turbine_BP_C::Rotation_Angle' has a wrong offset!");

}
