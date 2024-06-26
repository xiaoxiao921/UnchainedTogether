#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RotatingArc

#include "Basic.hpp"

#include "BP_RotatingArc_classes.hpp"
#include "BP_RotatingArc_parameters.hpp"


namespace SDK
{

// Function BP_RotatingArc.BP_RotatingArc_C.ExecuteUbergraph_BP_RotatingArc
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RotatingArc_C::ExecuteUbergraph_BP_RotatingArc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RotatingArc_C", "ExecuteUbergraph_BP_RotatingArc");

	Params::BP_RotatingArc_C_ExecuteUbergraph_BP_RotatingArc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RotatingArc.BP_RotatingArc_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RotatingArc_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RotatingArc_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RotatingArc.BP_RotatingArc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RotatingArc_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RotatingArc_C", "ReceiveTick");

	Params::BP_RotatingArc_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

