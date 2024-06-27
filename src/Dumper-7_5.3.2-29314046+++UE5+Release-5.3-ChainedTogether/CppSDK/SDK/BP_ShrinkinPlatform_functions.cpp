#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShrinkinPlatform

#include "Basic.hpp"

#include "BP_ShrinkinPlatform_classes.hpp"
#include "BP_ShrinkinPlatform_parameters.hpp"


namespace SDK
{

// Function BP_ShrinkinPlatform.BP_ShrinkinPlatform_C.ExecuteUbergraph_BP_ShrinkinPlatform
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShrinkinPlatform_C::ExecuteUbergraph_BP_ShrinkinPlatform(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkinPlatform_C", "ExecuteUbergraph_BP_ShrinkinPlatform");

	Params::BP_ShrinkinPlatform_C_ExecuteUbergraph_BP_ShrinkinPlatform Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShrinkinPlatform.BP_ShrinkinPlatform_C.IsSomeoneOnIt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Mantling                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ShrinkinPlatform_C::IsSomeoneOnIt(bool* Mantling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkinPlatform_C", "IsSomeoneOnIt");

	Params::BP_ShrinkinPlatform_C_IsSomeoneOnIt Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mantling != nullptr)
		*Mantling = Parms.Mantling;

	return Parms.ReturnValue;
}


// Function BP_ShrinkinPlatform.BP_ShrinkinPlatform_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShrinkinPlatform_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkinPlatform_C", "ReceiveTick");

	Params::BP_ShrinkinPlatform_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShrinkinPlatform.BP_ShrinkinPlatform_C.UpdateCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShrinkinPlatform_C::UpdateCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkinPlatform_C", "UpdateCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShrinkinPlatform.BP_ShrinkinPlatform_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShrinkinPlatform_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShrinkinPlatform_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
