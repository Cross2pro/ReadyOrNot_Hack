#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EModioUILoadState : uint8
{
	NotLoaded                      = 0,
	Loading                        = 1,
	Loaded                         = 2,
	Errored                        = 3,
	EModioUILoadState_MAX          = 4,
};

enum class EModioModInstallationStatus : uint8
{
	NotInstalled                   = 0,
	Error                          = 1,
	Enabled                        = 2,
	Disabled                       = 3,
	Purchased                      = 4,
	SystemInstall                  = 5,
	Queued                         = 6,
	Initializing                   = 7,
	Downloading                    = 8,
	Extracting                     = 9,
	Uploading                      = 10,
	Uploaded                       = 11,
	EModioModInstallationStatus_MAX = 12,
};

enum class EModioUIDialogType : uint8
{
	ModDetails                     = 0,
	ReportMod                      = 1,
	EnableDisableManagement        = 2,
	PurchaseMod                    = 3,
	StoreUi                        = 4,
	EModioUIDialogType_MAX         = 5,
};

enum class EModioUIMediaDownloadEventType : uint8
{
	ModGalleryImages               = 0,
	ModCreatorAvatarImage          = 1,
	ModLogo                        = 2,
	EModioUIMediaDownloadEventType_MAX = 3,
};

enum class EModioUIModInfoEventType : uint8
{
	ListAllMods                    = 0,
	GetModInfo                     = 1,
	EModioUIModInfoEventType_MAX   = 2,
};

enum class EModioTextValidationRule : uint8
{
	ETVR_ValidateEmailAddress      = 0,
	ETVR_ValidateAllLetters        = 1,
	ETVR_ValidateAllNumeric        = 2,
	ETVR_ValidateAlphanumeric      = 3,
	ETVR_ValidateLength            = 4,
	ETVR_ValidateNotEmpty          = 5,
	ETVR_ValidateNoWhitespace      = 6,
	ETVR_ValidateNotBlank          = 7,
	ETVR_MAX                       = 8,
};

enum class EModioUITokenPackEventType : uint8
{
	ListAllTokenPacks              = 0,
	GetTokenPack                   = 1,
	EModioUITokenPackEventType_MAX = 2,
};

enum class EModioModBrowserState : uint8
{
	ModsView                       = 0,
	LibraryView                    = 1,
	EModioModBrowserState_MAX      = 2,
};

enum class EModioUIComponentID : uint8
{
	Button                         = 0,
	StaticText                     = 1,
	EditableText                   = 2,
	MultilineEditableText          = 3,
	CodeInputText                  = 4,
	EnumSelector                   = 5,
	PresetFilterSelector           = 6,
	ModTile                        = 7,
	ModalDialog                    = 8,
	Image                          = 9,
	ProgressWidget                 = 10,
	CheckBox                       = 11,
	ModList                        = 12,
	TagDisplay                     = 13,
	ObjectList                     = 14,
	EnumSelectorEntry              = 15,
	CommandMenu                    = 16,
	FilterSelectorEntry            = 17,
	ModPropertyCollection          = 18,
	UserDisplay                    = 19,
	ObjectSelector                 = 20,
	EModioUIComponentID_MAX        = 21,
};

