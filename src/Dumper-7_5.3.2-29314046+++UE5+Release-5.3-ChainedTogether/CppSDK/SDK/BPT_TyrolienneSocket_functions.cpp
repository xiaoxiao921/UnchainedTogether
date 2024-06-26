#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPT_TyrolienneSocket

#include "Basic.hpp"

#include "BPT_TyrolienneSocket_classes.hpp"
#include "BPT_TyrolienneSocket_parameters.hpp"


namespace SDK
{

// Function BPT_TyrolienneSocket.BPT_TyrolienneSocket_C.BeginMove
// (BlueprintCallable, BlueprintEvent)

void ABPT_TyrolienneSocket_C::BeginMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPT_TyrolienneSocket_C", "BeginMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPT_TyrolienneSocket.BPT_TyrolienneSocket_C.ExecuteUbergraph_BPT_TyrolienneSocket
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPT_TyrolienneSocket_C::ExecuteUbergraph_BPT_TyrolienneSocket(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPT_TyrolienneSocket_C", "ExecuteUbergraph_BPT_TyrolienneSocket");

	Params::BPT_TyrolienneSocket_C_ExecuteUbergraph_BPT_TyrolienneSocket Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

