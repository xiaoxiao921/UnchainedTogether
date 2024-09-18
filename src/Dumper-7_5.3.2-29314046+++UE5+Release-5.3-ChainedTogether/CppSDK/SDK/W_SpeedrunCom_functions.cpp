#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SpeedrunCom

#include "Basic.hpp"

#include "W_SpeedrunCom_classes.hpp"
#include "W_SpeedrunCom_parameters.hpp"


namespace SDK
{

// Function W_SpeedrunCom.W_SpeedrunCom_C.BndEvt__W_SpeedrunCom_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_SpeedrunCom_C::BndEvt__W_SpeedrunCom_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "BndEvt__W_SpeedrunCom_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.BndEvt__W_SpeedrunCom_W_ComboBox_Leaderboard_K2Node_ComponentBoundEvent_2_OnComboSettingChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           NewSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::BndEvt__W_SpeedrunCom_W_ComboBox_Leaderboard_K2Node_ComponentBoundEvent_2_OnComboSettingChange__DelegateSignature(const class FString& NewSelection, ESelectInfo SelectType, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "BndEvt__W_SpeedrunCom_W_ComboBox_Leaderboard_K2Node_ComponentBoundEvent_2_OnComboSettingChange__DelegateSignature");

	Params::W_SpeedrunCom_C_BndEvt__W_SpeedrunCom_W_ComboBox_Leaderboard_K2Node_ComponentBoundEvent_2_OnComboSettingChange__DelegateSignature Parms{};

	Parms.NewSelection = std::move(NewSelection);
	Parms.SelectType = SelectType;
	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_SpeedrunCom_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.ConstructSearchURL
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UW_SpeedrunCom_C::ConstructSearchURL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "ConstructSearchURL");

	Params::W_SpeedrunCom_C_ConstructSearchURL Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::CustomEvent(const class FString& NewSelection, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "CustomEvent");

	Params::W_SpeedrunCom_C_CustomEvent Parms{};

	Parms.NewSelection = std::move(NewSelection);
	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DefaultID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::CustomEvent_0(const class FString& DefaultID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "CustomEvent_0");

	Params::W_SpeedrunCom_C_CustomEvent_0 Parms{};

	Parms.DefaultID = std::move(DefaultID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::CustomEvent_1(const class FString& NewSelection, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "CustomEvent_1");

	Params::W_SpeedrunCom_C_CustomEvent_1 Parms{};

	Parms.NewSelection = std::move(NewSelection);
	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DefaultID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::CustomEvent_2(const class FString& DefaultID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "CustomEvent_2");

	Params::W_SpeedrunCom_C_CustomEvent_2 Parms{};

	Parms.DefaultID = std::move(DefaultID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.Delimiter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           DelimiterS                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::Delimiter(class FString* DelimiterS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "Delimiter");

	Params::W_SpeedrunCom_C_Delimiter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DelimiterS != nullptr)
		*DelimiterS = std::move(Parms.DelimiterS);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.ExecuteUbergraph_W_SpeedrunCom
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::ExecuteUbergraph_W_SpeedrunCom(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "ExecuteUbergraph_W_SpeedrunCom");

	Params::W_SpeedrunCom_C_ExecuteUbergraph_W_SpeedrunCom Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.FindCategoryID_ByName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CategoryName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           CategoryID                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::FindCategoryID_ByName(const class FString& CategoryName, const class FString& Type, class FString* CategoryID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "FindCategoryID_ByName");

	Params::W_SpeedrunCom_C_FindCategoryID_ByName Parms{};

	Parms.CategoryName = std::move(CategoryName);
	Parms.Type = std::move(Type);

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryID != nullptr)
		*CategoryID = std::move(Parms.CategoryID);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.FormatURL
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           CompatibleURL                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::FormatURL(const class FString& URL, class FString* CompatibleURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "FormatURL");

	Params::W_SpeedrunCom_C_FormatURL Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);

	if (CompatibleURL != nullptr)
		*CompatibleURL = std::move(Parms.CompatibleURL);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.Generate_Levels
// (BlueprintCallable, BlueprintEvent)

void UW_SpeedrunCom_C::Generate_Levels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "Generate_Levels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.Get_Categories_Success__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::Get_Categories_Success__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "Get_Categories_Success__DelegateSignature");

	Params::W_SpeedrunCom_C_Get_Categories_Success__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.Get_Choices_And_Values
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestJsonObject*                Self2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   IDs                                                    (Parm, OutParm)
// TArray<class FString>                   Names                                                  (Parm, OutParm)
// class FString                           DefaultID                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::Get_Choices_And_Values(class UVaRestJsonObject* Self2, TArray<class FString>* IDs, TArray<class FString>* Names, class FString* DefaultID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "Get_Choices_And_Values");

	Params::W_SpeedrunCom_C_Get_Choices_And_Values Parms{};

	Parms.Self2 = Self2;

	UObject::ProcessEvent(Func, &Parms);

	if (IDs != nullptr)
		*IDs = std::move(Parms.IDs);

	if (Names != nullptr)
		*Names = std::move(Parms.Names);

	if (DefaultID != nullptr)
		*DefaultID = std::move(Parms.DefaultID);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.Get_Levels_Success__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::Get_Levels_Success__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "Get_Levels_Success__DelegateSignature");

	Params::W_SpeedrunCom_C_Get_Levels_Success__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.Get_Variables_Success__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::Get_Variables_Success__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "Get_Variables_Success__DelegateSignature");

	Params::W_SpeedrunCom_C_Get_Variables_Success__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.Level_Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Request                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::Level_Callback(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "Level_Callback");

	Params::W_SpeedrunCom_C_Level_Callback Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.MakeVariablesSearchString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           String                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::MakeVariablesSearchString(class FString* String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "MakeVariablesSearchString");

	Params::W_SpeedrunCom_C_MakeVariablesSearchString Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = std::move(Parms.String);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.OnCategoryChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::OnCategoryChange(const class FString& NewSelection, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "OnCategoryChange");

	Params::W_SpeedrunCom_C_OnCategoryChange Parms{};

	Parms.NewSelection = std::move(NewSelection);
	Parms.ID = std::move(ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.OnLevelsCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Request                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::OnLevelsCallback(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "OnLevelsCallback");

	Params::W_SpeedrunCom_C_OnLevelsCallback Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.OnRunsCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Request                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::OnRunsCallback(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "OnRunsCallback");

	Params::W_SpeedrunCom_C_OnRunsCallback Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.OnVariablesCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestRequestJSON*               Request                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::OnVariablesCallback(class UVaRestRequestJSON* Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "OnVariablesCallback");

	Params::W_SpeedrunCom_C_OnVariablesCallback Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.RefreshFromLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Level_ID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::RefreshFromLevel(const class FString& Level_ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "RefreshFromLevel");

	Params::W_SpeedrunCom_C_RefreshFromLevel Parms{};

	Parms.Level_ID = std::move(Level_ID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.RefreshResults
// (BlueprintCallable, BlueprintEvent)

void UW_SpeedrunCom_C::RefreshResults()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "RefreshResults");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_SpeedrunCom.W_SpeedrunCom_C.UpdateVariablesFromCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CategoryID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SpeedrunCom_C::UpdateVariablesFromCategory(const class FString& CategoryID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SpeedrunCom_C", "UpdateVariablesFromCategory");

	Params::W_SpeedrunCom_C_UpdateVariablesFromCategory Parms{};

	Parms.CategoryID = std::move(CategoryID);

	UObject::ProcessEvent(Func, &Parms);
}

}

