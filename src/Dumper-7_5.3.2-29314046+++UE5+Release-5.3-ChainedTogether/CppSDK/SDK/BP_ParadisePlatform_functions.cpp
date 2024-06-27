#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ParadisePlatform

#include "Basic.hpp"

#include "BP_ParadisePlatform_classes.hpp"
#include "BP_ParadisePlatform_parameters.hpp"


namespace SDK
{

// Function BP_ParadisePlatform.BP_ParadisePlatform_C.RandomBushLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  X                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Y                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ParadisePlatform_C::RandomBushLocation(double* X, double* Y)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ParadisePlatform_C", "RandomBushLocation");

	Params::BP_ParadisePlatform_C_RandomBushLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;
}


// Function BP_ParadisePlatform.BP_ParadisePlatform_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ParadisePlatform_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ParadisePlatform_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
