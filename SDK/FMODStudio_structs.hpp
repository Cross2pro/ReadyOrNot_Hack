#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFMODEventProperty : uint8
{
	ChannelPriority                = 0,
	ScheduleDelay                  = 1,
	ScheduleLookahead              = 2,
	MinimumDistance                = 3,
	MaximumDistance                = 4,
	Count                          = 5,
	EFMODEventProperty_MAX         = 6,
};

enum class EFMOD_STUDIO_STOP_MODE : uint8
{
	ALLOWFADEOUT                   = 0,
	Immediate                      = 1,
	EFMOD_STUDIO_STOP_MODE_MAX     = 2,
};

enum class EFMODEventControlKey : uint8
{
	Stop                           = 0,
	Play                           = 1,
	Pause                          = 2,
	EFMODEventControlKey_MAX       = 3,
};

enum class EFMODLogging : uint8
{
	LEVEL_NONE                     = 0,
	LEVEL_ERROR                    = 1,
	LEVEL_WARNING                  = 2,
	LEVEL_LOG                      = 4,
	LEVEL_MAX                      = 5,
};

enum class EFMODSpeakerMode : uint8
{
	Stereo                         = 0,
	Surround_5_1                   = 1,
	Surround_7_1                   = 2,
	Surround_7_1_4                 = 3,
	EFMODSpeakerMode_MAX           = 4,
};

enum class EFMODOutput : uint8
{
	TYPE_AUTODETECT                = 0,
	TYPE_NOSOUND                   = 1,
	TYPE_WASAPI                    = 2,
	TYPE_ASIO                      = 3,
	TYPE_PULSEAUDIO                = 4,
	TYPE_ALSA                      = 5,
	TYPE_COREAUDIO                 = 6,
	TYPE_AUDIOTRACK                = 7,
	TYPE_OPENSL                    = 8,
	TYPE_AUDIOOUT                  = 9,
	TYPE_AUDIO3D                   = 10,
	TYPE_NNAUDIO                   = 11,
	TYPE_WINSONIC                  = 12,
	TYPE_AAUDIO                    = 13,
	TYPE_MAX                       = 14,
};

enum class EFMODPlatforms : uint8
{
	Windows                        = 0,
	Linux                          = 1,
	Mac                            = 2,
	Android                        = 3,
	IOS                            = 4,
	PS4                            = 5,
	PS5                            = 6,
	Deprecated                     = 7,
	Switch                         = 8,
	XboxOne                        = 9,
	XSX                            = 10,
	Editor                         = 11,
	EFMODPlatforms_MAX             = 12,
};

enum class EFMODCodec : uint8
{
	VORBIS                         = 0,
	FADPCM                         = 1,
	OPUS                           = 2,
	XMA                            = 3,
	AT9                            = 4,
	EFMODCodec_MAX                 = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x28 - 0x8)
// ScriptStruct FMODStudio.FMODAssetLookupRow
struct FFMODAssetLookupRow : public FTableRowBase
{
public:
	class FString                                PackageName;                                       // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AssetName;                                         // 0x18(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FMODStudio.FMODAttenuationDetails
struct FFMODAttenuationDetails
{
public:
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_63 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_EE5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDistance;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistance;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FMODStudio.FMODOcclusionDetails
struct FFMODOcclusionDetails
{
public:
	bool                                         bEnableOcclusion;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OcclusionTraceChannel;                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseComplexCollisionForOcclusion;                  // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FMODStudio.FMODLocalizedBankRow
struct FFMODLocalizedBankRow : public FTableRowBase
{
public:
	class FString                                Path;                                              // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FMODStudio.FMODLocalizedBankTable
struct FFMODLocalizedBankTable : public FTableRowBase
{
public:
	class UDataTable*                            Banks;                                             // 0x8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FMODStudio.FMODEventInstance
struct FFMODEventInstance
{
public:
	uint8                                        Pad_EEC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x108 - 0x108)
// ScriptStruct FMODStudio.FMODEventControlChannel
struct FFMODEventControlChannel : public FMovieSceneByteChannel
{
public:
};

// 0x110 (0x130 - 0x20)
// ScriptStruct FMODStudio.FMODEventControlSectionTemplate
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FFMODEventControlChannel              ControlKeys;                                       // 0x20(0x108)(NativeAccessSpecifierPublic)
	uint8                                        Pad_EEF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x80 - 0x80)
// ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FMODStudio.FMODPlatformSettings
struct FFMODPlatformSettings
{
public:
	int32                                        RealChannelCount;                                  // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SampleRate;                                        // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFMODSpeakerMode                  SpeakerMode;                                       // 0x8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFMODOutput                       OutputType;                                        // 0x9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomPoolSize;                                    // 0xC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EFMODCodec, int32>           Codecs;                                            // 0x10(0x50)(Edit, Config, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FMODStudio.FMODProjectLocale
struct FFMODProjectLocale
{
public:
	class FString                                LocaleName;                                        // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocaleCode;                                        // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefault;                                          // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F00[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


