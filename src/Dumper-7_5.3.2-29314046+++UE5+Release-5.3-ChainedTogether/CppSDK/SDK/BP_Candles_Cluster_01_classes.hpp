#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Candles_Cluster_01

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Candles_Cluster_01.BP_Candles_Cluster_01_C
// 0x0028 (0x02C0 - 0x0298)
class ABP_Candles_Cluster_01_C final : public AActor
{
public:
	class UPointLightComponent*                   PointLight;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WaxCandle01_03;                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WaxCandle01_02;                                 // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_WaxCandle01_01;                                 // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Candles_Cluster_01_C">();
	}
	static class ABP_Candles_Cluster_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Candles_Cluster_01_C>();
	}
};
static_assert(alignof(ABP_Candles_Cluster_01_C) == 0x000008, "Wrong alignment on ABP_Candles_Cluster_01_C");
static_assert(sizeof(ABP_Candles_Cluster_01_C) == 0x0002C0, "Wrong size on ABP_Candles_Cluster_01_C");
static_assert(offsetof(ABP_Candles_Cluster_01_C, PointLight) == 0x000298, "Member 'ABP_Candles_Cluster_01_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_Candles_Cluster_01_C, SM_WaxCandle01_03) == 0x0002A0, "Member 'ABP_Candles_Cluster_01_C::SM_WaxCandle01_03' has a wrong offset!");
static_assert(offsetof(ABP_Candles_Cluster_01_C, SM_WaxCandle01_02) == 0x0002A8, "Member 'ABP_Candles_Cluster_01_C::SM_WaxCandle01_02' has a wrong offset!");
static_assert(offsetof(ABP_Candles_Cluster_01_C, SM_WaxCandle01_01) == 0x0002B0, "Member 'ABP_Candles_Cluster_01_C::SM_WaxCandle01_01' has a wrong offset!");
static_assert(offsetof(ABP_Candles_Cluster_01_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_Candles_Cluster_01_C::DefaultSceneRoot' has a wrong offset!");

}
