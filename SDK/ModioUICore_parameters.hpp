#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioActivatableWidget.RemoveActivationChangedHandler
struct IModioActivatableWidget_RemoveActivationChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioActivatableWidget.AddActivationChangedHandler
struct IModioActivatableWidget_AddActivationChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioEnumEntryUIDetails.GetEnumEntryDetails
struct IModioEnumEntryUIDetails_GetEnumEntryDetails_Params
{
public:
	uint8                                        EnumValue;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EnumValueDisplayText;                              // 0x8(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioFocusableWidget.RemoveFocusPathChangedHandler
struct IModioFocusableWidget_RemoveFocusPathChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioFocusableWidget.GetWidgetToFocus
struct IModioFocusableWidget_GetWidgetToFocus_Params
{
public:
	enum class EUINavigation                     NavigationType;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F18[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioFocusableWidget.AddFocusPathChangedHandler
struct IModioFocusableWidget_AddFocusPathChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioGalleryImageUIDetails.GetIndex
struct IModioGalleryImageUIDetails_GetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioGalleryImageUIDetails.GetImage
struct IModioGalleryImageUIDetails_GetImage_Params
{
public:
	struct FModioImageWrapper                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModDependencyUIDetails.GetModID
struct IModioModDependencyUIDetails_GetModID_Params
{
public:
	struct FModioModID                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ModioUICore.ModioModDependencyUIDetails.GetModDependency
struct IModioModDependencyUIDetails_GetModDependency_Params
{
public:
	struct FModioModDependency                   ReturnValue;                                       // 0x0(0xF8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function ModioUICore.ModioModFilterUIDetails.GetFilterParams
struct IModioModFilterUIDetails_GetFilterParams_Params
{
public:
	struct FModioFilterParams                    ReturnValue;                                       // 0x0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioModFilterUIDetails.GetFilterName
struct IModioModFilterUIDetails_GetFilterName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F78[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModInfoUIDetails.GetModID
struct IModioModInfoUIDetails_GetModID_Params
{
public:
	struct FModioModID                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x1E8 - 0x0)
// Function ModioUICore.ModioModInfoUIDetails.GetFullModInfo
struct IModioModInfoUIDetails_GetFullModInfo_Params
{
public:
	struct FModioModInfo                         ReturnValue;                                       // 0x0(0x1E8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioModTagUIDetails.SetSelectionState
struct IModioModTagUIDetails_SetSelectionState_Params
{
public:
	bool                                         bNewSelectionState;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioModTagUIDetails.GetSelectionState
struct IModioModTagUIDetails_GetSelectionState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagUIDetails.GetRawStringValue
struct IModioModTagUIDetails_GetRawStringValue_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioModTagUIDetails.GetLocalizedText
struct IModioModTagUIDetails_GetLocalizedText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagCategoryUIDetails.GetSelectedTags
struct IModioModTagCategoryUIDetails_GetSelectedTags_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagCategoryUIDetails.GetRawCategoryName
struct IModioModTagCategoryUIDetails_GetRawCategoryName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioModTagCategoryUIDetails.GetLocalizedCategoryName
struct IModioModTagCategoryUIDetails_GetLocalizedCategoryName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioModTagCategoryUIDetails.GetIsCategoryLocked
struct IModioModTagCategoryUIDetails_GetIsCategoryLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioModTagCategoryUIDetails.GetIsCategoryHidden
struct IModioModTagCategoryUIDetails_GetIsCategoryHidden_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagCategoryUIDetails.GetCategoryTags
struct IModioModTagCategoryUIDetails_GetCategoryTags_Params
{
public:
	TArray<TScriptInterface<class IModioModTagUIDetails>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioModTagCategoryUIDetails.GetAllowMultipleSelection
struct IModioModTagCategoryUIDetails_GetAllowMultipleSelection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagOptionsUIDetails.GetSelectedTags
struct IModioModTagOptionsUIDetails_GetSelectedTags_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagOptionsUIDetails.GetCategories
struct IModioModTagOptionsUIDetails_GetCategories_Params
{
public:
	TArray<TScriptInterface<class IModioModTagCategoryUIDetails>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioScrollableWidget.SetScrollOffset
struct IModioScrollableWidget_SetScrollOffset_Params
{
public:
	float                                        Offset;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioScrollableWidget.GetScrollOffset
struct IModioScrollableWidget_GetScrollOffset_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioToggleableWidget.RemoveToggleStateChangedHandler
struct IModioToggleableWidget_RemoveToggleStateChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ModioUICore.ModioToggleableWidget.Open
struct IModioToggleableWidget_Open_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFocusMenu;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioToggleableWidget.IsOpen
struct IModioToggleableWidget_IsOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioToggleableWidget.AddToggleStateChangedHandler
struct IModioToggleableWidget_AddToggleStateChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIClickableWidget.RemoveClickedHandler
struct IModioUIClickableWidget_RemoveClickedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIClickableWidget.AddClickedHandler
struct IModioUIClickableWidget_AddClickedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUIBoundActionWidget.TryGetBoundAction
struct IModioUIBoundActionWidget_TryGetBoundAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIBoundActionWidget.SetBoundAction
struct IModioUIBoundActionWidget_SetBoundAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIBoundActionWidget.RemoveActionProgressHandler
struct IModioUIBoundActionWidget_RemoveActionProgressHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIBoundActionWidget.RemoveActionCompletedHandler
struct IModioUIBoundActionWidget_RemoveActionCompletedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIBoundActionWidget.AddActionProgressHandler
struct IModioUIBoundActionWidget_AddActionProgressHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIBoundActionWidget.AddActionCompletedHandler
struct IModioUIBoundActionWidget_AddActionCompletedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUICommandMenu.RemoveCommandListBuilder
struct IModioUICommandMenu_RemoveCommandListBuilder_Params
{
public:
	FDelegateProperty_                           Builder;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUICommandMenu.AddCommandListBuilder
struct IModioUICommandMenu_AddCommandListBuilder_Params
{
public:
	FDelegateProperty_                           Builder;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUICommandObject.SetDataSource
struct IModioUICommandObject_SetDataSource_Params
{
public:
	class UObject*                               InDataSource;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUICommandObject.GetCommandDisplayString
struct IModioUICommandObject_GetCommandDisplayString_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ModioUICore.ModioUICommandObject.GetCommandBrush
struct IModioUICommandObject_GetCommandBrush_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUICommandObject.Execute
struct IModioUICommandObject_Execute_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUICommandObject.CanExecute
struct IModioUICommandObject_CanExecute_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function ModioUICore.ModioUICommandLibrary.GetCommandText
struct UModioUICommandLibrary_GetCommandText_Params
{
public:
	class FString                                CommandID;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TextName;                                          // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResolved;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x20(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function ModioUICore.ModioUICommandLibrary.GetCommandBrush
struct UModioUICommandLibrary_GetCommandBrush_Params
{
public:
	class FString                                CommandID;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BrushName;                                         // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResolved;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ReturnValue;                                       // 0x20(0xD0)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ModioUICore.ModioUICommandLibrary.GetCommandAssetEntry
struct UModioUICommandLibrary_GetCommandAssetEntry_Params
{
public:
	class FString                                CommandID;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResolved;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUICommandAssetEntry             ReturnValue;                                       // 0x18(0xA8)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ModioUICore.ModioUICommonButtonWidget.ConfigureCommonButton
struct IModioUICommonButtonWidget_ConfigureCommonButton_Params
{
public:
	struct FModioCommonButtonParams              Params;                                            // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIConnectivityChangedReceiver.OnConnectivityChanged
struct IModioUIConnectivityChangedReceiver_OnConnectivityChanged_Params
{
public:
	bool                                         bNewConnectivityState;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIConnectivityChangedReceiverLibrary.RegisterConnectivityChangedReceiver
struct UModioUIConnectivityChangedReceiverLibrary_RegisterConnectivityChangedReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIConnectivityChangedReceiverLibrary.DeregisterConnectivityChangedReceiver
struct UModioUIConnectivityChangedReceiverLibrary_DeregisterConnectivityChangedReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIDataSourceWidget.SetDataSource
struct IModioUIDataSourceWidget_SetDataSource_Params
{
public:
	class UObject*                               InDataSource;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIDataSourceWidget.GetDataSource
struct IModioUIDataSourceWidget_GetDataSource_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIDialog.ShowModal
struct IModioUIDialog_ShowModal_Params
{
public:
	bool                                         bFocusCancelButton;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIDialog.RemoveDialogShownHandler
struct IModioUIDialog_RemoveDialogShownHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIDialog.RemoveDialogConfirmedHandler
struct IModioUIDialog_RemoveDialogConfirmedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIDialog.RemoveDialogCanceledHandler
struct IModioUIDialog_RemoveDialogCanceledHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIDialog.RemoveDialogButtonClickedHandler
struct IModioUIDialog_RemoveDialogButtonClickedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIDialog.AddDialogShownHandler
struct IModioUIDialog_AddDialogShownHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIDialog.AddDialogConfirmedHandler
struct IModioUIDialog_AddDialogConfirmedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIDialog.AddDialogCanceledHandler
struct IModioUIDialog_AddDialogCanceledHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIDialog.AddDialogButtonClickedHandler
struct IModioUIDialog_AddDialogButtonClickedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIDialogDisplayEventReceiver.OnDialogDisplayEvent
struct IModioUIDialogDisplayEventReceiver_OnDialogDisplayEvent_Params
{
public:
	enum class EModioUIDialogType                DialogRequested;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIDialogDisplayEventReceiverLibrary.RegisterDialogDisplayEventReceiver
struct UModioUIDialogDisplayEventReceiverLibrary_RegisterDialogDisplayEventReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIDialogDisplayEventReceiverLibrary.DeregisterDialogDisplayEventReceiver
struct UModioUIDialogDisplayEventReceiverLibrary_DeregisterDialogDisplayEventReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIEntitlementRefreshEventReceiverLibrary.RegisterEntitlementRefreshEventReceiver
struct UModioUIEntitlementRefreshEventReceiverLibrary_RegisterEntitlementRefreshEventReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIEntitlementRefreshEventReceiverLibrary.DeregisterEntitlementRefreshEventReceiver
struct UModioUIEntitlementRefreshEventReceiverLibrary_DeregisterEntitlementRefreshEventReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ModioUICore.ModioUIHasConfigurableColor.ConfigureWidgetColorDirectly
struct IModioUIHasConfigurableColor_ConfigureWidgetColorDirectly_Params
{
public:
	class FName                                  ColorName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorValue;                                        // 0x8(0x14)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIHasConfigurableColor.ConfigureWidgetColor
struct IModioUIHasConfigurableColor_ConfigureWidgetColor_Params
{
public:
	class FName                                  ColorName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColorRef                       ColorValue;                                        // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIHasLoadStateWidget.SetLoadState
struct IModioUIHasLoadStateWidget_SetLoadState_Params
{
public:
	enum class EModioUILoadState                 NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIHasLoadStateWidget.RemoveLoadStateChangedHandler
struct IModioUIHasLoadStateWidget_RemoveLoadStateChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIHasLoadStateWidget.GetLoadState
struct IModioUIHasLoadStateWidget_GetLoadState_Params
{
public:
	enum class EModioUILoadState                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIHasLoadStateWidget.AddLoadStateChangedHandler
struct IModioUIHasLoadStateWidget_AddLoadStateChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ModioUICore.ModioUIHasTextWidget.SetWidgetTextFont
struct IModioUIHasTextWidget_SetWidgetTextFont_Params
{
public:
	struct FSlateFontInfo                        FontInfo;                                          // 0x0(0x58)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUIHasTextWidget.SetWidgetText
struct IModioUIHasTextWidget_SetWidgetText_Params
{
public:
	class FText                                  DisplayText;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ModioUICore.ModioUIHasTextWidget.GetWidgetTextFont
struct IModioUIHasTextWidget_GetWidgetTextFont_Params
{
public:
	struct FSlateFontInfo                        ReturnValue;                                       // 0x0(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUIHasTextWidget.GetWidgetText
struct IModioUIHasTextWidget_GetWidgetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIHasTooltipWidget.SetTooltipEnabledState
struct IModioUIHasTooltipWidget_SetTooltipEnabledState_Params
{
public:
	bool                                         bNewEnabledState;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ModioUICore.ModioUIHasTooltipWidget.ConfigureTooltip
struct IModioUIHasTooltipWidget_ConfigureTooltip_Params
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  InfoText;                                          // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  TagText;                                           // 0x30(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIHoverableWidget.RemoveHoverStateChangedHandler
struct IModioUIHoverableWidget_RemoveHoverStateChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIHoverableWidget.AddHoverStateChangedHandler
struct IModioUIHoverableWidget_AddHoverStateChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIImageDisplayWidget.SetDesiredBrushSize
struct IModioUIImageDisplayWidget_SetDesiredBrushSize_Params
{
public:
	struct FVector2D                             DesiredSize;                                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIImageDisplayWidget.SetBrushMatchTextureSize
struct IModioUIImageDisplayWidget_SetBrushMatchTextureSize_Params
{
public:
	bool                                         bMatchTextureSize;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ModioUICore.ModioUIImageDisplayWidget.SetBrushDirectly
struct IModioUIImageDisplayWidget_SetBrushDirectly_Params
{
public:
	struct FSlateBrush                           NewBrush;                                          // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIImageDisplayWidget.RemoveImageLoadEventHandler
struct IModioUIImageDisplayWidget_RemoveImageLoadEventHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIImageDisplayWidget.BeginLoadImageFromFile
struct IModioUIImageDisplayWidget_BeginLoadImageFromFile_Params
{
public:
	struct FModioImageWrapper                    Image;                                             // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIImageDisplayWidget.AddImageLoadEventHandler
struct IModioUIImageDisplayWidget_AddImageLoadEventHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModLogoDownloadCompleted
struct IModioUIMediaDownloadCompletedReceiver_OnModLogoDownloadCompleted_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       ErrorCode;                                         // 0x8(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioOptionalImage                   Image;                                             // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    LogoSize;                                          // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModGalleryImageDownloadCompleted
struct IModioUIMediaDownloadCompletedReceiver_OnModGalleryImageDownloadCompleted_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       ErrorCode;                                         // 0x8(0x8)(Parm, NativeAccessSpecifierPublic)
	int32                                        ImageIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1619[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioOptionalImage                   Image;                                             // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModCreatorAvatarDownloadCompleted
struct IModioUIMediaDownloadCompletedReceiver_OnModCreatorAvatarDownloadCompleted_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       ErrorCode;                                         // 0x8(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioOptionalImage                   Image;                                             // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIMediaDownloadCompletedReceiverLibrary.RegisterMediaDownloadCompletedReceiver
struct UModioUIMediaDownloadCompletedReceiverLibrary_RegisterMediaDownloadCompletedReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioUIMediaDownloadEventType    DownloadTypes;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIMediaDownloadCompletedReceiverLibrary.DeregisterMediaDownloadCompletedReceiver
struct UModioUIMediaDownloadCompletedReceiverLibrary_DeregisterMediaDownloadCompletedReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioUIMediaDownloadEventType    DownloadTypes;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModEnabledStateChangedReceiver.OnModEnabledStateChanged
struct IModioUIModEnabledStateChangedReceiver_OnModEnabledStateChanged_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewEnabledState;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1720[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIModEnabledStateChangedReceiverLibrary.RegisterModEnabledStateChangedReceiver
struct UModioUIModEnabledStateChangedReceiverLibrary_RegisterModEnabledStateChangedReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIModEnabledStateChangedReceiverLibrary.DeregisterModEnabledStateChangedReceiver
struct UModioUIModEnabledStateChangedReceiverLibrary_DeregisterModEnabledStateChangedReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModEnabledStateProvider.RequestModEnabledStateChange
struct IModioUIModEnabledStateProvider_RequestModEnabledStateChange_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewEnabledState;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1797[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModEnabledStateProvider.RemoveModEnabledStateChangeHandler
struct IModioUIModEnabledStateProvider_RemoveModEnabledStateChangeHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModEnabledStateProvider.QueryIsModEnabled
struct IModioUIModEnabledStateProvider_QueryIsModEnabled_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1801[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModEnabledStateProvider.AddModEnabledStateChangeHandler
struct IModioUIModEnabledStateProvider_AddModEnabledStateChangeHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x200 (0x200 - 0x0)
// Function ModioUICore.ModioUIModInfoReceiver.OnModInfoRequestCompleted
struct IModioUIModInfoReceiver_OnModInfoRequestCompleted_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       ErrorCode;                                         // 0x8(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioOptionalModInfo                 Info;                                              // 0x10(0x1F0)(Parm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ModioUICore.ModioUIModInfoReceiver.OnListAllModsRequestCompleted
struct IModioUIModInfoReceiver_OnListAllModsRequestCompleted_Params
{
public:
	class FString                                RequestIdentifier;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       ErrorCode;                                         // 0x10(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioOptionalModInfoList             List;                                              // 0x18(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModInfoReceiverLibrary.RegisterModInfoReceiver
struct UModioUIModInfoReceiverLibrary_RegisterModInfoReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioUIModInfoEventType          EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModInfoReceiverLibrary.DeregisterModInfoReceiver
struct UModioUIModInfoReceiverLibrary_DeregisterModInfoReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioUIModInfoEventType          EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.ModioUIModListViewInterface.SetModsFromModInfoList
struct IModioUIModListViewInterface_SetModsFromModInfoList_Params
{
public:
	struct FModioModInfoList                     InList;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToExisting;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUIModListViewInterface.SetModsFromModInfoArray
struct IModioUIModListViewInterface_SetModsFromModInfoArray_Params
{
public:
	TArray<struct FModioModInfo>                 InArray;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAddToExisting;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1922[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUIModListViewInterface.SetModsFromModCollectionEntryArray
struct IModioUIModListViewInterface_SetModsFromModCollectionEntryArray_Params
{
public:
	TArray<struct FModioModCollectionEntry>      InArray;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAddToExisting;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIModListViewInterface.SetModSelectionByID
struct IModioUIModListViewInterface_SetModSelectionByID_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUIModManagementEventReceiver.OnModManagementEvent
struct IModioUIModManagementEventReceiver_OnModManagementEvent_Params
{
public:
	struct FModioModManagementEvent              Event;                                             // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModManagementEventReceiverLibrary.RegisterModManagementEventReceiver
struct UModioModManagementEventReceiverLibrary_RegisterModManagementEventReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModManagementEventReceiverLibrary.DeregisterModManagementEventReceiver
struct UModioModManagementEventReceiverLibrary_DeregisterModManagementEventReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioUICore.ModioUIModTagSelector.SetAvailableTagsFromModTagOptions
struct IModioUIModTagSelector_SetAvailableTagsFromModTagOptions_Params
{
public:
	struct FModioModTagOptions                   InOptions;                                         // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModTagSelector.SetAvailableTagsFromBoundModTagOptions
struct IModioUIModTagSelector_SetAvailableTagsFromBoundModTagOptions_Params
{
public:
	TScriptInterface<class IModioModTagOptionsUIDetails> InOptions;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModTagSelector.RemoveTagSelectionChangedHandler
struct IModioUIModTagSelector_RemoveTagSelectionChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModTagSelector.GetSelectedTags
struct IModioUIModTagSelector_GetSelectedTags_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIModTagSelector.GetAllowLockedTags
struct IModioUIModTagSelector_GetAllowLockedTags_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIModTagSelector.GetAllowHiddenTags
struct IModioUIModTagSelector_GetAllowHiddenTags_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIModTagSelector.AddTagSelectionChangedHandler
struct IModioUIModTagSelector_AddTagSelectionChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectListWidget.SetObjects
struct IModioUIObjectListWidget_SetObjects_Params
{
public:
	TArray<class UObject*>                       InObjects;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectListWidget.RemoveObjectWidgetCreatedHandler
struct IModioUIObjectListWidget_RemoveObjectWidgetCreatedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectListWidget.GetObjects
struct IModioUIObjectListWidget_GetObjects_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectListWidget.GetObjectAt
struct IModioUIObjectListWidget_GetObjectAt_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIObjectListWidget.GetFirstEntryWidget
struct IModioUIObjectListWidget_GetFirstEntryWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectListWidget.AddObjectWidgetCreatedHandler
struct IModioUIObjectListWidget_AddObjectWidgetCreatedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.SetValues
struct IModioUIObjectSelector_SetValues_Params
{
public:
	TArray<class UObject*>                       InValues;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.SetSingleSelectionByValue
struct IModioUIObjectSelector_SetSingleSelectionByValue_Params
{
public:
	class UObject*                               Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmitSelectionEvent;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.SetSingleSelectionByIndex
struct IModioUIObjectSelector_SetSingleSelectionByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmitSelectionEvent;                               // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C53[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.SetSelectedStateForValue
struct IModioUIObjectSelector_SetSelectedStateForValue_Params
{
public:
	class UObject*                               Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewSelectionState;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmitSelectionEvent;                               // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C57[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.SetSelectedStateForIndex
struct IModioUIObjectSelector_SetSelectedStateForIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewSelectionState;                                // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmitSelectionEvent;                               // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA5[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.SetMultiSelectionAllowed
struct IModioUIObjectSelector_SetMultiSelectionAllowed_Params
{
public:
	bool                                         bMultiSelectionAllowed;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.SetListEntryWidgetClass
struct IModioUIObjectSelector_SetListEntryWidgetClass_Params
{
public:
	TSubclassOf<class UWidget>                   InNewEntryClass;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.RemoveSelectionChangedHandler
struct IModioUIObjectSelector_RemoveSelectionChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.GetWidgetForValue
struct IModioUIObjectSelector_GetWidgetForValue_Params
{
public:
	class UObject*                               Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.GetSingleSelectionIndex
struct IModioUIObjectSelector_GetSingleSelectionIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.GetSingleSelectedValue
struct IModioUIObjectSelector_GetSingleSelectedValue_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.GetSelectedValues
struct IModioUIObjectSelector_GetSelectedValues_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.GetNumEntries
struct IModioUIObjectSelector_GetNumEntries_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.GetMultiSelectionAllowed
struct IModioUIObjectSelector_GetMultiSelectionAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.GetLastSelectionIndex
struct IModioUIObjectSelector_GetLastSelectionIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.GetIndexForValue
struct IModioUIObjectSelector_GetIndexForValue_Params
{
public:
	class UObject*                               Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIObjectSelector.AddSelectionChangedHandler
struct IModioUIObjectSelector_AddSelectionChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioUIProgressWidget.SetProgress
struct IModioUIProgressWidget_SetProgress_Params
{
public:
	float                                        NewProgressValue;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUIProgressWidget.SetMarquee
struct IModioUIProgressWidget_SetMarquee_Params
{
public:
	bool                                         bNewIsMarquee;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIProgressWidget.SetColorOverride
struct IModioUIProgressWidget_SetColorOverride_Params
{
public:
	struct FLinearColor                          Override;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIProgressWidget.RemoveValueChangedHandler
struct IModioUIProgressWidget_RemoveValueChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioUIProgressWidget.GetProgress
struct IModioUIProgressWidget_GetProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIProgressWidget.AddValueChangedHandler
struct IModioUIProgressWidget_AddValueChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISelectableWidget.SetToggleable
struct IModioUISelectableWidget_SetToggleable_Params
{
public:
	bool                                         bNewToggleableState;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISelectableWidget.SetSelectedState
struct IModioUISelectableWidget_SetSelectedState_Params
{
public:
	bool                                         bNewSelectedState;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISelectableWidget.SetSelectable
struct IModioUISelectableWidget_SetSelectable_Params
{
public:
	bool                                         bNewSelectableState;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISelectableWidget.RemoveSelectedStateChangedHandler
struct IModioUISelectableWidget_RemoveSelectedStateChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISelectableWidget.GetToggleable
struct IModioUISelectableWidget_GetToggleable_Params
{
public:
	bool                                         bIsToggleable;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISelectableWidget.GetSelectedState
struct IModioUISelectableWidget_GetSelectedState_Params
{
public:
	bool                                         bCurrentSelectedState;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISelectableWidget.GetSelectable
struct IModioUISelectableWidget_GetSelectable_Params
{
public:
	bool                                         bIsSelectable;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISelectableWidget.AddSelectedStateChangedHandler
struct IModioUISelectableWidget_AddSelectedStateChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIStringInputWidget.SetInput
struct IModioUIStringInputWidget_SetInput_Params
{
public:
	class FString                                Input;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUIStringInputWidget.SetHint
struct IModioUIStringInputWidget_SetHint_Params
{
public:
	class FText                                  HintText;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIStringInputWidget.RemoveTextCommittedHandler
struct IModioUIStringInputWidget_RemoveTextCommittedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIStringInputWidget.RemoveTextChangedHandler
struct IModioUIStringInputWidget_RemoveTextChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIStringInputWidget.GatherInput
struct IModioUIStringInputWidget_GatherInput_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIStringInputWidget.AddTextCommittedHandler
struct IModioUIStringInputWidget_AddTextCommittedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUIStringInputWidget.AddTextChangedHandler
struct IModioUIStringInputWidget_AddTextChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubscriptionsChangedReceiver.OnSubscriptionsChanged
struct IModioUISubscriptionsChangedReceiver_OnSubscriptionsChanged_Params
{
public:
	struct FModioModID                           ModId;                                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewSubscriptionState;                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUISubscriptionsChangedReceiverLibrary.RegisterSubscriptionsChangedReceiver
struct UModioUISubscriptionsChangedReceiverLibrary_RegisterSubscriptionsChangedReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUISubscriptionsChangedReceiverLibrary.DeregisterSubscriptionsChangedReceiver
struct UModioUISubscriptionsChangedReceiverLibrary_DeregisterSubscriptionsChangedReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ModioUICore.ModioUISupportsCustomNavigation.SetNavigationDelegate
struct IModioUISupportsCustomNavigation_SetNavigationDelegate_Params
{
public:
	uint8                                        Context;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2069[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           ContentNavigationDelegate;                         // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ModioUICore.ModioUITextValidator.ValidateText
struct IModioUITextValidator_ValidateText_Params
{
public:
	class FText                                  InputText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ValidationMessageText;                             // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUITextValidator.SetValidationError
struct IModioUITextValidator_SetValidationError_Params
{
public:
	class FText                                  ErrorText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUITextValidator.RemoveTextValidationCompletedHandler
struct IModioUITextValidator_RemoveTextValidationCompletedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUITextValidator.GetTextValidationRules
struct IModioUITextValidator_GetTextValidationRules_Params
{
public:
	TArray<struct FModioTextValidationRule>      Rules;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUITextValidator.AddTextValidationCompletedHandler
struct IModioUITextValidator_AddTextValidationCompletedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.ValidateUsingRule
struct UModioUIInputValidationLibrary_ValidateUsingRule_Params
{
public:
	struct FModioTextValidationRule              Rule;                                              // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  TextToValidate;                                    // 0x28(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ValidationMessageText;                             // 0x40(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2175[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.ValidateNoWhitespace
struct UModioUIInputValidationLibrary_ValidateNoWhitespace_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2183[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.ValidateNotEmpty
struct UModioUIInputValidationLibrary_ValidateNotEmpty_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2190[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.ValidateNotBlank
struct UModioUIInputValidationLibrary_ValidateNotBlank_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21DD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.ValidateLength
struct UModioUIInputValidationLibrary_ValidateLength_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        DesiredMaximumLength;                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DesiredMinimumLength;                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.ValidateEmailAddress
struct UModioUIInputValidationLibrary_ValidateEmailAddress_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2231[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.ValidateAlphanumeric
struct UModioUIInputValidationLibrary_ValidateAlphanumeric_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_223B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.ValidateAllNumeric
struct UModioUIInputValidationLibrary_ValidateAllNumeric_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2264[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.ValidateAllLetters
struct UModioUIInputValidationLibrary_ValidateAllLetters_Params
{
public:
	class FText                                  TextToValidate;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2285[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function ModioUICore.ModioUIInputValidationLibrary.DefaultValidateText
struct UModioUIInputValidationLibrary_DefaultValidateText_Params
{
public:
	TScriptInterface<class IModioUITextValidator> TargetObject;                                      // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InputText;                                         // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ValidationMessageText;                             // 0x28(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.ModioUITokenPackListInterface.SetTokenPacksFromTokenPackList
struct IModioUITokenPackListInterface_SetTokenPacksFromTokenPackList_Params
{
public:
	struct FModioTokenPackList                   InList;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToExisting;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUITokenPackListInterface.SetTokenPacksFromTokenPackArray
struct IModioUITokenPackListInterface_SetTokenPacksFromTokenPackArray_Params
{
public:
	TArray<struct FModioTokenPack>               InArray;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAddToExisting;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUITokenPackListInterface.SetTokenPackSelectionByID
struct IModioUITokenPackListInterface_SetTokenPackSelectionByID_Params
{
public:
	struct FModioTokenPackID                     TokenPackID;                                       // 0x0(0x10)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function ModioUICore.ModioUITokenPackReceiver.OnTokenPackRequestCompleted
struct IModioUITokenPackReceiver_OnTokenPackRequestCompleted_Params
{
public:
	struct FModioTokenPackID                     TokenPackID;                                       // 0x0(0x10)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioErrorCode                       ErrorCode;                                         // 0x10(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioOptionalTokenPack               Info;                                              // 0x18(0x120)(Parm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ModioUICore.ModioUITokenPackReceiver.OnListAllTokenPacksRequestCompleted
struct IModioUITokenPackReceiver_OnListAllTokenPacksRequestCompleted_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioOptionalTokenPackList           List;                                              // 0x8(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUITokenPackReceiverLibrary.RegisterTokenPackReceiver
struct UModioUITokenPackReceiverLibrary_RegisterTokenPackReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioUITokenPackEventType        EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2380[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUITokenPackReceiverLibrary.DeregisterTokenPackReceiver
struct UModioUITokenPackReceiverLibrary_DeregisterTokenPackReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioUITokenPackEventType        EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2389[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver.OnUserAvatarDownloadCompleted
struct IModioUIUserAvatarDownloadCompletedReceiver_OnUserAvatarDownloadCompleted_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioOptionalImage                   Image;                                             // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIUserAvatarDownloadCompletedReceiverLibrary.RegisterUserAvatarDownloadCompletedReceiver
struct UModioUIUserAvatarDownloadCompletedReceiverLibrary_RegisterUserAvatarDownloadCompletedReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIUserAvatarDownloadCompletedReceiverLibrary.DeregisterUserAvatarDownloadCompletedReceiver
struct UModioUIUserAvatarDownloadCompletedReceiverLibrary_DeregisterUserAvatarDownloadCompletedReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ModioUICore.ModioUIUserChangedReceiver.OnUserChanged
struct IModioUIUserChangedReceiver_OnUserChanged_Params
{
public:
	struct FModioOptionalUser                    NewUser;                                           // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIUserChangedReceiverLibrary.RegisterUserChangedReceiver
struct UModioUIUserChangedReceiverLibrary_RegisterUserChangedReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIUserChangedReceiverLibrary.DeregisterUserChangedReceiver
struct UModioUIUserChangedReceiverLibrary_DeregisterUserChangedReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIWalletBalanceUpdatedEventReceiver.OnWalletBalanceUpdated
struct IModioUIWalletBalanceUpdatedEventReceiver_OnWalletBalanceUpdated_Params
{
public:
	struct FModioUnsigned64                      WalletBalance;                                     // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIWalletBalanceUpdatedEventReceiverLibrary.RegisterWalletBalanceUpdatedEventReceiver
struct UModioUIWalletBalanceUpdatedEventReceiverLibrary_RegisterWalletBalanceUpdatedEventReceiver_Params
{
public:
	class UObject*                               ObjectToRegister;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIWalletBalanceUpdatedEventReceiverLibrary.DeregisterWalletBalanceUpdatedEventReceiver
struct UModioUIWalletBalanceUpdatedEventReceiverLibrary_DeregisterWalletBalanceUpdatedEventReceiver_Params
{
public:
	class UObject*                               ObjectToDeregister;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUserUIDetails.GetUserID
struct IModioUserUIDetails_GetUserID_Params
{
public:
	struct FModioUserID                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ModioUICore.ModioUserUIDetails.GetFullUser
struct IModioUserUIDetails_GetFullUser_Params
{
public:
	struct FModioUser                            ReturnValue;                                       // 0x0(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModRatingStateProvider.RequestModRatingChange
struct IModRatingStateProvider_RequestModRatingChange_Params
{
public:
	int64                                        ID;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioRating                      NewRating;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E2[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModRatingStateProvider.QueryModRating
struct IModRatingStateProvider_QueryModRating_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioRating                      ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.LinearColorRefLibrary.ResolveOverrideAsExec
struct ULinearColorRefLibrary_ResolveOverrideAsExec_Params
{
public:
	struct FLinearColorRefOverride               Target;                                            // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_254C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.LinearColorRefLibrary.ResolveOverride
struct ULinearColorRefLibrary_ResolveOverride_Params
{
public:
	struct FLinearColorRefOverride               Target;                                            // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2576[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function ModioUICore.LinearColorRefLibrary.Resolve
struct ULinearColorRefLibrary_Resolve_Params
{
public:
	struct FLinearColorRef                       Target;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bResolved;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2582[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x1C(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.LinearColorRefLibrary.RemoveColorChangeHandler
struct ULinearColorRefLibrary_RemoveColorChangeHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.LinearColorRefLibrary.GetValidColorKeys
struct ULinearColorRefLibrary_GetValidColorKeys_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.LinearColorRefLibrary.AddColorChangeHandler
struct ULinearColorRefLibrary_AddColorChangeHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioCommandEntry.HandleInnerButtonClicked
struct UModioCommandEntry_HandleInnerButtonClicked_Params
{
public:
	class UObject*                               ClickContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioCommandEntry.GetLabelWidget
struct UModioCommandEntry_GetLabelWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioCommandEntry.GetIconWidget
struct UModioCommandEntry_GetIconWidget_Params
{
public:
	TScriptInterface<class IModioUIImageDisplayWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioCommandEntry.GetClickableWidget
struct UModioCommandEntry_GetClickableWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioCommandMenu.OnCommandSelected
struct UModioCommandMenu_OnCommandSelected_Params
{
public:
	class UObject*                               SelectedCommandObject;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioCommandMenu.GetSelectorWidget
struct UModioCommandMenu_GetSelectorWidget_Params
{
public:
	TScriptInterface<class IModioUIObjectSelector> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioCurrentUserAvatarWidget.GetAvatarImageWidget
struct UModioCurrentUserAvatarWidget_GetAvatarImageWidget_Params
{
public:
	TScriptInterface<class IModioUIImageDisplayWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioDefaultCheckBox.SetLabel
struct UModioDefaultCheckBox_SetLabel_Params
{
public:
	class FText                                  InLabelText;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioDefaultCheckBox.SetHovered
struct UModioDefaultCheckBox_SetHovered_Params
{
public:
	bool                                         bHovered;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioDefaultCheckBox.HandleOnCheckStateChanged
struct UModioDefaultCheckBox_HandleOnCheckStateChanged_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioDefaultCheckBox.GetLabelTextBlockText
struct UModioDefaultCheckBox_GetLabelTextBlockText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioDefaultCheckBox.GetLabel
struct UModioDefaultCheckBox_GetLabel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioDefaultCheckBox.GetCheckboxContentPadding
struct UModioDefaultCheckBox_GetCheckboxContentPadding_Params
{
public:
	struct FMargin                               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioDefaultCodeInputTextBox.GetValidationErrorWidget
struct UModioDefaultCodeInputTextBox_GetValidationErrorWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioDefaultTextButton.GetLabelWidget
struct UModioDefaultTextButton_GetLabelWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioDefaultIconButton.GetImageWidget
struct UModioDefaultIconButton_GetImageWidget_Params
{
public:
	TScriptInterface<class IModioUIImageDisplayWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioDefaultModTile.PopulateExtraOptionsCommands
struct UModioDefaultModTile_PopulateExtraOptionsCommands_Params
{
public:
	TArray<class UObject*>                       Commands;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioDefaultModTile.NotifyHoverStateChanged
struct UModioDefaultModTile_NotifyHoverStateChanged_Params
{
public:
	bool                                         bNewHoveredState;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioDefaultModTile.GetSelectedStateEx
struct UModioDefaultModTile_GetSelectedStateEx_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioDefaultModTile.GetMoreOptionsMenuWidget
struct UModioDefaultModTile_GetMoreOptionsMenuWidget_Params
{
public:
	TScriptInterface<class IModioUICommandMenu>  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioDefaultObjectSelector.OnEntryWidgetClicked
struct UModioDefaultObjectSelector_OnEntryWidgetClicked_Params
{
public:
	class UObject*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioDefaultObjectSelector.GetEntryWidgetFromItem
struct UModioDefaultObjectSelector_GetEntryWidgetFromItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioDefaultScrollBox.UpdateNavigationData
struct UModioDefaultScrollBox_UpdateNavigationData_Params
{
public:
	int32                                        PendingScrollOffset;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioDefaultScrollBox.OnUserScrolledHandle
struct UModioDefaultScrollBox_OnUserScrolledHandle_Params
{
public:
	float                                        CurrentOffset;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioDefaultScrollBox.HandleCustomBoundaryNavigation
struct UModioDefaultScrollBox_HandleCustomBoundaryNavigation_Params
{
public:
	enum class EUINavigation                     InNavigation;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2949[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioDefaultTagWidget.GetLabelWidget
struct UModioDefaultTagWidget_GetLabelWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioDefaultTokenPackTile.NotifyHoverStateChanged
struct UModioDefaultTokenPackTile_NotifyHoverStateChanged_Params
{
public:
	bool                                         bNewHoveredState;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioDefaultTokenPackTile.GetSelectedStateEx
struct UModioDefaultTokenPackTile_GetSelectedStateEx_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ModioUICore.ModioDialogButtonUIDetails.GetDialogButtonInfo
struct IModioDialogButtonUIDetails_GetDialogButtonInfo_Params
{
public:
	struct FModioDialogButtonInfo                ReturnValue;                                       // 0x0(0xB0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioDropdownAnchor.ModioHandleMenuOpenChanged
struct UModioDropdownAnchor_ModioHandleMenuOpenChanged_Params
{
public:
	bool                                         bIsOpen;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioEnumSelector.NotifySelectionChanged
struct UModioEnumSelector_NotifySelectionChanged_Params
{
public:
	class UObject*                               SelectedObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioEnumSelector.InternalSelectionChangedHandler
struct UModioEnumSelector_InternalSelectionChangedHandler_Params
{
public:
	class UObject*                               SelectedObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioEnumSelector.GetSelectorMenuWidget
struct UModioEnumSelector_GetSelectorMenuWidget_Params
{
public:
	TScriptInterface<class IModioUIObjectSelector> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioEnumSelector.GetMenuToggleClickableWidget
struct UModioEnumSelector_GetMenuToggleClickableWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioEnumSelectorEntry.NotifySelectionChanged
struct UModioEnumSelectorEntry_NotifySelectionChanged_Params
{
public:
	bool                                         bNewSelectedState;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioEnumSelectorEntry.InternalSelectionChangedHandler
struct UModioEnumSelectorEntry_InternalSelectionChangedHandler_Params
{
public:
	class UObject*                               SelectionContext;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewSelectedState;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B93[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioEnumSelectorEntry.InternalClickHandler
struct UModioEnumSelectorEntry_InternalClickHandler_Params
{
public:
	class UObject*                               ClickContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioEnumSelectorEntry.GetSelectableWidget
struct UModioEnumSelectorEntry_GetSelectableWidget_Params
{
public:
	TScriptInterface<class IModioUISelectableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioEnumSelectorEntry.GetLabelWidget
struct UModioEnumSelectorEntry_GetLabelWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioEnumSelectorEntry.GetClickableWidget
struct UModioEnumSelectorEntry_GetClickableWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioEnumSelectorMenu.NotifySelectionChanged
struct UModioEnumSelectorMenu_NotifySelectionChanged_Params
{
public:
	class UObject*                               SelectedObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioEnumSelectorMenu.InternalSelectionChangedHandler
struct UModioEnumSelectorMenu_InternalSelectionChangedHandler_Params
{
public:
	class UObject*                               SelectedObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioEnumSelectorMenu.GetSelectorWidget
struct UModioEnumSelectorMenu_GetSelectorWidget_Params
{
public:
	TScriptInterface<class IModioUIObjectSelector> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioFilterCounterButton.GetFilterCounterWidget
struct UModioFilterCounterButton_GetFilterCounterWidget_Params
{
public:
	TScriptInterface<class IModioUIDataSourceWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioFilterPanel.GetTagSelectorWidget
struct UModioFilterPanel_GetTagSelectorWidget_Params
{
public:
	TScriptInterface<class IModioUIModTagSelector> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioFilterPanel.GetSelectedTags
struct UModioFilterPanel_GetSelectedTags_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioFilterPanel.GetClearButtonWidget
struct UModioFilterPanel_GetClearButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioFilterPanel.GetBackgroundButtonWidget
struct UModioFilterPanel_GetBackgroundButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioFilterPanel.AddTagSelectionChangedHandler
struct UModioFilterPanel_AddTagSelectionChangedHandler_Params
{
public:
	FDelegateProperty_                           Handler;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioImageGallery.GetIncrementSelectionButtonWidget
struct UModioImageGallery_GetIncrementSelectionButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioImageGallery.GetImageWidget
struct UModioImageGallery_GetImageWidget_Params
{
public:
	TScriptInterface<class IModioUIImageDisplayWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioImageGallery.GetImageSelectorWidget
struct UModioImageGallery_GetImageSelectorWidget_Params
{
public:
	TScriptInterface<class IModioUIObjectSelector> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioImageGallery.GetDecrementSelectionButtonWidget
struct UModioImageGallery_GetDecrementSelectionButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.SearchSubscriptionsAndInstallsWithStoredParams
struct UModioModBrowser_SearchSubscriptionsAndInstallsWithStoredParams_Params
{
public:
	TArray<struct FModioModInfo>                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.SearchPurchasesWithStoredParams
struct UModioModBrowser_SearchPurchasesWithStoredParams_Params
{
public:
	TArray<struct FModioModInfo>                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.SearchLibraryWithStoredParams
struct UModioModBrowser_SearchLibraryWithStoredParams_Params
{
public:
	TArray<struct FModioModInfo>                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModBrowser.InitializeTagData
struct UModioModBrowser_InitializeTagData_Params
{
public:
	class UObject*                               InTagData;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModBrowser.InitializeLibraryTagData
struct UModioModBrowser_InitializeLibraryTagData_Params
{
public:
	class UObject*                               InTagData;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetWalletButtonWidget
struct UModioModBrowser_GetWalletButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetViewDescriptionTextWidget
struct UModioModBrowser_GetViewDescriptionTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetViewDescriptionImageWidget
struct UModioModBrowser_GetViewDescriptionImageWidget_Params
{
public:
	TScriptInterface<class IModioUIImageDisplayWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetTabRightButtonWidget
struct UModioModBrowser_GetTabRightButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetTabLeftButtonWidget
struct UModioModBrowser_GetTabLeftButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetSearchTextWidget
struct UModioModBrowser_GetSearchTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetSearchEditableTextBoxWidget
struct UModioModBrowser_GetSearchEditableTextBoxWidget_Params
{
public:
	TScriptInterface<class IModioUIStringInputWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetSearchButtonWidget
struct UModioModBrowser_GetSearchButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetPresetFilterSelectorWidget
struct UModioModBrowser_GetPresetFilterSelectorWidget_Params
{
public:
	TScriptInterface<class IModioUIObjectSelector> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetModTileViewWidget
struct UModioModBrowser_GetModTileViewWidget_Params
{
public:
	TScriptInterface<class IModioUIModListViewInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetLibraryViewButtonWidget
struct UModioModBrowser_GetLibraryViewButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetFilterButtonWidget
struct UModioModBrowser_GetFilterButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetCloseBrowserButtonWidget
struct UModioModBrowser_GetCloseBrowserButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModBrowser.GetClearSearchButtonWidget
struct UModioModBrowser_GetClearSearchButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ModioUICore.ModioModBrowser.DoFilterParamsIncludeUserId
struct UModioModBrowser_DoFilterParamsIncludeUserId_Params
{
public:
	struct FModioFilterParams                    Params;                                            // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FFC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.PopulateExtraOptionsCommands
struct UModioModDetailsDialog_PopulateExtraOptionsCommands_Params
{
public:
	TArray<class UObject*>                       Commands;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.IsUserSubscribed
struct UModioModDetailsDialog_IsUserSubscribed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.IsModPurchased
struct UModioModDetailsDialog_IsModPurchased_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetWalletButtonWidget
struct UModioModDetailsDialog_GetWalletButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetTagDisplayWidget
struct UModioModDetailsDialog_GetTagDisplayWidget_Params
{
public:
	TScriptInterface<class IModioUIDataSourceWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetSubscribeButtonWidget
struct UModioModDetailsDialog_GetSubscribeButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetRateUpButtonWidget
struct UModioModDetailsDialog_GetRateUpButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetRateDownButtonWidget
struct UModioModDetailsDialog_GetRateDownButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetPurchaseButtonWidget
struct UModioModDetailsDialog_GetPurchaseButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetMoreOptionsMenuWidget
struct UModioModDetailsDialog_GetMoreOptionsMenuWidget_Params
{
public:
	TScriptInterface<class IModioUICommandMenu>  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetModSummaryShortTextWidget
struct UModioModDetailsDialog_GetModSummaryShortTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetModStatusWidget
struct UModioModDetailsDialog_GetModStatusWidget_Params
{
public:
	TScriptInterface<class IModioUIDataSourceWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetModPropertiesWidget
struct UModioModDetailsDialog_GetModPropertiesWidget_Params
{
public:
	TScriptInterface<class IModioUIDataSourceWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetModNameTextWidget
struct UModioModDetailsDialog_GetModNameTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetModImageGalleryWidget
struct UModioModDetailsDialog_GetModImageGalleryWidget_Params
{
public:
	TScriptInterface<class IModioUIMediaDownloadCompletedReceiver> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetModDependenciesButtonWidget
struct UModioModDetailsDialog_GetModDependenciesButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetModAuthorDisplayWidget
struct UModioModDetailsDialog_GetModAuthorDisplayWidget_Params
{
public:
	TScriptInterface<class IModioUIDataSourceWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetExpandDescriptionButtonWidget
struct UModioModDetailsDialog_GetExpandDescriptionButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModDetailsDialog.GetCloseDialogButtonWidget
struct UModioModDetailsDialog_GetCloseDialogButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModInstallationStatusWidget.QueryProgressValueForState
struct UModioModInstallationStatusWidget_QueryProgressValueForState_Params
{
public:
	enum class EModioModProgressState            ProgressState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3110[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModPropCollectionVisualizer.GetModPropertyVisualizerWidgets
struct UModioModPropCollectionVisualizer_GetModPropertyVisualizerWidgets_Params
{
public:
	TArray<TScriptInterface<class IModioUIDataSourceWidget>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModRatingDisplay.GetRatingPercentageLabelWidget
struct UModioModRatingDisplay_GetRatingPercentageLabelWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModRatingDisplay.GetRatingDescriptionLabelWidget
struct UModioModRatingDisplay_GetRatingDescriptionLabelWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagDisplay.GetTagContainerWidget
struct UModioModTagDisplay_GetTagContainerWidget_Params
{
public:
	TScriptInterface<class IModioUIObjectListWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelector.GetSelectorMenuWidget
struct UModioModTagSelector_GetSelectorMenuWidget_Params
{
public:
	TScriptInterface<class IModioUIModTagSelector> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelector.GetMenuToggleClickableWidget
struct UModioModTagSelector_GetMenuToggleClickableWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelectorCategory.GetTagCategoryLabel
struct UModioModTagSelectorCategory_GetTagCategoryLabel_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelectorCategory.GetCategoryTagListWidget
struct UModioModTagSelectorCategory_GetCategoryTagListWidget_Params
{
public:
	TScriptInterface<class IModioUIObjectSelector> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModTagSelectorEntry.OnTagEntryClicked
struct UModioModTagSelectorEntry_OnTagEntryClicked_Params
{
public:
	class UObject*                               ClickedObject;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelectorEntry.GetTagLabelWidget
struct UModioModTagSelectorEntry_GetTagLabelWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelectorEntry.GetSelectionWidget
struct UModioModTagSelectorEntry_GetSelectionWidget_Params
{
public:
	TScriptInterface<class IModioUISelectableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelectorEntry.GetClickableWidget
struct UModioModTagSelectorEntry_GetClickableWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelectorMenu.OnCategoryWidgetCreated
struct UModioModTagSelectorMenu_OnCategoryWidgetCreated_Params
{
public:
	class UWidget*                               CategoryWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CategoryDataSource;                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioModTagSelectorMenu.OnCategoryEntrySelectionChanged
struct UModioModTagSelectorMenu_OnCategoryEntrySelectionChanged_Params
{
public:
	class UObject*                               NewlySelectedEntry;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelectorMenu.GetCategoryContainerWidget
struct UModioModTagSelectorMenu_GetCategoryContainerWidget_Params
{
public:
	TScriptInterface<class IModioUIObjectListWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioModTagSelectorMenu.GetAllowedTags
struct UModioModTagSelectorMenu_GetAllowedTags_Params
{
public:
	TArray<TScriptInterface<class IModioModTagCategoryUIDetails>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioOperationTracker.GetRadialProgressWidget
struct UModioOperationTracker_GetRadialProgressWidget_Params
{
public:
	TScriptInterface<class IModioUIProgressWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioOperationTracker.GetQueueLabelTextWidget
struct UModioOperationTracker_GetQueueLabelTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioOperationTracker.GetQueueCountTextWidget
struct UModioOperationTracker_GetQueueCountTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioOperationTracker.GetQueueCountIconWidget
struct UModioOperationTracker_GetQueueCountIconWidget_Params
{
public:
	TScriptInterface<class IModioUIImageDisplayWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioOperationTracker.GetPercentProgressTextWidget
struct UModioOperationTracker_GetPercentProgressTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioOperationTracker.GetOperationTypeIconWidget
struct UModioOperationTracker_GetOperationTypeIconWidget_Params
{
public:
	TScriptInterface<class IModioUIImageDisplayWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioOperationTracker.GetDownloadSpeedTextWidget
struct UModioOperationTracker_GetDownloadSpeedTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioOperationTracker.GetDownloadSizeTextWidget
struct UModioOperationTracker_GetDownloadSizeTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioPopupCommandMenu.GetCommandMenuWidget
struct UModioPopupCommandMenu_GetCommandMenuWidget_Params
{
public:
	TScriptInterface<class IModioUICommandMenu>  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioPresetFilterEntryWidget.GetLabelWidget
struct UModioPresetFilterEntryWidget_GetLabelWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioPresetFilterSelector.GetPresetListWidget
struct UModioPresetFilterSelector_GetPresetListWidget_Params
{
public:
	TScriptInterface<class IModioUIObjectSelector> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioPresetFilterSelector.GetFilterPresets
struct UModioPresetFilterSelector_GetFilterPresets_Params
{
public:
	TArray<TScriptInterface<class IModioModFilterUIDetails>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveTextTransformOverrideAsExec
struct UPropertyOverridesLibrary_ResolveTextTransformOverrideAsExec_Params
{
public:
	struct FTextTransformOverride                Target;                                            // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveTextTransformOverride
struct UPropertyOverridesLibrary_ResolveTextTransformOverride_Params
{
public:
	struct FTextTransformOverride                Target;                                            // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveTextOverrideAsExec
struct UPropertyOverridesLibrary_ResolveTextOverrideAsExec_Params
{
public:
	struct FTextOverride                         Target;                                            // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3357[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveTextOverride
struct UPropertyOverridesLibrary_ResolveTextOverride_Params
{
public:
	struct FTextOverride                         Target;                                            // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveIntOverrideAsExec
struct UPropertyOverridesLibrary_ResolveIntOverrideAsExec_Params
{
public:
	struct FIntegerOverride                      Target;                                            // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_337E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveIntOverride
struct UPropertyOverridesLibrary_ResolveIntOverride_Params
{
public:
	struct FIntegerOverride                      Target;                                            // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3396[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveInputActionOverrideAsExec
struct UPropertyOverridesLibrary_ResolveInputActionOverrideAsExec_Params
{
public:
	struct FInputActionOverride                  Target;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_339F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveInputActionOverride
struct UPropertyOverridesLibrary_ResolveInputActionOverride_Params
{
public:
	struct FInputActionOverride                  Target;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveHAlignOverrideAsExec
struct UPropertyOverridesLibrary_ResolveHAlignOverrideAsExec_Params
{
public:
	struct FHAlignOverride                       Target;                                            // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveHAlignOverride
struct UPropertyOverridesLibrary_ResolveHAlignOverride_Params
{
public:
	struct FHAlignOverride                       Target;                                            // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveFontInfoOverrideAsExec
struct UPropertyOverridesLibrary_ResolveFontInfoOverrideAsExec_Params
{
public:
	struct FSlateFontInfoOverride                Target;                                            // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveFontInfoOverride
struct UPropertyOverridesLibrary_ResolveFontInfoOverride_Params
{
public:
	struct FSlateFontInfoOverride                Target;                                            // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3425[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        ReturnValue;                                       // 0x68(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveFloatOverrideAsExec
struct UPropertyOverridesLibrary_ResolveFloatOverrideAsExec_Params
{
public:
	struct FFloatOverride                        Target;                                            // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_342E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveFloatOverride
struct UPropertyOverridesLibrary_ResolveFloatOverride_Params
{
public:
	struct FFloatOverride                        Target;                                            // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3449[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveClassPathOverrideAsExec_Casted
struct UPropertyOverridesLibrary_ResolveClassPathOverrideAsExec_Casted_Params
{
public:
	struct FClassPathOverride                    Target;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   BaseClass;                                         // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3451[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveClassPathOverrideAsExec
struct UPropertyOverridesLibrary_ResolveClassPathOverrideAsExec_Params
{
public:
	struct FClassPathOverride                    Target;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3455[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveClassPathOverride_Casted
struct UPropertyOverridesLibrary_ResolveClassPathOverride_Casted_Params
{
public:
	struct FClassPathOverride                    Target;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   BaseClass;                                         // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3486[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ResolveClassPathOverride
struct UPropertyOverridesLibrary_ResolveClassPathOverride_Params
{
public:
	struct FClassPathOverride                    Target;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bOverrideSet;                                      // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3494[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ApplyTextTransformOverride
struct UPropertyOverridesLibrary_ApplyTextTransformOverride_Params
{
public:
	struct FTextTransformOverride                Target;                                            // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              DefaultValue;                                      // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ApplyTextOverride
struct UPropertyOverridesLibrary_ApplyTextOverride_Params
{
public:
	struct FTextOverride                         Target;                                            // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  DefaultValue;                                      // 0x20(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ApplyIntOverride
struct UPropertyOverridesLibrary_ApplyIntOverride_Params
{
public:
	struct FIntegerOverride                      Target;                                            // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        DefaultValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ApplyInputActionOverride
struct UPropertyOverridesLibrary_ApplyInputActionOverride_Params
{
public:
	struct FInputActionOverride                  Target;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DefaultValue;                                      // 0x18(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ApplyHAlignOverride
struct UPropertyOverridesLibrary_ApplyHAlignOverride_Params
{
public:
	struct FHAlignOverride                       Target;                                            // 0x0(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              DefaultValue;                                      // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ApplyFontInfoOverride
struct UPropertyOverridesLibrary_ApplyFontInfoOverride_Params
{
public:
	struct FSlateFontInfoOverride                Target;                                            // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        DefaultValue;                                      // 0x60(0x58)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        ReturnValue;                                       // 0xB8(0x58)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ApplyFloatOverride
struct UPropertyOverridesLibrary_ApplyFloatOverride_Params
{
public:
	struct FFloatOverride                        Target;                                            // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ApplyClassPathOverride_Casted
struct UPropertyOverridesLibrary_ApplyClassPathOverride_Casted_Params
{
public:
	struct FClassPathOverride                    Target;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   BaseClass;                                         // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                DefaultValue;                                      // 0x30(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function ModioUICore.PropertyOverridesLibrary.ApplyClassPathOverride
struct UPropertyOverridesLibrary_ApplyClassPathOverride_Params
{
public:
	struct FClassPathOverride                    Target;                                            // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        DefaultValue;                                      // 0x28(0x20)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        ReturnValue;                                       // 0x48(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioRetryLibrary.Retry
struct UModioRetryLibrary_Retry_Params
{
public:
	struct FModioRetryCounter                    Target;                                            // 0x0(0x4)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioRetryLibrary.ResetRetryCountPure
struct UModioRetryLibrary_ResetRetryCountPure_Params
{
public:
	struct FModioRetryCounter                    Target;                                            // 0x0(0x4)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioRetryCounter                    ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioRetryLibrary.ResetRetryCount
struct UModioRetryLibrary_ResetRetryCount_Params
{
public:
	struct FModioRetryCounter                    Target;                                            // 0x0(0x4)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioRetryLibrary.CanRetryAsExec
struct UModioRetryLibrary_CanRetryAsExec_Params
{
public:
	struct FModioRetryCounter                    Target;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioRetryLibrary.CanRetry
struct UModioRetryLibrary_CanRetry_Params
{
public:
	struct FModioRetryCounter                    Target;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35EB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioSearchBar.GetSearchBoxWidget
struct UModioSearchBar_GetSearchBoxWidget_Params
{
public:
	TScriptInterface<class IModioUIStringInputWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioSearchBar.GetButtonWidget
struct UModioSearchBar_GetButtonWidget_Params
{
public:
	TScriptInterface<class IModioUIClickableWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioStackedBoolLibrary.PushBoolValue
struct UModioStackedBoolLibrary_PushBoolValue_Params
{
public:
	struct FModioStackedBool                     Target;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bNewValue;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3630[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioStackedBoolLibrary.PopBoolValue
struct UModioStackedBoolLibrary_PopBoolValue_Params
{
public:
	struct FModioStackedBool                     Target;                                            // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bDidPopSuccessfully;                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_363B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioStackedBoolLibrary.PeekBoolValue
struct UModioStackedBoolLibrary_PeekBoolValue_Params
{
public:
	struct FModioStackedBool                     Target;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bDidPeekSuccessfully;                              // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_365A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioStorageTracker.GetStorageUsedTextWidget
struct UModioStorageTracker_GetStorageUsedTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioTagCounterIcon.SynchronizeCounter
struct UModioTagCounterIcon_SynchronizeCounter_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioTagCounterIcon.GetCounterLabelWidget
struct UModioTagCounterIcon_GetCounterLabelWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioTokenPackBrowser.GetTokenTileViewWidget
struct UModioTokenPackBrowser_GetTokenTileViewWidget_Params
{
public:
	TScriptInterface<class IModioUITokenPackListInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioTokenPackBrowser.GetTitleTextWidget
struct UModioTokenPackBrowser_GetTitleTextWidget_Params
{
public:
	TScriptInterface<class IModioUIHasTextWidget> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioTokenPackUIDetails.GetTokenPackID
struct IModioTokenPackUIDetails_GetTokenPackID_Params
{
public:
	struct FModioTokenPackID                     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function ModioUICore.ModioTokenPackUIDetails.GetFullTokenPack
struct IModioTokenPackUIDetails_GetFullTokenPack_Params
{
public:
	struct FModioTokenPack                       ReturnValue;                                       // 0x0(0x118)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.ValidateWidget
struct UModioUICommonFunctionLibrary_ValidateWidget_Params
{
public:
	TScriptInterface<class IInterface>           TargetWidget;                                      // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.MapValueIntoRangeIndex
struct UModioUICommonFunctionLibrary_MapValueIntoRangeIndex_Params
{
public:
	TArray<struct FInt32Range>                   ValueRanges;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutIndex;                                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3747[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.IsDesignTimeAsExec
struct UModioUICommonFunctionLibrary_IsDesignTimeAsExec_Params
{
public:
	class UWidget*                               Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.IsDesignTime
struct UModioUICommonFunctionLibrary_IsDesignTime_Params
{
public:
	class UWidget*                               Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_375C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.GetModioText
struct UModioUICommonFunctionLibrary_GetModioText_Params
{
public:
	class FName                                  StringKey;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.GetLocalizedTagValue
struct UModioUICommonFunctionLibrary_GetLocalizedTagValue_Params
{
public:
	struct FModioModTagLocalizationData          InTagLocalizationData;                             // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x60(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.GetLocalizedTagCategory
struct UModioUICommonFunctionLibrary_GetLocalizedTagCategory_Params
{
public:
	struct FModioModTagInfo                      InTagInfo;                                         // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0xB8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.FormatTimespan
struct UModioUICommonFunctionLibrary_FormatTimespan_Params
{
public:
	struct FTimespan                             Timespan;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  YearFormat;                                        // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  MonthFormat;                                       // 0x20(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  DaysFormat;                                        // 0x38(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  TodayFormat;                                       // 0x50(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x68(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.FormatNumberWithSIUnit
struct UModioUICommonFunctionLibrary_FormatNumberWithSIUnit_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FormatText;                                        // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableUser
struct UModioUICommonFunctionLibrary_CreateBindableUser_Params
{
public:
	struct FModioUser                            InRawUser;                                         // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UModioUserUI*                          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableReportTypeEnumArray
struct UModioUICommonFunctionLibrary_CreateBindableReportTypeEnumArray_Params
{
public:
	TArray<class UModioEnumEntryUI*>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTagRawValue
struct UModioUICommonFunctionLibrary_CreateBindableModTagRawValue_Params
{
public:
	struct FModioModTag                          InTag;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModioModTagUI*                        ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTagOptions
struct UModioUICommonFunctionLibrary_CreateBindableModTagOptions_Params
{
public:
	struct FModioModTagOptions                   InRawOptions;                                      // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModioModTagOptionsUI*                 ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTagInfo
struct UModioUICommonFunctionLibrary_CreateBindableModTagInfo_Params
{
public:
	struct FModioModTagInfo                      InRawTagInfo;                                      // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UModioModTagInfoUI*                    ReturnValue;                                       // 0xB8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTagArray
struct UModioUICommonFunctionLibrary_CreateBindableModTagArray_Params
{
public:
	TArray<struct FModioModTag>                  InTags;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UModioModTagUI*>                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTag
struct UModioUICommonFunctionLibrary_CreateBindableModTag_Params
{
public:
	struct FModioModTagLocalizationData          InTagLocalizationData;                             // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UModioModTagUI*                        ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModDependencyArrayFromList
struct UModioUICommonFunctionLibrary_CreateBindableModDependencyArrayFromList_Params
{
public:
	struct FModioModDependencyList               InModDependencyList;                               // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UModioModDependencyUI*>         ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModDependencyArrayFromArray
struct UModioUICommonFunctionLibrary_CreateBindableModDependencyArrayFromArray_Params
{
public:
	TArray<struct FModioModDependency>           InModDependencyArray;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UModioModDependencyUI*>         ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModDependency
struct UModioUICommonFunctionLibrary_CreateBindableModDependency_Params
{
public:
	struct FModioModDependency                   InModDependency;                                   // 0x0(0xF8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UModioModDependencyUI*                 ReturnValue;                                       // 0xF8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableEnum
struct UModioUICommonFunctionLibrary_CreateBindableEnum_Params
{
public:
	uint8                                        InValue;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  InText;                                            // 0x8(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class UModioEnumEntryUI*                     ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CheckLogoDownloadEventForDataSource
struct UModioUICommonFunctionLibrary_CheckLogoDownloadEventForDataSource_Params
{
public:
	struct FModioModID                           EventModID;                                        // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    EventLogoSize;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    RequestedSize;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.CheckLogoDownloadEvent
struct UModioUICommonFunctionLibrary_CheckLogoDownloadEvent_Params
{
public:
	struct FModioModID                           EventModID;                                        // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    EventLogoSize;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3904[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModID                           RequestedModID;                                    // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    RequestedSize;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3907[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.AsObjectArray
struct UModioUICommonFunctionLibrary_AsObjectArray_Params
{
public:
	TArray<int32>                                TargetArray;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ModioUICore.ModioUICommonFunctionLibrary.ApplyTextPropertyOverridesHelper
struct UModioUICommonFunctionLibrary_ApplyTextPropertyOverridesHelper_Params
{
public:
	struct FSlateFontInfoOverride                FontPropertiesOverride;                            // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FHAlignOverride                       TextJustificationOverride;                         // 0x60(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTextTransformOverride                TextTransformOverride;                             // 0x62(0x2)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_390E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x68(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioUICore.ModioUIComponentStatics.GetMetadataForComponent
struct UModioUIComponentStatics_GetMetadataForComponent_Params
{
public:
	enum class EModioUIComponentID               ComponentType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bComponentTypeFound;                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUIComponentMetadata             ReturnValue;                                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ModioUICore.ModioUIComponentStatics.GetAllComponentMetadata
struct UModioUIComponentStatics_GetAllComponentMetadata_Params
{
public:
	TMap<enum class EModioUIComponentID, struct FModioUIComponentMetadata> ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function ModioUICore.ModioUIDisplayFilteredModsCommand.SetFilterParams
struct UModioUIDisplayFilteredModsCommand_SetFilterParams_Params
{
public:
	struct FModioFilterParams                    FilterParams;                                      // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUIDisplayFilteredModsCommand.SetDisplayStringKey
struct UModioUIDisplayFilteredModsCommand_SetDisplayStringKey_Params
{
public:
	class FName                                  InDisplayStringKey;                                // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.UnsubscribeHandler
struct UModioUISubsystem_UnsubscribeHandler_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioModID                           ID;                                                // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.UninstallHandler
struct UModioUISubsystem_UninstallHandler_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioModID                           ID;                                                // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.SubscriptionHandler
struct UModioUISubsystem_SubscriptionHandler_Params
{
public:
	struct FModioErrorCode                       ErrorCode;                                         // 0x0(0x8)(Parm, NativeAccessSpecifierPublic)
	struct FModioModID                           ID;                                                // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.SetModRatingStateDataProvider
struct UModioUISubsystem_SetModRatingStateDataProvider_Params
{
public:
	TScriptInterface<class IModRatingStateProvider> InModRatingStateProvider;                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.SetModEnabledStateDataProvider
struct UModioUISubsystem_SetModEnabledStateDataProvider_Params
{
public:
	TScriptInterface<class IModioUIModEnabledStateProvider> InModEnabledStateDataProvider;                     // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestWalletBalanceRefreshWithHandler
struct UModioUISubsystem_RequestWalletBalanceRefreshWithHandler_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestSubscriptionForModIDWithHandler
struct UModioUISubsystem_RequestSubscriptionForModIDWithHandler_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeDependencies;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Callback;                                          // 0xC(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestSubscriptionForModID
struct UModioUISubsystem_RequestSubscriptionForModID_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeDependencies;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3961[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestShowTokenPurchaseUIWithHandler
struct UModioUISubsystem_RequestShowTokenPurchaseUIWithHandler_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioOpenStoreResult             ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3969[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestShowTokenPurchaseUI
struct UModioUISubsystem_RequestShowTokenPurchaseUI_Params
{
public:
	enum class EModioOpenStoreResult             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestShowDialog
struct UModioUISubsystem_RequestShowDialog_Params
{
public:
	enum class EModioUIDialogType                DialogType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3976[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestRemoveSubscriptionForModIDWithHandler
struct UModioUISubsystem_RequestRemoveSubscriptionForModIDWithHandler_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           DedicatedCallback;                                 // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestRemoveSubscriptionForModID
struct UModioUISubsystem_RequestRemoveSubscriptionForModID_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestPurchaseTokenPack
struct UModioUISubsystem_RequestPurchaseTokenPack_Params
{
public:
	struct FModioTokenPackID                     TokenPackID;                                       // 0x0(0x10)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3986[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestPurchaseForModIDWithHandler
struct UModioUISubsystem_RequestPurchaseForModIDWithHandler_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioUnsigned64                      ExpectedPrice;                                     // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestModInfoForModIDs
struct UModioUISubsystem_RequestModInfoForModIDs_Params
{
public:
	TArray<struct FModioModID>                   IDs;                                               // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestModEnabledStateChange
struct UModioUISubsystem_RequestModEnabledStateChange_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewEnabledState;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3991[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestLogoDownloadForModID
struct UModioUISubsystem_RequestLogoDownloadForModID_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioLogoSize                    LogoSize;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3998[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestListAllMods
struct UModioUISubsystem_RequestListAllMods_Params
{
public:
	struct FModioFilterParams                    Params;                                            // 0x0(0xB8)(Parm, NativeAccessSpecifierPublic)
	class FString                                RequestIdentifier;                                 // 0xB8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestGalleryImageDownloadForModID
struct UModioUISubsystem_RequestGalleryImageDownloadForModID_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModioGallerySize                 ImageSize;                                         // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModioUICore.ModioUISubsystem.RequestEmailAuthenticationWithHandler
struct UModioUISubsystem_RequestEmailAuthenticationWithHandler_Params
{
public:
	struct FModioEmailAuthCode                   Code;                                              // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.QueryIsModEnabled
struct UModioUISubsystem_QueryIsModEnabled_Params
{
public:
	struct FModioModID                           ID;                                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39AD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISubsystem.QueryConnectivityState
struct UModioUISubsystem_QueryConnectivityState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModioUICore.ModioUISubsystem.OnModEnabledChanged
struct UModioUISubsystem_OnModEnabledChanged_Params
{
public:
	int64                                        RawModID;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewEnabledState;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ModioUICore.ModioUISubsystem.NotifyConnectivityChange
struct UModioUISubsystem_NotifyConnectivityChange_Params
{
public:
	bool                                         bNewConnectivityState;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ModioUICore.ModioUISubsystem.IsUGCFeatureEnabled
struct UModioUISubsystem_IsUGCFeatureEnabled_Params
{
public:
	enum class EModioUIFeatureFlags              Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModioUICore.ModioUISubsystem.GetCurrentDPIScaleValue
struct UModioUISubsystem_GetCurrentDPIScaleValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModioUICore.ModioUISubsystem.EnableModManagement
struct UModioUISubsystem_EnableModManagement_Params
{
public:
	struct FModioErrorCode                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


