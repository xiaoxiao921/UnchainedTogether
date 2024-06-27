#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeteorShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MeteorShake.MeteorShake_C
// 0x0000 (0x01F0 - 0x01F0)
class UMeteorShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MeteorShake_C">();
	}
	static class UMeteorShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeteorShake_C>();
	}
};
static_assert(alignof(UMeteorShake_C) == 0x000010, "Wrong alignment on UMeteorShake_C");
static_assert(sizeof(UMeteorShake_C) == 0x0001F0, "Wrong size on UMeteorShake_C");

}
