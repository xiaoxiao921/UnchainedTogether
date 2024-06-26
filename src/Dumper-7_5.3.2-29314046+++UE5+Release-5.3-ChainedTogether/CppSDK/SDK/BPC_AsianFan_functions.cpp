#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_AsianFan

#include "Basic.hpp"

#include "BPC_AsianFan_classes.hpp"
#include "BPC_AsianFan_parameters.hpp"


namespace SDK
{

// Function BPC_AsianFan.BPC_AsianFan_C.ExecuteUbergraph_BPC_AsianFan
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPC_AsianFan_C::ExecuteUbergraph_BPC_AsianFan(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AsianFan_C", "ExecuteUbergraph_BPC_AsianFan");

	Params::BPC_AsianFan_C_ExecuteUbergraph_BPC_AsianFan Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_AsianFan.BPC_AsianFan_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPC_AsianFan_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AsianFan_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_AsianFan.BPC_AsianFan_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABPC_AsianFan_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AsianFan_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_AsianFan.BPC_AsianFan_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABPC_AsianFan_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_AsianFan_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

