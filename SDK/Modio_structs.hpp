#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EModioModfilePlatform : uint8
{
	Windows                        = 0,
	Mac                            = 1,
	Linux                          = 2,
	Android                        = 3,
	IOS                            = 4,
	XboxOne                        = 5,
	XboxSeriesX                    = 6,
	PS4                            = 7,
	PS5                            = 8,
	Switch                         = 9,
	Oculus                         = 10,
	Source                         = 11,
	EModioModfilePlatform_MAX      = 12,
};

enum class EGameMaturityFlags : uint8
{
	None                           = 0,
	MatureModsAllowed              = 1,
	MatureAudiencesOnly            = 2,
	EGameMaturityFlags_MAX         = 3,
};

enum class EGameMonetizationFlags : uint8
{
	None                           = 0,
	Monetization                   = 1,
	Marketplace                    = 2,
	PartnerProgram                 = 4,
	EGameMonetizationFlags_MAX     = 5,
};

enum class EModioModServerSideStatus : uint8
{
	NotAccepted                    = 0,
	Accepted                       = 1,
	Deleted                        = 3,
	EModioModServerSideStatus_MAX  = 4,
};

enum class EModioVirusStatus : uint8
{
	NoThreat                       = 0,
	Malicious                      = 1,
	EModioVirusStatus_MAX          = 2,
};

enum class EModioVirusScanStatus : uint8
{
	NotScanned                     = 0,
	ScanComplete                   = 1,
	InProgress                     = 2,
	TooLargeToScan                 = 3,
	FileNotFound                   = 4,
	ErrorScanning                  = 5,
	EModioVirusScanStatus_MAX      = 6,
};

enum class EModioObjectVisibilityFlags : uint8
{
	Hidden                         = 0,
	Public                         = 1,
	EModioObjectVisibilityFlags_MAX = 2,
};

enum class EModioMaturityFlags : uint8
{
	None                           = 0,
	Alcohol                        = 1,
	Drugs                          = 2,
	Violence                       = 4,
	Explicit                       = 8,
	EModioMaturityFlags_MAX        = 9,
};

enum class EModioModManagementEventType : uint8
{
	Installed                      = 0,
	Uninstalled                    = 1,
	Updated                        = 2,
	Uploaded                       = 3,
	BeginInstall                   = 4,
	BeginUninstall                 = 5,
	BeginUpdate                    = 6,
	BeginUpload                    = 7,
	EModioModManagementEventType_MAX = 8,
};

enum class EModioAuthenticationProvider : uint8
{
	XboxLive                       = 0,
	Steam                          = 1,
	GoG                            = 2,
	Itch                           = 3,
	Switch                         = 4,
	Discord                        = 5,
	PSN                            = 6,
	Epic                           = 7,
	Oculus                         = 8,
	OpenID                         = 9,
	GoogleIDToken                  = 10,
	GoogleServerSideToken          = 11,
	EModioAuthenticationProvider_MAX = 12,
};

enum class EModioEnvironment : uint8
{
	Test                           = 0,
	Live                           = 1,
	EModioEnvironment_MAX          = 2,
};

enum class EModioPortal : uint8
{
	None                           = 0,
	Apple                          = 1,
	EpicGamesStore                 = 2,
	GOG                            = 3,
	Google                         = 4,
	Itchio                         = 5,
	Nintendo                       = 6,
	PSN                            = 7,
	Steam                          = 8,
	XboxLive                       = 9,
	EModioPortal_MAX               = 10,
};

enum class EModioPlatformName : uint8
{
	Windows                        = 0,
	Mac                            = 1,
	Linux                          = 2,
	PS4                            = 3,
	PS5                            = 4,
	XBoxOne                        = 5,
	XSX                            = 6,
	Switch                         = 7,
	Unknown                        = 8,
	Android                        = 9,
	IOS                            = 10,
	EModioPlatformName_MAX         = 11,
};

enum class EModioLogoSize : uint8
{
	Thumb320                       = 0,
	Thumb640                       = 1,
	Thumb1280                      = 2,
	Original                       = 3,
	EModioLogoSize_MAX             = 4,
};

enum class EModioAvatarSize : uint8
{
	Original                       = 0,
	Thumb50                        = 1,
	Thumb100                       = 2,
	EModioAvatarSize_MAX           = 3,
};

