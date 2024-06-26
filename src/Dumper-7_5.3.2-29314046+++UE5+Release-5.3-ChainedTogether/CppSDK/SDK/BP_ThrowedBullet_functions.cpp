#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThrowedBullet

#include "Basic.hpp"

#include "BP_ThrowedBullet_classes.hpp"
#include "BP_ThrowedBullet_parameters.hpp"


namespace SDK
{

// Function BP_ThrowedBullet.BP_ThrowedBullet_C.BndEvt__BP_ThrowedBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ThrowedBullet_C::BndEvt__BP_ThrowedBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "BndEvt__BP_ThrowedBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_ThrowedBullet_C_BndEvt__BP_ThrowedBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowedBullet.BP_ThrowedBullet_C.CollisionDetection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ThrowedBullet_C::CollisionDetection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "CollisionDetection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowedBullet.BP_ThrowedBullet_C.DownTL
// (BlueprintCallable, BlueprintEvent)

void ABP_ThrowedBullet_C::DownTL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "DownTL");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowedBullet.BP_ThrowedBullet_C.ExecuteUbergraph_BP_ThrowedBullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowedBullet_C::ExecuteUbergraph_BP_ThrowedBullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "ExecuteUbergraph_BP_ThrowedBullet");

	Params::BP_ThrowedBullet_C_ExecuteUbergraph_BP_ThrowedBullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowedBullet.BP_ThrowedBullet_C.HitMulti
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowedBullet_C::HitMulti(class UObject* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "HitMulti");

	Params::BP_ThrowedBullet_C_HitMulti Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowedBullet.BP_ThrowedBullet_C.OnHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowedBullet_C::OnHit(class UObject* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "OnHit");

	Params::BP_ThrowedBullet_C_OnHit Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowedBullet.BP_ThrowedBullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ThrowedBullet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowedBullet.BP_ThrowedBullet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowedBullet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "ReceiveTick");

	Params::BP_ThrowedBullet_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThrowedBullet.BP_ThrowedBullet_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_ThrowedBullet_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThrowedBullet.BP_ThrowedBullet_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_ThrowedBullet_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThrowedBullet_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

