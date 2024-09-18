#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BrowseUGCLevel_W

#include "Basic.hpp"

#include "BrowseUGCLevel_W_classes.hpp"
#include "BrowseUGCLevel_W_parameters.hpp"


namespace SDK
{

// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.Add_UGC_Items
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUGCQueryHandle                  HandleIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBrowseUGCLevel_W_C::Add_UGC_Items(const struct FUGCQueryHandle& HandleIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "Add_UGC_Items");

	Params::BrowseUGCLevel_W_C_Add_UGC_Items Parms{};

	Parms.HandleIn = std::move(HandleIn);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.AddSpacesBeforeUpperLetters
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           SourceString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           StringOut                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBrowseUGCLevel_W_C::AddSpacesBeforeUpperLetters(const class FString& SourceString, class FString* StringOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "AddSpacesBeforeUpperLetters");

	Params::BrowseUGCLevel_W_C_AddSpacesBeforeUpperLetters Parms{};

	Parms.SourceString = std::move(SourceString);

	UObject::ProcessEvent(Func, &Parms);

	if (StringOut != nullptr)
		*StringOut = std::move(Parms.StringOut);
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.BndEvt__BrowseUGCLevel_W_Button_82_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBrowseUGCLevel_W_C::BndEvt__BrowseUGCLevel_W_Button_82_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "BndEvt__BrowseUGCLevel_W_Button_82_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.BndEvt__BrowseUGCLevel_W_ComboBoxString_75_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrowseUGCLevel_W_C::BndEvt__BrowseUGCLevel_W_ComboBoxString_75_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "BndEvt__BrowseUGCLevel_W_ComboBoxString_75_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::BrowseUGCLevel_W_C_BndEvt__BrowseUGCLevel_W_ComboBoxString_75_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.BndEvt__BrowseUGCLevel_W_Down_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBrowseUGCLevel_W_C::BndEvt__BrowseUGCLevel_W_Down_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "BndEvt__BrowseUGCLevel_W_Down_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.BndEvt__BrowseUGCLevel_W_Up_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBrowseUGCLevel_W_C::BndEvt__BrowseUGCLevel_W_Up_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "BndEvt__BrowseUGCLevel_W_Up_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBrowseUGCLevel_W_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.ExecuteUbergraph_BrowseUGCLevel_W
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrowseUGCLevel_W_C::ExecuteUbergraph_BrowseUGCLevel_W(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "ExecuteUbergraph_BrowseUGCLevel_W");

	Params::BrowseUGCLevel_W_C_ExecuteUbergraph_BrowseUGCLevel_W Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.FindQueryTypeByString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Query_String                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESteamUGCQuery                          Query                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrowseUGCLevel_W_C::FindQueryTypeByString(const class FString& Query_String, ESteamUGCQuery* Query)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "FindQueryTypeByString");

	Params::BrowseUGCLevel_W_C_FindQueryTypeByString Parms{};

	Parms.Query_String = std::move(Query_String);

	UObject::ProcessEvent(Func, &Parms);

	if (Query != nullptr)
		*Query = Parms.Query;
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.OnCallback_080A699F435ABCA73E2C70B014FD3C73
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamUGCQueryCompleted          Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrowseUGCLevel_W_C::OnCallback_080A699F435ABCA73E2C70B014FD3C73(const struct FSteamUGCQueryCompleted& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "OnCallback_080A699F435ABCA73E2C70B014FD3C73");

	Params::BrowseUGCLevel_W_C_OnCallback_080A699F435ABCA73E2C70B014FD3C73 Parms{};

	Parms.Data = std::move(Data);
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BrowseUGCLevel_W.BrowseUGCLevel_W_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UBrowseUGCLevel_W_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrowseUGCLevel_W_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}
