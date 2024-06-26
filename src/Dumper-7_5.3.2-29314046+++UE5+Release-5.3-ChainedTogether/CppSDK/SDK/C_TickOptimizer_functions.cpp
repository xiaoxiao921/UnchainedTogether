#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: C_TickOptimizer

#include "Basic.hpp"

#include "C_TickOptimizer_classes.hpp"
#include "C_TickOptimizer_parameters.hpp"


namespace SDK
{

// Function C_TickOptimizer.C_TickOptimizer_C.ExecuteUbergraph_C_TickOptimizer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UC_TickOptimizer_C::ExecuteUbergraph_C_TickOptimizer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("C_TickOptimizer_C", "ExecuteUbergraph_C_TickOptimizer");

	Params::C_TickOptimizer_C_ExecuteUbergraph_C_TickOptimizer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function C_TickOptimizer.C_TickOptimizer_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UC_TickOptimizer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("C_TickOptimizer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function C_TickOptimizer.C_TickOptimizer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UC_TickOptimizer_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("C_TickOptimizer_C", "ReceiveTick");

	Params::C_TickOptimizer_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

