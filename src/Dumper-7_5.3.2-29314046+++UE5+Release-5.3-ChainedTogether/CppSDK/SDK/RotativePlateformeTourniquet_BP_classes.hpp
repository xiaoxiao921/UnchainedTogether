#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotativePlateformeTourniquet_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RotativePlateformeTourniquet_BP.RotativePlateformeTourniquet_BP_C
// 0x0038 (0x02D0 - 0x0298)
class ARotativePlateformeTourniquet_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_VinceSync_C*                         C_VinceSync;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CheckDoorOpen();
	void ExecuteUbergraph_RotativePlateformeTourniquet_BP(int32 EntryPoint);
	void GetPivotAlpha(double* Alpha);
	void OnPivot(double Axis);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RotativePlateformeTourniquet_BP_C">();
	}
	static class ARotativePlateformeTourniquet_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARotativePlateformeTourniquet_BP_C>();
	}
};
static_assert(alignof(ARotativePlateformeTourniquet_BP_C) == 0x000008, "Wrong alignment on ARotativePlateformeTourniquet_BP_C");
static_assert(sizeof(ARotativePlateformeTourniquet_BP_C) == 0x0002D0, "Wrong size on ARotativePlateformeTourniquet_BP_C");
static_assert(offsetof(ARotativePlateformeTourniquet_BP_C, UberGraphFrame) == 0x000298, "Member 'ARotativePlateformeTourniquet_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARotativePlateformeTourniquet_BP_C, C_VinceSync) == 0x0002A0, "Member 'ARotativePlateformeTourniquet_BP_C::C_VinceSync' has a wrong offset!");
static_assert(offsetof(ARotativePlateformeTourniquet_BP_C, StaticMesh) == 0x0002A8, "Member 'ARotativePlateformeTourniquet_BP_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ARotativePlateformeTourniquet_BP_C, Billboard) == 0x0002B0, "Member 'ARotativePlateformeTourniquet_BP_C::Billboard' has a wrong offset!");
static_assert(offsetof(ARotativePlateformeTourniquet_BP_C, DefaultSceneRoot) == 0x0002B8, "Member 'ARotativePlateformeTourniquet_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARotativePlateformeTourniquet_BP_C, Color) == 0x0002C0, "Member 'ARotativePlateformeTourniquet_BP_C::Color' has a wrong offset!");

}
