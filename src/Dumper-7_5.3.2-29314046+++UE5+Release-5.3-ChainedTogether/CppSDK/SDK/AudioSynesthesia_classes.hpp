#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioSynesthesia

#include "Basic.hpp"

#include "AudioAnalyzer_classes.hpp"
#include "Engine_structs.hpp"
#include "AudioSynesthesia_structs.hpp"


namespace SDK
{

// Class AudioSynesthesia.AudioSynesthesiaSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioSynesthesiaSettings">();
	}
	static class UAudioSynesthesiaSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioSynesthesiaSettings>();
	}
};
static_assert(alignof(UAudioSynesthesiaSettings) == 0x000008, "Wrong alignment on UAudioSynesthesiaSettings");
static_assert(sizeof(UAudioSynesthesiaSettings) == 0x000028, "Wrong size on UAudioSynesthesiaSettings");

// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioSynesthesiaNRTSettings">();
	}
	static class UAudioSynesthesiaNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioSynesthesiaNRTSettings>();
	}
};
static_assert(alignof(UAudioSynesthesiaNRTSettings) == 0x000008, "Wrong alignment on UAudioSynesthesiaNRTSettings");
static_assert(sizeof(UAudioSynesthesiaNRTSettings) == 0x000028, "Wrong size on UAudioSynesthesiaNRTSettings");

// Class AudioSynesthesia.AudioSynesthesiaNRT
// 0x0000 (0x0078 - 0x0078)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioSynesthesiaNRT">();
	}
	static class UAudioSynesthesiaNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioSynesthesiaNRT>();
	}
};
static_assert(alignof(UAudioSynesthesiaNRT) == 0x000008, "Wrong alignment on UAudioSynesthesiaNRT");
static_assert(sizeof(UAudioSynesthesiaNRT) == 0x000078, "Wrong size on UAudioSynesthesiaNRT");

// Class AudioSynesthesia.ConstantQNRTSettings
// 0x0020 (0x0048 - 0x0028)
class UConstantQNRTSettings final : public UAudioSynesthesiaNRTSettings
{
public:
	float                                         StartingFrequency;                                 // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumBands;                                          // 0x002C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NumBandsPerOctave;                                 // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnalysisPeriod;                                    // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDownmixToMono;                                    // 0x0038(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EConstantQFFTSizeEnum                         FFTSize;                                           // 0x0039(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFTWindowType                                WindowType;                                        // 0x003A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioSpectrumType                            SpectrumType;                                      // 0x003B(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BandWidthStretch;                                  // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EConstantQNormalizationEnum                   CQTNormalization;                                  // 0x0040(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2ACB[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NoiseFloorDb;                                      // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstantQNRTSettings">();
	}
	static class UConstantQNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstantQNRTSettings>();
	}
};
static_assert(alignof(UConstantQNRTSettings) == 0x000008, "Wrong alignment on UConstantQNRTSettings");
static_assert(sizeof(UConstantQNRTSettings) == 0x000048, "Wrong size on UConstantQNRTSettings");
static_assert(offsetof(UConstantQNRTSettings, StartingFrequency) == 0x000028, "Member 'UConstantQNRTSettings::StartingFrequency' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, NumBands) == 0x00002C, "Member 'UConstantQNRTSettings::NumBands' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, NumBandsPerOctave) == 0x000030, "Member 'UConstantQNRTSettings::NumBandsPerOctave' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, AnalysisPeriod) == 0x000034, "Member 'UConstantQNRTSettings::AnalysisPeriod' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, bDownmixToMono) == 0x000038, "Member 'UConstantQNRTSettings::bDownmixToMono' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, FFTSize) == 0x000039, "Member 'UConstantQNRTSettings::FFTSize' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, WindowType) == 0x00003A, "Member 'UConstantQNRTSettings::WindowType' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, SpectrumType) == 0x00003B, "Member 'UConstantQNRTSettings::SpectrumType' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, BandWidthStretch) == 0x00003C, "Member 'UConstantQNRTSettings::BandWidthStretch' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, CQTNormalization) == 0x000040, "Member 'UConstantQNRTSettings::CQTNormalization' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, NoiseFloorDb) == 0x000044, "Member 'UConstantQNRTSettings::NoiseFloorDb' has a wrong offset!");

