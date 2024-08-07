#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Pseudo

#include "Basic.hpp"

#include "W_Pseudo_classes.hpp"
#include "W_Pseudo_parameters.hpp"


namespace SDK
{

// Function W_Pseudo.W_Pseudo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Pseudo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Pseudo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Pseudo.W_Pseudo_C.ExecuteUbergraph_W_Pseudo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Pseudo_C::ExecuteUbergraph_W_Pseudo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Pseudo_C", "ExecuteUbergraph_W_Pseudo");

	Params::W_Pseudo_C_ExecuteUbergraph_W_Pseudo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Pseudo.W_Pseudo_C.FlushSpeaker
// (BlueprintCallable, BlueprintEvent)

void UW_Pseudo_C::FlushSpeaker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Pseudo_C", "FlushSpeaker");

	UObject::ProcessEvent(Func, nullptr);
}

}

