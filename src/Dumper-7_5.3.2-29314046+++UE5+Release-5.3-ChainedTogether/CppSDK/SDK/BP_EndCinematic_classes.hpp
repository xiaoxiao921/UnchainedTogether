#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EndCinematic

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_Travelings_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EndCinematic.BP_EndCinematic_C
// 0x0120 (0x03B8 - 0x0298)
class ABP_EndCinematic_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_TickOptimizer_C*                     C_TickOptimizer;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera6;                                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight1;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera5;                                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera4;                                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera3;                                           // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera2;                                           // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera1;                                           // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    CameraPivot;                                       // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow3;                                            // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow2;                                            // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere3;                                           // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere2;                                           // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere1;                                           // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_D2020B3342217B0F396F8EB292BD45A1; // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_D2020B3342217B0F396F8EB292BD45A1; // 0x0354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_397B[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera_to_Travel;                                  // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_Travelings                                  Way;                                               // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_397C[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InitialLoc;                                        // 0x0370(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Distance;                                          // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLoc;                                         // 0x0390(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_EndCinematicBlockVolume_C*>  Collisions;                                        // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)

public:
	void BndEvt__BP_EndCinematic_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	struct FVector CalculateCenter();
	void CalculateTarget(E_Travelings Selection, class USceneComponent* Cam, double Param_Distance, const struct FVector& InitLoc, struct FVector* Target);
	void ExecuteUbergraph_BP_EndCinematic(int32 EntryPoint);
	void LaunchCinematicAll(TArray<class AActor*>& Array);
	void MergeSplitScreen();
	void Place_Pivot(const TArray<class AActor*>& TargetArray);
	void RetablishSplitScreen();
	void ShowGeneric();
	void SwitchCamera(class UCameraComponent* NewCam);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Traveling(class UCameraComponent* CameraToTravel, E_Travelings Param_Way, double Duration, double Param_Distance);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EndCinematic_C">();
	}
	static class ABP_EndCinematic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EndCinematic_C>();
	}
};
static_assert(alignof(ABP_EndCinematic_C) == 0x000008, "Wrong alignment on ABP_EndCinematic_C");
static_assert(sizeof(ABP_EndCinematic_C) == 0x0003B8, "Wrong size on ABP_EndCinematic_C");
static_assert(offsetof(ABP_EndCinematic_C, UberGraphFrame) == 0x000298, "Member 'ABP_EndCinematic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, C_TickOptimizer) == 0x0002A0, "Member 'ABP_EndCinematic_C::C_TickOptimizer' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Camera6) == 0x0002A8, "Member 'ABP_EndCinematic_C::Camera6' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, SpotLight1) == 0x0002B0, "Member 'ABP_EndCinematic_C::SpotLight1' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, SpotLight) == 0x0002B8, "Member 'ABP_EndCinematic_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Camera5) == 0x0002C0, "Member 'ABP_EndCinematic_C::Camera5' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Camera4) == 0x0002C8, "Member 'ABP_EndCinematic_C::Camera4' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Camera3) == 0x0002D0, "Member 'ABP_EndCinematic_C::Camera3' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Camera2) == 0x0002D8, "Member 'ABP_EndCinematic_C::Camera2' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Camera1) == 0x0002E0, "Member 'ABP_EndCinematic_C::Camera1' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Camera) == 0x0002E8, "Member 'ABP_EndCinematic_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, CameraPivot) == 0x0002F0, "Member 'ABP_EndCinematic_C::CameraPivot' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Arrow3) == 0x0002F8, "Member 'ABP_EndCinematic_C::Arrow3' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Arrow2) == 0x000300, "Member 'ABP_EndCinematic_C::Arrow2' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Arrow1) == 0x000308, "Member 'ABP_EndCinematic_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Arrow) == 0x000310, "Member 'ABP_EndCinematic_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Sphere3) == 0x000318, "Member 'ABP_EndCinematic_C::Sphere3' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Sphere2) == 0x000320, "Member 'ABP_EndCinematic_C::Sphere2' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Sphere1) == 0x000328, "Member 'ABP_EndCinematic_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Sphere) == 0x000330, "Member 'ABP_EndCinematic_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, TextRender) == 0x000338, "Member 'ABP_EndCinematic_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Box) == 0x000340, "Member 'ABP_EndCinematic_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, DefaultSceneRoot) == 0x000348, "Member 'ABP_EndCinematic_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Timeline_0_NewTrack_0_D2020B3342217B0F396F8EB292BD45A1) == 0x000350, "Member 'ABP_EndCinematic_C::Timeline_0_NewTrack_0_D2020B3342217B0F396F8EB292BD45A1' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Timeline_0__Direction_D2020B3342217B0F396F8EB292BD45A1) == 0x000354, "Member 'ABP_EndCinematic_C::Timeline_0__Direction_D2020B3342217B0F396F8EB292BD45A1' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Timeline_0) == 0x000358, "Member 'ABP_EndCinematic_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Camera_to_Travel) == 0x000360, "Member 'ABP_EndCinematic_C::Camera_to_Travel' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Way) == 0x000368, "Member 'ABP_EndCinematic_C::Way' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, InitialLoc) == 0x000370, "Member 'ABP_EndCinematic_C::InitialLoc' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Distance) == 0x000388, "Member 'ABP_EndCinematic_C::Distance' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, TargetLoc) == 0x000390, "Member 'ABP_EndCinematic_C::TargetLoc' has a wrong offset!");
static_assert(offsetof(ABP_EndCinematic_C, Collisions) == 0x0003A8, "Member 'ABP_EndCinematic_C::Collisions' has a wrong offset!");

}

