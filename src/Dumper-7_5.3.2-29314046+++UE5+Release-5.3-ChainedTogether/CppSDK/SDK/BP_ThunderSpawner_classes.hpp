#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThunderSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ThunderSpawner.BP_ThunderSpawner_C
// 0x0070 (0x0308 - 0x0298)
class ABP_ThunderSpawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   Text;                                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Radius;                                            // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Emissive;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          PlaySound;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3AA3[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Scale3D;                                           // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ThunderSpawner(int32 EntryPoint);
	void RandomRotation();
	void RandomScale();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThunderSpawner_C">();
	}
	static class ABP_ThunderSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThunderSpawner_C>();
	}
};
static_assert(alignof(ABP_ThunderSpawner_C) == 0x000008, "Wrong alignment on ABP_ThunderSpawner_C");
static_assert(sizeof(ABP_ThunderSpawner_C) == 0x000308, "Wrong size on ABP_ThunderSpawner_C");
static_assert(offsetof(ABP_ThunderSpawner_C, UberGraphFrame) == 0x000298, "Member 'ABP_ThunderSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, Text) == 0x0002A0, "Member 'ABP_ThunderSpawner_C::Text' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, Billboard) == 0x0002A8, "Member 'ABP_ThunderSpawner_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, Plane) == 0x0002B0, "Member 'ABP_ThunderSpawner_C::Plane' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, SpringArm) == 0x0002B8, "Member 'ABP_ThunderSpawner_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, DefaultSceneRoot) == 0x0002C0, "Member 'ABP_ThunderSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, Radius) == 0x0002C8, "Member 'ABP_ThunderSpawner_C::Radius' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, Color) == 0x0002D0, "Member 'ABP_ThunderSpawner_C::Color' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, Emissive) == 0x0002E0, "Member 'ABP_ThunderSpawner_C::Emissive' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, PlaySound) == 0x0002E8, "Member 'ABP_ThunderSpawner_C::PlaySound' has a wrong offset!");
static_assert(offsetof(ABP_ThunderSpawner_C, Scale3D) == 0x0002F0, "Member 'ABP_ThunderSpawner_C::Scale3D' has a wrong offset!");

}
