#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SquarePlacer

#include "Basic.hpp"

#include "BP_SquarePlacer_classes.hpp"
#include "BP_SquarePlacer_parameters.hpp"


namespace SDK
{

// Function BP_SquarePlacer.BP_SquarePlacer_C.PlaceMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  RelativeTransform_Location_X                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Relative_Transform_Location_Y                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Relative_Transform_Rotation                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SquarePlacer_C::PlaceMesh(double RelativeTransform_Location_X, double Relative_Transform_Location_Y, const struct FRotator& Relative_Transform_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquarePlacer_C", "PlaceMesh");

	Params::BP_SquarePlacer_C_PlaceMesh Parms{};

	Parms.RelativeTransform_Location_X = RelativeTransform_Location_X;
	Parms.Relative_Transform_Location_Y = Relative_Transform_Location_Y;
	Parms.Relative_Transform_Rotation = std::move(Relative_Transform_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquarePlacer.BP_SquarePlacer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SquarePlacer_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquarePlacer_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

