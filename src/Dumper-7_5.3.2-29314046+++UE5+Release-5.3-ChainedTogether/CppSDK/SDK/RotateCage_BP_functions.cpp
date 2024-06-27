#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RotateCage_BP

#include "Basic.hpp"

#include "RotateCage_BP_classes.hpp"
#include "RotateCage_BP_parameters.hpp"


namespace SDK
{

// Function RotateCage_BP.RotateCage_BP_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void ARotateCage_BP_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotateCage_BP_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotateCage_BP.RotateCage_BP_C.ExecuteUbergraph_RotateCage_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARotateCage_BP_C::ExecuteUbergraph_RotateCage_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotateCage_BP_C", "ExecuteUbergraph_RotateCage_BP");

	Params::RotateCage_BP_C_ExecuteUbergraph_RotateCage_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RotateCage_BP.RotateCage_BP_C.OnRep_RepRotation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ARotateCage_BP_C::OnRep_RepRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotateCage_BP_C", "OnRep_RepRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotateCage_BP.RotateCage_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARotateCage_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotateCage_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RotateCage_BP.RotateCage_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARotateCage_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RotateCage_BP_C", "ReceiveTick");

	Params::RotateCage_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
