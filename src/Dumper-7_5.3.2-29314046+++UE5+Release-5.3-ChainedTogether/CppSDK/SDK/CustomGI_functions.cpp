#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomGI

#include "Basic.hpp"

#include "CustomGI_classes.hpp"
#include "CustomGI_parameters.hpp"


namespace SDK
{

// Function CustomGI.CustomGI_C.Assign Controllers to Players
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ControllersNumber                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::Assign_Controllers_to_Players(int32 ControllersNumber, int32 PlayerNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "Assign Controllers to Players");

	Params::CustomGI_C_Assign_Controllers_to_Players Parms{};

	Parms.ControllersNumber = ControllersNumber;
	Parms.PlayerNumber = PlayerNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.Completed_A8F4B56E4EA2901B0727DEACDC3ECE67
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                        Param_SaveGame                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::Completed_A8F4B56E4EA2901B0727DEACDC3ECE67(class USaveGame* Param_SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "Completed_A8F4B56E4EA2901B0727DEACDC3ECE67");

	Params::CustomGI_C_Completed_A8F4B56E4EA2901B0727DEACDC3ECE67 Parms{};

	Parms.Param_SaveGame = Param_SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.Completed_F68F81F54A55E596F9A7118687AB01E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                        Param_SaveGame                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::Completed_F68F81F54A55E596F9A7118687AB01E9(class USaveGame* Param_SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "Completed_F68F81F54A55E596F9A7118687AB01E9");

	Params::CustomGI_C_Completed_F68F81F54A55E596F9A7118687AB01E9 Parms{};

	Parms.Param_SaveGame = Param_SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.CustomEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LocalPlayerNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InvitedBy                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult          Session                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCustomGI_C::CustomEvent(bool bWasSuccessful, int32 LocalPlayerNum, const class FString& InvitedBy, const struct FBlueprintSessionResult& Session)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "CustomEvent");

	Params::CustomGI_C_CustomEvent Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.LocalPlayerNum = LocalPlayerNum;
	Parms.InvitedBy = std::move(InvitedBy);
	Parms.Session = std::move(Session);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.ExecuteUbergraph_CustomGI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::ExecuteUbergraph_CustomGI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "ExecuteUbergraph_CustomGI");

	Params::CustomGI_C_ExecuteUbergraph_CustomGI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.GetCollectedWings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           Wings                                                  (Parm, OutParm)

void UCustomGI_C::GetCollectedWings(TArray<int32>* Wings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetCollectedWings");

	Params::CustomGI_C_GetCollectedWings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Wings != nullptr)
		*Wings = std::move(Parms.Wings);
}


// Function CustomGI.CustomGI_C.GetDevMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_DevMode                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::GetDevMode(bool* Param_DevMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetDevMode");

	Params::CustomGI_C_GetDevMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_DevMode != nullptr)
		*Param_DevMode = Parms.Param_DevMode;
}


// Function CustomGI.CustomGI_C.GetGameAlreadyLaunched
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCustomGI_C::GetGameAlreadyLaunched()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetGameAlreadyLaunched");

	Params::CustomGI_C_GetGameAlreadyLaunched Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CustomGI.CustomGI_C.GetInputLagMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCustomGI_C::GetInputLagMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetInputLagMode");

	Params::CustomGI_C_GetInputLagMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CustomGI.CustomGI_C.GetInstructionsAlreadyShown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Shown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::GetInstructionsAlreadyShown(bool* Shown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetInstructionsAlreadyShown");

	Params::CustomGI_C_GetInstructionsAlreadyShown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Shown != nullptr)
		*Shown = Parms.Shown;
}


// Function CustomGI.CustomGI_C.GetLevelStreamingEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::GetLevelStreamingEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetLevelStreamingEnabled");

	Params::CustomGI_C_GetLevelStreamingEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}


// Function CustomGI.CustomGI_C.GetLocalMultiplayerMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCustomGI_C::GetLocalMultiplayerMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetLocalMultiplayerMode");

	Params::CustomGI_C_GetLocalMultiplayerMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CustomGI.CustomGI_C.GetPlayersInSession
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_PlayersInSession                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::GetPlayersInSession(int32* Param_PlayersInSession)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetPlayersInSession");

	Params::CustomGI_C_GetPlayersInSession Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_PlayersInSession != nullptr)
		*Param_PlayersInSession = Parms.Param_PlayersInSession;
}


