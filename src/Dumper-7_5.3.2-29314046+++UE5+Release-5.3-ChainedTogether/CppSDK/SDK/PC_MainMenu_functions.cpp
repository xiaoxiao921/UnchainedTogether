#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC_MainMenu

#include "Basic.hpp"

#include "PC_MainMenu_classes.hpp"
#include "PC_MainMenu_parameters.hpp"


namespace SDK
{

// Function PC_MainMenu.PC_MainMenu_C.ExecuteUbergraph_PC_MainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::ExecuteUbergraph_PC_MainMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "ExecuteUbergraph_PC_MainMenu");

	Params::PC_MainMenu_C_ExecuteUbergraph_PC_MainMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.GetAudioDevices
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Devices                                                (Parm, OutParm)

void APC_MainMenu_C::GetAudioDevices(TArray<class FString>* Devices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "GetAudioDevices");

	Params::PC_MainMenu_C_GetAudioDevices Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Devices != nullptr)
		*Devices = std::move(Parms.Devices);
}


// Function PC_MainMenu.PC_MainMenu_C.GetControlledActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::GetControlledActor(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "GetControlledActor");

	Params::PC_MainMenu_C_GetControlledActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;
}


// Function PC_MainMenu.PC_MainMenu_C.PlayAudioComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*                  AudioComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::PlayAudioComponent(class UAudioComponent* AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "PlayAudioComponent");

	Params::PC_MainMenu_C_PlayAudioComponent Parms{};

	Parms.AudioComponent = AudioComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::PlaySound(class USoundWave* Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "PlaySound");

	Params::PC_MainMenu_C_PlaySound Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.RefreshTestControlChar
// (Public, BlueprintCallable, BlueprintEvent)

void APC_MainMenu_C::RefreshTestControlChar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "RefreshTestControlChar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PC_MainMenu.PC_MainMenu_C.RequestCharacterSpawnSRV
// (Public, BlueprintCallable, BlueprintEvent)

void APC_MainMenu_C::RequestCharacterSpawnSRV()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "RequestCharacterSpawnSRV");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PC_MainMenu.PC_MainMenu_C.Rescue(Srv)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              RescueComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    ExitingCar                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::Rescue_Srv_(class UPrimitiveComponent* RescueComponent, bool ExitingCar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "Rescue(Srv)");

	Params::PC_MainMenu_C_Rescue_Srv_ Parms{};

	Parms.RescueComponent = RescueComponent;
	Parms.ExitingCar = ExitingCar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.SendMessageClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void APC_MainMenu_C::SendMessageClient(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "SendMessageClient");

	Params::PC_MainMenu_C_SendMessageClient Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.SetAudioDevice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Device                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void APC_MainMenu_C::SetAudioDevice(const class FString& Device)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "SetAudioDevice");

	Params::PC_MainMenu_C_SetAudioDevice Parms{};

	Parms.Device = std::move(Device);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.SetControlledPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::SetControlledPawn(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "SetControlledPawn");

	Params::PC_MainMenu_C_SetControlledPawn Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.SetLocalMpChosenChar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ChoosenChar                           Char                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::SetLocalMpChosenChar(E_ChoosenChar Char)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "SetLocalMpChosenChar");

	Params::PC_MainMenu_C_SetLocalMpChosenChar Parms{};

	Parms.Char = Char;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.ShowTchatUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RefreshTchat                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::ShowTchatUI(bool RefreshTchat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "ShowTchatUI");

	Params::PC_MainMenu_C_ShowTchatUI Parms{};

	Parms.RefreshTchat = RefreshTchat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.SpawnCharacter(Srv)
// (Public, BlueprintCallable, BlueprintEvent)

void APC_MainMenu_C::SpawnCharacter_Srv_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "SpawnCharacter(Srv)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PC_MainMenu.PC_MainMenu_C.Trigger Moving Object
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MovingObject_C*               MovingObject                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::Trigger_Moving_Object(class ABP_MovingObject_C* MovingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "Trigger Moving Object");

	Params::PC_MainMenu_C_Trigger_Moving_Object Parms{};

	Parms.MovingObject = MovingObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_MainMenu.PC_MainMenu_C.UpdateCanEscape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_CanEscape                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APC_MainMenu_C::UpdateCanEscape(bool Param_CanEscape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_MainMenu_C", "UpdateCanEscape");

	Params::PC_MainMenu_C_UpdateCanEscape Parms{};

	Parms.Param_CanEscape = Param_CanEscape;

	UObject::ProcessEvent(Func, &Parms);
}

}
