#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MetallicObject

#include "Basic.hpp"

#include "BP_MetallicObject_classes.hpp"
#include "BP_MetallicObject_parameters.hpp"


namespace SDK
{

// Function BP_MetallicObject.BP_MetallicObject_C.AddForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetallicObject_C::AddForce(const struct FVector& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "AddForce");

	Params::BP_MetallicObject_C_AddForce Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MetallicObject.BP_MetallicObject_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void ABP_MetallicObject_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetallicObject.BP_MetallicObject_C.ExecuteUbergraph_BP_MetallicObject
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetallicObject_C::ExecuteUbergraph_BP_MetallicObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "ExecuteUbergraph_BP_MetallicObject");

	Params::BP_MetallicObject_C_ExecuteUbergraph_BP_MetallicObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MetallicObject.BP_MetallicObject_C.FlushVelocity
// (BlueprintCallable, BlueprintEvent)

void ABP_MetallicObject_C::FlushVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "FlushVelocity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetallicObject.BP_MetallicObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MetallicObject_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetallicObject.BP_MetallicObject_C.ReinitLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MetallicObject_C::ReinitLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "ReinitLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetallicObject.BP_MetallicObject_C.ResetLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MetallicObject_C::ResetLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "ResetLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetallicObject.BP_MetallicObject_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MetallicObject_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetallicObject.BP_MetallicObject_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MetallicObject_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetallicObject.BP_MetallicObject_C.UpdateSimulatePhysx
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MetallicObject_C::UpdateSimulatePhysx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "UpdateSimulatePhysx");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetallicObject.BP_MetallicObject_C.UpdateSimulation
// (BlueprintCallable, BlueprintEvent)

void ABP_MetallicObject_C::UpdateSimulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetallicObject_C", "UpdateSimulation");

	UObject::ProcessEvent(Func, nullptr);
}

}

