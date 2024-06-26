#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WayWall_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WayWall_BP.WayWall_BP_C
// 0x0058 (0x02F0 - 0x0298)
class AWayWall_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_9C84F27A4B98B7078479458B233355E1; // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_9C84F27A4B98B7078479458B233355E1; // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CD7[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        DelayAfterSpawn;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WayWallManager_C*                   Manager;                                           // 0x02C8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Init;                                              // 0x02D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Time;                                              // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WayWall_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WayWall_BP_C">();
	}
	static class AWayWall_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWayWall_BP_C>();
	}
};
static_assert(alignof(AWayWall_BP_C) == 0x000008, "Wrong alignment on AWayWall_BP_C");
static_assert(sizeof(AWayWall_BP_C) == 0x0002F0, "Wrong size on AWayWall_BP_C");
static_assert(offsetof(AWayWall_BP_C, UberGraphFrame) == 0x000298, "Member 'AWayWall_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWayWall_BP_C, Audio) == 0x0002A0, "Member 'AWayWall_BP_C::Audio' has a wrong offset!");
static_assert(offsetof(AWayWall_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'AWayWall_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AWayWall_BP_C, Timeline_NewTrack_0_9C84F27A4B98B7078479458B233355E1) == 0x0002B0, "Member 'AWayWall_BP_C::Timeline_NewTrack_0_9C84F27A4B98B7078479458B233355E1' has a wrong offset!");
static_assert(offsetof(AWayWall_BP_C, Timeline__Direction_9C84F27A4B98B7078479458B233355E1) == 0x0002B4, "Member 'AWayWall_BP_C::Timeline__Direction_9C84F27A4B98B7078479458B233355E1' has a wrong offset!");
static_assert(offsetof(AWayWall_BP_C, Timeline) == 0x0002B8, "Member 'AWayWall_BP_C::Timeline' has a wrong offset!");
static_assert(offsetof(AWayWall_BP_C, DelayAfterSpawn) == 0x0002C0, "Member 'AWayWall_BP_C::DelayAfterSpawn' has a wrong offset!");
static_assert(offsetof(AWayWall_BP_C, Manager) == 0x0002C8, "Member 'AWayWall_BP_C::Manager' has a wrong offset!");
static_assert(offsetof(AWayWall_BP_C, Init) == 0x0002D0, "Member 'AWayWall_BP_C::Init' has a wrong offset!");
static_assert(offsetof(AWayWall_BP_C, Time) == 0x0002E8, "Member 'AWayWall_BP_C::Time' has a wrong offset!");

}

