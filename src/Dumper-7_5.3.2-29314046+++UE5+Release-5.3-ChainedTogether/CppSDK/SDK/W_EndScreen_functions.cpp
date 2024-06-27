#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_EndScreen

#include "Basic.hpp"

#include "W_EndScreen_classes.hpp"
#include "W_EndScreen_parameters.hpp"


namespace SDK
{

// Function W_EndScreen.W_EndScreen_C.BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_EndScreen_C::BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_EndScreen_C", "BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_EndScreen.W_EndScreen_C.BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_EndScreen_C::BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_EndScreen_C", "BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_EndScreen.W_EndScreen_C.BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_EndScreen_C::BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_EndScreen_C", "BndEvt__W_EndScreen_Button_279_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_EndScreen.W_EndScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_EndScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_EndScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_EndScreen.W_EndScreen_C.ExecuteUbergraph_W_EndScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EndScreen_C::ExecuteUbergraph_W_EndScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_EndScreen_C", "ExecuteUbergraph_W_EndScreen");

	Params::W_EndScreen_C_ExecuteUbergraph_W_EndScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_EndScreen.W_EndScreen_C.OnCallback_C40E329846C5390DF3526BB1AC51162A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardFindResult           Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EndScreen_C::OnCallback_C40E329846C5390DF3526BB1AC51162A(const struct FLeaderboardFindResult& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_EndScreen_C", "OnCallback_C40E329846C5390DF3526BB1AC51162A");

	Params::W_EndScreen_C_OnCallback_C40E329846C5390DF3526BB1AC51162A Parms{};

	Parms.Data = std::move(Data);
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_EndScreen.W_EndScreen_C.OnCallback_D4619B5E464DD7DF58786BBF440CCADD
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoreUploaded        Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EndScreen_C::OnCallback_D4619B5E464DD7DF58786BBF440CCADD(const struct FLeaderboardScoreUploaded& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_EndScreen_C", "OnCallback_D4619B5E464DD7DF58786BBF440CCADD");

	Params::W_EndScreen_C_OnCallback_D4619B5E464DD7DF58786BBF440CCADD Parms{};

	Parms.Data = std::move(Data);
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_EndScreen.W_EndScreen_C.RefreshTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_EndScreen_C::RefreshTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_EndScreen_C", "RefreshTime");

	UObject::ProcessEvent(Func, nullptr);
}

}
