#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WayWallManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WayWallManager.BP_WayWallManager_C
// 0x0068 (0x0300 - 0x0298)
class ABP_WayWallManager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        HardRockMusic;                                     // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   End;                                               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Start;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_967CEBFD4C9C9CD52881A9B07C86DB87; // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_967CEBFD4C9C9CD52881A9B07C86DB87; // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE1[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 WallClass;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Delay_After_Spawn;                                 // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                          MusicToCut;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Volume_Multiplier;                                 // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE2[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CustomSkyLight_C*                   SkyLight;                                          // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AmbientMusicFadeIn();
	void AmbientMusicFadeOut();
	void BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_WayWallManager_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_WayWallManager(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Respawn();
	void SpawnClassAll(class UClass* Param_Class);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WayWallManager_C">();
	}
	static class ABP_WayWallManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WayWallManager_C>();
	}
};
static_assert(alignof(ABP_WayWallManager_C) == 0x000008, "Wrong alignment on ABP_WayWallManager_C");
static_assert(sizeof(ABP_WayWallManager_C) == 0x000300, "Wrong size on ABP_WayWallManager_C");
static_assert(offsetof(ABP_WayWallManager_C, UberGraphFrame) == 0x000298, "Member 'ABP_WayWallManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, HardRockMusic) == 0x0002A0, "Member 'ABP_WayWallManager_C::HardRockMusic' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, Box) == 0x0002A8, "Member 'ABP_WayWallManager_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, End) == 0x0002B0, "Member 'ABP_WayWallManager_C::End' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, Start) == 0x0002B8, "Member 'ABP_WayWallManager_C::Start' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_WayWallManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, Timeline_NewTrack_0_967CEBFD4C9C9CD52881A9B07C86DB87) == 0x0002C8, "Member 'ABP_WayWallManager_C::Timeline_NewTrack_0_967CEBFD4C9C9CD52881A9B07C86DB87' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, Timeline__Direction_967CEBFD4C9C9CD52881A9B07C86DB87) == 0x0002CC, "Member 'ABP_WayWallManager_C::Timeline__Direction_967CEBFD4C9C9CD52881A9B07C86DB87' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, Timeline) == 0x0002D0, "Member 'ABP_WayWallManager_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, WallClass) == 0x0002D8, "Member 'ABP_WayWallManager_C::WallClass' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, Delay_After_Spawn) == 0x0002E0, "Member 'ABP_WayWallManager_C::Delay_After_Spawn' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, MusicToCut) == 0x0002E8, "Member 'ABP_WayWallManager_C::MusicToCut' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, Volume_Multiplier) == 0x0002F0, "Member 'ABP_WayWallManager_C::Volume_Multiplier' has a wrong offset!");
static_assert(offsetof(ABP_WayWallManager_C, SkyLight) == 0x0002F8, "Member 'ABP_WayWallManager_C::SkyLight' has a wrong offset!");

}

