#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_BPI_GizmoMode

#include "Basic.hpp"

#include "IGLE_BPI_GizmoMode_classes.hpp"
#include "IGLE_BPI_GizmoMode_parameters.hpp"


namespace SDK
{

// Function IGLE_BPI_GizmoMode.IGLE_BPI_GizmoMode_C.GenerateGizmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIGLE_A_Gizmo_C*                  GizmoOuter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IIGLE_BPI_GizmoMode_C::GenerateGizmo(class AIGLE_A_Gizmo_C* GizmoOuter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_BPI_GizmoMode_C", "GenerateGizmo");

	Params::IGLE_BPI_GizmoMode_C_GenerateGizmo Parms{};

	Parms.GizmoOuter = GizmoOuter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_BPI_GizmoMode.IGLE_BPI_GizmoMode_C.TickGizmo
// (Public, BlueprintCallable, BlueprintEvent)

void IIGLE_BPI_GizmoMode_C::TickGizmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_BPI_GizmoMode_C", "TickGizmo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_BPI_GizmoMode.IGLE_BPI_GizmoMode_C.UpdateGizmoSpace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EIGLE_E_GizmoSpace                      New_Gizmo_Space                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIGLE_BPI_GizmoMode_C::UpdateGizmoSpace(EIGLE_E_GizmoSpace New_Gizmo_Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_BPI_GizmoMode_C", "UpdateGizmoSpace");

	Params::IGLE_BPI_GizmoMode_C_UpdateGizmoSpace Parms{};

	Parms.New_Gizmo_Space = New_Gizmo_Space;

	UObject::ProcessEvent(Func, &Parms);
}

}
