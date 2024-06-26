#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FL_Widgets

#include "Basic.hpp"

#include "FL_Widgets_classes.hpp"
#include "FL_Widgets_parameters.hpp"


namespace SDK
{

// Function FL_Widgets.FL_Widgets_C.RemoveAllWidgetsOfClass
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFL_Widgets_C::RemoveAllWidgetsOfClass(TSoftClassPtr<class UClass> Widget, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_Widgets_C", "RemoveAllWidgetsOfClass");

	Params::FL_Widgets_C_RemoveAllWidgetsOfClass Parms{};

	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FL_Widgets.FL_Widgets_C.ShowNotification
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMargin                          Padding                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFL_Widgets_C::ShowNotification(double Delay, const class FText& Message, const struct FMargin& Padding, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_Widgets_C", "ShowNotification");

	Params::FL_Widgets_C_ShowNotification Parms{};

	Parms.Delay = Delay;
	Parms.Message = std::move(Message);
	Parms.Padding = std::move(Padding);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

