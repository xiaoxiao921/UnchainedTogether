#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_paddle_wheel

#include "Basic.hpp"

#include "BP_paddle_wheel_classes.hpp"
#include "BP_paddle_wheel_parameters.hpp"


namespace SDK
{

// Function BP_paddle_wheel.BP_paddle_wheel_C.ExecuteUbergraph_BP_paddle_wheel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_paddle_wheel_C::ExecuteUbergraph_BP_paddle_wheel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_paddle_wheel_C", "ExecuteUbergraph_BP_paddle_wheel");

	Params::BP_paddle_wheel_C_ExecuteUbergraph_BP_paddle_wheel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_paddle_wheel.BP_paddle_wheel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_paddle_wheel_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_paddle_wheel_C", "ReceiveTick");

	Params::BP_paddle_wheel_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
