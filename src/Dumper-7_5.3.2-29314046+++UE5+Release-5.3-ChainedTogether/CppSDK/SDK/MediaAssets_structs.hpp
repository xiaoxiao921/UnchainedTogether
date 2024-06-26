#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaAssets

#include "Basic.hpp"


namespace SDK
{

// Enum MediaAssets.MediaTextureOutputFormat
// NumValues: 0x0003
enum class EMediaTextureOutputFormat : uint8
{
	MTOF_Default                             = 0,
	MTOF_SRGB_LINOUT                         = 1,
	MTOF_MAX                                 = 2,
};

// Enum MediaAssets.MediaTextureOrientation
// NumValues: 0x0005
enum class EMediaTextureOrientation : uint8
{
	MTORI_Original                           = 0,
	MTORI_CW90                               = 1,
	MTORI_CW180                              = 2,
	MTORI_CW270                              = 3,
	MTORI_MAX                                = 4,
};

// Enum MediaAssets.EMediaPlayerTrack
// NumValues: 0x0008
enum class EMediaPlayerTrack : uint8
{
	Audio                                    = 0,
	Caption                                  = 1,
	Metadata                                 = 2,
	Script                                   = 3,
	Subtitle                                 = 4,
	Text                                     = 5,
	Video                                    = 6,
	EMediaPlayerTrack_MAX                    = 7,
};

// Enum MediaAssets.EMediaSoundChannels
// NumValues: 0x0004
enum class EMediaSoundChannels : uint32
{
	Mono                                     = 0,
	Stereo                                   = 1,
	Surround                                 = 2,
	EMediaSoundChannels_MAX                  = 3,
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
// NumValues: 0x0005
enum class EMediaSoundComponentFFTSize : uint8
{
	Min_64                                   = 0,
	Small_256                                = 1,
	Medium_512                               = 2,
	Large_1024                               = 3,
	EMediaSoundComponentFFTSize_MAX          = 4,
};

// Enum MediaAssets.EMediaTextureVisibleMipsTiles
// NumValues: 0x0004
enum class EMediaTextureVisibleMipsTiles : uint8
{
	None                                     = 0,
	Plane                                    = 1,
	Sphere                                   = 2,
	EMediaTextureVisibleMipsTiles_MAX        = 3,
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
// NumValues: 0x0006
enum class EMediaAudioCaptureDeviceFilter : uint8
{
	None                                     = 0,
	Card                                     = 1,
	Microphone                               = 2,
	Software                                 = 4,
	Unknown                                  = 8,
	EMediaAudioCaptureDeviceFilter_MAX       = 9,
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
// NumValues: 0x0006
enum class EMediaVideoCaptureDeviceFilter : uint8
{
	None                                     = 0,
	Card                                     = 1,
	Software                                 = 2,
	Unknown                                  = 4,
	Webcam                                   = 8,
	EMediaVideoCaptureDeviceFilter_MAX       = 9,
};

// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
// NumValues: 0x0006
enum class EMediaWebcamCaptureDeviceFilter : uint8
{
	None                                     = 0,
	DepthSensor                              = 1,
	Front                                    = 2,
	Rear                                     = 4,
	Unknown                                  = 8,
	EMediaWebcamCaptureDeviceFilter_MAX      = 9,
};

// ScriptStruct MediaAssets.MediaMetadataItemBPT
// 0x0040 (0x0040 - 0x0000)
struct FMediaMetadataItemBPT final
{
public:
	class FString                                 LanguageCode;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MimeType;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringData;                                        // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 BinaryData;                                        // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaMetadataItemBPT) == 0x000008, "Wrong alignment on FMediaMetadataItemBPT");
static_assert(sizeof(FMediaMetadataItemBPT) == 0x000040, "Wrong size on FMediaMetadataItemBPT");
static_assert(offsetof(FMediaMetadataItemBPT, LanguageCode) == 0x000000, "Member 'FMediaMetadataItemBPT::LanguageCode' has a wrong offset!");
static_assert(offsetof(FMediaMetadataItemBPT, MimeType) == 0x000010, "Member 'FMediaMetadataItemBPT::MimeType' has a wrong offset!");
static_assert(offsetof(FMediaMetadataItemBPT, StringData) == 0x000020, "Member 'FMediaMetadataItemBPT::StringData' has a wrong offset!");
static_assert(offsetof(FMediaMetadataItemBPT, BinaryData) == 0x000030, "Member 'FMediaMetadataItemBPT::BinaryData' has a wrong offset!");

// ScriptStruct MediaAssets.MediaMetadataItemsBPT
// 0x0010 (0x0010 - 0x0000)
struct FMediaMetadataItemsBPT final
{
public:
	TArray<struct FMediaMetadataItemBPT>          Items;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaMetadataItemsBPT) == 0x000008, "Wrong alignment on FMediaMetadataItemsBPT");
static_assert(sizeof(FMediaMetadataItemsBPT) == 0x000010, "Wrong size on FMediaMetadataItemsBPT");
static_assert(offsetof(FMediaMetadataItemsBPT, Items) == 0x000000, "Member 'FMediaMetadataItemsBPT::Items' has a wrong offset!");

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// 0x0008 (0x0008 - 0x0000)
struct FMediaSoundComponentSpectralData final
{
public:
	float                                         FrequencyHz;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Magnitude;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaSoundComponentSpectralData) == 0x000004, "Wrong alignment on FMediaSoundComponentSpectralData");
static_assert(sizeof(FMediaSoundComponentSpectralData) == 0x000008, "Wrong size on FMediaSoundComponentSpectralData");
static_assert(offsetof(FMediaSoundComponentSpectralData, FrequencyHz) == 0x000000, "Member 'FMediaSoundComponentSpectralData::FrequencyHz' has a wrong offset!");
static_assert(offsetof(FMediaSoundComponentSpectralData, Magnitude) == 0x000004, "Member 'FMediaSoundComponentSpectralData::Magnitude' has a wrong offset!");

// ScriptStruct MediaAssets.MediaSourceCacheSettings
// 0x0008 (0x0008 - 0x0000)
struct FMediaSourceCacheSettings final
{
public:
	bool                                          bOverride;                                         // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15EA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeToLookAhead;                                   // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaSourceCacheSettings) == 0x000004, "Wrong alignment on FMediaSourceCacheSettings");
static_assert(sizeof(FMediaSourceCacheSettings) == 0x000008, "Wrong size on FMediaSourceCacheSettings");
static_assert(offsetof(FMediaSourceCacheSettings, bOverride) == 0x000000, "Member 'FMediaSourceCacheSettings::bOverride' has a wrong offset!");
static_assert(offsetof(FMediaSourceCacheSettings, TimeToLookAhead) == 0x000004, "Member 'FMediaSourceCacheSettings::TimeToLookAhead' has a wrong offset!");

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0028 (0x0028 - 0x0000)
struct FMediaCaptureDevice final
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class FString                                 URL;                                               // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaCaptureDevice) == 0x000008, "Wrong alignment on FMediaCaptureDevice");
static_assert(sizeof(FMediaCaptureDevice) == 0x000028, "Wrong size on FMediaCaptureDevice");
static_assert(offsetof(FMediaCaptureDevice, DisplayName) == 0x000000, "Member 'FMediaCaptureDevice::DisplayName' has a wrong offset!");
static_assert(offsetof(FMediaCaptureDevice, URL) == 0x000018, "Member 'FMediaCaptureDevice::URL' has a wrong offset!");

}

