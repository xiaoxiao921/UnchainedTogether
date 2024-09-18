#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IGLE_FoliagePropertyValueObject

#include "Basic.hpp"

#include "IGLE_FoliagePropertyValueObject_classes.hpp"
#include "IGLE_FoliagePropertyValueObject_parameters.hpp"


namespace SDK
{

// Function IGLE_FoliagePropertyValueObject.IGLE_FoliagePropertyValueObject_C.ExecuteUbergraph_IGLE_FoliagePropertyValueObject
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_FoliagePropertyValueObject_C::ExecuteUbergraph_IGLE_FoliagePropertyValueObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_FoliagePropertyValueObject_C", "ExecuteUbergraph_IGLE_FoliagePropertyValueObject");

	Params::IGLE_FoliagePropertyValueObject_C_ExecuteUbergraph_IGLE_FoliagePropertyValueObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IGLE_FoliagePropertyValueObject.IGLE_FoliagePropertyValueObject_C.RemoveFoliageIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IndexToRemove                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIGLE_FoliagePropertyValueObject_C::RemoveFoliageIndex(int32 IndexToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IGLE_FoliagePropertyValueObject_C", "RemoveFoliageIndex");

	Params::IGLE_FoliagePropertyValueObject_C_RemoveFoliageIndex Parms{};

	Parms.IndexToRemove = IndexToRemove;

	UObject::ProcessEvent(Func, &Parms);
}

}