enum class EModioUIFeatureFlags : uint8
{
	ModEnableDisable               = 0,
	Monetization                   = 1,
	ModDownvote                    = 2,
	EModioUIFeatureFlags_MAX       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2B0 (0x5F0 - 0x340)
// ScriptStruct ModioUICore.ModioDefaultCodeInputTextBoxStyle
struct FModioDefaultCodeInputTextBoxStyle : public FTextBlockStyle
{
public:
	struct FSlateBrush                           CharacterBorderBrushBase;                          // 0x340(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CharacterBorderBrushFocused;                       // 0x410(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               CharacterBorderPadding;                            // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FakeCaretBrush;                                    // 0x4F0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              FakeCaretHorizontalAlignment;                      // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                FakeCaretVerticalAlignment;                        // 0x5C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               CharacterPadding;                                  // 0x5C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CharacterSpacing;                                  // 0x5D4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinimumCharacterWidth;                             // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39DA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct ModioUICore.ModioUICommandAssetEntry
struct FModioUICommandAssetEntry : public FTableRowBase
{
public:
	TMap<class FName, class FText>               CommandTexts;                                      // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<class FName, struct FSlateBrush>        CommandIconBrushes;                                // 0x58(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ModioUICore.ModioTextValidationRule
struct FModioTextValidationRule
{
public:
	enum class EModioTextValidationRule          RuleToUse;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ValidationMessage;                                 // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MinimumLength;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLength;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ModioUICore.ModioUIColorEntry
struct FModioUIColorEntry : public FTableRowBase
{
public:
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ModioUICore.LinearColorRef
struct FLinearColorRef
{
public:
	class FName                                  ReferencedColorName;                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FallbackColor;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ModioUICore.LinearColorRefOverride
struct FLinearColorRefOverride
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColorRef                       Color;                                             // 0x4(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ModioUICore.TextOverride
struct FTextOverride
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ModioUICore.ClassPathOverride
struct FClassPathOverride
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        Value;                                             // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ModioUICore.ModioCommonButtonParams
struct FModioCommonButtonParams
{
public:
	bool                                         bIsSpacer;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Width;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextOverride                         ButtonRoleDescription;                             // 0x10(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        MinWidth;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinHeight;                                         // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClassPathOverride                    Style;                                             // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   TriggeringInputAction;                             // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bConsumePointerInput;                              // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldUseFallbackDefaultInputAction;              // 0x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39EE[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ModioUICore.InputActionOverride
struct FInputActionOverride
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ModioUICore.ModioDialogButtonInfo
struct FModioDialogButtonInfo
{
public:
	class FText                                  ButtonLabel;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FClassPathOverride                    StyleOverride;                                     // 0x18(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputActionOverride                  InputActionOverride;                               // 0x40(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShowTooltip;                                      // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TooltipTitleText;                                  // 0x60(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TooltipInfoText;                                   // 0x78(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TooltipTagText;                                    // 0x90(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bFocusedByDefault;                                 // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ModioUICore.ModioFeaturedCategoryParams
struct FModioFeaturedCategoryParams
{
public:
	class FText                                  CategoryName;                                      // 0x0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FString>                        ExcludedTags;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EModioSortDirection               Direction;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioSortFieldType               SortField;                                         // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Count;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ModioUICore.IntegerOverride
struct FIntegerOverride
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ModioUICore.FloatOverride
struct FFloatOverride
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ModioUICore.HAlignOverride
struct FHAlignOverride
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              Value;                                             // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ModioUICore.SlateFontInfoOverride
struct FSlateFontInfoOverride
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Value;                                             // 0x8(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ModioUICore.TextTransformOverride
struct FTextTransformOverride
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              Value;                                             // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ModioUICore.ModioRetryCounter
struct FModioRetryCounter
{
public:
	int32                                        RetriesRemaining;                                  // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModioUICore.ModioStackedBool
struct FModioStackedBool
{
public:
	TArray<bool>                                 ValueStack;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ModioUICore.ModioUIComponentMetadata
struct FModioUIComponentMetadata
{
public:
	TArray<class UClass*>                        RequiredInterfaces;                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	enum class EModioUIComponentID               ComponentID;                                       // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ComponentDisplayName;                              // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A06[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIButtonComponentMetadata
struct FModioUIButtonComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUITextComponentMetadata
struct FModioUITextComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIEditableTextComponentMetadata
struct FModioUIEditableTextComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIImageComponentMetadata
struct FModioUIImageComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIProgressBarComponentMetadata
struct FModioUIProgressBarComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUITagComponentMetadata
struct FModioUITagComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIObjectListComponentMetadata
struct FModioUIObjectListComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIModListComponentMetadata
struct FModioUIModListComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIObjectSelectorComponentMetadata
struct FModioUIObjectSelectorComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIEnumSelectorComponentMetadata
struct FModioUIEnumSelectorComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIEnumSelectorEntryComponentMetadata
struct FModioUIEnumSelectorEntryComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIPresetFilterSelectorComponentMetadata
struct FModioUIPresetFilterSelectorComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIPresetFilterSelectorEntryComponentMetadata
struct FModioUIPresetFilterSelectorEntryComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUICommandMenuComponentMetadata
struct FModioUICommandMenuComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIModPropertyCollectionVisualizerComponentMetadata
struct FModioUIModPropertyCollectionVisualizerComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIModTileComponentMetadata
struct FModioUIModTileComponentMetadata : public FModioUIComponentMetadata
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ModioUICore.ModioUIUserDisplayComponentMetadata
struct FModioUIUserDisplayComponentMetadata : public FModioUIComponentMetadata
{
public:
};

}


