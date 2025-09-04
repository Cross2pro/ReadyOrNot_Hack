#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESentryLevel : uint8
{
	Debug                          = 0,
	Info                           = 1,
	Warning                        = 2,
	Error                          = 3,
	Fatal                          = 4,
	ESentryLevel_MAX               = 5,
};

enum class ESentryCrashedLastRun : uint8
{
	NotEvaluated                   = 0,
	NotCrashed                     = 1,
	Crashed                        = 2,
	ESentryCrashedLastRun_MAX      = 3,
};

enum class ESentryTracesSamplingType : uint8
{
	UniformSampleRate              = 0,
	TracesSampler                  = 1,
	ESentryTracesSamplingType_MAX  = 2,
};

enum class ESentryCliLogLevel : uint8
{
	Trace                          = 0,
	Debug                          = 1,
	Info                           = 2,
	Warn                           = 3,
	Error                          = 4,
	ESentryCliLogLevel_MAX         = 5,
};

enum class ESentryDatabaseLocation : uint8
{
	ProjectDirectory               = 0,
	ProjectUserDirectory           = 1,
	ESentryDatabaseLocation_MAX    = 2,
};

enum class ESentryVariantType : uint8
{
	Empty                          = 0,
	Integer                        = 1,
	Float                          = 2,
	Bool                           = 3,
	String                         = 4,
	Array                          = 5,
	Map                            = 6,
	ESentryVariantType_MAX         = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x5 (0x5 - 0x0)
// ScriptStruct Sentry.AutomaticBreadcrumbs
struct FAutomaticBreadcrumbs
{
public:
	bool                                         bOnMapLoadingStarted;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnMapLoaded;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnGameStateClassChanged;                          // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnGameSessionIDChanged;                           // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnUserActivityStringChanged;                      // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct Sentry.AutomaticBreadcrumbsForLogs
struct FAutomaticBreadcrumbsForLogs
{
public:
	bool                                         bOnFatalLog;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnErrorLog;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnWarningLog;                                     // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnInfoLog;                                        // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnDebugLog;                                       // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct Sentry.TagsPromotion
struct FTagsPromotion
{
public:
	bool                                         bPromoteBuildConfiguration;                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPromoteTargetType;                                // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPromoteEngineMode;                                // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPromoteIsGame;                                    // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPromoteIsStandalone;                              // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPromoteIsUnattended;                              // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct Sentry.EnableBuildConfigurations
struct FEnableBuildConfigurations
{
public:
	bool                                         bEnableDebug;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebugGame;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDevelopment;                                // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTest;                                       // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableShipping;                                   // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct Sentry.EnableBuildTargets
struct FEnableBuildTargets
{
public:
	bool                                         bEnableClient;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGame;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableEditor;                                     // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableServer;                                     // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableProgram;                                    // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Sentry.SentryVariant
struct FSentryVariant
{
public:
	uint8                                        Pad_34B4[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


