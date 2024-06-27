#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Stairs_BP

#include "Basic.hpp"

#include "Stairs_BP_classes.hpp"
#include "Stairs_BP_parameters.hpp"


namespace SDK
{

// Function Stairs_BP.Stairs_BP_C.ExecuteUbergraph_Stairs_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStairs_BP_C::ExecuteUbergraph_Stairs_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "ExecuteUbergraph_Stairs_BP");

	Params::Stairs_BP_C_ExecuteUbergraph_Stairs_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Stairs_BP.Stairs_BP_C.HideStairs
// (BlueprintCallable, BlueprintEvent)

void AStairs_BP_C::HideStairs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "HideStairs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.IsActivated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStairs_BP_C::IsActivated(bool* Activated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "IsActivated");

	Params::Stairs_BP_C_IsActivated Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Activated != nullptr)
		*Activated = Parms.Activated;
}


// Function Stairs_BP.Stairs_BP_C.Pushed
// (Public, BlueprintCallable, BlueprintEvent)

void AStairs_BP_C::Pushed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Pushed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStairs_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Released
// (Public, BlueprintCallable, BlueprintEvent)

void AStairs_BP_C::Released()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Released");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)

void AStairs_BP_C::ResetDoOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "ResetDoOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.ShowStairs
// (BlueprintCallable, BlueprintEvent)

void AStairs_BP_C::ShowStairs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "ShowStairs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.ShowStairsAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AStairs_BP_C::ShowStairsAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "ShowStairsAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.StairLoop
// (BlueprintCallable, BlueprintEvent)

void AStairs_BP_C::StairLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "StairLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_2__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_2__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_3__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_3__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_4__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_4__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_4__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_4__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_5__FinishedFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_5__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_5__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.Timeline_5__UpdateFunc
// (BlueprintEvent)

void AStairs_BP_C::Timeline_5__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "Timeline_5__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Stairs_BP.Stairs_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStairs_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Stairs_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