// Class AudioSynesthesia.ConstantQNRT
// 0x0008 (0x0080 - 0x0078)
class UConstantQNRT final : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                  Settings;                                          // 0x0078(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void GetChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>* OutConstantQ) const;
	void GetNormalizedChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>* OutConstantQ) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstantQNRT">();
	}
	static class UConstantQNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstantQNRT>();
	}
};
static_assert(alignof(UConstantQNRT) == 0x000008, "Wrong alignment on UConstantQNRT");
static_assert(sizeof(UConstantQNRT) == 0x000080, "Wrong size on UConstantQNRT");
static_assert(offsetof(UConstantQNRT, Settings) == 0x000078, "Member 'UConstantQNRT::Settings' has a wrong offset!");

// Class AudioSynesthesia.LoudnessSettings
// 0x0018 (0x0040 - 0x0028)
class ULoudnessSettings final : public UAudioSynesthesiaSettings
{
public:
	float                                         AnalysisPeriod;                                    // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumFrequency;                                  // 0x002C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumFrequency;                                  // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELoudnessCurveTypeEnum                        CurveType;                                         // 0x0034(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2ACC[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NoiseFloorDb;                                      // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExpectedMaxLoudness;                               // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoudnessSettings">();
	}
	static class ULoudnessSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoudnessSettings>();
	}
};
static_assert(alignof(ULoudnessSettings) == 0x000008, "Wrong alignment on ULoudnessSettings");
static_assert(sizeof(ULoudnessSettings) == 0x000040, "Wrong size on ULoudnessSettings");
static_assert(offsetof(ULoudnessSettings, AnalysisPeriod) == 0x000028, "Member 'ULoudnessSettings::AnalysisPeriod' has a wrong offset!");
static_assert(offsetof(ULoudnessSettings, MinimumFrequency) == 0x00002C, "Member 'ULoudnessSettings::MinimumFrequency' has a wrong offset!");
static_assert(offsetof(ULoudnessSettings, MaximumFrequency) == 0x000030, "Member 'ULoudnessSettings::MaximumFrequency' has a wrong offset!");
static_assert(offsetof(ULoudnessSettings, CurveType) == 0x000034, "Member 'ULoudnessSettings::CurveType' has a wrong offset!");
static_assert(offsetof(ULoudnessSettings, NoiseFloorDb) == 0x000038, "Member 'ULoudnessSettings::NoiseFloorDb' has a wrong offset!");
static_assert(offsetof(ULoudnessSettings, ExpectedMaxLoudness) == 0x00003C, "Member 'ULoudnessSettings::ExpectedMaxLoudness' has a wrong offset!");

// Class AudioSynesthesia.LoudnessAnalyzer
// 0x0048 (0x00D8 - 0x0090)
class ULoudnessAnalyzer final : public UAudioAnalyzer
{
public:
	class ULoudnessSettings*                      Settings;                                          // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnOverallLoudnessResults;                          // 0x0098(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPerChannelLoudnessResults;                       // 0x00A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnLatestOverallLoudnessResults;                    // 0x00B8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnLatestPerChannelLoudnessResults;                 // 0x00C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoudnessAnalyzer">();
	}
	static class ULoudnessAnalyzer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoudnessAnalyzer>();
	}
};
static_assert(alignof(ULoudnessAnalyzer) == 0x000008, "Wrong alignment on ULoudnessAnalyzer");
static_assert(sizeof(ULoudnessAnalyzer) == 0x0000D8, "Wrong size on ULoudnessAnalyzer");
static_assert(offsetof(ULoudnessAnalyzer, Settings) == 0x000090, "Member 'ULoudnessAnalyzer::Settings' has a wrong offset!");
static_assert(offsetof(ULoudnessAnalyzer, OnOverallLoudnessResults) == 0x000098, "Member 'ULoudnessAnalyzer::OnOverallLoudnessResults' has a wrong offset!");
static_assert(offsetof(ULoudnessAnalyzer, OnPerChannelLoudnessResults) == 0x0000A8, "Member 'ULoudnessAnalyzer::OnPerChannelLoudnessResults' has a wrong offset!");
static_assert(offsetof(ULoudnessAnalyzer, OnLatestOverallLoudnessResults) == 0x0000B8, "Member 'ULoudnessAnalyzer::OnLatestOverallLoudnessResults' has a wrong offset!");
static_assert(offsetof(ULoudnessAnalyzer, OnLatestPerChannelLoudnessResults) == 0x0000C8, "Member 'ULoudnessAnalyzer::OnLatestPerChannelLoudnessResults' has a wrong offset!");

