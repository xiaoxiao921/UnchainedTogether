#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystem

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "OnlineSubsystem_structs.hpp"


namespace SDK
{

// Class OnlineSubsystem.NamedInterfaces
// 0x0038 (0x0060 - 0x0028)
class UNamedInterfaces final : public UObject
{
public:
	TArray<struct FNamedInterface>                NamedInterfaces;                                   // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNamedInterfaceDef>             NamedInterfaceDefs;                                // 0x0038(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                         Pad_174F[0x18];                                    // 0x0048(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NamedInterfaces">();
	}
	static class UNamedInterfaces* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNamedInterfaces>();
	}
};
static_assert(alignof(UNamedInterfaces) == 0x000008, "Wrong alignment on UNamedInterfaces");
static_assert(sizeof(UNamedInterfaces) == 0x000060, "Wrong size on UNamedInterfaces");
static_assert(offsetof(UNamedInterfaces, NamedInterfaces) == 0x000028, "Member 'UNamedInterfaces::NamedInterfaces' has a wrong offset!");
static_assert(offsetof(UNamedInterfaces, NamedInterfaceDefs) == 0x000038, "Member 'UNamedInterfaces::NamedInterfaceDefs' has a wrong offset!");

// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (0x0028 - 0x0028)
class ITurnBasedMatchInterface final : public IInterface
{
public:
	void OnMatchEnded(const class FString& Match);
	void OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TurnBasedMatchInterface">();
	}
	static class ITurnBasedMatchInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITurnBasedMatchInterface>();
	}
};
static_assert(alignof(ITurnBasedMatchInterface) == 0x000008, "Wrong alignment on ITurnBasedMatchInterface");
static_assert(sizeof(ITurnBasedMatchInterface) == 0x000028, "Wrong size on ITurnBasedMatchInterface");

}

