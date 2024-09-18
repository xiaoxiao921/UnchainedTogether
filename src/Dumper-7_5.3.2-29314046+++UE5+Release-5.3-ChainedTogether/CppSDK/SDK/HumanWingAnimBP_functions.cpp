#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HumanWingAnimBP

#include "Basic.hpp"

#include "HumanWingAnimBP_classes.hpp"
#include "HumanWingAnimBP_parameters.hpp"


namespace SDK
{

// Function HumanWingAnimBP.HumanWingAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UHumanWingAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HumanWingAnimBP_C", "AnimGraph");

	Params::HumanWingAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function HumanWingAnimBP.HumanWingAnimBP_C.AnimNotify_FlapSound
// (BlueprintCallable, BlueprintEvent)

void UHumanWingAnimBP_C::AnimNotify_FlapSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HumanWingAnimBP_C", "AnimNotify_FlapSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HumanWingAnimBP.HumanWingAnimBP_C.ExecuteUbergraph_HumanWingAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHumanWingAnimBP_C::ExecuteUbergraph_HumanWingAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HumanWingAnimBP_C", "ExecuteUbergraph_HumanWingAnimBP");

	Params::HumanWingAnimBP_C_ExecuteUbergraph_HumanWingAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

