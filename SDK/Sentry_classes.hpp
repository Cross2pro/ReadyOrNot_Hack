#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class Sentry.SentryAttachment
class USentryAttachment : public UObject
{
public:
	uint8                                        Pad_145F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryAttachment* GetDefaultObj();

	void InitializeWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
	void InitializeWithData(TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType);
	class FString GetPath();
	class FString GetFilename();
	TArray<uint8> GetData();
	class FString GetContentType();
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryBeforeBreadcrumbHandler
class USentryBeforeBreadcrumbHandler : public UObject
{
public:

	static class UClass* StaticClass();
	static class USentryBeforeBreadcrumbHandler* GetDefaultObj();

	class USentryBreadcrumb* HandleBeforeBreadcrumb(class USentryBreadcrumb* Breadcrumb, class USentryHint* Hint);
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryBeforeSendHandler
class USentryBeforeSendHandler : public UObject
{
public:

	static class UClass* StaticClass();
	static class USentryBeforeSendHandler* GetDefaultObj();

	class USentryEvent* HandleBeforeSend(class USentryEvent* Event, class USentryHint* Hint);
};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentryBreadcrumb
class USentryBreadcrumb : public UObject
{
public:
	uint8                                        Pad_15FB[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryBreadcrumb* GetDefaultObj();

	void SetType(const class FString& Type);
	void SetMessage(const class FString& Message);
	void SetLevel(enum class ESentryLevel Level);
	void SetData(TMap<class FString, struct FSentryVariant>& Data);
	void SetCategory(const class FString& Category);
	void Initialize();
	class FString GetType();
	class FString GetMessage();
	enum class ESentryLevel GetLevel();
	TMap<class FString, struct FSentryVariant> GetData();
	class FString GetCategory();
};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentryEvent
class USentryEvent : public UObject
{
public:
	uint8                                        Pad_193A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryEvent* GetDefaultObj();

	bool TryGetTag(const class FString& Key, class FString* Value);
	bool TryGetExtra(const class FString& Key, struct FSentryVariant* Value);
	bool TryGetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>* Value);
	void SetTags(TMap<class FString, class FString>& Tags);
	void SetTag(const class FString& Key, const class FString& Value);
	void SetMessage(const class FString& Message);
	void SetLevel(enum class ESentryLevel Level);
	void SetFingerprint(TArray<class FString>& Fingerprint);
	void SetExtras(TMap<class FString, struct FSentryVariant>& Extras);
	void SetExtra(const class FString& Key, struct FSentryVariant& Value);
	void SetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values);
	void RemoveTag(const class FString& Key);
	void RemoveExtra(const class FString& Key);
	void RemoveContext(const class FString& Key);
	bool IsCrash();
	bool IsAnr();
	void Initialize();
	TMap<class FString, class FString> GetTags();
	class FString GetTag(const class FString& Key);
	class FString GetMessage();
	enum class ESentryLevel GetLevel();
	class FString GetID();
	TArray<class FString> GetFingerprint();
	TMap<class FString, struct FSentryVariant> GetExtras();
	struct FSentryVariant GetExtra(const class FString& Key);
	TMap<class FString, struct FSentryVariant> GetContext(const class FString& Key);
};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentryHint
class USentryHint : public UObject
{
public:
	uint8                                        Pad_19C1[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryHint* GetDefaultObj();

	void Initialize();
	void AddAttachment(class USentryAttachment* Attachment);
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryLibrary
class USentryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USentryLibrary* GetDefaultObj();

	class USentryUserFeedback* CreateSentryUserFeedback(const class FString& EventID, const class FString& Name, const class FString& Email, const class FString& Comments);
	class USentryUser* CreateSentryUser(const class FString& Email, const class FString& ID, const class FString& Username, const class FString& IpAddress, TMap<class FString, class FString>& Data);
	class USentryTransactionContext* CreateSentryTransactionContext(const class FString& Name, const class FString& Operation);
	class USentryEvent* CreateSentryEvent(const class FString& Message, enum class ESentryLevel Level);
	class USentryBreadcrumb* CreateSentryBreadcrumb(const class FString& Message, const class FString& Type, const class FString& Category, TMap<class FString, struct FSentryVariant>& Data, enum class ESentryLevel Level);
	class USentryAttachment* CreateSentryAttachmentWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
	class USentryAttachment* CreateSentryAttachmentWithData(TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType);
};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentrySamplingContext
class USentrySamplingContext : public UObject
{
public:
	uint8                                        Pad_1C6A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentrySamplingContext* GetDefaultObj();

