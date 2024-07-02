#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeManagement

#include "Basic.hpp"


namespace SDK
{

// Enum TimeManagement.EFrameNumberDisplayFormats
// NumValues: 0x0006
enum class EFrameNumberDisplayFormats : uint8
{
	NonDropFrameTimecode                     = 0,
	DropFrameTimecode                        = 1,
	Seconds                                  = 2,
	Frames                                   = 3,
	MAX_Count                                = 4,
	EFrameNumberDisplayFormats_MAX           = 5,
};

// Enum TimeManagement.ETimedDataInputEvaluationType
// NumValues: 0x0004
enum class ETimedDataInputEvaluationType : uint8
{
	None                                     = 0,
	Timecode                                 = 1,
	PlatformTime                             = 2,
	ETimedDataInputEvaluationType_MAX        = 3,
};

// Enum TimeManagement.ETimedDataInputState
// NumValues: 0x0004
enum class ETimedDataInputState : uint8
{
	Connected                                = 0,
	Unresponsive                             = 1,
	Disconnected                             = 2,
	ETimedDataInputState_MAX                 = 3,
};

// ScriptStruct TimeManagement.TimedDataChannelSampleTime
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FTimedDataChannelSampleTime final
{
public:
	uint8                                         Pad_11B1[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTimedDataChannelSampleTime) == 0x000008, "Wrong alignment on FTimedDataChannelSampleTime");
static_assert(sizeof(FTimedDataChannelSampleTime) == 0x000018, "Wrong size on FTimedDataChannelSampleTime");

// ScriptStruct TimeManagement.TimedDataInputEvaluationData
// 0x0008 (0x0008 - 0x0000)
struct FTimedDataInputEvaluationData final
{
public:
	float                                         DistanceToNewestSampleSeconds;                     // 0x0000(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceToOldestSampleSeconds;                     // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTimedDataInputEvaluationData) == 0x000004, "Wrong alignment on FTimedDataInputEvaluationData");
static_assert(sizeof(FTimedDataInputEvaluationData) == 0x000008, "Wrong size on FTimedDataInputEvaluationData");
static_assert(offsetof(FTimedDataInputEvaluationData, DistanceToNewestSampleSeconds) == 0x000000, "Member 'FTimedDataInputEvaluationData::DistanceToNewestSampleSeconds' has a wrong offset!");
static_assert(offsetof(FTimedDataInputEvaluationData, DistanceToOldestSampleSeconds) == 0x000004, "Member 'FTimedDataInputEvaluationData::DistanceToOldestSampleSeconds' has a wrong offset!");

}

