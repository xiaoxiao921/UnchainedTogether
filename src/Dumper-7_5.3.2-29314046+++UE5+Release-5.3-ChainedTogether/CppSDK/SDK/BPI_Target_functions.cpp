#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Target

#include "Basic.hpp"

#include "BPI_Target_classes.hpp"
#include "BPI_Target_parameters.hpp"


namespace SDK
{

// Function BPI_Target.BPI_Target_C.Touch
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Target_C::Touch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Target_C", "Touch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_Target.BPI_Target_C.Touched
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Touched                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Target_C::Touched(bool* Param_Touched)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Target_C", "Touched");

	Params::BPI_Target_C_Touched Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Touched != nullptr)
		*Param_Touched = Parms.Param_Touched;
}

}