enum class EModioGallerySize : uint8
{
	Original                       = 0,
	Thumb320                       = 1,
	Thumb1280                      = 2,
	EModioGallerySize_MAX          = 3,
};

enum class EModioLogLevel : uint8
{
	Trace                          = 0,
	Detailed                       = 1,
	Info                           = 2,
	Warning                        = 3,
	Error                          = 4,
	EModioLogLevel_MAX             = 5,
};

enum class EModioLanguage : uint8
{
	English                        = 0,
	Bulgarian                      = 1,
	French                         = 2,
	German                         = 3,
	Italian                        = 4,
	Polish                         = 5,
	Portuguese                     = 6,
	Hungarian                      = 7,
	Japanese                       = 8,
	Korean                         = 9,
	Russian                        = 10,
	Spanish                        = 11,
	Thai                           = 12,
	ChineseSimplified              = 13,
	ChineseTraditional             = 14,
	Turkish                        = 15,
	Ukrainian                      = 16,
	Arabic                         = 17,
	Count                          = 18,
	EModioLanguage_MAX             = 19,
};

enum class EModioModChangeType : uint8
{
	Added                          = 0,
	Removed                        = 1,
	Updated                        = 2,
	EModioModChangeType_MAX        = 3,
};

enum class EFileSizeUnit : uint8
{
	Largest                        = 0,
	B                              = 1,
	KB                             = 1024,
	MB                             = 1048576,
	GB                             = 1073741824,
	EFileSizeUnit_MAX              = 1073741825,
};

enum class EModioEntitlementConsumptionState : uint8
{
	Failed                         = 0,
	Pending                        = 1,
	Fulfilled                      = 2,
	ConsumeLimitExceeded           = 3,
	EModioEntitlementConsumptionState_MAX = 4,
};

enum class EModioEntitlementType : uint8
{
	VirtualCurrency                = 0,
	EModioEntitlementType_MAX      = 1,
};

enum class EModioErrorCondition : uint8
{
	NoError                        = 0,
	NetworkError                   = 2,
	ConfigurationError             = 3,
	InvalidArgsError               = 4,
	FilesystemError                = 5,
	InternalError                  = 6,
	ApiErrorRefSuccess             = 7,
	EntityNotFoundError            = 12,
	UserTermsOfUseError            = 13,
	SubmitReportError              = 14,
	UserNotAuthenticatedError      = 15,
	SDKNotInitialized              = 16,
	UserAlreadyAuthenticatedError  = 17,
	SystemError                    = 18,
	OperationCanceled              = 19,
	ModManagementDisabled          = 20,
	RateLimited                    = 21,
	ModBeingProcessed              = 22,
	InsufficientSpace              = 23,
	SDKAlreadyInitialized          = 24,
	ModManagementAlreadyEnabled    = 25,
	InsufficientPermissions        = 26,
	EmailLoginCodeInvalid          = 27,
	AlreadySubscribed              = 28,
	InstallOrUpdateCancelled       = 29,
	UploadCancelled                = 30,
	TempModSetNotInitialized       = 31,
	MonetizationOperationError     = 32,
	PaymentTransactionFailed       = 33,
	IncorrectPrice                 = 34,
	ItemAlreadyOwned               = 35,
	ParentalControlRestrictions    = 36,
	MetricsSessionNotInitialized   = 37,
	MetricsSessionAlreadyInitialized = 38,
	MetricsSessionIsActive         = 39,
	MetricsSessionIsNotActive      = 40,
	MetricsSessionHasNoMods        = 41,
	PremiumFeatureNotAvailable     = 42,
	EmailExchangeCodeAlreadyRedeemed = 43,
	EModioErrorCondition_MAX       = 44,
};

enum class EModioSortFieldType : uint8
{
	ID                             = 0,
	DownloadsToday                 = 1,
	SubscriberCount                = 2,
	Rating                         = 3,
	DateMarkedLive                 = 4,
	DateUpdated                    = 5,
	DownloadsTotal                 = 6,
	Alphabetical                   = 7,
	EModioSortFieldType_MAX        = 8,
};

enum class EModioSortDirection : uint8
{
	Ascending                      = 0,
	Descending                     = 1,
	EModioSortDirection_MAX        = 2,
};

