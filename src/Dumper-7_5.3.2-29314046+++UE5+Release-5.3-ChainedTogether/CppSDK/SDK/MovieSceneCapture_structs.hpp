#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneCapture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum MovieSceneCapture.EHDRCaptureGamut
// NumValues: 0x0007
enum class EHDRCaptureGamut : uint8
{
	HCGM_Rec709                              = 0,
	HCGM_P3DCI                               = 1,
	HCGM_Rec2020                             = 2,
	HCGM_ACES                                = 3,
	HCGM_ACEScg                              = 4,
	HCGM_Linear                              = 5,
	HCGM_MAX                                 = 6,
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
// NumValues: 0x0005
enum class EMovieSceneCaptureProtocolState : uint8
{
	Idle                                     = 0,
	Initialized                              = 1,
	Capturing                                = 2,
	Finalizing                               = 3,
	EMovieSceneCaptureProtocolState_MAX      = 4,
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010 (0x0010 - 0x0000)
struct FCompositionGraphCapturePasses final
{
public:
	TArray<class FString>                         Value;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCompositionGraphCapturePasses) == 0x000008, "Wrong alignment on FCompositionGraphCapturePasses");
static_assert(sizeof(FCompositionGraphCapturePasses) == 0x000010, "Wrong size on FCompositionGraphCapturePasses");
static_assert(offsetof(FCompositionGraphCapturePasses, Value) == 0x000000, "Member 'FCompositionGraphCapturePasses::Value' has a wrong offset!");

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008 (0x0008 - 0x0000)
struct FCaptureResolution final
{
public:
	int32                                         ResX;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ResY;                                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCaptureResolution) == 0x000004, "Wrong alignment on FCaptureResolution");
static_assert(sizeof(FCaptureResolution) == 0x000008, "Wrong size on FCaptureResolution");
static_assert(offsetof(FCaptureResolution, ResX) == 0x000000, "Member 'FCaptureResolution::ResX' has a wrong offset!");
static_assert(offsetof(FCaptureResolution, ResY) == 0x000004, "Member 'FCaptureResolution::ResY' has a wrong offset!");

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0070 (0x0070 - 0x0000)
struct FMovieSceneCaptureSettings final
{
public:
	struct FDirectoryPath                         OutputDirectory;                                   // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameModeBase>              GameModeOverride;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OutputFormat;                                      // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverwriteExisting;                                // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseRelativeFrameNumbers;                          // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_168C[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HandleFrames;                                      // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MovieExtension;                                    // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ZeroPadFrameNumbers;                               // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_168D[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameRate                             FrameRate;                                         // 0x0044(0x0008)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCustomFrameRate;                               // 0x004C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_168E[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameRate                             CustomFrameRate;                                   // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCaptureResolution                     Resolution;                                        // 0x0058(0x0008)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bEnableTextureStreaming;                           // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCinematicEngineScalability;                       // 0x0061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCinematicMode;                                    // 0x0062(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowMovement;                                    // 0x0063(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowTurning;                                     // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowPlayer;                                       // 0x0065(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowHUD;                                          // 0x0066(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePathTracer;                                    // 0x0067(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PathTracerSamplePerPixel;                          // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_168F[0x4];                                     // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneCaptureSettings) == 0x000008, "Wrong alignment on FMovieSceneCaptureSettings");
static_assert(sizeof(FMovieSceneCaptureSettings) == 0x000070, "Wrong size on FMovieSceneCaptureSettings");
static_assert(offsetof(FMovieSceneCaptureSettings, OutputDirectory) == 0x000000, "Member 'FMovieSceneCaptureSettings::OutputDirectory' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, GameModeOverride) == 0x000010, "Member 'FMovieSceneCaptureSettings::GameModeOverride' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, OutputFormat) == 0x000018, "Member 'FMovieSceneCaptureSettings::OutputFormat' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bOverwriteExisting) == 0x000028, "Member 'FMovieSceneCaptureSettings::bOverwriteExisting' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bUseRelativeFrameNumbers) == 0x000029, "Member 'FMovieSceneCaptureSettings::bUseRelativeFrameNumbers' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, HandleFrames) == 0x00002C, "Member 'FMovieSceneCaptureSettings::HandleFrames' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, MovieExtension) == 0x000030, "Member 'FMovieSceneCaptureSettings::MovieExtension' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, ZeroPadFrameNumbers) == 0x000040, "Member 'FMovieSceneCaptureSettings::ZeroPadFrameNumbers' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, FrameRate) == 0x000044, "Member 'FMovieSceneCaptureSettings::FrameRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bUseCustomFrameRate) == 0x00004C, "Member 'FMovieSceneCaptureSettings::bUseCustomFrameRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, CustomFrameRate) == 0x000050, "Member 'FMovieSceneCaptureSettings::CustomFrameRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, Resolution) == 0x000058, "Member 'FMovieSceneCaptureSettings::Resolution' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bEnableTextureStreaming) == 0x000060, "Member 'FMovieSceneCaptureSettings::bEnableTextureStreaming' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bCinematicEngineScalability) == 0x000061, "Member 'FMovieSceneCaptureSettings::bCinematicEngineScalability' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bCinematicMode) == 0x000062, "Member 'FMovieSceneCaptureSettings::bCinematicMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bAllowMovement) == 0x000063, "Member 'FMovieSceneCaptureSettings::bAllowMovement' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bAllowTurning) == 0x000064, "Member 'FMovieSceneCaptureSettings::bAllowTurning' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bShowPlayer) == 0x000065, "Member 'FMovieSceneCaptureSettings::bShowPlayer' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bShowHUD) == 0x000066, "Member 'FMovieSceneCaptureSettings::bShowHUD' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bUsePathTracer) == 0x000067, "Member 'FMovieSceneCaptureSettings::bUsePathTracer' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, PathTracerSamplePerPixel) == 0x000068, "Member 'FMovieSceneCaptureSettings::PathTracerSamplePerPixel' has a wrong offset!");

