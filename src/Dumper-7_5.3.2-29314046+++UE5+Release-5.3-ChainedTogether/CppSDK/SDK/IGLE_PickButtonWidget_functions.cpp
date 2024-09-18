#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_PickButtonWidget

#include "Basic.hpp"

#include "IGLE_PickButtonWidget_classes.hpp"
#include "IGLE_PickButtonWidget_parameters.hpp"


namespace SDK
{

// Function IGLE_PickButtonWidget.IGLE_PickButtonWidget_C.BndEvt__IGLE_MeshWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIGLE_PickButtonWidget_C::BndEvt__IGLE_MeshWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_PickButtonWidget_C", "BndEvt__IGLE_MeshWidget_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_PickButtonWidget.IGLE_PickButtonWidget_C.BndEvt__IGLE_PickSplineWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UIGLE_PickButtonWidget_C::BndEvt__IGLE_PickSplineWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_PickButtonWidget_C", "BndEvt__IGLE_PickSplineWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_PickButtonWidget.IGLE_PickButtonWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIGLE_PickButtonWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_PickButtonWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_PickButtonWidget.IGLE_PickButtonWidget_C.ExecuteUbergraph_IGLE_PickButtonWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_PickButtonWidget_C::ExecuteUbergraph_IGLE_PickButtonWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_PickButtonWidget_C", "ExecuteUbergraph_IGLE_PickButtonWidget");

	Params::IGLE_PickButtonWidget_C_ExecuteUbergraph_IGLE_PickButtonWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_PickButtonWidget.IGLE_PickButtonWidget_C.GetName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           SourceString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UIGLE_PickButtonWidget_C::GetName(const class FString& SourceString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_PickButtonWidget_C", "GetName");

	Params::IGLE_PickButtonWidget_C_GetName Parms{};

	Parms.SourceString = std::move(SourceString);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function IGLE_PickButtonWidget.IGLE_PickButtonWidget_C.RefreshButton
// (BlueprintCallable, BlueprintEvent)

void UIGLE_PickButtonWidget_C::RefreshButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_PickButtonWidget_C", "RefreshButton");

	UObject::ProcessEvent(Func, nullptr);
}

}