// Function CustomGI.CustomGI_C.GetTestControl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TestControl                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::GetTestControl(bool* TestControl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetTestControl");

	Params::CustomGI_C_GetTestControl Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TestControl != nullptr)
		*TestControl = Parms.TestControl;
}


// Function CustomGI.CustomGI_C.GetTestPlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::GetTestPlayers(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetTestPlayers");

	Params::CustomGI_C_GetTestPlayers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;
}


// Function CustomGI.CustomGI_C.GetTrueChainVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::GetTrueChainVisible(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "GetTrueChainVisible");

	Params::CustomGI_C_GetTrueChainVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function CustomGI.CustomGI_C.InitProgressSave
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomGI_C::InitProgressSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "InitProgressSave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomGI.CustomGI_C.ManualSave
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BiomeSave                     NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UCustomGI_C::ManualSave(const struct FS_BiomeSave& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "ManualSave");

	Params::CustomGI_C_ManualSave Parms{};

	Parms.NewItem = std::move(NewItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.ManualSaveFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::ManualSaveFinished__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "ManualSaveFinished__DelegateSignature");

	Params::CustomGI_C_ManualSaveFinished__DelegateSignature Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.OnCallback_D5E80CEA418652AD060EBBB5684EDCE8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRequestCurrentStatsData         Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::OnCallback_D5E80CEA418652AD060EBBB5684EDCE8(const struct FRequestCurrentStatsData& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "OnCallback_D5E80CEA418652AD060EBBB5684EDCE8");

	Params::CustomGI_C_OnCallback_D5E80CEA418652AD060EBBB5684EDCE8 Parms{};

	Parms.Data = std::move(Data);
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.OnFailure_B405B95A431214C35278028DA23BF73A
// (BlueprintCallable, BlueprintEvent)

void UCustomGI_C::OnFailure_B405B95A431214C35278028DA23BF73A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "OnFailure_B405B95A431214C35278028DA23BF73A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomGI.CustomGI_C.OnManualSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BiomeSave                     NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UCustomGI_C::OnManualSave(const struct FS_BiomeSave& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "OnManualSave");

	Params::CustomGI_C_OnManualSave Parms{};

	Parms.NewItem = std::move(NewItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.OnSaveBiome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BiomeSave                     NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UCustomGI_C::OnSaveBiome(const struct FS_BiomeSave& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "OnSaveBiome");

	Params::CustomGI_C_OnSaveBiome Parms{};

	Parms.NewItem = std::move(NewItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.OnSuccess_B405B95A431214C35278028DA23BF73A
// (BlueprintCallable, BlueprintEvent)

void UCustomGI_C::OnSuccess_B405B95A431214C35278028DA23BF73A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "OnSuccess_B405B95A431214C35278028DA23BF73A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomGI.CustomGI_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UCustomGI_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "ReceiveInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomGI.CustomGI_C.SaveBiomeProgress
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BiomeSave                     NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UCustomGI_C::SaveBiomeProgress(const struct FS_BiomeSave& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "SaveBiomeProgress");

	Params::CustomGI_C_SaveBiomeProgress Parms{};

	Parms.NewItem = std::move(NewItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.SaveProgression
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_Gamemodes                             Mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::SaveProgression(const struct FVector& Location, int32 Time, int32 PlayerNumber, E_Gamemodes Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "SaveProgression");

	Params::CustomGI_C_SaveProgression Parms{};

	Parms.Location = std::move(Location);
	Parms.Time = Time;
	Parms.PlayerNumber = PlayerNumber;
	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.SetCollectedWing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WingIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::SetCollectedWing(int32 WingIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "SetCollectedWing");

	Params::CustomGI_C_SetCollectedWing Parms{};

	Parms.WingIndex = WingIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.SetGameAlreadyLaunched
// (Public, BlueprintCallable, BlueprintEvent)

void UCustomGI_C::SetGameAlreadyLaunched()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "SetGameAlreadyLaunched");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomGI.CustomGI_C.SetPlayersInSession
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomGI_C::SetPlayersInSession(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "SetPlayersInSession");

	Params::CustomGI_C_SetPlayersInSession Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomGI.CustomGI_C.ShowTyroTip
// (BlueprintCallable, BlueprintEvent)

void UCustomGI_C::ShowTyroTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomGI_C", "ShowTyroTip");

	UObject::ProcessEvent(Func, nullptr);
}

}

