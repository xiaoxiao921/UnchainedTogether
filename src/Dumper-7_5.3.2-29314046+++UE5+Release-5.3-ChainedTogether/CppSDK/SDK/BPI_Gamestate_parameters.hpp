#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Gamestate

#include "Basic.hpp"

#include "S_TchatElement_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_Gamestate.BPI_Gamestate_C.AddRescuePoint
// 0x0008 (0x0008 - 0x0000)
struct BPI_Gamestate_C_AddRescuePoint final
{
public:
	class ABP_RescuePoint_C*                      RescuePoint;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_AddRescuePoint) == 0x000008, "Wrong alignment on BPI_Gamestate_C_AddRescuePoint");
static_assert(sizeof(BPI_Gamestate_C_AddRescuePoint) == 0x000008, "Wrong size on BPI_Gamestate_C_AddRescuePoint");
static_assert(offsetof(BPI_Gamestate_C_AddRescuePoint, RescuePoint) == 0x000000, "Member 'BPI_Gamestate_C_AddRescuePoint::RescuePoint' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.EndCinematicPassed
// 0x0001 (0x0001 - 0x0000)
struct BPI_Gamestate_C_EndCinematicPassed final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_EndCinematicPassed) == 0x000001, "Wrong alignment on BPI_Gamestate_C_EndCinematicPassed");
static_assert(sizeof(BPI_Gamestate_C_EndCinematicPassed) == 0x000001, "Wrong size on BPI_Gamestate_C_EndCinematicPassed");
static_assert(offsetof(BPI_Gamestate_C_EndCinematicPassed, ReturnValue) == 0x000000, "Member 'BPI_Gamestate_C_EndCinematicPassed::ReturnValue' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.EveryoneIsFalling
// 0x0001 (0x0001 - 0x0000)
struct BPI_Gamestate_C_EveryoneIsFalling final
{
public:
	bool                                          Falling;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_EveryoneIsFalling) == 0x000001, "Wrong alignment on BPI_Gamestate_C_EveryoneIsFalling");
