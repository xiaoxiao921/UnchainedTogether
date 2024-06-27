#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DestructiveWall

#include "Basic.hpp"

#include "BP_DestructiveWall_classes.hpp"
#include "BP_DestructiveWall_parameters.hpp"


namespace SDK
{

// Function BP_DestructiveWall.BP_DestructiveWall_C.Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DestructiveWall_C::Destroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestructiveWall_C", "Destroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DestructiveWall.BP_DestructiveWall_C.ExecuteUbergraph_BP_DestructiveWall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DestructiveWall_C::ExecuteUbergraph_BP_DestructiveWall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestructiveWall_C", "ExecuteUbergraph_BP_DestructiveWall");

	Params::BP_DestructiveWall_C_ExecuteUbergraph_BP_DestructiveWall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DestructiveWall.BP_DestructiveWall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DestructiveWall_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestructiveWall_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DestructiveWall.BP_DestructiveWall_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DestructiveWall_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestructiveWall_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
