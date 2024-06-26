#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Elevator

#include "Basic.hpp"

#include "BP_Elevator_classes.hpp"
#include "BP_Elevator_parameters.hpp"


namespace SDK
{

// Function BP_Elevator.BP_Elevator_C.ExecuteUbergraph_BP_Elevator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_C::ExecuteUbergraph_BP_Elevator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_C", "ExecuteUbergraph_BP_Elevator");

	Params::BP_Elevator_C_ExecuteUbergraph_BP_Elevator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Elevator.BP_Elevator_C.IsSomeoneInside
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBoxComponent*>            Boxes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Elevator_C::IsSomeoneInside(TArray<class UBoxComponent*>& Boxes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_C", "IsSomeoneInside");

	Params::BP_Elevator_C_IsSomeoneInside Parms{};

	Parms.Boxes = std::move(Boxes);

	UObject::ProcessEvent(Func, &Parms);

	Boxes = std::move(Parms.Boxes);

	return Parms.ReturnValue;
}


// Function BP_Elevator.BP_Elevator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Elevator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Elevator.BP_Elevator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_C", "ReceiveTick");

	Params::BP_Elevator_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Elevator.BP_Elevator_C.UpdateTurn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_TurnRate                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Elevator_C::UpdateTurn(double* Param_TurnRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_C", "UpdateTurn");

	Params::BP_Elevator_C_UpdateTurn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_TurnRate != nullptr)
		*Param_TurnRate = Parms.Param_TurnRate;
}


// Function BP_Elevator.BP_Elevator_C.UpdateVolume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Elevator_C::UpdateVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_C", "UpdateVolume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Elevator.BP_Elevator_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Elevator_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Elevator_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

