#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Cable

#include "Basic.hpp"

#include "B_Cable_classes.hpp"
#include "B_Cable_parameters.hpp"


namespace SDK
{

// Function B_Cable.B_Cable_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Cable_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Cable_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
