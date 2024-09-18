#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_W_BoxSelect

#include "Basic.hpp"

#include "IGLE_W_BoxSelect_classes.hpp"
#include "IGLE_W_BoxSelect_parameters.hpp"


namespace SDK
{

// Function IGLE_W_BoxSelect.IGLE_W_BoxSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIGLE_W_BoxSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_BoxSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IGLE_W_BoxSelect.IGLE_W_BoxSelect_C.ExecuteUbergraph_IGLE_W_BoxSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_W_BoxSelect_C::ExecuteUbergraph_IGLE_W_BoxSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_BoxSelect_C", "ExecuteUbergraph_IGLE_W_BoxSelect");

	Params::IGLE_W_BoxSelect_C_ExecuteUbergraph_IGLE_W_BoxSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_W_BoxSelect.IGLE_W_BoxSelect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_W_BoxSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_W_BoxSelect_C", "Tick");

	Params::IGLE_W_BoxSelect_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