// Class AudioSynesthesia.LoudnessNRTSettings
// 0x0018 (0x0040 - 0x0028)
class ULoudnessNRTSettings final : public UAudioSynesthesiaNRTSettings
{
public:
	float                                         AnalysisPeriod;                                    // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumFrequency;                                  // 0x002C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumFrequency;                                  // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELoudnessNRTCurveTypeEnum                     CurveType;                                         // 0x0034(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2ACD[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NoiseFloorDb;                                      // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2ACE[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoudnessNRTSettings">();
	}
	static class ULoudnessNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoudnessNRTSettings>();
	}
};
static_assert(alignof(ULoudnessNRTSettings) == 0x000008, "Wrong alignment on ULoudnessNRTSettings");
static_assert(sizeof(ULoudnessNRTSettings) == 0x000040, "Wrong size on ULoudnessNRTSettings");
static_assert(offsetof(ULoudnessNRTSettings, AnalysisPeriod) == 0x000028, "Member 'ULoudnessNRTSettings::AnalysisPeriod' has a wrong offset!");
static_assert(offsetof(ULoudnessNRTSettings, MinimumFrequency) == 0x00002C, "Member 'ULoudnessNRTSettings::MinimumFrequency' has a wrong offset!");
static_assert(offsetof(ULoudnessNRTSettings, MaximumFrequency) == 0x000030, "Member 'ULoudnessNRTSettings::MaximumFrequency' has a wrong offset!");
static_assert(offsetof(ULoudnessNRTSettings, CurveType) == 0x000034, "Member 'ULoudnessNRTSettings::CurveType' has a wrong offset!");
static_assert(offsetof(ULoudnessNRTSettings, NoiseFloorDb) == 0x000038, "Member 'ULoudnessNRTSettings::NoiseFloorDb' has a wrong offset!");

// Class AudioSynesthesia.LoudnessNRT
// 0x0008 (0x0080 - 0x0078)
class ULoudnessNRT final : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                   Settings;                                          // 0x0078(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void GetChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float* OutLoudness) const;
	void GetLoudnessAtTime(const float InSeconds, float* OutLoudness) const;
	void GetNormalizedChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float* OutLoudness) const;
	void GetNormalizedLoudnessAtTime(const float InSeconds, float* OutLoudness) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoudnessNRT">();
	}
	static class ULoudnessNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoudnessNRT>();
	}
};
static_assert(alignof(ULoudnessNRT) == 0x000008, "Wrong alignment on ULoudnessNRT");
static_assert(sizeof(ULoudnessNRT) == 0x000080, "Wrong size on ULoudnessNRT");
static_assert(offsetof(ULoudnessNRT, Settings) == 0x000078, "Member 'ULoudnessNRT::Settings' has a wrong offset!");

// Class AudioSynesthesia.MeterSettings
// 0x0018 (0x0040 - 0x0028)
class UMeterSettings final : public UAudioSynesthesiaSettings
{
public:
	float                                         AnalysisPeriod;                                    // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMeterPeakType                                PeakMode;                                          // 0x002C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2ACF[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MeterAttackTime;                                   // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MeterReleaseTime;                                  // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PeakHoldTime;                                      // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClippingThreshold;                                 // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeterSettings">();
	}
	static class UMeterSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeterSettings>();
	}
};
static_assert(alignof(UMeterSettings) == 0x000008, "Wrong alignment on UMeterSettings");
static_assert(sizeof(UMeterSettings) == 0x000040, "Wrong size on UMeterSettings");
static_assert(offsetof(UMeterSettings, AnalysisPeriod) == 0x000028, "Member 'UMeterSettings::AnalysisPeriod' has a wrong offset!");
static_assert(offsetof(UMeterSettings, PeakMode) == 0x00002C, "Member 'UMeterSettings::PeakMode' has a wrong offset!");
static_assert(offsetof(UMeterSettings, MeterAttackTime) == 0x000030, "Member 'UMeterSettings::MeterAttackTime' has a wrong offset!");
static_assert(offsetof(UMeterSettings, MeterReleaseTime) == 0x000034, "Member 'UMeterSettings::MeterReleaseTime' has a wrong offset!");
static_assert(offsetof(UMeterSettings, PeakHoldTime) == 0x000038, "Member 'UMeterSettings::PeakHoldTime' has a wrong offset!");
static_assert(offsetof(UMeterSettings, ClippingThreshold) == 0x00003C, "Member 'UMeterSettings::ClippingThreshold' has a wrong offset!");