	class USentryTransactionContext* GetTransactionContext();
	TMap<class FString, class FString> GetCustomSamplingContext();
};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentryScope
class USentryScope : public UObject
{
public:
	uint8                                        Pad_218D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryScope* GetDefaultObj();

	bool TryGetTag(const class FString& Key, class FString* Value);
	bool TryGetExtra(const class FString& Key, struct FSentryVariant* Value);
	bool TryGetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>* Value);
	void SetTags(TMap<class FString, class FString>& Tags);
	void SetTag(const class FString& Key, const class FString& Value);
	void SetLevel(enum class ESentryLevel Level);
	void SetFingerprint(TArray<class FString>& Fingerprint);
	void SetExtras(TMap<class FString, struct FSentryVariant>& Extras);
	void SetExtra(const class FString& Key, struct FSentryVariant& Value);
	void SetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values);
	void RemoveTag(const class FString& Key);
	void RemoveExtra(const class FString& Key);
	void RemoveContext(const class FString& Key);
	void Initialize();
	TMap<class FString, class FString> GetTags();
	class FString GetTag(const class FString& Key);
	enum class ESentryLevel GetLevel();
	TArray<class FString> GetFingerprint();
	TMap<class FString, struct FSentryVariant> GetExtras();
	struct FSentryVariant GetExtra(const class FString& Key);
	TMap<class FString, struct FSentryVariant> GetContext(const class FString& Key);
	void ClearBreadcrumbs();
	void ClearAttachments();
	void Clear();
	void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
	void AddAttachment(class USentryAttachment* Attachment);
};

// 0x0 (0x28 - 0x28)
// Class Sentry.ScopeTestBeforeSendHandler
class UScopeTestBeforeSendHandler : public USentryBeforeSendHandler
{
public:

	static class UClass* StaticClass();
	static class UScopeTestBeforeSendHandler* GetDefaultObj();

};

// 0x150 (0x178 - 0x28)
// Class Sentry.SentrySettings
class USentrySettings : public UObject
{
public:
	bool                                         InitAutomatically;                                 // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Dsn;                                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Debug;                                             // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ENVIRONMENT;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Dist;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SampleRate;                                        // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutoLogAttachment;                           // 0x6C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttachStacktrace;                                  // 0x6D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SendDefaultPii;                                    // 0x6E(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttachScreenshot;                                  // 0x6F(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AttachGpuDump;                                     // 0x70(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2208[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxAttachmentSize;                                 // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBreadcrumbs;                                    // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutomaticBreadcrumbs                 AutomaticBreadcrumbs;                              // 0x7C(0x5)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAutomaticBreadcrumbsForLogs          AutomaticBreadcrumbsForLogs;                       // 0x81(0x5)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         EnableAutoSessionTracking;                         // 0x86(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2253[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SessionTimeout;                                    // 0x88(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OverrideReleaseName;                               // 0x8C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2268[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Release;                                           // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseProxy;                                          // 0xA0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_226B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProxyUrl;                                          // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USentryBeforeSendHandler>  BeforeSendHandler;                                 // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USentryBeforeBreadcrumbHandler> BeforeBreadcrumbHandler;                           // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutoCrashCapturing;                          // 0xC8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESentryDatabaseLocation           DatabaseLocation;                                  // 0xC9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CrashpadWaitForUpload;                             // 0xCA(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2282[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        InAppInclude;                                      // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        InAppExclude;                                      // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         EnableAppNotRespondingTracking;                    // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableTracing;                                     // 0xF1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESentryTracesSamplingType         SamplingType;                                      // 0xF2(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2290[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TracesSampleRate;                                  // 0xF4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USentryTraceSampler>       TracesSampler;                                     // 0xF8(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EditorDsn;                                         // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTagsPromotion                        TagsPromotion;                                     // 0x110(0x6)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FEnableBuildConfigurations            EnableBuildConfigurations;                         // 0x116(0x5)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FEnableBuildTargets                   EnableBuildTargets;                                // 0x11B(0x5)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         EnableForPromotedBuildsOnly;                       // 0x120(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UploadSymbolsAutomatically;                        // 0x121(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProjectName;                                       // 0x128(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OrgName;                                           // 0x138(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthToken;                                         // 0x148(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeSources;                                    // 0x158(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESentryCliLogLevel                DiagnosticLevel;                                   // 0x159(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseLegacyGradlePlugin;                             // 0x15A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22ED[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CrashReporterUrl;                                  // 0x160(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentrySettings* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentrySpan
class USentrySpan : public UObject
{
public:
	uint8                                        Pad_24B7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentrySpan* GetDefaultObj();

