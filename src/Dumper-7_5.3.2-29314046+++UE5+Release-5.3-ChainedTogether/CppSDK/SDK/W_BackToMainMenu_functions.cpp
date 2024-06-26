#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BackToMainMenu

#include "Basic.hpp"

#include "W_BackToMainMenu_classes.hpp"
#include "W_BackToMainMenu_parameters.hpp"


namespace SDK
{

// Function W_BackToMainMenu.W_BackToMainMenu_C.AllPC_Ended
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_BackToMainMenu_C::AllPC_Ended()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BackToMainMenu_C", "AllPC_Ended");

	Params::W_BackToMainMenu_C_AllPC_Ended Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_BackToMainMenu.W_BackToMainMenu_C.BndEvt__W_BackToMainMenu_Button_23_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_BackToMainMenu_C::BndEvt__W_BackToMainMenu_Button_23_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BackToMainMenu_C", "BndEvt__W_BackToMainMenu_Button_23_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BackToMainMenu.W_BackToMainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_BackToMainMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BackToMainMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BackToMainMenu.W_BackToMainMenu_C.ExecuteUbergraph_W_BackToMainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BackToMainMenu_C::ExecuteUbergraph_W_BackToMainMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BackToMainMenu_C", "ExecuteUbergraph_W_BackToMainMenu");

	Params::W_BackToMainMenu_C_ExecuteUbergraph_W_BackToMainMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

