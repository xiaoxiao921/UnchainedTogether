#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingsVerticalBox

#include "Basic.hpp"

#include "W_SettingsVerticalBox_classes.hpp"
#include "W_SettingsVerticalBox_parameters.hpp"


namespace SDK
{

// Function W_SettingsVerticalBox.W_SettingsVerticalBox_C.Try Add Setting Subcategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SettingSubCategory                    SubCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SettingSubCategory_C*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UW_SettingSubCategory_C* UW_SettingsVerticalBox_C::Try_Add_Setting_Subcategory(E_SettingSubCategory SubCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_SettingsVerticalBox_C", "Try Add Setting Subcategory");

	Params::W_SettingsVerticalBox_C_Try_Add_Setting_Subcategory Parms{};

	Parms.SubCategory = SubCategory;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