static_assert(sizeof(BPI_Gamestate_C_EveryoneIsFalling) == 0x000001, "Wrong size on BPI_Gamestate_C_EveryoneIsFalling");
static_assert(offsetof(BPI_Gamestate_C_EveryoneIsFalling, Falling) == 0x000000, "Member 'BPI_Gamestate_C_EveryoneIsFalling::Falling' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.FindPlayerStart
// 0x0070 (0x0070 - 0x0000)
struct BPI_Gamestate_C_FindPlayerStart final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_FindPlayerStart) == 0x000010, "Wrong alignment on BPI_Gamestate_C_FindPlayerStart");
static_assert(sizeof(BPI_Gamestate_C_FindPlayerStart) == 0x000070, "Wrong size on BPI_Gamestate_C_FindPlayerStart");
static_assert(offsetof(BPI_Gamestate_C_FindPlayerStart, Transform) == 0x000000, "Member 'BPI_Gamestate_C_FindPlayerStart::Transform' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_FindPlayerStart, ReturnValue) == 0x000060, "Member 'BPI_Gamestate_C_FindPlayerStart::ReturnValue' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetChainMiddleLocation
// 0x0038 (0x0038 - 0x0000)
struct BPI_Gamestate_C_GetChainMiddleLocation final
{
public:
	class FString                                 Attached01;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Attached02;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                RepLocation;                                       // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_GetChainMiddleLocation) == 0x000008, "Wrong alignment on BPI_Gamestate_C_GetChainMiddleLocation");
static_assert(sizeof(BPI_Gamestate_C_GetChainMiddleLocation) == 0x000038, "Wrong size on BPI_Gamestate_C_GetChainMiddleLocation");
static_assert(offsetof(BPI_Gamestate_C_GetChainMiddleLocation, Attached01) == 0x000000, "Member 'BPI_Gamestate_C_GetChainMiddleLocation::Attached01' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_GetChainMiddleLocation, Attached02) == 0x000010, "Member 'BPI_Gamestate_C_GetChainMiddleLocation::Attached02' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_GetChainMiddleLocation, RepLocation) == 0x000020, "Member 'BPI_Gamestate_C_GetChainMiddleLocation::RepLocation' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetGameBegun
// 0x0001 (0x0001 - 0x0000)
struct BPI_Gamestate_C_GetGameBegun final
{
public:
	bool                                          HasBegun;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_GetGameBegun) == 0x000001, "Wrong alignment on BPI_Gamestate_C_GetGameBegun");
static_assert(sizeof(BPI_Gamestate_C_GetGameBegun) == 0x000001, "Wrong size on BPI_Gamestate_C_GetGameBegun");
static_assert(offsetof(BPI_Gamestate_C_GetGameBegun, HasBegun) == 0x000000, "Member 'BPI_Gamestate_C_GetGameBegun::HasBegun' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetHighestRescuePoint
// 0x0010 (0x0010 - 0x0000)
struct BPI_Gamestate_C_GetHighestRescuePoint final
{
public:
	class ABP_RescuePoint_C*                      Return;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_GetHighestRescuePoint) == 0x000008, "Wrong alignment on BPI_Gamestate_C_GetHighestRescuePoint");
static_assert(sizeof(BPI_Gamestate_C_GetHighestRescuePoint) == 0x000010, "Wrong size on BPI_Gamestate_C_GetHighestRescuePoint");
static_assert(offsetof(BPI_Gamestate_C_GetHighestRescuePoint, Return) == 0x000000, "Member 'BPI_Gamestate_C_GetHighestRescuePoint::Return' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_GetHighestRescuePoint, Found) == 0x000008, "Member 'BPI_Gamestate_C_GetHighestRescuePoint::Found' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetLavaDead
// 0x0001 (0x0001 - 0x0000)
struct BPI_Gamestate_C_GetLavaDead final
{
public:
	bool                                          Dead;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_GetLavaDead) == 0x000001, "Wrong alignment on BPI_Gamestate_C_GetLavaDead");
static_assert(sizeof(BPI_Gamestate_C_GetLavaDead) == 0x000001, "Wrong size on BPI_Gamestate_C_GetLavaDead");
static_assert(offsetof(BPI_Gamestate_C_GetLavaDead, Dead) == 0x000000, "Member 'BPI_Gamestate_C_GetLavaDead::Dead' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetLaveMode
// 0x0001 (0x0001 - 0x0000)
struct BPI_Gamestate_C_GetLaveMode final
{
public:
	bool                                          Lava;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_GetLaveMode) == 0x000001, "Wrong alignment on BPI_Gamestate_C_GetLaveMode");
static_assert(sizeof(BPI_Gamestate_C_GetLaveMode) == 0x000001, "Wrong size on BPI_Gamestate_C_GetLaveMode");
static_assert(offsetof(BPI_Gamestate_C_GetLaveMode, Lava) == 0x000000, "Member 'BPI_Gamestate_C_GetLaveMode::Lava' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetNearestRescueByLocation
// 0x0028 (0x0028 - 0x0000)
struct BPI_Gamestate_C_GetNearestRescueByLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_RescuePoint_C*                      Rescue;                                            // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_GetNearestRescueByLocation) == 0x000008, "Wrong alignment on BPI_Gamestate_C_GetNearestRescueByLocation");
static_assert(sizeof(BPI_Gamestate_C_GetNearestRescueByLocation) == 0x000028, "Wrong size on BPI_Gamestate_C_GetNearestRescueByLocation");
static_assert(offsetof(BPI_Gamestate_C_GetNearestRescueByLocation, Location) == 0x000000, "Member 'BPI_Gamestate_C_GetNearestRescueByLocation::Location' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_GetNearestRescueByLocation, Rescue) == 0x000018, "Member 'BPI_Gamestate_C_GetNearestRescueByLocation::Rescue' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_GetNearestRescueByLocation, Found) == 0x000020, "Member 'BPI_Gamestate_C_GetNearestRescueByLocation::Found' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetPawnArray
// 0x0010 (0x0010 - 0x0000)
struct BPI_Gamestate_C_GetPawnArray final
{
public:
	TArray<class APawn*>                          Array;                                             // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_Gamestate_C_GetPawnArray) == 0x000008, "Wrong alignment on BPI_Gamestate_C_GetPawnArray");
static_assert(sizeof(BPI_Gamestate_C_GetPawnArray) == 0x000010, "Wrong size on BPI_Gamestate_C_GetPawnArray");
static_assert(offsetof(BPI_Gamestate_C_GetPawnArray, Array) == 0x000000, "Member 'BPI_Gamestate_C_GetPawnArray::Array' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetPlayersMiddle
// 0x0018 (0x0018 - 0x0000)
struct BPI_Gamestate_C_GetPlayersMiddle final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_GetPlayersMiddle) == 0x000008, "Wrong alignment on BPI_Gamestate_C_GetPlayersMiddle");
static_assert(sizeof(BPI_Gamestate_C_GetPlayersMiddle) == 0x000018, "Wrong size on BPI_Gamestate_C_GetPlayersMiddle");
static_assert(offsetof(BPI_Gamestate_C_GetPlayersMiddle, Location) == 0x000000, "Member 'BPI_Gamestate_C_GetPlayersMiddle::Location' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetTchat
// 0x0010 (0x0010 - 0x0000)
struct BPI_Gamestate_C_GetTchat final
{
public:
	TArray<struct FS_TchatElement>                Tchat;                                             // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_Gamestate_C_GetTchat) == 0x000008, "Wrong alignment on BPI_Gamestate_C_GetTchat");
static_assert(sizeof(BPI_Gamestate_C_GetTchat) == 0x000010, "Wrong size on BPI_Gamestate_C_GetTchat");
static_assert(offsetof(BPI_Gamestate_C_GetTchat, Tchat) == 0x000000, "Member 'BPI_Gamestate_C_GetTchat::Tchat' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.GetTimer
// 0x0004 (0x0004 - 0x0000)
struct BPI_Gamestate_C_GetTimer final
{
public:
	int32                                         Timer;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_GetTimer) == 0x000004, "Wrong alignment on BPI_Gamestate_C_GetTimer");
static_assert(sizeof(BPI_Gamestate_C_GetTimer) == 0x000004, "Wrong size on BPI_Gamestate_C_GetTimer");
static_assert(offsetof(BPI_Gamestate_C_GetTimer, Timer) == 0x000000, "Member 'BPI_Gamestate_C_GetTimer::Timer' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.IncrementSpawnedCharacter
// 0x0004 (0x0004 - 0x0000)
struct BPI_Gamestate_C_IncrementSpawnedCharacter final
{
public:
	int32                                         Result;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_IncrementSpawnedCharacter) == 0x000004, "Wrong alignment on BPI_Gamestate_C_IncrementSpawnedCharacter");
static_assert(sizeof(BPI_Gamestate_C_IncrementSpawnedCharacter) == 0x000004, "Wrong size on BPI_Gamestate_C_IncrementSpawnedCharacter");
static_assert(offsetof(BPI_Gamestate_C_IncrementSpawnedCharacter, Result) == 0x000000, "Member 'BPI_Gamestate_C_IncrementSpawnedCharacter::Result' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.NearestRescuePoint
// 0x0010 (0x0010 - 0x0000)
struct BPI_Gamestate_C_NearestRescuePoint final
{
public:
	bool                                          Lava;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3400[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_RescuePoint_C*                      RescuePoint;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_NearestRescuePoint) == 0x000008, "Wrong alignment on BPI_Gamestate_C_NearestRescuePoint");
static_assert(sizeof(BPI_Gamestate_C_NearestRescuePoint) == 0x000010, "Wrong size on BPI_Gamestate_C_NearestRescuePoint");
static_assert(offsetof(BPI_Gamestate_C_NearestRescuePoint, Lava) == 0x000000, "Member 'BPI_Gamestate_C_NearestRescuePoint::Lava' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_NearestRescuePoint, Found) == 0x000001, "Member 'BPI_Gamestate_C_NearestRescuePoint::Found' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_NearestRescuePoint, RescuePoint) == 0x000008, "Member 'BPI_Gamestate_C_NearestRescuePoint::RescuePoint' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.SendToChatSRV
// 0x0030 (0x0030 - 0x0000)
struct BPI_Gamestate_C_SendToChatSRV final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Message;                                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_SendToChatSRV) == 0x000008, "Wrong alignment on BPI_Gamestate_C_SendToChatSRV");
static_assert(sizeof(BPI_Gamestate_C_SendToChatSRV) == 0x000030, "Wrong size on BPI_Gamestate_C_SendToChatSRV");
static_assert(offsetof(BPI_Gamestate_C_SendToChatSRV, Param_Name) == 0x000000, "Member 'BPI_Gamestate_C_SendToChatSRV::Param_Name' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_SendToChatSRV, Message) == 0x000010, "Member 'BPI_Gamestate_C_SendToChatSRV::Message' has a wrong offset!");
static_assert(offsetof(BPI_Gamestate_C_SendToChatSRV, Color) == 0x000020, "Member 'BPI_Gamestate_C_SendToChatSRV::Color' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.ServerTravel
// 0x0010 (0x0010 - 0x0000)
struct BPI_Gamestate_C_ServerTravel final
{
public:
	class FString                                 Command;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_ServerTravel) == 0x000008, "Wrong alignment on BPI_Gamestate_C_ServerTravel");
static_assert(sizeof(BPI_Gamestate_C_ServerTravel) == 0x000010, "Wrong size on BPI_Gamestate_C_ServerTravel");
static_assert(offsetof(BPI_Gamestate_C_ServerTravel, Command) == 0x000000, "Member 'BPI_Gamestate_C_ServerTravel::Command' has a wrong offset!");

// Function BPI_Gamestate.BPI_Gamestate_C.SetTimer
// 0x0004 (0x0004 - 0x0000)
struct BPI_Gamestate_C_SetTimer final
{
public:
	int32                                         Timer;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Gamestate_C_SetTimer) == 0x000004, "Wrong alignment on BPI_Gamestate_C_SetTimer");
static_assert(sizeof(BPI_Gamestate_C_SetTimer) == 0x000004, "Wrong size on BPI_Gamestate_C_SetTimer");
static_assert(offsetof(BPI_Gamestate_C_SetTimer, Timer) == 0x000000, "Member 'BPI_Gamestate_C_SetTimer::Timer' has a wrong offset!");

}

