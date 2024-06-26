#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NewClock

#include "Basic.hpp"

#include "BP_NewClock_classes.hpp"
#include "BP_NewClock_parameters.hpp"


namespace SDK
{

// Function BP_NewClock.BP_NewClock_C.ExecuteUbergraph_BP_NewClock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NewClock_C::ExecuteUbergraph_BP_NewClock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewClock_C", "ExecuteUbergraph_BP_NewClock");

	Params::BP_NewClock_C_ExecuteUbergraph_BP_NewClock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NewClock.BP_NewClock_C.IsSomeoneInside
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBoxComponent*>            Boxes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_NewClock_C::IsSomeoneInside(TArray<class UBoxComponent*>& Boxes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewClock_C", "IsSomeoneInside");

	Params::BP_NewClock_C_IsSomeoneInside Parms{};

	Parms.Boxes = std::move(Boxes);

	UObject::ProcessEvent(Func, &Parms);

	Boxes = std::move(Parms.Boxes);

	return Parms.ReturnValue;
}


// Function BP_NewClock.BP_NewClock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NewClock_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewClock_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NewClock.BP_NewClock_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NewClock_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewClock_C", "ReceiveTick");

	Params::BP_NewClock_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NewClock.BP_NewClock_C.SetCadranTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NewClock_C::SetCadranTexture(class UTexture* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewClock_C", "SetCadranTexture");

	Params::BP_NewClock_C_SetCadranTexture Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NewClock.BP_NewClock_C.UpdateAiguilleRotations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_NewClock_C::UpdateAiguilleRotations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewClock_C", "UpdateAiguilleRotations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NewClock.BP_NewClock_C.UpdateCadran
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NewClock_C::UpdateCadran()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewClock_C", "UpdateCadran");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NewClock.BP_NewClock_C.UpdateTurn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_GrandeAiguille                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TurnRate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NewClock_C::UpdateTurn(bool Param_GrandeAiguille, double* TurnRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewClock_C", "UpdateTurn");

	Params::BP_NewClock_C_UpdateTurn Parms{};

	Parms.Param_GrandeAiguille = Param_GrandeAiguille;

	UObject::ProcessEvent(Func, &Parms);

	if (TurnRate != nullptr)
		*TurnRate = Parms.TurnRate;
}


// Function BP_NewClock.BP_NewClock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NewClock_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NewClock_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

