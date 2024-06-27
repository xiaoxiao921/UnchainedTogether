#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DrawScreen02

#include "Basic.hpp"

#include "BP_DrawScreen02_classes.hpp"
#include "BP_DrawScreen02_parameters.hpp"


namespace SDK
{

// Function BP_DrawScreen02.BP_DrawScreen02_C.ExecuteUbergraph_BP_DrawScreen02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DrawScreen02_C::ExecuteUbergraph_BP_DrawScreen02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen02_C", "ExecuteUbergraph_BP_DrawScreen02");

	Params::BP_DrawScreen02_C_ExecuteUbergraph_BP_DrawScreen02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DrawScreen02.BP_DrawScreen02_C.OnRep_DrawIndex
// (BlueprintCallable, BlueprintEvent)

void ABP_DrawScreen02_C::OnRep_DrawIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen02_C", "OnRep_DrawIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DrawScreen02.BP_DrawScreen02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DrawScreen02_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen02_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DrawScreen02.BP_DrawScreen02_C.SwitchDraw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DrawScreen02_C::SwitchDraw(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen02_C", "SwitchDraw");

	Params::BP_DrawScreen02_C_SwitchDraw Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DrawScreen02.BP_DrawScreen02_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DrawScreen02_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawScreen02_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
