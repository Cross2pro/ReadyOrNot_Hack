#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A0 - 0x298)
// Class FMODStudio.FMODAmbientSound
class AFMODAmbientSound : public AActor
{
public:
	class UFMODAudioComponent*                   AudioComponent;                                    // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AFMODAmbientSound* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class FMODStudio.FMODAnimNotifyPlay
class UFMODAnimNotifyPlay : public UAnimNotify
{
public:
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_40 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9A7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AttachName;                                        // 0x40(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                            Event;                                             // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFMODAnimNotifyPlay* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FMODStudio.FMODAsset
class UFMODAsset : public UObject
{
public:
	struct FGuid                                 AssetGuid;                                         // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFMODAsset* GetDefaultObj();

};

// 0x1D0 (0x470 - 0x2A0)
// Class FMODStudio.FMODAudioComponent
class UFMODAudioComponent : public USceneComponent
{
public:
	class UFMODEvent*                            Event;                                             // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     ParameterCache;                                    // 0x2A8(0x50)(Edit, BlueprintVisible, SimpleDisplay, NativeAccessSpecifierPublic)
	class FString                                ProgrammerSoundName;                               // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableTimelineCallbacks : 1;                      // Mask: 0x1, PropSize: 0x10x308(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x2, PropSize: 0x10x308(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x4, PropSize: 0x10x308(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_44 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A68[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEventStopped;                                    // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSoundStopped;                                    // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimelineMarker;                                  // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimelineBeat;                                    // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FFMODAttenuationDetails               AttenuationDetails;                                // 0x350(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODOcclusionDetails                 OcclusionDetails;                                  // 0x35C(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A81[0x111];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFMODAudioComponent* GetDefaultObj();

	void Stop();
	void SetVolume(float Volume);
	void SetTimelinePosition(int32 Time);
	void SetProperty(enum class EFMODEventProperty Property, float Value);
	void SetProgrammerSoundName(const class FString& Value);
	void SetPitch(float Pitch);
	void SetPaused(bool Paused);
	void SetParameter(class FName Name, float Value);
	void SetEvent(class UFMODEvent* NewEvent);
	void Release();
	void Play();
	void KeyOff();
	bool IsPlaying();
	int32 GetTimelinePosition();
	float GetProperty(enum class EFMODEventProperty Property);
	bool GetPaused();
	void GetParameterValue(class FName Name, float* UserValue, float* FinalValue);
	float GetParameter(class FName Name);
	int32 GetLength();
};

// 0x30 (0x2D0 - 0x2A0)
// Class FMODStudio.FMODAudioLinkComponent
class UFMODAudioLinkComponent : public USceneComponent
{
public:
	uint8                                        Pad_A97[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioLinkSettings*                Settings;                                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       AudioComponent;                                    // 0x2B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A9B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFMODAudioLinkComponent* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class FMODStudio.FMODAudioLinkSettings
class UFMODAudioLinkSettings : public UAudioLinkSettingsAbstract
{
public:
	TSoftObjectPtr<class UFMODEvent>             LinkEvent;                                         // 0x38(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldClearBufferOnReceipt;                       // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ACA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProducerToConsumerBufferRatio;                     // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InitialSilenceFillRatio;                           // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ACC[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            LinkEventResolved;                                 // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ACE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFMODAudioLinkSettings* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class FMODStudio.FMODBank
class UFMODBank : public UFMODAsset
{
public:

	static class UClass* StaticClass();
	static class UFMODBank* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class FMODStudio.FMODBankLookup
class UFMODBankLookup : public UObject
{
public:
	class UDataTable*                            DataTable;                                         // 0x28(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MasterBankPath;                                    // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MasterAssetsBankPath;                              // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MasterStringsBankPath;                             // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFMODBankLookup* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FMODStudio.FMODBlueprintStatics
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFMODBlueprintStatics* GetDefaultObj();

	void VCASetVolume(class UFMODVCA* Vca, float Volume);
	void UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
	void UnloadBankSampleData(class UFMODBank* Bank);
	void UnloadBank(class UFMODBank* Bank);
	void SetOutputDriverByName(const class FString& NewDriverName);
	void SetOutputDriverByIndex(int32 NewDriverIndex);
	void SetLocale(const class FString& Locale);
	void SetGlobalParameterByName(class FName Name, float Value);
	class UFMODAudioComponent* PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy);
	struct FFMODEventInstance PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, struct FTransform& Location, bool bAutoPlay);
	struct FFMODEventInstance PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay);
	void MixerSuspend();
	void MixerResume();
	void LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
	void LoadBankSampleData(class UFMODBank* Bank);
	void LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);
	bool IsBankLoaded(class UFMODBank* Bank);
	TArray<class FString> GetOutputDrivers();
	void GetGlobalParameterValueByName(class FName Name, float* UserValue, float* FinalValue);
	float GetGlobalParameterByName(class FName Name);
	TArray<struct FFMODEventInstance> FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event);
	class UFMODEvent* FindEventByName(const class FString& Name);
	class UFMODAsset* FindAssetByName(const class FString& Name);
	void EventInstanceStop(const struct FFMODEventInstance& EventInstance, bool Release);
	void EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume);
	void EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, struct FTransform& Location);
	void EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, enum class EFMODEventProperty Property, float Value);
	void EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch);
	void EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool Paused);
	void EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, class FName Name, float Value);
	void EventInstanceRelease(const struct FFMODEventInstance& EventInstance);
	void EventInstancePlay(const struct FFMODEventInstance& EventInstance);
	void EventInstanceKeyOff(const struct FFMODEventInstance& EventInstance);
	bool EventInstanceIsValid(const struct FFMODEventInstance& EventInstance);
	void EventInstanceGetParameterValue(const struct FFMODEventInstance& EventInstance, class FName Name, float* UserValue, float* FinalValue);
	float EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, class FName Name);
	void BusStopAllEvents(class UFMODBus* Bus, enum class EFMOD_STUDIO_STOP_MODE StopMode);
	void BusSetVolume(class UFMODBus* Bus, float Volume);
	void BusSetPaused(class UFMODBus* Bus, bool bPaused);
	void BusSetMute(class UFMODBus* Bus, bool bMute);
};

