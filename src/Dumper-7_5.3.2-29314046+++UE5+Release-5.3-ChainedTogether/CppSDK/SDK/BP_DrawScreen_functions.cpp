#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DrawScreen

#include "Basic.hpp"

#include "BP_DrawScreen_classes.hpp"
#include "BP_DrawScreen_parameters.hpp"


namespace SDK
{

// Function BP_DrawScreen.BP_DrawScreen_C.ExecuteUbergraph_BP_DrawScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DrawScreen_C::ExecuteUbergraph_BP_DrawScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen_C", "ExecuteUbergraph_BP_DrawScreen");

	Params::BP_DrawScreen_C_ExecuteUbergraph_BP_DrawScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DrawScreen.BP_DrawScreen_C.FixMaxDrawDistance
// (BlueprintCallable, BlueprintEvent)

void ABP_DrawScreen_C::FixMaxDrawDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen_C", "FixMaxDrawDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DrawScreen.BP_DrawScreen_C.OnRep_DrawIndex
// (BlueprintCallable, BlueprintEvent)

void ABP_DrawScreen_C::OnRep_DrawIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen_C", "OnRep_DrawIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DrawScreen.BP_DrawScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DrawScreen_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DrawScreen.BP_DrawScreen_C.SwitchDraw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DrawScreen_C::SwitchDraw(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen_C", "SwitchDraw");

	Params::BP_DrawScreen_C_SwitchDraw Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DrawScreen.BP_DrawScreen_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DrawScreen_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
