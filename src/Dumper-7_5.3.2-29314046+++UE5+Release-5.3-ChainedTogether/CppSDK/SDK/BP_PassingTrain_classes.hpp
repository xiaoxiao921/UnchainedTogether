#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PassingTrain

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PassingTrain.BP_PassingTrain_C
// 0x0090 (0x0328 - 0x0298)
class ABP_PassingTrain_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Target;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraShakeSourceComponent*            CameraShakeSource;                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        G_theMinussoundMinusofMinusaMinussubwayMinusgoingMinusforwardMinusMinusloopable_1_cc0fe; // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Converted_SK_Train;                                // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_VinceSync_C*                         C_VinceSync;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_CC64363A45DD7116A71BDDA61F7EFA1E; // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_CC64363A45DD7116A71BDDA61F7EFA1E; // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384C[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        TimeBeforePattern;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                InitLoc;                                           // 0x0300(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        TravelTime;                                        // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Playing;                                           // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PassingTrain(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PassingTrain_C">();
	}
	static class ABP_PassingTrain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PassingTrain_C>();
	}
};
static_assert(alignof(ABP_PassingTrain_C) == 0x000008, "Wrong alignment on ABP_PassingTrain_C");
static_assert(sizeof(ABP_PassingTrain_C) == 0x000328, "Wrong size on ABP_PassingTrain_C");
static_assert(offsetof(ABP_PassingTrain_C, UberGraphFrame) == 0x000298, "Member 'ABP_PassingTrain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, SM_Target) == 0x0002A0, "Member 'ABP_PassingTrain_C::SM_Target' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, Arrow) == 0x0002A8, "Member 'ABP_PassingTrain_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, Box) == 0x0002B0, "Member 'ABP_PassingTrain_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, CameraShakeSource) == 0x0002B8, "Member 'ABP_PassingTrain_C::CameraShakeSource' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, G_theMinussoundMinusofMinusaMinussubwayMinusgoingMinusforwardMinusMinusloopable_1_cc0fe) == 0x0002C0, "Member 'ABP_PassingTrain_C::G_theMinussoundMinusofMinusaMinussubwayMinusgoingMinusforwardMinusMinusloopable_1_cc0fe' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, Converted_SK_Train) == 0x0002C8, "Member 'ABP_PassingTrain_C::Converted_SK_Train' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, C_VinceSync) == 0x0002D0, "Member 'ABP_PassingTrain_C::C_VinceSync' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, C_TickOptimizer) == 0x0002D8, "Member 'ABP_PassingTrain_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, DefaultSceneRoot) == 0x0002E0, "Member 'ABP_PassingTrain_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, Timeline_0_NewTrack_0_CC64363A45DD7116A71BDDA61F7EFA1E) == 0x0002E8, "Member 'ABP_PassingTrain_C::Timeline_0_NewTrack_0_CC64363A45DD7116A71BDDA61F7EFA1E' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, Timeline_0__Direction_CC64363A45DD7116A71BDDA61F7EFA1E) == 0x0002EC, "Member 'ABP_PassingTrain_C::Timeline_0__Direction_CC64363A45DD7116A71BDDA61F7EFA1E' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, Timeline_0) == 0x0002F0, "Member 'ABP_PassingTrain_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, TimeBeforePattern) == 0x0002F8, "Member 'ABP_PassingTrain_C::TimeBeforePattern' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, InitLoc) == 0x000300, "Member 'ABP_PassingTrain_C::InitLoc' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, TravelTime) == 0x000318, "Member 'ABP_PassingTrain_C::TravelTime' has a wrong offset!");
static_assert(offsetof(ABP_PassingTrain_C, Playing) == 0x000320, "Member 'ABP_PassingTrain_C::Playing' has a wrong offset!");

}

