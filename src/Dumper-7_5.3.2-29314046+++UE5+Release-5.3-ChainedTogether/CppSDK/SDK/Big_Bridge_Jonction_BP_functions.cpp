#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Big_Bridge_Jonction_BP

#include "Basic.hpp"

#include "Big_Bridge_Jonction_BP_classes.hpp"
#include "Big_Bridge_Jonction_BP_parameters.hpp"


namespace SDK
{

// Function Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C.Add Road At End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABig_Bridge_Jonction_BP_C::Add_Road_At_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Big_Bridge_Jonction_BP_C", "Add Road At End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C.Add Road At End 
// (BlueprintCallable, BlueprintEvent)

void ABig_Bridge_Jonction_BP_C::Add_Road_At_End_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Big_Bridge_Jonction_BP_C", "Add Road At End ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C.Connect Road To 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Con_Rotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABig_Bridge_Jonction_BP_C::Connect_Road_To_(const struct FVector& Location, const struct FRotator& Con_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Big_Bridge_Jonction_BP_C", "Connect Road To ");

	Params::Big_Bridge_Jonction_BP_C_Connect_Road_To_ Parms{};

	Parms.Location = std::move(Location);
	Parms.Con_Rotation = std::move(Con_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C.ExecuteUbergraph_Big_Bridge_Jonction_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABig_Bridge_Jonction_BP_C::ExecuteUbergraph_Big_Bridge_Jonction_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Big_Bridge_Jonction_BP_C", "ExecuteUbergraph_Big_Bridge_Jonction_BP");

	Params::Big_Bridge_Jonction_BP_C_ExecuteUbergraph_Big_Bridge_Jonction_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABig_Bridge_Jonction_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Big_Bridge_Jonction_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C.Set Road Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_HitActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABig_Bridge_Jonction_BP_C::Set_Road_Location(const struct FVector& Location, class AActor* Param_HitActor, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Big_Bridge_Jonction_BP_C", "Set Road Location");

	Params::Big_Bridge_Jonction_BP_C_Set_Road_Location Parms{};

	Parms.Location = std::move(Location);
	Parms.Param_HitActor = Param_HitActor;
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C.Spawn Road At this Con
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABig_Bridge_Jonction_BP_C::Spawn_Road_At_this_Con()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Big_Bridge_Jonction_BP_C", "Spawn Road At this Con");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C.Spawn Road At this Con 
// (BlueprintCallable, BlueprintEvent)

void ABig_Bridge_Jonction_BP_C::Spawn_Road_At_this_Con_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Big_Bridge_Jonction_BP_C", "Spawn Road At this Con ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Big_Bridge_Jonction_BP.Big_Bridge_Jonction_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABig_Bridge_Jonction_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Big_Bridge_Jonction_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
