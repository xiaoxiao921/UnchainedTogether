#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrainShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TrainShake.TrainShake_C
// 0x0000 (0x01F0 - 0x01F0)
class UTrainShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TrainShake_C">();
	}
	static class UTrainShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTrainShake_C>();
	}
};
static_assert(alignof(UTrainShake_C) == 0x000010, "Wrong alignment on UTrainShake_C");
static_assert(sizeof(UTrainShake_C) == 0x0001F0, "Wrong size on UTrainShake_C");

}

