#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MoveUpDown

#include "Basic.hpp"

#include "BP_MoveUpDown_classes.hpp"
#include "BP_MoveUpDown_parameters.hpp"


namespace SDK
{

// Function BP_MoveUpDown.BP_MoveUpDown_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MoveUpDown_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoveUpDown_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoveUpDown.BP_MoveUpDown_C.ExecuteUbergraph_BP_MoveUpDown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoveUpDown_C::ExecuteUbergraph_BP_MoveUpDown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoveUpDown_C", "ExecuteUbergraph_BP_MoveUpDown");

	Params::BP_MoveUpDown_C_ExecuteUbergraph_BP_MoveUpDown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoveUpDown.BP_MoveUpDown_C.OnRep_TimelinePos
// (BlueprintCallable, BlueprintEvent)

void ABP_MoveUpDown_C::OnRep_TimelinePos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoveUpDown_C", "OnRep_TimelinePos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoveUpDown.BP_MoveUpDown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MoveUpDown_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoveUpDown_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoveUpDown.BP_MoveUpDown_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_MoveUpDown_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoveUpDown_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoveUpDown.BP_MoveUpDown_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_MoveUpDown_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoveUpDown_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MoveUpDown.BP_MoveUpDown_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MoveUpDown_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoveUpDown_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

