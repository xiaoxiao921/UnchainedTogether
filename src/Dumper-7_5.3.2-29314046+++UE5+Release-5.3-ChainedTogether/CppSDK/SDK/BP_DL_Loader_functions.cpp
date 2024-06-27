#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DL_Loader

#include "Basic.hpp"

#include "BP_DL_Loader_classes.hpp"
#include "BP_DL_Loader_parameters.hpp"


namespace SDK
{

// Function BP_DL_Loader.BP_DL_Loader_C.BndEvt__BP_DL_Loader_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_DL_Loader_C::BndEvt__BP_DL_Loader_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DL_Loader_C", "BndEvt__BP_DL_Loader_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_DL_Loader_C_BndEvt__BP_DL_Loader_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DL_Loader.BP_DL_Loader_C.BndEvt__BP_DL_Loader_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DL_Loader_C::BndEvt__BP_DL_Loader_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DL_Loader_C", "BndEvt__BP_DL_Loader_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_DL_Loader_C_BndEvt__BP_DL_Loader_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DL_Loader.BP_DL_Loader_C.ContainsControlledPawns
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Contains                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            AsPawn                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DL_Loader_C::ContainsControlledPawns(bool* Contains, class APawn** AsPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DL_Loader_C", "ContainsControlledPawns");

	Params::BP_DL_Loader_C_ContainsControlledPawns Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Contains != nullptr)
		*Contains = Parms.Contains;

	if (AsPawn != nullptr)
		*AsPawn = Parms.AsPawn;
}


// Function BP_DL_Loader.BP_DL_Loader_C.ExecuteUbergraph_BP_DL_Loader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DL_Loader_C::ExecuteUbergraph_BP_DL_Loader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DL_Loader_C", "ExecuteUbergraph_BP_DL_Loader");

	Params::BP_DL_Loader_C_ExecuteUbergraph_BP_DL_Loader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DL_Loader.BP_DL_Loader_C.LoadUnloadAll
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Loaded                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DL_Loader_C::LoadUnloadAll(bool Param_Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DL_Loader_C", "LoadUnloadAll");

	Params::BP_DL_Loader_C_LoadUnloadAll Parms{};

	Parms.Param_Loaded = Param_Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DL_Loader.BP_DL_Loader_C.OnLoaded_FF8DAC9E4553BFD445F1FA8A6FED575B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Param_Loaded                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DL_Loader_C::OnLoaded_FF8DAC9E4553BFD445F1FA8A6FED575B(class UObject* Param_Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DL_Loader_C", "OnLoaded_FF8DAC9E4553BFD445F1FA8A6FED575B");

	Params::BP_DL_Loader_C_OnLoaded_FF8DAC9E4553BFD445F1FA8A6FED575B Parms{};

	Parms.Param_Loaded = Param_Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DL_Loader.BP_DL_Loader_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DL_Loader_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DL_Loader_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DL_Loader.BP_DL_Loader_C.ShowElements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DL_Loader_C::ShowElements(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DL_Loader_C", "ShowElements");

	Params::BP_DL_Loader_C_ShowElements Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}

}
