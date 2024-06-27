#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: beehive_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass beehive_BP.beehive_BP_C
// 0x0018 (0x02B0 - 0x0298)
class Abeehive_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   beehive;                                           // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          Stream;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"beehive_BP_C">();
	}
	static class Abeehive_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abeehive_BP_C>();
	}
};
static_assert(alignof(Abeehive_BP_C) == 0x000008, "Wrong alignment on Abeehive_BP_C");
static_assert(sizeof(Abeehive_BP_C) == 0x0002B0, "Wrong size on Abeehive_BP_C");
static_assert(offsetof(Abeehive_BP_C, beehive) == 0x000298, "Member 'Abeehive_BP_C::beehive' has a wrong offset!");
static_assert(offsetof(Abeehive_BP_C, SharedRoot) == 0x0002A0, "Member 'Abeehive_BP_C::SharedRoot' has a wrong offset!");
static_assert(offsetof(Abeehive_BP_C, Stream) == 0x0002A8, "Member 'Abeehive_BP_C::Stream' has a wrong offset!");

}