	class USentrySpan* StartChildWithTimestamp(const class FString& Operation, const class FString& Description, int64 Timestamp);
	class USentrySpan* StartChild(const class FString& Operation, const class FString& Description);
	void SetTag(const class FString& Key, const class FString& Value);
	void SetData(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values);
	void RemoveTag(const class FString& Key);
	void RemoveData(const class FString& Key);
	bool IsFinished();
	void GetTrace(class FString* Name, class FString* Value);
	void FinishWithTimestamp(int64 Timestamp);
	void Finish();
};

// 0x80 (0xB0 - 0x30)
// Class Sentry.SentrySubsystem
class USentrySubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_29B6[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USentryBeforeSendHandler*              BeforeSendHandler;                                 // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USentryBeforeBreadcrumbHandler*        BeforeBreadcrumbHandler;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USentryTraceSampler*                   TraceSampler;                                      // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29D2[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentrySubsystem* GetDefaultObj();

	class USentryTransaction* StartTransactionWithContextAndTimestamp(class USentryTransactionContext* Context, int64 Timestamp);
	class USentryTransaction* StartTransactionWithContextAndOptions(class USentryTransactionContext* Context, TMap<class FString, class FString>& Options);
	class USentryTransaction* StartTransactionWithContext(class USentryTransactionContext* Context);
	class USentryTransaction* StartTransaction(const class FString& Name, const class FString& Operation);
	void StartSession();
	void SetUser(class USentryUser* User);
	void SetTag(const class FString& Key, const class FString& Value);
	void SetLevel(enum class ESentryLevel Level);
	void SetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values);
	void RemoveUser();
	void RemoveTag(const class FString& Key);
	bool IsSupportedForCurrentSettings();
	bool IsEnabled();
	enum class ESentryCrashedLastRun IsCrashedLastRun();
	void InitializeWithSettings(FDelegateProperty_& OnConfigureSettings);
	void Initialize();
	void EndSession();
	class USentryTransactionContext* ContinueTrace(const class FString& SentryTrace, TArray<class FString>& BaggageHeaders);
	void Close();
	void ClearBreadcrumbs();
	void ClearAttachments();
	void CaptureUserFeedbackWithParams(const class FString& EventID, const class FString& Email, const class FString& Comments, const class FString& Name);
	void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);
	class FString CaptureMessageWithScope(const class FString& Message, FDelegateProperty_& OnConfigureScope, enum class ESentryLevel Level);
	class FString CaptureMessage(const class FString& Message, enum class ESentryLevel Level);
	class FString CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty_& OnConfigureScope);
	class FString CaptureEvent(class USentryEvent* Event);
	void AddBreadcrumbWithParams(const class FString& Message, const class FString& Category, const class FString& Type, TMap<class FString, struct FSentryVariant>& Data, enum class ESentryLevel Level);
	void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
	void AddAttachment(class USentryAttachment* Attachment);
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryTraceSampler
class USentryTraceSampler : public UObject
{
public:

	static class UClass* StaticClass();
	static class USentryTraceSampler* GetDefaultObj();

