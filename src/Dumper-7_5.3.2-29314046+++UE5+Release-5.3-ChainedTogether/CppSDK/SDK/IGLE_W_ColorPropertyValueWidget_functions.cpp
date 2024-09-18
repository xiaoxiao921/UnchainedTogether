#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_ColorPropertyValueWidget

#include "Basic.hpp"

#include "IGLE_W_ColorPropertyValueWidget_classes.hpp"
#include "IGLE_W_ColorPropertyValueWidget_parameters.hpp"


namespace SDK
{

// Function IGLE_W_ColorPropertyValueWidget.IGLE_W_ColorPropertyValueWidget_C.BndEvt__IGLE_W_StringPropertyValueWidget_RamaColorPicker_164_K2Node_ComponentBoundEvent_1_OnJoyColorChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FLinearColor                     NewColor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_W_ColorPropertyValueWidget_C::BndEvt__IGLE_W_StringPropertyValueWidget_RamaColorPicker_164_K2Node_ComponentBoundEvent_1_OnJoyColorChangedEvent__DelegateSignature(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_ColorPropertyValueWidget_C", "BndEvt__IGLE_W_StringPropertyValueWidget_RamaColorPicker_164_K2Node_ComponentBoundEvent_1_OnJoyColorChangedEvent__DelegateSignature");

	Params::IGLE_W_ColorPropertyValueWidget_C_BndEvt__IGLE_W_StringPropertyValueWidget_RamaColorPicker_164_K2Node_ComponentBoundEvent_1_OnJoyColorChangedEvent__DelegateSignature Parms{};

	Parms.NewColor = std::move(NewColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_W_ColorPropertyValueWidget.IGLE_W_ColorPropertyValueWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIGLE_W_ColorPropertyValueWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_ColorPropertyValueWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_W_ColorPropertyValueWidget.IGLE_W_ColorPropertyValueWidget_C.ExecuteUbergraph_IGLE_W_ColorPropertyValueWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_W_ColorPropertyValueWidget_C::ExecuteUbergraph_IGLE_W_ColorPropertyValueWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_ColorPropertyValueWidget_C", "ExecuteUbergraph_IGLE_W_ColorPropertyValueWidget");

	Params::IGLE_W_ColorPropertyValueWidget_C_ExecuteUbergraph_IGLE_W_ColorPropertyValueWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
