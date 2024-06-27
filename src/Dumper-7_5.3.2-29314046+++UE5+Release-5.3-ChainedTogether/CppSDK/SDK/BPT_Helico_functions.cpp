#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPT_Helico

#include "Basic.hpp"

#include "BPT_Helico_classes.hpp"
#include "BPT_Helico_parameters.hpp"


namespace SDK
{

// Function BPT_Helico.BPT_Helico_C.ExecuteUbergraph_BPT_Helico
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPT_Helico_C::ExecuteUbergraph_BPT_Helico(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPT_Helico_C", "ExecuteUbergraph_BPT_Helico");

	Params::BPT_Helico_C_ExecuteUbergraph_BPT_Helico Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPT_Helico.BPT_Helico_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPT_Helico_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPT_Helico_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPT_Helico.BPT_Helico_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPT_Helico_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPT_Helico_C", "ReceiveTick");

	Params::BPT_Helico_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
