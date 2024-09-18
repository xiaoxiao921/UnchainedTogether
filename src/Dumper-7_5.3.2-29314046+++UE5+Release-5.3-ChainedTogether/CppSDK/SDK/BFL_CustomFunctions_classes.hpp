#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_CustomFunctions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_ChoosenChar_structs.hpp"
#include "SteamCorePro_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BFL_CustomFunctions.BFL_CustomFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBFL_CustomFunctions_C final : public UBlueprintFunctionLibrary
{
public:
	static void AppendID_And_Name(const struct FSpeedrun_IDAndName& ID_And_Name, class UObject* __WorldContext, class FString* String);
	static bool CheckUGC_State(const struct FSteamUGCDetails& SteamUGCDetails, const class FString& State, class UObject* __WorldContext);
	static bool CheckUGC_State_FromPublishedID(const class FString& State, const struct FPublishedFileID& PublishedFileID, class UObject* __WorldContext);
	static class FText ConvertTimeToTextFormat(int32 Time, class UObject* __WorldContext);
	static bool FindPlayerStart(class UObject* __WorldContext, class AActor** Start);
	static void Get_UGC_ID_FromSessionName(const class FString& SessionName, class UObject* __WorldContext, class FString* NameUpdated, class FString* UGC_ID, bool* UGC);
	static bool GetChainByCharacters(class APawn* Player01, class APawn* Player02, class UObject* __WorldContext, class ABP_NewChain_C** Array_Element);
	static void GetChainsByCharacter(const class AActor*& ItemToFind, class UObject* __WorldContext, TArray<class ABP_NewChain_C*>* Array1);
	static void GetCharacterColor(E_ChoosenChar Character, class UObject* __WorldContext, struct FLinearColor* Color);
	static void GetDevMode(class UObject* __WorldContext, bool* DevMode);
	static bool GetInputKeyByName(const class FName& Key, class UObject* __WorldContext, struct FKey* Current_Key);
	static bool GetInputLagMode(class UObject* __WorldContext);
	static bool GetLocalMultiplayer(class UObject* __WorldContext);
	static void GetModButtonClasses(class UObject* __WorldContext, TArray<TSoftClassPtr<class UClass>>* ClassesOut);
	static bool GetModInfosFromDataTable(class UClass* ActorClass, class UObject* __WorldContext, struct FIGLEPlacableActorInfo* Out_Row, class FName* RowName);
	static int32 GetNumPlayers(class UObject* __WorldContext);
	static bool GetPlacableByID(int64 ID, TSoftClassPtr<class UClass> Class_0, class UObject* __WorldContext, class AActor** Actor);
	static int32 GetPlayerCount(class UObject* __WorldContext);
	static bool GetPlayerStartByTag(class FName Tag, class UObject* __WorldContext, class APlayerStart** Start);
	static bool GetSpawnWithoutLobby(class UObject* __WorldContext);
	static void GetTestControl(class UObject* __WorldContext, bool* TestControl);
	static void GetTestPlayersToSpawn(class UObject* __WorldContext, int32* Count);
	static void GetTrueChainVisible(class UObject* __WorldContext, bool* Visible);
	static void IGLE_OpenLevel(bool Edit, const class FString& Path, const class FString& Option, class UObject* __WorldContext);
	static bool IsInteractingWithMenu(class UObject* __WorldContext);
	static void IsModInstalled(const struct FPublishedFileID& PublishedFileID, class UObject* __WorldContext, bool* Installed);
	static class FString No_Password_Code(class UObject* __WorldContext);
	static void OpenChainedTogetherWorkshopPage(class UObject* __WorldContext);
	static void PrintStringOneFrame(const class FString& InString, const struct FLinearColor& TextColor, class UObject* __WorldContext);
	static void RemoveAllWidgetsExcept(TArray<TSoftClassPtr<class UClass>>& WidgetsToKeep, class UObject* __WorldContext);
	static void SetRandomLoadingScreen(class UObject* __WorldContext);
	static class UW_Timer_C* ShowTimer(double Time, class UObject* __WorldContext);
	static void ShowTip(const class FText& In_Text, float Duration, class UObject* __WorldContext);
	static void SpawnDialogText(const class FText& Text, double Duration, class UObject* __WorldContext);
	static void TraceVisibility(EDrawDebugTrace Type, class UObject* __WorldContext, EDrawDebugTrace* Result);
	static void UpdateSpeedByPlayersNumber(double Speed, double FourPlayersScale, bool IgnoreTwoPlayers, class UObject* __WorldContext, double* ReturnSpeed);
	static bool WidgetAlreadyInParent_(TSubclassOf<class UUserWidget> WidgetClass, class UObject* __WorldContext);

	void Find_Group_By_Placable(class AActor* Actor, class UObject* __WorldContext, bool* Found, TArray<int64>* Group, class AMod_Group_C** GroupActor);
	bool GetSessionSetting(const struct FSteamSessionResult& SteamSessionResult, const class FString& Setting, class UObject* __WorldContext, class FString* Value);
	bool Is_Someone_Driving_Car_Server_(class UObject* __WorldContext, class ABP_CustomCar_C** AsBP_Custom_Car);
	bool VerifySessionSetting(const struct FSteamSessionResult& SteamSessionResult, const class FString& Setting, const class FString& Value, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BFL_CustomFunctions_C">();
	}
	static class UBFL_CustomFunctions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFL_CustomFunctions_C>();
	}
};
static_assert(alignof(UBFL_CustomFunctions_C) == 0x000008, "Wrong alignment on UBFL_CustomFunctions_C");
static_assert(sizeof(UBFL_CustomFunctions_C) == 0x000028, "Wrong size on UBFL_CustomFunctions_C");

}

