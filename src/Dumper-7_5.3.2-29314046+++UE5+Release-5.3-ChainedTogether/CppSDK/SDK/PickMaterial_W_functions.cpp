#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickMaterial_W

#include "Basic.hpp"

#include "PickMaterial_W_classes.hpp"
#include "PickMaterial_W_parameters.hpp"


namespace SDK
{

// Function PickMaterial_W.PickMaterial_W_C.BndEvt__PickMaterial_W_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPickMaterial_W_C::BndEvt__PickMaterial_W_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickMaterial_W_C", "BndEvt__PickMaterial_W_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickMaterial_W.PickMaterial_W_C.BndEvt__PickMaterial_W_EditableTextBox_140_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPickMaterial_W_C::BndEvt__PickMaterial_W_EditableTextBox_140_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickMaterial_W_C", "BndEvt__PickMaterial_W_EditableTextBox_140_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::PickMaterial_W_C_BndEvt__PickMaterial_W_EditableTextBox_140_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PickMaterial_W.PickMaterial_W_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPickMaterial_W_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickMaterial_W_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PickMaterial_W.PickMaterial_W_C.ExecuteUbergraph_PickMaterial_W
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickMaterial_W_C::ExecuteUbergraph_PickMaterial_W(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PickMaterial_W_C", "ExecuteUbergraph_PickMaterial_W");

	Params::PickMaterial_W_C_ExecuteUbergraph_PickMaterial_W Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
