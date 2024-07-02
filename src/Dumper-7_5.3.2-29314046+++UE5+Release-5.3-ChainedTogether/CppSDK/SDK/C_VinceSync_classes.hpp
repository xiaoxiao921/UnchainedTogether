#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: C_VinceSync

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass C_VinceSync.C_VinceSync_C
// 0x0058 (0x00F8 - 0x00A0)
class UC_VinceSync_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        ComponentToSync;                                   // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SyncedComponent;                                   // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SyncedLocation;                                    // 0x00B8(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SyncedRotation;                                    // 0x00D0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SyncLocation;                                      // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SyncRotation;                                      // 0x00E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3491[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Interp_Speed;                                      // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTick;                                           // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTeleporting;                                     // 0x00F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_C_VinceSync(int32 EntryPoint);
	void InitSync(class USceneComponent* Param_ComponentToSync);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetComponentToSync(class USceneComponent* Param_ComponentToSync);
	void Teleport(const struct FVector& Param_SyncedLocation, const struct FRotator& Param_SyncedRotation);
	void TeleportAll(const struct FVector& Param_SyncedLocation, const struct FRotator& Param_SyncedRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"C_VinceSync_C">();
	}
	static class UC_VinceSync_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UC_VinceSync_C>();
	}
};
static_assert(alignof(UC_VinceSync_C) == 0x000008, "Wrong alignment on UC_VinceSync_C");
static_assert(sizeof(UC_VinceSync_C) == 0x0000F8, "Wrong size on UC_VinceSync_C");
static_assert(offsetof(UC_VinceSync_C, UberGraphFrame) == 0x0000A0, "Member 'UC_VinceSync_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UC_VinceSync_C, ComponentToSync) == 0x0000A8, "Member 'UC_VinceSync_C::ComponentToSync' has a wrong offset!");
static_assert(offsetof(UC_VinceSync_C, SyncedComponent) == 0x0000B0, "Member 'UC_VinceSync_C::SyncedComponent' has a wrong offset!");
static_assert(offsetof(UC_VinceSync_C, SyncedLocation) == 0x0000B8, "Member 'UC_VinceSync_C::SyncedLocation' has a wrong offset!");
static_assert(offsetof(UC_VinceSync_C, SyncedRotation) == 0x0000D0, "Member 'UC_VinceSync_C::SyncedRotation' has a wrong offset!");
static_assert(offsetof(UC_VinceSync_C, SyncLocation) == 0x0000E8, "Member 'UC_VinceSync_C::SyncLocation' has a wrong offset!");
static_assert(offsetof(UC_VinceSync_C, SyncRotation) == 0x0000E9, "Member 'UC_VinceSync_C::SyncRotation' has a wrong offset!");
static_assert(offsetof(UC_VinceSync_C, Interp_Speed) == 0x0000EC, "Member 'UC_VinceSync_C::Interp_Speed' has a wrong offset!");
static_assert(offsetof(UC_VinceSync_C, CanTick) == 0x0000F0, "Member 'UC_VinceSync_C::CanTick' has a wrong offset!");
static_assert(offsetof(UC_VinceSync_C, IsTeleporting) == 0x0000F1, "Member 'UC_VinceSync_C::IsTeleporting' has a wrong offset!");

}

