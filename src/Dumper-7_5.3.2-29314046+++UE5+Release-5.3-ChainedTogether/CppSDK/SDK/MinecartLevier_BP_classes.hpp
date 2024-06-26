#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinecartLevier_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MinecartLevier_BP.MinecartLevier_BP_C
// 0x0150 (0x03E8 - 0x0298)
class AMinecartLevier_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_VinceSync_C*                         C_VinceSyncBar;                                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_VinceSync_C*                         C_VinceSyncMiddle;                                 // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          LeftBox;                                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Minecart_Plateform;                                // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          RightBox1;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Minecart_Plateform1;                               // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RailMinecart1;                                     // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RailMinecart;                                      // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MinecartWheel3;                                    // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MinecartWheel2;                                    // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MinecartWheel1;                                    // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MinecartWheel;                                     // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MinecartBar1;                                      // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MinecartBar;                                       // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MinecartMiddle;                                    // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         BalanceTimeline_NewTrack_0_0F5EEE0C4CB2A964F3E63595A8792AF4; // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            BalanceTimeline__Direction_0F5EEE0C4CB2A964F3E63595A8792AF4; // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C70[0x3];                                     // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     BalanceTimeline;                                   // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_939D5DB744C81E731C8C749C0EB5CEA1; // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_939D5DB744C81E731C8C749C0EB5CEA1; // 0x0354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C71[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Length;                                            // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3C72[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Spacing;                                           // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                StartRelativeLocation;                             // 0x0370(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationTemp;                                      // 0x0388(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BarRotationTemp;                                   // 0x03A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               TargetBarRotation;                                 // 0x03B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Left;                                              // 0x03D0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          Reset;                                             // 0x03D1(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C73[0x6];                                     // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DeplacementUnJoueur;                               // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        DeplacementDeuxJoueurs;                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Balance(bool Param_Left);
	void BalanceTimeline__FinishedFunc();
	void BalanceTimeline__UpdateFunc();
	void BndEvt__MinecartLevier_BP_LeftBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__MinecartLevier_BP_LeftBox_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__MinecartLevier_BP_RightBox1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__MinecartLevier_BP_RightBox1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void CheckR();
	void CheckReset();
	void ExecuteUbergraph_MinecartLevier_BP(int32 EntryPoint);
	void Move();
	void MoveMinecart();
	void OnRep_Left();
	void OnRep_Reset();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinecartLevier_BP_C">();
	}
	static class AMinecartLevier_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMinecartLevier_BP_C>();
	}
};
static_assert(alignof(AMinecartLevier_BP_C) == 0x000008, "Wrong alignment on AMinecartLevier_BP_C");
static_assert(sizeof(AMinecartLevier_BP_C) == 0x0003E8, "Wrong size on AMinecartLevier_BP_C");
static_assert(offsetof(AMinecartLevier_BP_C, UberGraphFrame) == 0x000298, "Member 'AMinecartLevier_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, C_VinceSyncBar) == 0x0002A0, "Member 'AMinecartLevier_BP_C::C_VinceSyncBar' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, C_VinceSyncMiddle) == 0x0002A8, "Member 'AMinecartLevier_BP_C::C_VinceSyncMiddle' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Box) == 0x0002B0, "Member 'AMinecartLevier_BP_C::Box' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, C_TickOptimizer) == 0x0002B8, "Member 'AMinecartLevier_BP_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, LeftBox) == 0x0002C0, "Member 'AMinecartLevier_BP_C::LeftBox' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Minecart_Plateform) == 0x0002C8, "Member 'AMinecartLevier_BP_C::Minecart_Plateform' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, RightBox1) == 0x0002D0, "Member 'AMinecartLevier_BP_C::RightBox1' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Minecart_Plateform1) == 0x0002D8, "Member 'AMinecartLevier_BP_C::Minecart_Plateform1' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Sphere) == 0x0002E0, "Member 'AMinecartLevier_BP_C::Sphere' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Arrow) == 0x0002E8, "Member 'AMinecartLevier_BP_C::Arrow' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, RailMinecart1) == 0x0002F0, "Member 'AMinecartLevier_BP_C::RailMinecart1' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, RailMinecart) == 0x0002F8, "Member 'AMinecartLevier_BP_C::RailMinecart' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, MinecartWheel3) == 0x000300, "Member 'AMinecartLevier_BP_C::MinecartWheel3' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, MinecartWheel2) == 0x000308, "Member 'AMinecartLevier_BP_C::MinecartWheel2' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, MinecartWheel1) == 0x000310, "Member 'AMinecartLevier_BP_C::MinecartWheel1' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, MinecartWheel) == 0x000318, "Member 'AMinecartLevier_BP_C::MinecartWheel' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, MinecartBar1) == 0x000320, "Member 'AMinecartLevier_BP_C::MinecartBar1' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, MinecartBar) == 0x000328, "Member 'AMinecartLevier_BP_C::MinecartBar' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, MinecartMiddle) == 0x000330, "Member 'AMinecartLevier_BP_C::MinecartMiddle' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, DefaultSceneRoot) == 0x000338, "Member 'AMinecartLevier_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, BalanceTimeline_NewTrack_0_0F5EEE0C4CB2A964F3E63595A8792AF4) == 0x000340, "Member 'AMinecartLevier_BP_C::BalanceTimeline_NewTrack_0_0F5EEE0C4CB2A964F3E63595A8792AF4' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, BalanceTimeline__Direction_0F5EEE0C4CB2A964F3E63595A8792AF4) == 0x000344, "Member 'AMinecartLevier_BP_C::BalanceTimeline__Direction_0F5EEE0C4CB2A964F3E63595A8792AF4' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, BalanceTimeline) == 0x000348, "Member 'AMinecartLevier_BP_C::BalanceTimeline' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Timeline_0_NewTrack_0_939D5DB744C81E731C8C749C0EB5CEA1) == 0x000350, "Member 'AMinecartLevier_BP_C::Timeline_0_NewTrack_0_939D5DB744C81E731C8C749C0EB5CEA1' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Timeline_0__Direction_939D5DB744C81E731C8C749C0EB5CEA1) == 0x000354, "Member 'AMinecartLevier_BP_C::Timeline_0__Direction_939D5DB744C81E731C8C749C0EB5CEA1' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Timeline_0) == 0x000358, "Member 'AMinecartLevier_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Length) == 0x000360, "Member 'AMinecartLevier_BP_C::Length' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Spacing) == 0x000368, "Member 'AMinecartLevier_BP_C::Spacing' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, StartRelativeLocation) == 0x000370, "Member 'AMinecartLevier_BP_C::StartRelativeLocation' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, LocationTemp) == 0x000388, "Member 'AMinecartLevier_BP_C::LocationTemp' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, BarRotationTemp) == 0x0003A0, "Member 'AMinecartLevier_BP_C::BarRotationTemp' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, TargetBarRotation) == 0x0003B8, "Member 'AMinecartLevier_BP_C::TargetBarRotation' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Left) == 0x0003D0, "Member 'AMinecartLevier_BP_C::Left' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, Reset) == 0x0003D1, "Member 'AMinecartLevier_BP_C::Reset' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, DeplacementUnJoueur) == 0x0003D8, "Member 'AMinecartLevier_BP_C::DeplacementUnJoueur' has a wrong offset!");
static_assert(offsetof(AMinecartLevier_BP_C, DeplacementDeuxJoueurs) == 0x0003E0, "Member 'AMinecartLevier_BP_C::DeplacementDeuxJoueurs' has a wrong offset!");

}

