#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HellHorizon_Sublevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HellHorizon_Sublevel.HellHorizon_Sublevel_C
// 0x0010 (0x02B0 - 0x02A0)
class AHellHorizon_Sublevel_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 None_ExecuteUbergraph_HellHorizon_Sublevel_RefProperty; // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HellHorizon_Sublevel(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HellHorizon_Sublevel_C">();
	}
	static class AHellHorizon_Sublevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHellHorizon_Sublevel_C>();
	}
};
static_assert(alignof(AHellHorizon_Sublevel_C) == 0x000008, "Wrong alignment on AHellHorizon_Sublevel_C");
static_assert(sizeof(AHellHorizon_Sublevel_C) == 0x0002B0, "Wrong size on AHellHorizon_Sublevel_C");
static_assert(offsetof(AHellHorizon_Sublevel_C, UberGraphFrame) == 0x0002A0, "Member 'AHellHorizon_Sublevel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AHellHorizon_Sublevel_C, None_ExecuteUbergraph_HellHorizon_Sublevel_RefProperty) == 0x0002A8, "Member 'AHellHorizon_Sublevel_C::None_ExecuteUbergraph_HellHorizon_Sublevel_RefProperty' has a wrong offset!");

}
