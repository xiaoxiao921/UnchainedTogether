#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MetroDoor

#include "Basic.hpp"

#include "BP_MetroDoor_classes.hpp"
#include "BP_MetroDoor_parameters.hpp"


namespace SDK
{

// Function BP_MetroDoor.BP_MetroDoor_C.ExecuteUbergraph_BP_MetroDoor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetroDoor_C::ExecuteUbergraph_BP_MetroDoor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetroDoor_C", "ExecuteUbergraph_BP_MetroDoor");

	Params::BP_MetroDoor_C_ExecuteUbergraph_BP_MetroDoor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MetroDoor.BP_MetroDoor_C.IsActivated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetroDoor_C::IsActivated(bool* Activated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetroDoor_C", "IsActivated");

	Params::BP_MetroDoor_C_IsActivated Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Activated != nullptr)
		*Activated = Parms.Activated;
}


// Function BP_MetroDoor.BP_MetroDoor_C.OnRep_Open
// (BlueprintCallable, BlueprintEvent)

void ABP_MetroDoor_C::OnRep_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetroDoor_C", "OnRep_Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetroDoor.BP_MetroDoor_C.OpenTL
// (BlueprintCallable, BlueprintEvent)

void ABP_MetroDoor_C::OpenTL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetroDoor_C", "OpenTL");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetroDoor.BP_MetroDoor_C.Pushed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MetroDoor_C::Pushed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetroDoor_C", "Pushed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetroDoor.BP_MetroDoor_C.Released
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MetroDoor_C::Released()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetroDoor_C", "Released");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetroDoor.BP_MetroDoor_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MetroDoor_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetroDoor_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetroDoor.BP_MetroDoor_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MetroDoor_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetroDoor_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