enum class EModioRevenueFilterType : uint8
{
	Free                           = 0,
	Paid                           = 1,
	FreeAndPaid                    = 2,
	EModioRevenueFilterType_MAX    = 3,
};

enum class EModioImageState : uint8
{
	OnDisc                         = 0,
	LoadingIntoMemory              = 1,
	InMemory                       = 2,
	Corrupted                      = 3,
	EModioImageState_MAX           = 4,
};

enum class EModioModState : uint8
{
	InstallationPending            = 0,
	Installed                      = 1,
	UpdatePending                  = 2,
	Downloading                    = 3,
	Extracting                     = 4,
	UninstallPending               = 5,
	EModioModState_MAX             = 6,
};

enum class EModioModProgressState : uint8
{
	Initializing                   = 0,
	Downloading                    = 1,
	Extracting                     = 2,
	Compressing                    = 3,
	Uploading                      = 4,
	EModioModProgressState_MAX     = 5,
};

enum class EModioOpenStoreResult : uint8
{
	Success                        = 0,
	FailedInactive                 = 1,
	FailedUnsupportedPlatform      = 2,
	FailedUnknown                  = 3,
	EModioOpenStoreResult_MAX      = 4,
};

enum class EModioRating : uint8
{
	Neutral                        = 0,
	Positive                       = 1,
	Negative                       = 2,
	EModioRating_MAX               = 3,
};

