#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WayWall_02_BPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WayWall_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WayWall_02_BPC.WayWall_02_BPC_C
// 0x0050 (0x0340 - 0x02F0)
class AWayWall_02_BPC_C final : public AWayWall_BP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WayWall_02_BPC_C;                   // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Door04;                                         // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Door03;                                         // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Door02;                                         // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Door01;                                         // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_beam1;                                          // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_beam;                                           // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_F08F70B74B9BAD69FF98918CDD07B6B5; // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_F08F70B74B9BAD69FF98918CDD07B6B5; // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_382B[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WayWall_02_BPC(int32 EntryPoint);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WayWall_02_BPC_C">();
	}
	static class AWayWall_02_BPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWayWall_02_BPC_C>();
	}
};
static_assert(alignof(AWayWall_02_BPC_C) == 0x000008, "Wrong alignment on AWayWall_02_BPC_C");
static_assert(sizeof(AWayWall_02_BPC_C) == 0x000340, "Wrong size on AWayWall_02_BPC_C");
static_assert(offsetof(AWayWall_02_BPC_C, UberGraphFrame_WayWall_02_BPC_C) == 0x0002F0, "Member 'AWayWall_02_BPC_C::UberGraphFrame_WayWall_02_BPC_C' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, SM_Door04) == 0x0002F8, "Member 'AWayWall_02_BPC_C::SM_Door04' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, SM_Door03) == 0x000300, "Member 'AWayWall_02_BPC_C::SM_Door03' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, SM_Door02) == 0x000308, "Member 'AWayWall_02_BPC_C::SM_Door02' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, SM_Door01) == 0x000310, "Member 'AWayWall_02_BPC_C::SM_Door01' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, Sphere) == 0x000318, "Member 'AWayWall_02_BPC_C::Sphere' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, SM_beam1) == 0x000320, "Member 'AWayWall_02_BPC_C::SM_beam1' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, SM_beam) == 0x000328, "Member 'AWayWall_02_BPC_C::SM_beam' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, Timeline_0_NewTrack_0_F08F70B74B9BAD69FF98918CDD07B6B5) == 0x000330, "Member 'AWayWall_02_BPC_C::Timeline_0_NewTrack_0_F08F70B74B9BAD69FF98918CDD07B6B5' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, Timeline_0__Direction_F08F70B74B9BAD69FF98918CDD07B6B5) == 0x000334, "Member 'AWayWall_02_BPC_C::Timeline_0__Direction_F08F70B74B9BAD69FF98918CDD07B6B5' has a wrong offset!");
static_assert(offsetof(AWayWall_02_BPC_C, Timeline_0) == 0x000338, "Member 'AWayWall_02_BPC_C::Timeline_0' has a wrong offset!");

}

