#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Alcove_wall_banister_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass alcove_wall_banister_BP.alcove_wall_banister_BP_C
// 0x00C0 (0x0358 - 0x0298)
class AAlcove_wall_banister_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Smallbowl02;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Smallbowl01;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Moonflower_03;                                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Moonflower_02;                                     // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Moonflower_01;                                     // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Fleur_de_lis1;                                     // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Fleur_de_lis;                                      // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lion_low_poly;                                     // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Trim_crown_end;                                    // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   banister_end;                                      // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Square_pillar;                                     // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   banister;                                          // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Floor_tile_1x1;                                    // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMeshComponent3;                              // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMeshComponent2;                              // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMeshComponent1;                              // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMeshComponent0;                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          Ivy_stream;                                        // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	TArray<class UStaticMesh*>                    Ivy_array;                                         // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                    Flower_bowl_array;                                 // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                          Flower_pot_stream;                                 // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"alcove_wall_banister_BP_C">();
	}
	static class AAlcove_wall_banister_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAlcove_wall_banister_BP_C>();
	}
};
static_assert(alignof(AAlcove_wall_banister_BP_C) == 0x000008, "Wrong alignment on AAlcove_wall_banister_BP_C");
static_assert(sizeof(AAlcove_wall_banister_BP_C) == 0x000358, "Wrong size on AAlcove_wall_banister_BP_C");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Smallbowl02) == 0x000298, "Member 'AAlcove_wall_banister_BP_C::Smallbowl02' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Smallbowl01) == 0x0002A0, "Member 'AAlcove_wall_banister_BP_C::Smallbowl01' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Moonflower_03) == 0x0002A8, "Member 'AAlcove_wall_banister_BP_C::Moonflower_03' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Moonflower_02) == 0x0002B0, "Member 'AAlcove_wall_banister_BP_C::Moonflower_02' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Moonflower_01) == 0x0002B8, "Member 'AAlcove_wall_banister_BP_C::Moonflower_01' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Fleur_de_lis1) == 0x0002C0, "Member 'AAlcove_wall_banister_BP_C::Fleur_de_lis1' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Fleur_de_lis) == 0x0002C8, "Member 'AAlcove_wall_banister_BP_C::Fleur_de_lis' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Lion_low_poly) == 0x0002D0, "Member 'AAlcove_wall_banister_BP_C::Lion_low_poly' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Trim_crown_end) == 0x0002D8, "Member 'AAlcove_wall_banister_BP_C::Trim_crown_end' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, banister_end) == 0x0002E0, "Member 'AAlcove_wall_banister_BP_C::banister_end' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Square_pillar) == 0x0002E8, "Member 'AAlcove_wall_banister_BP_C::Square_pillar' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, banister) == 0x0002F0, "Member 'AAlcove_wall_banister_BP_C::banister' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Floor_tile_1x1) == 0x0002F8, "Member 'AAlcove_wall_banister_BP_C::Floor_tile_1x1' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, StaticMeshComponent3) == 0x000300, "Member 'AAlcove_wall_banister_BP_C::StaticMeshComponent3' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, StaticMeshComponent2) == 0x000308, "Member 'AAlcove_wall_banister_BP_C::StaticMeshComponent2' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, StaticMeshComponent1) == 0x000310, "Member 'AAlcove_wall_banister_BP_C::StaticMeshComponent1' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, StaticMeshComponent0) == 0x000318, "Member 'AAlcove_wall_banister_BP_C::StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, SharedRoot) == 0x000320, "Member 'AAlcove_wall_banister_BP_C::SharedRoot' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Ivy_stream) == 0x000328, "Member 'AAlcove_wall_banister_BP_C::Ivy_stream' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Ivy_array) == 0x000330, "Member 'AAlcove_wall_banister_BP_C::Ivy_array' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Flower_bowl_array) == 0x000340, "Member 'AAlcove_wall_banister_BP_C::Flower_bowl_array' has a wrong offset!");
static_assert(offsetof(AAlcove_wall_banister_BP_C, Flower_pot_stream) == 0x000350, "Member 'AAlcove_wall_banister_BP_C::Flower_pot_stream' has a wrong offset!");

}