// 0x0 (0x38 - 0x38)
// Class FMODStudio.FMODBus
class UFMODBus : public UFMODAsset
{
public:

	static class UClass* StaticClass();
	static class UFMODBus* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class FMODStudio.FMODEvent
class UFMODEvent : public UFMODAsset
{
public:

	static class UClass* StaticClass();
	static class UFMODEvent* GetDefaultObj();

};

// 0x108 (0x1F8 - 0xF0)
// Class FMODStudio.FMODEventControlSection
class UFMODEventControlSection : public UMovieSceneSection
{
public:
	struct FFMODEventControlChannel              ControlKeys;                                       // 0xF0(0x108)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFMODEventControlSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class FMODStudio.FMODEventControlTrack
class UFMODEventControlTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_E10[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            ControlSections;                                   // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFMODEventControlTrack* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class FMODStudio.FMODEventParameterTrack
class UFMODEventParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_E19[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFMODEventParameterTrack* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class FMODStudio.FMODPort
class UFMODPort : public UFMODAsset
{
public:

	static class UClass* StaticClass();
	static class UFMODPort* GetDefaultObj();

};

// 0x1E0 (0x208 - 0x28)
// Class FMODStudio.FMODSettings
class UFMODSettings : public UObject
{
public:
	bool                                         bLoadAllBanks;                                     // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadAllSampleData;                                // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableLiveUpdate;                                 // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableEditorLiveUpdate;                           // 0x2B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E43[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        BankOutputDirectory;                               // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFMODSpeakerMode                  OutputFormat;                                      // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFMODOutput                       OutputType;                                        // 0x41(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFMODProjectLocale>            Locales;                                           // 0x48(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                        Vol0VirtualLevel;                                  // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SampleRate;                                        // 0x5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchHardwareSampleRate;                          // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RealChannelCount;                                  // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalChannelCount;                                 // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DSPBufferLength;                                   // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DSPBufferCount;                                    // 0x70(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FileBufferSize;                                    // 0x74(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StudioUpdatePeriod;                                // 0x78(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E57[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InitialOutputDriverName;                           // 0x80(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockAllBuses;                                     // 0x90(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MemoryPoolSize;                                    // 0x94(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EFMODCodec, int32>           Codecs;                                            // 0x98(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	int32                                        LiveUpdatePort;                                    // 0xE8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EditorLiveUpdatePort;                              // 0xEC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReloadBanksDelay;                                  // 0xF0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAPIErrorLogging;                            // 0xF4(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMemoryTracking;                             // 0xF5(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        PluginFiles;                                       // 0xF8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                ContentBrowserPrefix;                              // 0x108(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ForcePlatformName;                                 // 0x118(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MasterBankName;                                    // 0x128(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SkipLoadBankName;                                  // 0x138(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StudioBankKey;                                     // 0x148(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WavWriterPath;                                     // 0x158(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFMODLogging                      LoggingLevel;                                      // 0x168(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OcclusionParameter;                                // 0x170(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AmbientVolumeParameter;                            // 0x180(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AmbientLPFParameter;                               // 0x190(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFMODAudioLinkEnabled;                             // 0x1A0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E62[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFMODPlatforms, struct FFMODPlatformSettings> Platforms;                                         // 0x1A8(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_E63[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFMODSettings* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class FMODStudio.FMODSnapshot
class UFMODSnapshot : public UFMODEvent
{
public:

	static class UClass* StaticClass();
	static class UFMODSnapshot* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class FMODStudio.FMODSnapshotReverb
class UFMODSnapshotReverb : public UReverbEffect
{
public:
	struct FGuid                                 AssetGuid;                                         // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFMODSnapshotReverb* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class FMODStudio.FMODVCA
class UFMODVCA : public UFMODAsset
{
public:

	static class UClass* StaticClass();
	static class UFMODVCA* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class FMODStudio.FMODWorldSubsystem
class UFMODWorldSubsystem : public UWorldSubsystem
{
public:
	TArray<class UFMODAudioComponent*>           AnimNotifyAudioPool;                               // 0x30(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFMODAudioComponent*>           AnimNotifyAudioPool_InUse;                         // 0x40(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFMODAudioComponent*>           WorldAudioPool;                                    // 0x50(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFMODAudioComponent*>           WorldAudioPool_InUse;                              // 0x60(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFMODWorldSubsystem* GetDefaultObj();

	void OnWorldAudioStopped();
	void OnAnimNotifyAudioStopped();
};

}