// Class AudioSynesthesia.MeterAnalyzer
// 0x00A8 (0x0138 - 0x0090)
class UMeterAnalyzer final : public UAudioAnalyzer
{
public:
	class UMeterSettings*                         Settings;                                          // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnOverallMeterResults;                             // 0x0098(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AD0[0x18];                                    // 0x00A8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPerChannelMeterResults;                          // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AD1[0x18];                                    // 0x00D0(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLatestOverallMeterResults;                       // 0x00E8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AD2[0x18];                                    // 0x00F8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLatestPerChannelMeterResults;                    // 0x0110(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AD3[0x18];                                    // 0x0120(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeterAnalyzer">();
	}
	static class UMeterAnalyzer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeterAnalyzer>();
	}
};
static_assert(alignof(UMeterAnalyzer) == 0x000008, "Wrong alignment on UMeterAnalyzer");
static_assert(sizeof(UMeterAnalyzer) == 0x000138, "Wrong size on UMeterAnalyzer");
static_assert(offsetof(UMeterAnalyzer, Settings) == 0x000090, "Member 'UMeterAnalyzer::Settings' has a wrong offset!");
static_assert(offsetof(UMeterAnalyzer, OnOverallMeterResults) == 0x000098, "Member 'UMeterAnalyzer::OnOverallMeterResults' has a wrong offset!");
static_assert(offsetof(UMeterAnalyzer, OnPerChannelMeterResults) == 0x0000C0, "Member 'UMeterAnalyzer::OnPerChannelMeterResults' has a wrong offset!");
static_assert(offsetof(UMeterAnalyzer, OnLatestOverallMeterResults) == 0x0000E8, "Member 'UMeterAnalyzer::OnLatestOverallMeterResults' has a wrong offset!");
static_assert(offsetof(UMeterAnalyzer, OnLatestPerChannelMeterResults) == 0x000110, "Member 'UMeterAnalyzer::OnLatestPerChannelMeterResults' has a wrong offset!");

// Class AudioSynesthesia.OnsetNRTSettings
// 0x0018 (0x0040 - 0x0028)
class UOnsetNRTSettings final : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                          bDownmixToMono;                                    // 0x0028(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AD4[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GranularityInSeconds;                              // 0x002C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Sensitivity;                                       // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumFrequency;                                  // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumFrequency;                                  // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AD5[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnsetNRTSettings">();
	}
	static class UOnsetNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnsetNRTSettings>();
	}
};
static_assert(alignof(UOnsetNRTSettings) == 0x000008, "Wrong alignment on UOnsetNRTSettings");
static_assert(sizeof(UOnsetNRTSettings) == 0x000040, "Wrong size on UOnsetNRTSettings");
static_assert(offsetof(UOnsetNRTSettings, bDownmixToMono) == 0x000028, "Member 'UOnsetNRTSettings::bDownmixToMono' has a wrong offset!");
static_assert(offsetof(UOnsetNRTSettings, GranularityInSeconds) == 0x00002C, "Member 'UOnsetNRTSettings::GranularityInSeconds' has a wrong offset!");
static_assert(offsetof(UOnsetNRTSettings, Sensitivity) == 0x000030, "Member 'UOnsetNRTSettings::Sensitivity' has a wrong offset!");
static_assert(offsetof(UOnsetNRTSettings, MinimumFrequency) == 0x000034, "Member 'UOnsetNRTSettings::MinimumFrequency' has a wrong offset!");
static_assert(offsetof(UOnsetNRTSettings, MaximumFrequency) == 0x000038, "Member 'UOnsetNRTSettings::MaximumFrequency' has a wrong offset!");

