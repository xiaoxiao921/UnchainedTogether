#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RotatingMeshes

#include "Basic.hpp"

#include "BP_RotatingMeshes_classes.hpp"
#include "BP_RotatingMeshes_parameters.hpp"


namespace SDK
{

// Function BP_RotatingMeshes.BP_RotatingMeshes_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_RotatingMeshes_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RotatingMeshes_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RotatingMeshes.BP_RotatingMeshes_C.ExecuteUbergraph_BP_RotatingMeshes
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RotatingMeshes_C::ExecuteUbergraph_BP_RotatingMeshes(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RotatingMeshes_C", "ExecuteUbergraph_BP_RotatingMeshes");

	Params::BP_RotatingMeshes_C_ExecuteUbergraph_BP_RotatingMeshes Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RotatingMeshes.BP_RotatingMeshes_C.OnRep_RepRot
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RotatingMeshes_C::OnRep_RepRot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RotatingMeshes_C", "OnRep_RepRot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RotatingMeshes.BP_RotatingMeshes_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RotatingMeshes_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RotatingMeshes_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RotatingMeshes.BP_RotatingMeshes_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RotatingMeshes_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RotatingMeshes_C", "ReceiveTick");

	Params::BP_RotatingMeshes_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
