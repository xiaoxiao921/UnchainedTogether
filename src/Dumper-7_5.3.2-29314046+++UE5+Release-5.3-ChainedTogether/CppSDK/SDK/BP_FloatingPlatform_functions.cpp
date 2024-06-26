#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloatingPlatform

#include "Basic.hpp"

#include "BP_FloatingPlatform_classes.hpp"
#include "BP_FloatingPlatform_parameters.hpp"


namespace SDK
{

// Function BP_FloatingPlatform.BP_FloatingPlatform_C.BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_FloatingPlatform_C::BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_FloatingPlatform_C_BndEvt__BP_FloatingPlatform_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.CalculateRotation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FloatingPlatform_C::CalculateRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "CalculateRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.ExecuteUbergraph_BP_FloatingPlatform
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FloatingPlatform_C::ExecuteUbergraph_BP_FloatingPlatform(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "ExecuteUbergraph_BP_FloatingPlatform");

	Params::BP_FloatingPlatform_C_ExecuteUbergraph_BP_FloatingPlatform Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.MakeBounce
// (BlueprintCallable, BlueprintEvent)

void ABP_FloatingPlatform_C::MakeBounce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "MakeBounce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.Optimise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Optimise                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FloatingPlatform_C::Optimise(bool Param_Optimise)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "Optimise");

	Params::BP_FloatingPlatform_C_Optimise Parms{};

	Parms.Param_Optimise = Param_Optimise;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FloatingPlatform_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_FloatingPlatform_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_FloatingPlatform_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FloatingPlatform.BP_FloatingPlatform_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FloatingPlatform_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FloatingPlatform_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