// Class AudioSynesthesia.OnsetNRT
// 0x0008 (0x0080 - 0x0078)
class UOnsetNRT final : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                      Settings;                                          // 0x0078(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void GetChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths) const;
	void GetNormalizedChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnsetNRT">();
	}
	static class UOnsetNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnsetNRT>();
	}
};
static_assert(alignof(UOnsetNRT) == 0x000008, "Wrong alignment on UOnsetNRT");
static_assert(sizeof(UOnsetNRT) == 0x000080, "Wrong size on UOnsetNRT");
static_assert(offsetof(UOnsetNRT, Settings) == 0x000078, "Member 'UOnsetNRT::Settings' has a wrong offset!");

// Class AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
// 0x0008 (0x0030 - 0x0028)
class USynesthesiaSpectrumAnalysisSettings final : public UAudioSynesthesiaSettings
{
public:
	float                                         AnalysisPeriod;                                    // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFTSize                                      FFTSize;                                           // 0x002C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioSpectrumType                            SpectrumType;                                      // 0x002D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFTWindowType                                WindowType;                                        // 0x002E(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDownmixToMono;                                    // 0x002F(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynesthesiaSpectrumAnalysisSettings">();
	}
	static class USynesthesiaSpectrumAnalysisSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynesthesiaSpectrumAnalysisSettings>();
	}
};
static_assert(alignof(USynesthesiaSpectrumAnalysisSettings) == 0x000008, "Wrong alignment on USynesthesiaSpectrumAnalysisSettings");
static_assert(sizeof(USynesthesiaSpectrumAnalysisSettings) == 0x000030, "Wrong size on USynesthesiaSpectrumAnalysisSettings");
static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, AnalysisPeriod) == 0x000028, "Member 'USynesthesiaSpectrumAnalysisSettings::AnalysisPeriod' has a wrong offset!");
static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, FFTSize) == 0x00002C, "Member 'USynesthesiaSpectrumAnalysisSettings::FFTSize' has a wrong offset!");
static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, SpectrumType) == 0x00002D, "Member 'USynesthesiaSpectrumAnalysisSettings::SpectrumType' has a wrong offset!");
static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, WindowType) == 0x00002E, "Member 'USynesthesiaSpectrumAnalysisSettings::WindowType' has a wrong offset!");
static_assert(offsetof(USynesthesiaSpectrumAnalysisSettings, bDownmixToMono) == 0x00002F, "Member 'USynesthesiaSpectrumAnalysisSettings::bDownmixToMono' has a wrong offset!");

// Class AudioSynesthesia.SynesthesiaSpectrumAnalyzer
// 0x0058 (0x00E8 - 0x0090)
class USynesthesiaSpectrumAnalyzer final : public UAudioAnalyzer
{
public:
	class USynesthesiaSpectrumAnalysisSettings*   Settings;                                          // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSpectrumResults;                                 // 0x0098(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AD8[0x18];                                    // 0x00A8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLatestSpectrumResults;                           // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AD9[0x18];                                    // 0x00D0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetCenterFrequencies(const float InSampleRate, TArray<float>* OutCenterFrequencies);

	const int32 GetNumCenterFrequencies() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynesthesiaSpectrumAnalyzer">();
	}
	static class USynesthesiaSpectrumAnalyzer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynesthesiaSpectrumAnalyzer>();
	}
};
static_assert(alignof(USynesthesiaSpectrumAnalyzer) == 0x000008, "Wrong alignment on USynesthesiaSpectrumAnalyzer");
static_assert(sizeof(USynesthesiaSpectrumAnalyzer) == 0x0000E8, "Wrong size on USynesthesiaSpectrumAnalyzer");
static_assert(offsetof(USynesthesiaSpectrumAnalyzer, Settings) == 0x000090, "Member 'USynesthesiaSpectrumAnalyzer::Settings' has a wrong offset!");
static_assert(offsetof(USynesthesiaSpectrumAnalyzer, OnSpectrumResults) == 0x000098, "Member 'USynesthesiaSpectrumAnalyzer::OnSpectrumResults' has a wrong offset!");
static_assert(offsetof(USynesthesiaSpectrumAnalyzer, OnLatestSpectrumResults) == 0x0000C0, "Member 'USynesthesiaSpectrumAnalyzer::OnLatestSpectrumResults' has a wrong offset!");

}

