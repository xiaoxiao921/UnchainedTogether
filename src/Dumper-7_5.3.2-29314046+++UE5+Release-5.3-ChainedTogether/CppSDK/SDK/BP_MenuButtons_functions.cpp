#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuButtons

#include "Basic.hpp"

#include "BP_MenuButtons_classes.hpp"
#include "BP_MenuButtons_parameters.hpp"


namespace SDK
{

// Function BP_MenuButtons.BP_MenuButtons_C.AnimatePlay
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuButtons_C::AnimatePlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "AnimatePlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.AnimateQuit
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuButtons_C::AnimateQuit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "AnimateQuit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.AnimateSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuButtons_C::AnimateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "AnimateSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.ExecuteUbergraph_BP_MenuButtons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuButtons_C::ExecuteUbergraph_BP_MenuButtons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "ExecuteUbergraph_BP_MenuButtons");

	Params::BP_MenuButtons_C_ExecuteUbergraph_BP_MenuButtons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuButtons.BP_MenuButtons_C.HighlightPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Highlight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuButtons_C::HighlightPlay(bool Highlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "HighlightPlay");

	Params::BP_MenuButtons_C_HighlightPlay Parms{};

	Parms.Highlight = Highlight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuButtons.BP_MenuButtons_C.HighlightQuit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Highlight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuButtons_C::HighlightQuit(bool Highlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "HighlightQuit");

	Params::BP_MenuButtons_C_HighlightQuit Parms{};

	Parms.Highlight = Highlight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuButtons.BP_MenuButtons_C.HighlightSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Highlight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuButtons_C::HighlightSettings(bool Highlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "HighlightSettings");

	Params::BP_MenuButtons_C_HighlightSettings Parms{};

	Parms.Highlight = Highlight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuButtons.BP_MenuButtons_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuButtons_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuButtons_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "ReceiveTick");

	Params::BP_MenuButtons_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuButtons.BP_MenuButtons_C.RemoveSaveWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>              Widgets                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UUserWidget*>              WidgetsOut                                             (Parm, OutParm, ContainsInstancedReference)

void ABP_MenuButtons_C::RemoveSaveWidget(TArray<class UUserWidget*>& Widgets, TArray<class UUserWidget*>* WidgetsOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "RemoveSaveWidget");

	Params::BP_MenuButtons_C_RemoveSaveWidget Parms{};

	Parms.Widgets = std::move(Widgets);

	UObject::ProcessEvent(Func, &Parms);

	Widgets = std::move(Parms.Widgets);

	if (WidgetsOut != nullptr)
		*WidgetsOut = std::move(Parms.WidgetsOut);
}


// Function BP_MenuButtons.BP_MenuButtons_C.ResetHover
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuButtons_C::ResetHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "ResetHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_2__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_2__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_3__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_3__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_4__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_4__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_4__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_4__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_5__FinishedFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_5__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_5__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_5__UpdateFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_5__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_5__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_6__FinishedFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_6__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_6__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_6__UpdateFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_6__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_6__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_7__FinishedFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_7__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_7__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline_7__UpdateFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline_7__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline_7__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_MenuButtons_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuButtons.BP_MenuButtons_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuButtons_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuButtons_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
