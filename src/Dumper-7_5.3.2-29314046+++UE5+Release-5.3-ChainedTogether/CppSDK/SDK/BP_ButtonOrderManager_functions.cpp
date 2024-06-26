#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ButtonOrderManager

#include "Basic.hpp"

#include "BP_ButtonOrderManager_classes.hpp"
#include "BP_ButtonOrderManager_parameters.hpp"


namespace SDK
{

// Function BP_ButtonOrderManager.BP_ButtonOrderManager_C.ExecuteUbergraph_BP_ButtonOrderManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButtonOrderManager_C::ExecuteUbergraph_BP_ButtonOrderManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ButtonOrderManager_C", "ExecuteUbergraph_BP_ButtonOrderManager");

	Params::BP_ButtonOrderManager_C_ExecuteUbergraph_BP_ButtonOrderManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ButtonOrderManager.BP_ButtonOrderManager_C.ReceiveOrderButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Order                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButtonOrderManager_C::ReceiveOrderButton(int32 Param_Order)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ButtonOrderManager_C", "ReceiveOrderButton");

	Params::BP_ButtonOrderManager_C_ReceiveOrderButton Parms{};

	Parms.Param_Order = Param_Order;

	UObject::ProcessEvent(Func, &Parms);
}

}