// ScriptStruct MovieSceneCapture.FrameMetrics
// 0x0010 (0x0010 - 0x0000)
struct FFrameMetrics final
{
public:
	float                                         TotalElapsedTime;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrameDelta;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FrameNumber;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumDroppedFrames;                                  // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFrameMetrics) == 0x000004, "Wrong alignment on FFrameMetrics");
static_assert(sizeof(FFrameMetrics) == 0x000010, "Wrong size on FFrameMetrics");
static_assert(offsetof(FFrameMetrics, TotalElapsedTime) == 0x000000, "Member 'FFrameMetrics::TotalElapsedTime' has a wrong offset!");
static_assert(offsetof(FFrameMetrics, FrameDelta) == 0x000004, "Member 'FFrameMetrics::FrameDelta' has a wrong offset!");
static_assert(offsetof(FFrameMetrics, FrameNumber) == 0x000008, "Member 'FFrameMetrics::FrameNumber' has a wrong offset!");
static_assert(offsetof(FFrameMetrics, NumDroppedFrames) == 0x00000C, "Member 'FFrameMetrics::NumDroppedFrames' has a wrong offset!");

// ScriptStruct MovieSceneCapture.CapturedPixelsID
// 0x0050 (0x0050 - 0x0000)
struct FCapturedPixelsID final
{
public:
	TMap<class FName, class FName>                Identifiers;                                       // 0x0000(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCapturedPixelsID) == 0x000008, "Wrong alignment on FCapturedPixelsID");
static_assert(sizeof(FCapturedPixelsID) == 0x000050, "Wrong size on FCapturedPixelsID");
static_assert(offsetof(FCapturedPixelsID, Identifiers) == 0x000000, "Member 'FCapturedPixelsID::Identifiers' has a wrong offset!");

// ScriptStruct MovieSceneCapture.CapturedPixels
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FCapturedPixels final
{
public:
	uint8                                         Pad_1690[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCapturedPixels) == 0x000008, "Wrong alignment on FCapturedPixels");
static_assert(sizeof(FCapturedPixels) == 0x000010, "Wrong size on FCapturedPixels");

}

