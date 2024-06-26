#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DestructorBall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DestructorBall.BP_DestructorBall_C
// 0x0078 (0x0310 - 0x0298)
class ABP_DestructorBall_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          LeftBox;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        LeftArrow;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        RightArrow;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          RightBox;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Pivot;                                             // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_F4B866C54345FABEB2C78395F58FF38F; // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_F4B866C54345FABEB2C78395F58FF38F; // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ADD[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Inverse;                                           // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3ADE[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RepPosition;                                       // 0x030C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateBox(bool Right);
	void BalancerJoueur(class UObject* Target, const struct FVector& Direction);
	void BndEvt__BP_DestructorBall_Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_DestructorBall_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CustomEvent();
	void ExecuteUbergraph_BP_DestructorBall(int32 EntryPoint);
	void OnRep_RepPosition();
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__LeftBox__EventFunc();
	void Timeline_0__RightBox__EventFunc();
	void Timeline_0__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DestructorBall_C">();
	}
	static class ABP_DestructorBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DestructorBall_C>();
	}
};
static_assert(alignof(ABP_DestructorBall_C) == 0x000008, "Wrong alignment on ABP_DestructorBall_C");
static_assert(sizeof(ABP_DestructorBall_C) == 0x000310, "Wrong size on ABP_DestructorBall_C");
static_assert(offsetof(ABP_DestructorBall_C, UberGraphFrame) == 0x000298, "Member 'ABP_DestructorBall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, LeftBox) == 0x0002A0, "Member 'ABP_DestructorBall_C::LeftBox' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, LeftArrow) == 0x0002A8, "Member 'ABP_DestructorBall_C::LeftArrow' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, RightArrow) == 0x0002B0, "Member 'ABP_DestructorBall_C::RightArrow' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, RightBox) == 0x0002B8, "Member 'ABP_DestructorBall_C::RightBox' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, Cylinder) == 0x0002C0, "Member 'ABP_DestructorBall_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, Sphere) == 0x0002C8, "Member 'ABP_DestructorBall_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, StaticMesh2) == 0x0002D0, "Member 'ABP_DestructorBall_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, StaticMesh1) == 0x0002D8, "Member 'ABP_DestructorBall_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, StaticMesh) == 0x0002E0, "Member 'ABP_DestructorBall_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, Pivot) == 0x0002E8, "Member 'ABP_DestructorBall_C::Pivot' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, DefaultSceneRoot) == 0x0002F0, "Member 'ABP_DestructorBall_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, Timeline_0_NewTrack_0_F4B866C54345FABEB2C78395F58FF38F) == 0x0002F8, "Member 'ABP_DestructorBall_C::Timeline_0_NewTrack_0_F4B866C54345FABEB2C78395F58FF38F' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, Timeline_0__Direction_F4B866C54345FABEB2C78395F58FF38F) == 0x0002FC, "Member 'ABP_DestructorBall_C::Timeline_0__Direction_F4B866C54345FABEB2C78395F58FF38F' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, Timeline_0) == 0x000300, "Member 'ABP_DestructorBall_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, Inverse) == 0x000308, "Member 'ABP_DestructorBall_C::Inverse' has a wrong offset!");
static_assert(offsetof(ABP_DestructorBall_C, RepPosition) == 0x00030C, "Member 'ABP_DestructorBall_C::RepPosition' has a wrong offset!");

}

