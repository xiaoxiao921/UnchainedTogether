#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Road_Four_Jonction_BP

#include "Basic.hpp"

#include "Road_Four_Jonction_BP_classes.hpp"
#include "Road_Four_Jonction_BP_parameters.hpp"


namespace SDK
{

// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.Add Roads At End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::Add_Roads_At_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "Add Roads At End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.Add Roads At End 
// (BlueprintCallable, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::Add_Roads_At_End_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "Add Roads At End ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.Connect Road At this Index
// (BlueprintCallable, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::Connect_Road_At_this_Index()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "Connect Road At this Index");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.Connect Road To 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Con_Rotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARoad_Four_Jonction_BP_C::Connect_Road_To_(const struct FVector& Location, const struct FRotator& Con_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "Connect Road To ");

	Params::Road_Four_Jonction_BP_C_Connect_Road_To_ Parms{};

	Parms.Location = std::move(Location);
	Parms.Con_Rotation = std::move(Con_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.ExecuteUbergraph_Road_Four_Jonction_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARoad_Four_Jonction_BP_C::ExecuteUbergraph_Road_Four_Jonction_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "ExecuteUbergraph_Road_Four_Jonction_BP");

	Params::Road_Four_Jonction_BP_C_ExecuteUbergraph_Road_Four_Jonction_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.MoveRoadAtThisIndex
// (BlueprintCallable, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::MoveRoadAtThisIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "MoveRoadAtThisIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.Perform Landscape Adjustation
// (BlueprintCallable, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::Perform_Landscape_Adjustation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "Perform Landscape Adjustation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.PerformLandscapeAdjustation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::PerformLandscapeAdjustation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "PerformLandscapeAdjustation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.Set Road Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_HitActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARoad_Four_Jonction_BP_C::Set_Road_Location(const struct FVector& Location, class AActor* Param_HitActor, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "Set Road Location");

	Params::Road_Four_Jonction_BP_C_Set_Road_Location Parms{};

	Parms.Location = std::move(Location);
	Parms.Param_HitActor = Param_HitActor;
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.Spawn Road At this Con
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::Spawn_Road_At_this_Con()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "Spawn Road At this Con");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.Spawn Road At this Con 
// (BlueprintCallable, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::Spawn_Road_At_this_Con_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "Spawn Road At this Con ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_Four_Jonction_BP.Road_Four_Jonction_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoad_Four_Jonction_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_Four_Jonction_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