enum class EModioReportType : uint8
{
	Generic                        = 0,
	DMCA                           = 1,
	NotWorking                     = 2,
	RudeContent                    = 3,
	IllegalContent                 = 4,
	StolenContent                  = 5,
	FalseInformation               = 6,
	Other                          = 7,
	EModioReportType_MAX           = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct Modio.ModioPagedResult
struct FModioPagedResult
{
public:
	int32                                        PageIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PageSize;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PageCount;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TotalResultCount;                                  // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ResultCount;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioGameID
struct FModioGameID
{
public:
	int64                                        GameId;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Modio.ModioGameStats
struct FModioGameStats
{
public:
	struct FModioGameID                          GameId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModCountTotal;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModDownloadsToday;                                 // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModDownloadsTotal;                                 // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModDownloadsDailyAverage;                          // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ModSubscribersTotal;                               // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        DateExpires;                                       // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Modio.ModioIcon
struct FModioIcon
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Original;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb64x64;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb128x128;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb256x256;                                      // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Modio.ModioLogo
struct FModioLogo
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Original;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb320x180;                                      // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb640x360;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Thumb1280x720;                                     // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Modio.ModioGamePlatform
struct FModioGamePlatform
{
public:
	enum class EModioModfilePlatform             Platform;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Moderated;                                         // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioHeaderImage
struct FModioHeaderImage
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Original;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Modio.ModioTheme
struct FModioTheme
{
public:
	class FString                                Primary;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Dark;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Light;                                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Success;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Warning;                                           // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Danger;                                            // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioOtherUrl
struct FModioOtherUrl
{
public:
	class FString                                Label;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Modio.ModioModTagLocalizationData
struct FModioModTagLocalizationData
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FText>             Translations;                                      // 0x10(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioLocalizedTagCategory
struct FModioLocalizedTagCategory
{
public:
	class FString                                GroupName;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Modio.ModioModTagInfo
struct FModioModTagInfo
{
public:
	class FString                                TagGroupName;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TagGroupValues;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TMap<class FString, class FText>             TagGroupNameLocalizationData;                      // 0x20(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<struct FModioModTagLocalizationData>  TagGroupValueLocalizationData;                     // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleSelection;                           // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x81(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocked;                                           // 0x82(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A46[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Locale;                                            // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioLocalizedTagCategory            LocalizedTagCategoryDataCurrentLocale;             // 0x98(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct Modio.ModioGameInfo
struct FModioGameInfo
{
public:
	struct FModioGameID                          GameId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateAdded;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateUpdated;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateLive;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UgcName;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioIcon                            Icon;                                              // 0x30(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioLogo                            Logo;                                              // 0x80(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioHeaderImage                     HeaderImage;                                       // 0xD0(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0xF0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Summary;                                           // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Instructions;                                      // 0x110(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InstructionsUrl;                                   // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileUrl;                                        // 0x130(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioTheme                           Theme;                                             // 0x140(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioGameStats                       Stats;                                             // 0x1A0(0x38)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FModioOtherUrl>                OtherUrls;                                         // 0x1D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EModioModfilePlatform>     Platforms;                                         // 0x1E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllowNegativeRatings;                             // 0x1F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameMonetizationFlags            GameMonetizationOptions;                           // 0x1F9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameMaturityFlags                GameMaturityOptions;                               // 0x1FA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6B[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VirtualTokenName;                                  // 0x200(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FModioGamePlatform>            PlatformSupport;                                   // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FModioModTagInfo>              TagOptions;                                        // 0x220(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioGameInfoList
struct FModioGameInfoList
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A86[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioGameInfo>                InternalList;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Modio.ModioModStats
struct FModioModStats
{
public:
	int64                                        PopularityRankPosition;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        PopularityRankTotalMods;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        DownloadsTotal;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        SubscribersTotal;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RatingTotal;                                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RatingPositive;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RatingNegative;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        RatingPercentagePositive;                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RatingWeightedAggregate;                           // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A90[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RatingDisplayText;                                 // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioModID
struct FModioModID
{
public:
	uint8                                        Pad_A91[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioUserID
struct FModioUserID
{
public:
	uint8                                        Pad_A9C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Modio.ModioUser
struct FModioUser
{
public:
	struct FModioUserID                          UserId;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Username;                                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateOnline;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileUrl;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayNamePortal;                                 // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioMetadata
struct FModioMetadata
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioFileMetadataID
struct FModioFileMetadataID
{
public:
	uint8                                        Pad_AC3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Modio.ModioFileMetadata
struct FModioFileMetadata
{
public:
	struct FModioFileMetadataID                  MetadataId;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           ModId;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateAdded;                                         // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioVirusScanStatus             CurrentVirusScanStatus;                            // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioVirusStatus                 CurrentVirusStatus;                                // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Filesize;                                          // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        FilesizeUncompressed;                              // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Changelog;                                         // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MetadataBlob;                                      // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioModTag
struct FModioModTag
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TagLocalized;                                      // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Modio.ModioYoutubeURLList
struct FModioYoutubeURLList
{
public:
	uint8                                        Pad_AFB[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Modio.ModioSketchfabURLList
struct FModioSketchfabURLList
{
public:
	uint8                                        Pad_B07[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioUnsigned64
struct FModioUnsigned64
{
public:
	uint8                                        Pad_B0F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E8 (0x1E8 - 0x0)
// ScriptStruct Modio.ModioModInfo
struct FModioModInfo
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileName;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileSummary;                                    // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileDescription;                                // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileDescriptionPlaintext;                       // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileUrl;                                        // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioUser                            ProfileSubmittedBy;                                // 0x58(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FDateTime                             ProfileDateAdded;                                  // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ProfileDateUpdated;                                // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ProfileDateLive;                                   // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioMaturityFlags               ProfileMaturityOption;                             // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0xB1(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioObjectVisibilityFlags       Visibility;                                        // 0xB2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Dependencies;                                      // 0xB3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MetadataBlob;                                      // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioFileMetadata                    FileInfo;                                          // 0xC8(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<struct FModioMetadata>                MetadataKvp;                                       // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<struct FModioModTag>                  Tags;                                              // 0x148(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	int32                                        NumGalleryImages;                                  // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioYoutubeURLList                  YoutubeURLs;                                       // 0x160(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B40[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioSketchfabURLList                SketchfabURLs;                                     // 0x170(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B43[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModStats                        Stats;                                             // 0x180(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	enum class EModioModServerSideStatus         ModStatus;                                         // 0x1D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUnsigned64                      Price;                                             // 0x1E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioModInfoList
struct FModioModInfoList
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioModInfo>                 InternalList;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioModTagOptions
struct FModioModTagOptions
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioModTagInfo>              InternalList;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct Modio.ModioTokenPack
struct FModioTokenPack
{
public:
	uint8                                        Pad_B6D[0x118];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioTokenPackList
struct FModioTokenPackList
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B78[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioTokenPack>               InternalList;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioErrorCode
struct FModioErrorCode
{
public:
	uint8                                        Pad_B7B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x238 (0x238 - 0x0)
// ScriptStruct Modio.ModioOptionalGameInfo
struct FModioOptionalGameInfo
{
public:
	uint8                                        Pad_B82[0x238];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Modio.ModioOptionalImage
struct FModioOptionalImage
{
public:
	uint8                                        Pad_B84[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Modio.ModioOptionalModDependencyList
struct FModioOptionalModDependencyList
{
public:
	uint8                                        Pad_B9C[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct Modio.ModioOptionalModInfo
struct FModioOptionalModInfo
{
public:
	uint8                                        Pad_B9D[0x1F0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.ModioOptionalModTagOptions
struct FModioOptionalModTagOptions
{
public:
	uint8                                        Pad_BA6[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct Modio.ModioOptionalTerms
struct FModioOptionalTerms
{
public:
	uint8                                        Pad_BAA[0xD8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioOptionalUInt64
struct FModioOptionalUInt64
{
public:
	uint8                                        Pad_BAC[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.ModioOptionalModInfoList
struct FModioOptionalModInfoList
{
public:
	uint8                                        Pad_BAD[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.ModioOptionalGameInfoList
struct FModioOptionalGameInfoList
{
public:
	uint8                                        Pad_BAF[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Modio.ModioModManagementEvent
struct FModioModManagementEvent
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioModManagementEventType      Event;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioErrorCode                       Status;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.ModioOptionalUserList
struct FModioOptionalUserList
{
public:
	uint8                                        Pad_BB5[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Modio.ModioOptionalModChangeMap
struct FModioOptionalModChangeMap
{
public:
	uint8                                        Pad_BB8[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioOptionalTransactionRecord
struct FModioOptionalTransactionRecord
{
public:
	uint8                                        Pad_BBB[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Modio.ModioOptionalEntitlementConsumptionStatusList
struct FModioOptionalEntitlementConsumptionStatusList
{
public:
	uint8                                        Pad_BBC[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioOptionalModID
struct FModioOptionalModID
{
public:
	uint8                                        Pad_BD3[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Modio.ModioAuthenticationParams
struct FModioAuthenticationParams
{
public:
	class FString                                AuthToken;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserEmail;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUserHasAcceptedTerms;                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C76[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           ExtendedParameters;                                // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioApiKey
struct FModioApiKey
{
public:
	class FString                                ApiKey;                                            // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioGuid
struct FModioGuid
{
public:
	class FString                                InternalGuid;                                      // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Modio.ModioOptionalGuid
struct FModioOptionalGuid
{
public:
	uint8                                        Pad_C84[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioEmailAddress
struct FModioEmailAddress
{
public:
	uint8                                        Pad_C94[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioEmailAuthCode
struct FModioEmailAuthCode
{
public:
	uint8                                        Pad_C95[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Modio.ModioEntitlementParams
struct FModioEntitlementParams
{
public:
	TMap<class FString, class FString>           ExtendedParameters;                                // 0x0(0x50)(Edit, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioMetricsSessionParams
struct FModioMetricsSessionParams
{
public:
	uint8                                        Pad_CA3[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioModID>                   ModIds;                                            // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioTokenPackID
struct FModioTokenPackID
{
public:
	uint8                                        Pad_CA5[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Modio.ModioCreateModFileParams
struct FModioCreateModFileParams
{
public:
	class FString                                PathToModRootDirectory;                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB0[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Modio.ModioCreateModParams
struct FModioCreateModParams
{
public:
	class FString                                PathToLogoFile;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Summary;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCB[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Modio.ModioEditModParams
struct FModioEditModParams
{
public:
	uint8                                        Pad_CCD[0xD0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioEntitlementWalletBalance
struct FModioEntitlementWalletBalance
{
public:
	struct FModioUnsigned64                      Balance;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioOptionalEntitlementWalletBalance
struct FModioOptionalEntitlementWalletBalance
{
public:
	uint8                                        Pad_CD0[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Modio.ModioEntitlementConsumptionVirtualCurrencyDetails
struct FModioEntitlementConsumptionVirtualCurrencyDetails
{
public:
	int32                                        TokensAllocated;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.EntitlementConsumptionStatus
struct FEntitlementConsumptionStatus
{
public:
	class FString                                TransactionId;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioEntitlementConsumptionState TransactionState;                                  // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SkuId;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EntitlementConsumed;                               // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioEntitlementType             EntitlementType;                                   // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioEntitlementConsumptionVirtualCurrencyDetails VirtualCurrencyDetails;                            // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Modio.ModioEntitlementConsumptionStatusList
struct FModioEntitlementConsumptionStatusList
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D04[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEntitlementConsumptionStatus> InternalList;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FModioOptionalEntitlementWalletBalance WalletBalance;                                     // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Modio.ModioFilterParams
struct FModioFilterParams
{
public:
	uint8                                        Pad_D0A[0xB8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Modio.ModioPresetFilterParams
struct FModioPresetFilterParams
{
public:
	class FText                                  PresetName;                                        // 0x0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FString>                        ExcludedTags;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EModioSortDirection               Direction;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioSortFieldType               SortField;                                         // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D28[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Count;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Modio.ModioImageWrapper
struct FModioImageWrapper
{
public:
	class FString                                ImagePath;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Modio.ModioInitializeOptions
struct FModioInitializeOptions
{
public:
	struct FModioGameID                          GameId;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioApiKey                          ApiKey;                                            // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EModioEnvironment                 GameEnvironment;                                   // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioPortal                      PortalInUse;                                       // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           ExtendedInitializationParameters;                  // 0x20(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bUseBackgroundThread;                              // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D30[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Modio.ModioModChangeMap
struct FModioModChangeMap
{
public:
	TMap<struct FModioModID, enum class EModioModChangeType> Changes;                                           // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Modio.ModioModCollectionEntry
struct FModioModCollectionEntry
{
public:
	uint8                                        Pad_D36[0x220];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Modio.ModioModCreationHandle
struct FModioModCreationHandle
{
public:
	uint8                                        Pad_D3A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct Modio.ModioModDependency
struct FModioModDependency
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModName;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateAdded;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             DateUpdated;                                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DependencyDepth;                                   // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D41[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioLogo                            Logo;                                              // 0x30(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioFileMetadata                    FileInfo;                                          // 0x80(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EModioModServerSideStatus         Status;                                            // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioObjectVisibilityFlags       Visibility;                                        // 0xF1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D48[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Modio.ModioModDependencyList
struct FModioModDependencyList
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioModDependency>           InternalList;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int64                                        TotalFilesize;                                     // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        TotalFilesizeUncompressed;                         // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Modio.ModioModProgressInfo
struct FModioModProgressInfo
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D58[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Modio.ModioOptionalModProgressInfo
struct FModioOptionalModProgressInfo
{
public:
	uint8                                        Pad_D64[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Modio.ModioReportParams
struct FModioReportParams
{
public:
	uint8                                        Pad_D69[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioLink
struct FModioLink
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequired;                                         // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Modio.ModioTerms
struct FModioTerms
{
public:
	class FString                                AgreeButtonText;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisagreeButtonText;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioLink                            WebsiteLink;                                       // 0x20(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioLink                            TermsLink;                                         // 0x48(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioLink                            PrivacyLink;                                       // 0x70(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FModioLink                            ManageLink;                                        // 0x98(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                TermsText;                                         // 0xC0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct Modio.ModioOptionalTokenPack
struct FModioOptionalTokenPack
{
public:
	uint8                                        Pad_D71[0x120];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Modio.ModioOptionalTokenPackList
struct FModioOptionalTokenPackList
{
public:
	uint8                                        Pad_D78[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Modio.ModioTransactionRecord
struct FModioTransactionRecord
{
public:
	struct FModioModID                           AssociatedModID;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      Price;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      UpdatedUserWalletBalance;                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Modio.ModioOptionalUser
struct FModioOptionalUser
{
public:
	uint8                                        Pad_D7E[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Modio.ModioUserList
struct FModioUserList
{
public:
	struct FModioPagedResult                     PagedResult;                                       // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D82[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioUser>                    InternalList;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Modio.ModioValidationError
struct FModioValidationError
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationFailureDescription;                      // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


