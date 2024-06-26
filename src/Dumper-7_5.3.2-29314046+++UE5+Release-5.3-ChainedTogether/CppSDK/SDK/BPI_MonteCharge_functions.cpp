#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MonteCharge

#include "Basic.hpp"

#include "BPI_MonteCharge_classes.hpp"


namespace SDK
{

// Function BPI_MonteCharge.BPI_MonteCharge_C.Toggle Monte Charge
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_MonteCharge_C::Toggle_Monte_Charge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MonteCharge_C", "Toggle Monte Charge");

	UObject::ProcessEvent(Func, nullptr);
}

}

