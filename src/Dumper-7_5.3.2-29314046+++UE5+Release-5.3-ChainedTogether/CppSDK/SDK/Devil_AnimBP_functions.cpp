#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Devil_AnimBP

#include "Basic.hpp"

#include "Devil_AnimBP_classes.hpp"
#include "Devil_AnimBP_parameters.hpp"


namespace SDK
{

// Function Devil_AnimBP.Devil_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UDevil_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Devil_AnimBP_C", "AnimGraph");

	Params::Devil_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Devil_AnimBP.Devil_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevil_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Devil_AnimBP_C", "BlueprintUpdateAnimation");

	Params::Devil_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Devil_AnimBP.Devil_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Devil_AnimBP_AnimGraphNode_TransitionResult_6BB1057B4E10670DF2FF94AF82340FD1
// (BlueprintEvent)

void UDevil_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Devil_AnimBP_AnimGraphNode_TransitionResult_6BB1057B4E10670DF2FF94AF82340FD1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Devil_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Devil_AnimBP_AnimGraphNode_TransitionResult_6BB1057B4E10670DF2FF94AF82340FD1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Devil_AnimBP.Devil_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Devil_AnimBP_AnimGraphNode_TransitionResult_771E2BEC41B3F7D4237581918C2CC989
// (BlueprintEvent)

void UDevil_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Devil_AnimBP_AnimGraphNode_TransitionResult_771E2BEC41B3F7D4237581918C2CC989()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Devil_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Devil_AnimBP_AnimGraphNode_TransitionResult_771E2BEC41B3F7D4237581918C2CC989");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Devil_AnimBP.Devil_AnimBP_C.ExecuteUbergraph_Devil_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevil_AnimBP_C::ExecuteUbergraph_Devil_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Devil_AnimBP_C", "ExecuteUbergraph_Devil_AnimBP");

	Params::Devil_AnimBP_C_ExecuteUbergraph_Devil_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