	bool Sample(class USentrySamplingContext* SamplingContext, float* SamplingValue);
};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentryTransaction
class USentryTransaction : public UObject
{
public:
	uint8                                        Pad_2BDF[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryTransaction* GetDefaultObj();

	class USentrySpan* StartChildSpanWithTimestamp(const class FString& Operation, const class FString& Description, int64 Timestamp);
	class USentrySpan* StartChildSpan(const class FString& Operation, const class FString& Description);
	void SetTag(const class FString& Key, const class FString& Value);
	void SetName(const class FString& Name);
	void SetData(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values);
	void RemoveTag(const class FString& Key);
	void RemoveData(const class FString& Key);
	bool IsFinished();
	void GetTrace(class FString* Name, class FString* Value);
	void FinishWithTimestamp(int64 Timestamp);
	void Finish();
};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentryTransactionContext
class USentryTransactionContext : public UObject
{
public:
	uint8                                        Pad_2C47[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryTransactionContext* GetDefaultObj();

	void Initialize(const class FString& Name, const class FString& Operation);
	class FString GetOperation();
	class FString GetName();
};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentryUser
class USentryUser : public UObject
{
public:
	uint8                                        Pad_2D3C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryUser* GetDefaultObj();

	void SetUsername(const class FString& Username);
	void SetIpAddress(const class FString& IpAddress);
	void SetId(const class FString& ID);
	void SetEmail(const class FString& Email);
	void SetData(TMap<class FString, class FString>& Data);
	class FString GetUsername();
	class FString GetIpAddress();
	class FString GetID();
	class FString GetEmail();
	TMap<class FString, class FString> GetData();
};

// 0x18 (0x40 - 0x28)
// Class Sentry.SentryUserFeedback
class USentryUserFeedback : public UObject
{
public:
	uint8                                        Pad_2E9F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USentryUserFeedback* GetDefaultObj();

	void SetName(const class FString& Name);
	void SetEmail(const class FString& Email);
	void SetComment(const class FString& Comments);
	void Initialize(const class FString& EventID);
	class FString GetName();
	class FString GetEmail();
	class FString GetComment();
};

// 0x0 (0x28 - 0x28)
// Class Sentry.SentryVariantHelper
class USentryVariantHelper : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USentryVariantHelper* GetDefaultObj();

	bool TryGetString(struct FSentryVariant& Variant, class FString* Value);
	bool TryGetMap(struct FSentryVariant& Variant, TMap<class FString, struct FSentryVariant>* Value);
	bool TryGetInteger(struct FSentryVariant& Variant, int32* Value);
	bool TryGetFloat(struct FSentryVariant& Variant, float* Value);
	bool TryGetBool(struct FSentryVariant& Variant, bool* Value);
	bool TryGetArray(struct FSentryVariant& Variant, TArray<struct FSentryVariant>* Value);
	struct FSentryVariant MakeSentryVariantFromString(const class FString& Value);
	struct FSentryVariant MakeSentryVariantFromMap(TMap<class FString, struct FSentryVariant>& Value);
	struct FSentryVariant MakeSentryVariantFromInteger(int32 Value);
	struct FSentryVariant MakeSentryVariantFromFloat(float Value);
	struct FSentryVariant MakeSentryVariantFromBool(bool Value);
	struct FSentryVariant MakeSentryVariantFromArray(TArray<struct FSentryVariant>& Value);
	enum class ESentryVariantType GetType(struct FSentryVariant& Variant);
	class FString GetString(struct FSentryVariant& Variant);
	TMap<class FString, struct FSentryVariant> GetMap(struct FSentryVariant& Variant);
	int32 GetInteger(struct FSentryVariant& Variant);
	float GetFloat(struct FSentryVariant& Variant);
	bool GetBool(struct FSentryVariant& Variant);
	TArray<struct FSentryVariant> GetArray(struct FSentryVariant& Variant);
	struct FSentryVariant Conv_StringToFSentryVariant(const class FString& Value);
	struct FSentryVariant Conv_MapToFSentryVariant(TMap<class FString, struct FSentryVariant>& Value);
	struct FSentryVariant Conv_IntToFSentryVariant(int32 Value);
	struct FSentryVariant Conv_FloatToFSentryVariant(float Value);
	struct FSentryVariant Conv_BoolToFSentryVariant(bool Value);
	struct FSentryVariant Conv_ArrayToFSentryVariant(TArray<struct FSentryVariant>& Value);
};

}


