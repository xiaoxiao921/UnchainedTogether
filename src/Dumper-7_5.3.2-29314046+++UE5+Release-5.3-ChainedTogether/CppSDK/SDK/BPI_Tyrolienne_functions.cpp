#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Tyrolienne

#include "Basic.hpp"

#include "BPI_Tyrolienne_classes.hpp"
#include "BPI_Tyrolienne_parameters.hpp"


namespace SDK
{

// Function BPI_Tyrolienne.BPI_Tyrolienne_C.BPI_BeginMove
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Tyrolienne_C::BPI_BeginMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Tyrolienne_C", "BPI_BeginMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_Tyrolienne.BPI_Tyrolienne_C.BPI_SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Tyrolienne_C::BPI_SetCharacter(class APawn* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Tyrolienne_C", "BPI_SetCharacter");

	Params::BPI_Tyrolienne_C_BPI_SetCharacter Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_Tyrolienne.BPI_Tyrolienne_C.GetAttachSocketArrow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArrowComponent*                  Arrow                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_Tyrolienne_C::GetAttachSocketArrow(class UArrowComponent** Arrow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Tyrolienne_C", "GetAttachSocketArrow");

	Params::BPI_Tyrolienne_C_GetAttachSocketArrow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Arrow != nullptr)
		*Arrow = Parms.Arrow;
}


// Function BPI_Tyrolienne.BPI_Tyrolienne_C.GetHandSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USphereComponent*                 HandSocket                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_Tyrolienne_C::GetHandSocket(class USphereComponent** HandSocket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Tyrolienne_C", "GetHandSocket");

	Params::BPI_Tyrolienne_C_GetHandSocket Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HandSocket != nullptr)
		*HandSocket = Parms.HandSocket;
}


// Function BPI_Tyrolienne.BPI_Tyrolienne_C.GetStaticMeshComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             SM                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_Tyrolienne_C::GetStaticMeshComp(class UStaticMeshComponent** SM)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Tyrolienne_C", "GetStaticMeshComp");

	Params::BPI_Tyrolienne_C_GetStaticMeshComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SM != nullptr)
		*SM = Parms.SM;
}

}
