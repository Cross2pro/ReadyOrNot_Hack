#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioActivatableWidget
class IModioActivatableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioActivatableWidget* GetDefaultObj();

	void RemoveActivationChangedHandler(FDelegateProperty_& Handler);
	void Deactivate();
	void AddActivationChangedHandler(FDelegateProperty_& Handler);
	void Activate();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioEnumEntryUIDetails
class IModioEnumEntryUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioEnumEntryUIDetails* GetDefaultObj();

	void GetEnumEntryDetails(uint8* EnumValue, class FText* EnumValueDisplayText);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioFocusableWidget
class IModioFocusableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioFocusableWidget* GetDefaultObj();

	void RemoveFocusPathChangedHandler(FDelegateProperty_& Handler);
	class UWidget* GetWidgetToFocus(enum class EUINavigation NavigationType);
	void AddFocusPathChangedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioGalleryImageUIDetails
class IModioGalleryImageUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioGalleryImageUIDetails* GetDefaultObj();

	int32 GetIndex();
	struct FModioImageWrapper GetImage();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioModDependencyUIDetails
class IModioModDependencyUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioModDependencyUIDetails* GetDefaultObj();

	struct FModioModID GetModID();
	struct FModioModDependency GetModDependency();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioModFilterUIDetails
class IModioModFilterUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioModFilterUIDetails* GetDefaultObj();

	struct FModioFilterParams GetFilterParams();
	bool GetFilterName(class FText& Name);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioModInfoUIDetails
class IModioModInfoUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioModInfoUIDetails* GetDefaultObj();

	struct FModioModID GetModID();
	struct FModioModInfo GetFullModInfo();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioModTagUIDetails
class IModioModTagUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioModTagUIDetails* GetDefaultObj();

	void SetSelectionState(bool bNewSelectionState);
	bool GetSelectionState();
	class FString GetRawStringValue();
	class FText GetLocalizedText();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioModTagCategoryUIDetails
class IModioModTagCategoryUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioModTagCategoryUIDetails* GetDefaultObj();

	TArray<class FString> GetSelectedTags();
	class FString GetRawCategoryName();
	class FText GetLocalizedCategoryName();
	bool GetIsCategoryLocked();
	bool GetIsCategoryHidden();
	TArray<TScriptInterface<class IModioModTagUIDetails>> GetCategoryTags();
	bool GetAllowMultipleSelection();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioModTagOptionsUIDetails
class IModioModTagOptionsUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioModTagOptionsUIDetails* GetDefaultObj();

	TArray<class FString> GetSelectedTags();
	TArray<TScriptInterface<class IModioModTagCategoryUIDetails>> GetCategories();
	void ClearSelectedTags();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioScrollableWidget
class IModioScrollableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioScrollableWidget* GetDefaultObj();

	void SetScrollOffset(float Offset);
	void ScrollToTop();
	void ScrollToBottom();
	float GetScrollOffset();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioToggleableWidget
class IModioToggleableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioToggleableWidget* GetDefaultObj();

	void RemoveToggleStateChangedHandler(FDelegateProperty_& Handler);
	void Open(bool bForce, bool bFocusMenu);
	bool IsOpen();
	void Close();
	void AddToggleStateChangedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIClickableWidget
class IModioUIClickableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIClickableWidget* GetDefaultObj();

	void RemoveClickedHandler(FDelegateProperty_& Handler);
	void EnableClick();
	void DisableClick();
	void AddClickedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIBoundActionWidget
class IModioUIBoundActionWidget : public IModioUIClickableWidget
{
public:

	static class UClass* StaticClass();
	static class IModioUIBoundActionWidget* GetDefaultObj();

	bool TryGetBoundAction(struct FDataTableRowHandle* InputActionRow);
	void SetBoundAction(struct FDataTableRowHandle& InputActionRow);
	void RemoveActionProgressHandler(FDelegateProperty_& Handler);
	void RemoveActionCompletedHandler(FDelegateProperty_& Handler);
	void ClearBoundAction();
	void AddActionProgressHandler(FDelegateProperty_& Handler);
	void AddActionCompletedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUICommandMenu
class IModioUICommandMenu : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUICommandMenu* GetDefaultObj();

	void RemoveCommandListBuilder(FDelegateProperty_& Builder);
	void RebuildCommandList();
	void AddCommandListBuilder(FDelegateProperty_& Builder);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUICommandObject
class IModioUICommandObject : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUICommandObject* GetDefaultObj();

	void SetDataSource(class UObject* InDataSource);
	class FText GetCommandDisplayString();
	struct FSlateBrush GetCommandBrush();
	void Execute(class UObject* Context);
	bool CanExecute(class UObject* Context);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUICommandLibrary
class UModioUICommandLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUICommandLibrary* GetDefaultObj();

	class FText GetCommandText(const class FString& CommandID, class FName& TextName, bool* bResolved);
	struct FSlateBrush GetCommandBrush(const class FString& CommandID, class FName& BrushName, bool* bResolved);
	struct FModioUICommandAssetEntry GetCommandAssetEntry(const class FString& CommandID, bool* bResolved);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUICommonButtonWidget
class IModioUICommonButtonWidget : public IModioUIBoundActionWidget
{
public:

	static class UClass* StaticClass();
	static class IModioUICommonButtonWidget* GetDefaultObj();

	void ConfigureCommonButton(const struct FModioCommonButtonParams& Params);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIConnectivityChangedReceiver
class IModioUIConnectivityChangedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIConnectivityChangedReceiver* GetDefaultObj();

	void OnConnectivityChanged(bool bNewConnectivityState);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIConnectivityChangedReceiverLibrary
class UModioUIConnectivityChangedReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIConnectivityChangedReceiverLibrary* GetDefaultObj();

	void RegisterConnectivityChangedReceiver(class UObject* ObjectToRegister);
	void DeregisterConnectivityChangedReceiver(class UObject* ObjectToDeregister);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIDataSourceWidget
class IModioUIDataSourceWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIDataSourceWidget* GetDefaultObj();

	void SetDataSource(class UObject* InDataSource);
	class UObject* GetDataSource();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIDialog
class IModioUIDialog : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIDialog* GetDefaultObj();

	void ShowModal(bool bFocusCancelButton);
	void RemoveDialogShownHandler(FDelegateProperty_& Handler);
	void RemoveDialogConfirmedHandler(FDelegateProperty_& Handler);
	void RemoveDialogCanceledHandler(FDelegateProperty_& Handler);
	void RemoveDialogButtonClickedHandler(FDelegateProperty_& Handler);
	void CloseModal();
	void AddDialogShownHandler(FDelegateProperty_& Handler);
	void AddDialogConfirmedHandler(FDelegateProperty_& Handler);
	void AddDialogCanceledHandler(FDelegateProperty_& Handler);
	void AddDialogButtonClickedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIDialogDisplayEventReceiver
class IModioUIDialogDisplayEventReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIDialogDisplayEventReceiver* GetDefaultObj();

	void OnDialogDisplayEvent(enum class EModioUIDialogType DialogRequested, class UObject* DataSource);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIDialogDisplayEventReceiverLibrary
class UModioUIDialogDisplayEventReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIDialogDisplayEventReceiverLibrary* GetDefaultObj();

	void RegisterDialogDisplayEventReceiver(class UObject* ObjectToRegister);
	void DeregisterDialogDisplayEventReceiver(class UObject* ObjectToDeregister);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIEntitlementRefreshEventReceiver
class IModioUIEntitlementRefreshEventReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIEntitlementRefreshEventReceiver* GetDefaultObj();

	void OnEntitlementRefreshEvent();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIEntitlementRefreshEventReceiverLibrary
class UModioUIEntitlementRefreshEventReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIEntitlementRefreshEventReceiverLibrary* GetDefaultObj();

	void RegisterEntitlementRefreshEventReceiver(class UObject* ObjectToRegister);
	void DeregisterEntitlementRefreshEventReceiver(class UObject* ObjectToDeregister);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIHasConfigurableColor
class IModioUIHasConfigurableColor : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIHasConfigurableColor* GetDefaultObj();

	void ConfigureWidgetColorDirectly(class FName ColorName, const struct FSlateColor& ColorValue);
	void ConfigureWidgetColor(class FName ColorName, const struct FLinearColorRef& ColorValue);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIHasLoadStateWidget
class IModioUIHasLoadStateWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIHasLoadStateWidget* GetDefaultObj();

	void SetLoadState(enum class EModioUILoadState NewState);
	void RemoveLoadStateChangedHandler(FDelegateProperty_& Handler);
	enum class EModioUILoadState GetLoadState();
	void AddLoadStateChangedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIHasTextWidget
class IModioUIHasTextWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIHasTextWidget* GetDefaultObj();

	void SetWidgetTextFont(const struct FSlateFontInfo& FontInfo);
	void SetWidgetText(class FText& DisplayText);
	struct FSlateFontInfo GetWidgetTextFont();
	class FText GetWidgetText();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIHasTooltipWidget
class IModioUIHasTooltipWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIHasTooltipWidget* GetDefaultObj();

	void SetTooltipEnabledState(bool bNewEnabledState);
	void ConfigureTooltip(class FText& TitleText, class FText& InfoText, class FText& TagText);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIHoverableWidget
class IModioUIHoverableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIHoverableWidget* GetDefaultObj();

	void RemoveHoverStateChangedHandler(FDelegateProperty_& Handler);
	void EnableHoverEvents();
	void DisableHoverEvents();
	void AddHoverStateChangedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIImageDisplayWidget
class IModioUIImageDisplayWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIImageDisplayWidget* GetDefaultObj();

	void SetDesiredBrushSize(const struct FVector2D& DesiredSize);
	void SetBrushMatchTextureSize(bool bMatchTextureSize);
	void SetBrushDirectly(struct FSlateBrush& NewBrush);
	void RemoveImageLoadEventHandler(FDelegateProperty_& Handler);
	void BeginLoadImageFromFile(const struct FModioImageWrapper& Image);
	void AddImageLoadEventHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIMediaDownloadCompletedReceiver
class IModioUIMediaDownloadCompletedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIMediaDownloadCompletedReceiver* GetDefaultObj();

	void OnModLogoDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Image, enum class EModioLogoSize LogoSize);
	void OnModGalleryImageDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& ErrorCode, int32 ImageIndex, const struct FModioOptionalImage& Image);
	void OnModCreatorAvatarDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Image);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIMediaDownloadCompletedReceiverLibrary
class UModioUIMediaDownloadCompletedReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIMediaDownloadCompletedReceiverLibrary* GetDefaultObj();

	void RegisterMediaDownloadCompletedReceiver(class UObject* ObjectToRegister, enum class EModioUIMediaDownloadEventType DownloadTypes);
	void DeregisterMediaDownloadCompletedReceiver(class UObject* ObjectToDeregister, enum class EModioUIMediaDownloadEventType DownloadTypes);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModEnabledStateChangedReceiver
class IModioUIModEnabledStateChangedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModEnabledStateChangedReceiver* GetDefaultObj();

	void OnModEnabledStateChanged(const struct FModioModID& ModId, bool bNewEnabledState);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModEnabledStateChangedReceiverLibrary
class UModioUIModEnabledStateChangedReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIModEnabledStateChangedReceiverLibrary* GetDefaultObj();

	void RegisterModEnabledStateChangedReceiver(class UObject* ObjectToRegister);
	void DeregisterModEnabledStateChangedReceiver(class UObject* ObjectToDeregister);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModEnabledStateProvider
class IModioUIModEnabledStateProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModEnabledStateProvider* GetDefaultObj();

	bool RequestModEnabledStateChange(const struct FModioModID& ID, bool bNewEnabledState);
	void RemoveModEnabledStateChangeHandler(FDelegateProperty_& Handler);
	bool QueryIsModEnabled(const struct FModioModID& ModId);
	void AddModEnabledStateChangeHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModInfoReceiver
class IModioUIModInfoReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModInfoReceiver* GetDefaultObj();

	void OnModInfoRequestCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModInfo& Info);
	void OnListAllModsRequestCompleted(const class FString& RequestIdentifier, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModInfoList& List);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModInfoReceiverLibrary
class UModioUIModInfoReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIModInfoReceiverLibrary* GetDefaultObj();

	void RegisterModInfoReceiver(class UObject* ObjectToRegister, enum class EModioUIModInfoEventType EventType);
	void DeregisterModInfoReceiver(class UObject* ObjectToDeregister, enum class EModioUIModInfoEventType EventType);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModListViewInterface
class IModioUIModListViewInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModListViewInterface* GetDefaultObj();

	void SetModsFromModInfoList(struct FModioModInfoList& InList, bool bAddToExisting);
	void SetModsFromModInfoArray(TArray<struct FModioModInfo>& InArray, bool bAddToExisting);
	void SetModsFromModCollectionEntryArray(TArray<struct FModioModCollectionEntry>& InArray, bool bAddToExisting);
	void SetModSelectionByID(const struct FModioModID& ModId);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModManagementEventReceiver
class IModioUIModManagementEventReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModManagementEventReceiver* GetDefaultObj();

	void OnModManagementEvent(const struct FModioModManagementEvent& Event);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioModManagementEventReceiverLibrary
class UModioModManagementEventReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioModManagementEventReceiverLibrary* GetDefaultObj();

	void RegisterModManagementEventReceiver(class UObject* ObjectToRegister);
	void DeregisterModManagementEventReceiver(class UObject* ObjectToDeregister);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIModTagSelector
class IModioUIModTagSelector : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIModTagSelector* GetDefaultObj();

	void SetAvailableTagsFromModTagOptions(struct FModioModTagOptions& InOptions);
	void SetAvailableTagsFromBoundModTagOptions(TScriptInterface<class IModioModTagOptionsUIDetails>& InOptions);
	void RemoveTagSelectionChangedHandler(FDelegateProperty_& Handler);
	TArray<class FString> GetSelectedTags();
	bool GetAllowLockedTags();
	bool GetAllowHiddenTags();
	void ClearSelectedTags();
	void AddTagSelectionChangedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIObjectListWidget
class IModioUIObjectListWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIObjectListWidget* GetDefaultObj();

	void SetObjects(TArray<class UObject*>& InObjects);
	void RemoveObjectWidgetCreatedHandler(FDelegateProperty_& Handler);
	TArray<class UObject*> GetObjects();
	class UObject* GetObjectAt(int32 Index);
	class UWidget* GetFirstEntryWidget();
	void AddObjectWidgetCreatedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIObjectSelector
class IModioUIObjectSelector : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIObjectSelector* GetDefaultObj();

	void SetValues(TArray<class UObject*>& InValues);
	void SetSingleSelectionByValue(class UObject* Value, bool bEmitSelectionEvent);
	void SetSingleSelectionByIndex(int32 Index, bool bEmitSelectionEvent);
	void SetSelectedStateForValue(class UObject* Value, bool bNewSelectionState, bool bEmitSelectionEvent);
	void SetSelectedStateForIndex(int32 Index, bool bNewSelectionState, bool bEmitSelectionEvent);
	void SetMultiSelectionAllowed(bool bMultiSelectionAllowed);
	void SetListEntryWidgetClass(TSubclassOf<class UWidget> InNewEntryClass);
	void RemoveSelectionChangedHandler(FDelegateProperty_& Handler);
	class UUserWidget* GetWidgetForValue(class UObject* Value);
	int32 GetSingleSelectionIndex();
	class UObject* GetSingleSelectedValue();
	TArray<class UObject*> GetSelectedValues();
	int32 GetNumEntries();
	bool GetMultiSelectionAllowed();
	int32 GetLastSelectionIndex();
	int32 GetIndexForValue(class UObject* Value);
	void ClearSelectedValues();
	void AddSelectionChangedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIProgressWidget
class IModioUIProgressWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIProgressWidget* GetDefaultObj();

	void SetProgress(float NewProgressValue);
	void SetMarquee(bool bNewIsMarquee);
	void SetColorOverride(const struct FLinearColor& Override);
	void RemoveValueChangedHandler(FDelegateProperty_& Handler);
	float GetProgress();
	void ClearColorOverride();
	void AddValueChangedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUISelectableWidget
class IModioUISelectableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUISelectableWidget* GetDefaultObj();

	void ToggleSelectedState();
	void SetToggleable(bool bNewToggleableState);
	void SetSelectedState(bool bNewSelectedState);
	void SetSelectable(bool bNewSelectableState);
	void RemoveSelectedStateChangedHandler(FDelegateProperty_& Handler);
	void GetToggleable(bool* bIsToggleable);
	void GetSelectedState(bool* bCurrentSelectedState);
	void GetSelectable(bool* bIsSelectable);
	void AddSelectedStateChangedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIStringInputWidget
class IModioUIStringInputWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIStringInputWidget* GetDefaultObj();

	void SetInput(const class FString& Input);
	void SetHint(class FText& HintText);
	void RemoveTextCommittedHandler(FDelegateProperty_& Handler);
	void RemoveTextChangedHandler(FDelegateProperty_& Handler);
	class FString GatherInput();
	void AddTextCommittedHandler(FDelegateProperty_& Handler);
	void AddTextChangedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUISubscriptionsChangedReceiver
class IModioUISubscriptionsChangedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUISubscriptionsChangedReceiver* GetDefaultObj();

	void OnSubscriptionsChanged(const struct FModioModID& ModId, bool bNewSubscriptionState);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUISubscriptionsChangedReceiverLibrary
class UModioUISubscriptionsChangedReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUISubscriptionsChangedReceiverLibrary* GetDefaultObj();

	void RegisterSubscriptionsChangedReceiver(class UObject* ObjectToRegister);
	void DeregisterSubscriptionsChangedReceiver(class UObject* ObjectToDeregister);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUISupportsCustomNavigation
class IModioUISupportsCustomNavigation : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUISupportsCustomNavigation* GetDefaultObj();

	void SetNavigationDelegate(uint8 Context, FDelegateProperty_& ContentNavigationDelegate);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUITextValidator
class IModioUITextValidator : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUITextValidator* GetDefaultObj();

	bool ValidateText(class FText& InputText, class FText* ValidationMessageText);
	void SetValidationError(class FText& ErrorText);
	void RemoveTextValidationCompletedHandler(FDelegateProperty_& Handler);
	void GetTextValidationRules(TArray<struct FModioTextValidationRule>* Rules);
	void AddTextValidationCompletedHandler(FDelegateProperty_& Handler);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIInputValidationLibrary
class UModioUIInputValidationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIInputValidationLibrary* GetDefaultObj();

	bool ValidateUsingRule(struct FModioTextValidationRule& Rule, class FText& TextToValidate, class FText* ValidationMessageText);
	bool ValidateNoWhitespace(class FText& TextToValidate);
	bool ValidateNotEmpty(class FText& TextToValidate);
	bool ValidateNotBlank(class FText& TextToValidate);
	bool ValidateLength(class FText& TextToValidate, int32 DesiredMaximumLength, int32 DesiredMinimumLength);
	bool ValidateEmailAddress(class FText& TextToValidate);
	bool ValidateAlphanumeric(class FText& TextToValidate);
	bool ValidateAllNumeric(class FText& TextToValidate);
	bool ValidateAllLetters(class FText& TextToValidate);
	bool DefaultValidateText(TScriptInterface<class IModioUITextValidator> TargetObject, class FText& InputText, class FText* ValidationMessageText);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUITokenPackListInterface
class IModioUITokenPackListInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUITokenPackListInterface* GetDefaultObj();

	void SetTokenPacksFromTokenPackList(struct FModioTokenPackList& InList, bool bAddToExisting);
	void SetTokenPacksFromTokenPackArray(TArray<struct FModioTokenPack>& InArray, bool bAddToExisting);
	void SetTokenPackSelectionByID(const struct FModioTokenPackID& TokenPackID);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUITokenPackReceiver
class IModioUITokenPackReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUITokenPackReceiver* GetDefaultObj();

	void OnTokenPackRequestCompleted(const struct FModioTokenPackID& TokenPackID, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalTokenPack& Info);
	void OnListAllTokenPacksRequestCompleted(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalTokenPackList& List);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUITokenPackReceiverLibrary
class UModioUITokenPackReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUITokenPackReceiverLibrary* GetDefaultObj();

	void RegisterTokenPackReceiver(class UObject* ObjectToRegister, enum class EModioUITokenPackEventType EventType);
	void DeregisterTokenPackReceiver(class UObject* ObjectToDeregister, enum class EModioUITokenPackEventType EventType);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver
class IModioUIUserAvatarDownloadCompletedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIUserAvatarDownloadCompletedReceiver* GetDefaultObj();

	void OnUserAvatarDownloadCompleted(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Image);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIUserAvatarDownloadCompletedReceiverLibrary
class UModioUIUserAvatarDownloadCompletedReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIUserAvatarDownloadCompletedReceiverLibrary* GetDefaultObj();

	void RegisterUserAvatarDownloadCompletedReceiver(class UObject* ObjectToRegister);
	void DeregisterUserAvatarDownloadCompletedReceiver(class UObject* ObjectToDeregister);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIUserChangedReceiver
class IModioUIUserChangedReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIUserChangedReceiver* GetDefaultObj();

	void OnUserChanged(const struct FModioOptionalUser& NewUser);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIUserChangedReceiverLibrary
class UModioUIUserChangedReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIUserChangedReceiverLibrary* GetDefaultObj();

	void RegisterUserChangedReceiver(class UObject* ObjectToRegister);
	void DeregisterUserChangedReceiver(class UObject* ObjectToDeregister);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIWalletBalanceUpdatedEventReceiver
class IModioUIWalletBalanceUpdatedEventReceiver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUIWalletBalanceUpdatedEventReceiver* GetDefaultObj();

	void OnWalletBalanceUpdated(const struct FModioUnsigned64& WalletBalance);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIWalletBalanceUpdatedEventReceiverLibrary
class UModioUIWalletBalanceUpdatedEventReceiverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUIWalletBalanceUpdatedEventReceiverLibrary* GetDefaultObj();

	void RegisterWalletBalanceUpdatedEventReceiver(class UObject* ObjectToRegister);
	void DeregisterWalletBalanceUpdatedEventReceiver(class UObject* ObjectToDeregister);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUserUIDetails
class IModioUserUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioUserUIDetails* GetDefaultObj();

	struct FModioUserID GetUserID();
	struct FModioUser GetFullUser();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModRatingStateProvider
class IModRatingStateProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModRatingStateProvider* GetDefaultObj();

	bool RequestModRatingChange(int64 ID, enum class EModioRating NewRating);
	enum class EModioRating QueryModRating(int64 ModId);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.LinearColorRefLibrary
class ULinearColorRefLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULinearColorRefLibrary* GetDefaultObj();

	struct FLinearColor ResolveOverrideAsExec(struct FLinearColorRefOverride& Target, bool* bOverrideSet);
	struct FLinearColor ResolveOverride(struct FLinearColorRefOverride& Target, bool* bOverrideSet);
	struct FLinearColor Resolve(struct FLinearColorRef& Target, bool* bResolved);
	void RemoveColorChangeHandler(FDelegateProperty_& Handler);
	TArray<class FName> GetValidColorKeys();
	void AddColorChangeHandler(FDelegateProperty_& Handler);
};

// 0xC0 (0x1670 - 0x15B0)
// Class ModioUICore.ModioButtonWidget
class UModioButtonWidget : public UCommonButtonBase
{
public:
	uint8                                        Pad_25EA[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x15E8(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	class UObject*                               DataSource;                                        // 0x15F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFocusOnHover;                                     // 0x1600(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_25EB[0x37];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnModioFocusPathChanged;                           // 0x1638(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x1648(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnHoverStateChanged;                               // 0x1658(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_25ED[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioButtonWidget* GetDefaultObj();

};

// 0x60 (0x470 - 0x410)
// Class ModioUICore.ModioUIComponentBase
class UModioUIComponentBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_25F1[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x448(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnModioActivationChanged;                          // 0x450(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnModioFocusPathChanged;                           // 0x460(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIComponentBase* GetDefaultObj();

};

// 0x28 (0x498 - 0x470)
// Class ModioUICore.ModioCommandEntry
class UModioCommandEntry : public UModioUIComponentBase
{
public:
	uint8                                        Pad_2646[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioCommandEntry* GetDefaultObj();

	void HandleInnerButtonClicked(class UObject* ClickContext);
	TScriptInterface<class IModioUIHasTextWidget> GetLabelWidget();
	TScriptInterface<class IModioUIImageDisplayWidget> GetIconWidget();
	TScriptInterface<class IModioUIClickableWidget> GetClickableWidget();
};

// 0x28 (0x498 - 0x470)
// Class ModioUICore.ModioCommandMenu
class UModioCommandMenu : public UModioUIComponentBase
{
public:
	uint8                                        Pad_26A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       CommandObjects;                                    // 0x478(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_26B6[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioCommandMenu* GetDefaultObj();

	void OnCommandSelected(class UObject* SelectedCommandObject);
	TScriptInterface<class IModioUIObjectSelector> GetSelectorWidget();
};

// 0x0 (0x470 - 0x470)
// Class ModioUICore.ModioUserDisplay
class UModioUserDisplay : public UModioUIComponentBase
{
public:

	static class UClass* StaticClass();
	static class UModioUserDisplay* GetDefaultObj();

};

// 0x2C0 (0x730 - 0x470)
// Class ModioUICore.ModioCurrentUserAvatarWidget
class UModioCurrentUserAvatarWidget : public UModioUserDisplay
{
public:
	uint8                                        Pad_26CE[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           UnloadedBrush;                                     // 0x4A0(0xD0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           ErroredBrush;                                      // 0x570(0xD0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           LoadingBrush;                                      // 0x640(0xD0)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_26D3[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioCurrentUserAvatarWidget* GetDefaultObj();

	TScriptInterface<class IModioUIImageDisplayWidget> GetAvatarImageWidget();
};

// 0x8 (0x340 - 0x338)
// Class ModioUICore.ModioDefaultBorder
class UModioDefaultBorder : public UBorder
{
public:
	uint8                                        Pad_26E2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultBorder* GetDefaultObj();

};

// 0xB0 (0xD60 - 0xCB0)
// Class ModioUICore.ModioDefaultCheckBox
class UModioDefaultCheckBox : public UCheckBox
{
public:
	uint8                                        Pad_2754[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ContentPadding;                                    // 0xCC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2756[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWidget>                   LabelClass;                                        // 0xD38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               LabelWidget;                                       // 0xD40(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  LabelText;                                         // 0xD48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioDefaultCheckBox* GetDefaultObj();

	void SetLabel(class FText& InLabelText);
	void SetHovered(bool bHovered);
	void HandleOnCheckStateChanged(bool bIsChecked);
	class FText GetLabelTextBlockText();
	class FText GetLabel();
	struct FMargin GetCheckboxContentPadding();
};

// 0x680 (0x800 - 0x180)
// Class ModioUICore.ModioDefaultCodeInputTextBox
class UModioDefaultCodeInputTextBox : public UWidget
{
public:
	uint8                                        Pad_278E[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioDefaultCodeInputTextBoxStyle    CodeInputStyle;                                    // 0x1A0(0x5F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ETextFlowDirection                TextFlowDirection;                                 // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x791(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x792(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x793(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnModioTextCommitted;                              // 0x798(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnModioTextChanged;                                // 0x7A8(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        NumberOfCharacters;                                // 0x7B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CC[0x1C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCodeSubmitDynamic;                               // 0x7D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CD[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultCodeInputTextBox* GetDefaultObj();

	void OnCodeSubmitDynamic__DelegateSignature();
	TScriptInterface<class IModioUIHasTextWidget> GetValidationErrorWidget();
};

// 0x50 (0x10F0 - 0x10A0)
// Class ModioUICore.ModioDefaultEditableTextBox
class UModioDefaultEditableTextBox : public UEditableTextBox
{
public:
	uint8                                        Pad_27E0[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnModioTextCommitted;                              // 0x10C0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnModioTextChanged;                                // 0x10D0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnModioFocusPathChanged;                           // 0x10E0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioDefaultEditableTextBox* GetDefaultObj();

};

// 0x20 (0x1690 - 0x1670)
// Class ModioUICore.ModioDefaultTextButton
class UModioDefaultTextButton : public UModioButtonWidget
{
public:
	uint8                                        Pad_2800[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LabelText;                                         // 0x1678(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioDefaultTextButton* GetDefaultObj();

	TScriptInterface<class IModioUIHasTextWidget> GetLabelWidget();
};

// 0x30 (0x16C0 - 0x1690)
// Class ModioUICore.ModioDefaultIconButton
class UModioDefaultIconButton : public UModioDefaultTextButton
{
public:
	uint8                                        Pad_2812[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLoadStateChanged;                                // 0x16B0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioDefaultIconButton* GetDefaultObj();

	TScriptInterface<class IModioUIImageDisplayWidget> GetImageWidget();
};

// 0x30 (0x310 - 0x2E0)
// Class ModioUICore.ModioDefaultImage
class UModioDefaultImage : public UImage
{
public:
	uint8                                        Pad_2817[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultImage* GetDefaultObj();

};

// 0x30 (0x4A0 - 0x470)
// Class ModioUICore.ModioDefaultModalDialogImpl
class UModioDefaultModalDialogImpl : public UModioUIComponentBase
{
public:
	uint8                                        Pad_282B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDialogButtonClicked;                             // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected)
	bool                                         bUseGeneratedButtonContent;                        // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_282E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModioDialogButtonInfo>        DialogButtonData;                                  // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioDefaultModalDialogImpl* GetDefaultObj();

};

// 0x70 (0xCE0 - 0xC70)
// Class ModioUICore.ModioDefaultModListView
class UModioDefaultModListView : public UListView
{
public:
	uint8                                        Pad_2837[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectedValueChanged;                            // 0xCA8(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2838[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultModListView* GetDefaultObj();

};

// 0x68 (0x4D8 - 0x470)
// Class ModioUICore.ModioDefaultModTile
class UModioDefaultModTile : public UModioUIComponentBase
{
public:
	uint8                                        Pad_289A[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x498(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bSelected;                                         // 0x4A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_289C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x4B0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_28A0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHoverStateChanged;                               // 0x4C8(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioDefaultModTile* GetDefaultObj();

	void PopulateExtraOptionsCommands(TArray<class UObject*>* Commands, class UObject* Context);
	void NotifyHoverStateChanged(bool bNewHoveredState);
	void NotifyClicked();
	bool GetSelectedStateEx();
	TScriptInterface<class IModioUICommandMenu> GetMoreOptionsMenuWidget();
};

// 0x60 (0xD00 - 0xCA0)
// Class ModioUICore.ModioDefaultModTileView
class UModioDefaultModTileView : public UTileView
{
public:
	uint8                                        Pad_28CE[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectedValueChanged;                            // 0xCD0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_28D0[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultModTileView* GetDefaultObj();

};

// 0x40 (0x10E0 - 0x10A0)
// Class ModioUICore.ModioDefaultMultiLineEditableTextBox
class UModioDefaultMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
public:
	uint8                                        Pad_28D2[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x10B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         SelectAllTextWhenFocused;                          // 0x10B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RevertTextOnEscape;                                // 0x10B2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x10B3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         SelectAllTextOnCommit;                             // 0x10B4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         AlwaysShowScrollbars;                              // 0x10B5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         AllowMultiLine;                                    // 0x10B6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x10B7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x10B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_28E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnModioTextCommitted;                              // 0x10C0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnModioTextChanged;                                // 0x10D0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioDefaultMultiLineEditableTextBox* GetDefaultObj();

};

// 0x70 (0xCE0 - 0xC70)
// Class ModioUICore.ModioDefaultObjectSelector
class UModioDefaultObjectSelector : public UListView
{
public:
	uint8                                        Pad_2920[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWidget>                   MultipleSelectionListItemClass;                    // 0xC98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSelectedValueChanged;                            // 0xCA0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2921[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnWidgetCreated;                                   // 0xCC8(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2922[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultObjectSelector* GetDefaultObj();

	void OnEntryWidgetClicked(class UObject* Widget);
	class UUserWidget* GetEntryWidgetFromItem(class UObject* Item);
};

// 0x30 (0x4A0 - 0x470)
// Class ModioUICore.ModioDefaultProgressBar
class UModioDefaultProgressBar : public UProgressBar
{
public:
	uint8                                        Pad_2926[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultProgressBar* GetDefaultObj();

};

// 0x28 (0xD10 - 0xCE8)
// Class ModioUICore.ModioDefaultScrollBox
class UModioDefaultScrollBox : public UScrollBox
{
public:
	bool                                         bScrollByNavigationInput;                          // 0xCE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_295E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NavigationScrollOffsetStep;                        // 0xCEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NavigationScrollOffsetSpeed;                       // 0xCF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_295F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetNavigation*                     UserDefinedNavigation;                             // 0xCF8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2960[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultScrollBox* GetDefaultObj();

	void UpdateNavigationData(int32 PendingScrollOffset);
	void OnUserScrolledHandle(float CurrentOffset);
	class UWidget* HandleCustomBoundaryNavigation(enum class EUINavigation InNavigation);
};

// 0x0 (0x470 - 0x470)
// Class ModioUICore.ModioDefaultTagWidget
class UModioDefaultTagWidget : public UModioUIComponentBase
{
public:

	static class UClass* StaticClass();
	static class UModioDefaultTagWidget* GetDefaultObj();

	TScriptInterface<class IModioUIHasTextWidget> GetLabelWidget();
};

// 0x58 (0x3D0 - 0x378)
// Class ModioUICore.ModioDefaultTextBlock
class UModioDefaultTextBlock : public UTextBlock
{
public:
	uint8                                        Pad_298B[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColorRefOverride               TextColorOverride;                                 // 0x3A8(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_298C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultTextBlock* GetDefaultObj();

};

// 0x68 (0x4D8 - 0x470)
// Class ModioUICore.ModioDefaultTokenPackTile
class UModioDefaultTokenPackTile : public UModioUIComponentBase
{
public:
	uint8                                        Pad_29B7[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x498(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bSelected;                                         // 0x4A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_29C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x4B0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_29C2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHoverStateChanged;                               // 0x4C8(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioDefaultTokenPackTile* GetDefaultObj();

	void NotifyHoverStateChanged(bool bNewHoveredState);
	void NotifyClicked();
	bool GetSelectedStateEx();
};

// 0x60 (0xD00 - 0xCA0)
// Class ModioUICore.ModioDefaultTokenPackTileView
class UModioDefaultTokenPackTileView : public UTileView
{
public:
	uint8                                        Pad_29CC[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectedValueChanged;                            // 0xCC8(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_29CD[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDefaultTokenPackTileView* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioDialogButtonUIDetails
class IModioDialogButtonUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioDialogButtonUIDetails* GetDefaultObj();

	struct FModioDialogButtonInfo GetDialogButtonInfo();
};

// 0xC0 (0xE8 - 0x28)
// Class ModioUICore.ModioModBrowserDialogButtonInfoUI
class UModioModBrowserDialogButtonInfoUI : public UObject
{
public:
	uint8                                        Pad_29EC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioDialogButtonInfo                Underlying;                                        // 0x38(0xB0)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModBrowserDialogButtonInfoUI* GetDefaultObj();

};

// 0x18 (0x200 - 0x1E8)
// Class ModioUICore.ModioDropdownAnchor
class UModioDropdownAnchor : public UMenuAnchor
{
public:
	uint8                                        Pad_29F4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioDropdownAnchor* GetDefaultObj();

	void ModioHandleMenuOpenChanged(bool bIsOpen);
};

// 0x28 (0x50 - 0x28)
// Class ModioUICore.ModioEnumEntryUI
class UModioEnumEntryUI : public UObject
{
public:
	uint8                                        Pad_2AC3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        UnderlyingEnumValue;                               // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UnderlyingEnumValueDisplayText;                    // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioEnumEntryUI* GetDefaultObj();

};

// 0x28 (0x498 - 0x470)
// Class ModioUICore.ModioEnumSelector
class UModioEnumSelector : public UModioUIComponentBase
{
public:
	uint8                                        Pad_2AFC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x478(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       CachedValues;                                      // 0x488(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioEnumSelector* GetDefaultObj();

	void NotifySelectionChanged(class UObject* SelectedObject);
	void InternalSelectionChangedHandler(class UObject* SelectedObject);
	TScriptInterface<class IModioUIObjectSelector> GetSelectorMenuWidget();
	TScriptInterface<class IModioUIClickableWidget> GetMenuToggleClickableWidget();
};

// 0x40 (0x4B0 - 0x470)
// Class ModioUICore.ModioEnumSelectorEntry
class UModioEnumSelectorEntry : public UModioUIComponentBase
{
public:
	uint8                                        Pad_2BDC[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x488(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2BDE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x4A0(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioEnumSelectorEntry* GetDefaultObj();

	void NotifySelectionChanged(bool bNewSelectedState);
	void NotifyClicked();
	void InternalSelectionChangedHandler(class UObject* SelectionContext, bool bNewSelectedState);
	void InternalClickHandler(class UObject* ClickContext);
	TScriptInterface<class IModioUISelectableWidget> GetSelectableWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetLabelWidget();
	TScriptInterface<class IModioUIClickableWidget> GetClickableWidget();
};

// 0x28 (0x498 - 0x470)
// Class ModioUICore.ModioEnumSelectorMenu
class UModioEnumSelectorMenu : public UModioUIComponentBase
{
public:
	uint8                                        Pad_2C72[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x478(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       CachedValues;                                      // 0x488(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioEnumSelectorMenu* GetDefaultObj();

	void NotifySelectionChanged(class UObject* SelectedObject);
	void InternalSelectionChangedHandler(class UObject* SelectedObject);
	TScriptInterface<class IModioUIObjectSelector> GetSelectorWidget();
};

// 0x50 (0x78 - 0x28)
// Class ModioUICore.ModioFeaturedCategoryParamsUI
class UModioFeaturedCategoryParamsUI : public UObject
{
public:
	uint8                                        Pad_2C76[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioFeaturedCategoryParams          Underlying;                                        // 0x30(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioFeaturedCategoryParamsUI* GetDefaultObj();

};

// 0x8 (0x1A0 - 0x198)
// Class ModioUICore.ModioFeatureVisibilityWidget
class UModioFeatureVisibilityWidget : public UContentWidget
{
public:
	enum class EModioUIFeatureFlags              FeatureToCheck;                                    // 0x198(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C79[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioFeatureVisibilityWidget* GetDefaultObj();

};

// 0x10 (0x16A0 - 0x1690)
// Class ModioUICore.ModioFilterCounterButton
class UModioFilterCounterButton : public UModioDefaultTextButton
{
public:
	uint8                                        Pad_2DF9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioFilterCounterButton* GetDefaultObj();

	TScriptInterface<class IModioUIDataSourceWidget> GetFilterCounterWidget();
};

// 0x10 (0x480 - 0x470)
// Class ModioUICore.ModioFilterPanel
class UModioFilterPanel : public UModioUIComponentBase
{
public:
	uint8                                        Pad_2E26[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioFilterPanel* GetDefaultObj();

	TScriptInterface<class IModioUIModTagSelector> GetTagSelectorWidget();
	TArray<class FString> GetSelectedTags();
	TScriptInterface<class IModioUIClickableWidget> GetClearButtonWidget();
	TScriptInterface<class IModioUIClickableWidget> GetBackgroundButtonWidget();
	void ClearSelectedTags();
	void AddTagSelectionChangedHandler(FDelegateProperty_& Handler);
};

// 0xD8 (0x100 - 0x28)
// Class ModioUICore.ModioFilterParamsUI
class UModioFilterParamsUI : public UObject
{
public:
	uint8                                        Pad_2E36[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FilterName;                                        // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FModioFilterParams                    Underlying;                                        // 0x48(0xB8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioFilterParamsUI* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class ModioUICore.ModioGalleryImageUI
class UModioGalleryImageUI : public UObject
{
public:
	uint8                                        Pad_2E40[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioImageWrapper                    UnderlyingImage;                                   // 0x30(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        UnderlyingIndex;                                   // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E41[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioGalleryImageUI* GetDefaultObj();

};

// 0x18 (0x488 - 0x470)
// Class ModioUICore.ModioGalleryListEntry
class UModioGalleryListEntry : public UModioUIComponentBase
{
public:
	uint8                                        Pad_2E4F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioGalleryListEntry* GetDefaultObj();

};

// 0x210 (0x680 - 0x470)
// Class ModioUICore.ModioImageGallery
class UModioImageGallery : public UModioUIComponentBase
{
public:
	uint8                                        Pad_2E78[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModInfo                         BoundModInfo;                                      // 0x490(0x1E8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseLogoOnly;                                      // 0x678(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E7A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioImageGallery* GetDefaultObj();

	void Refresh();
	TScriptInterface<class IModioUIClickableWidget> GetIncrementSelectionButtonWidget();
	TScriptInterface<class IModioUIImageDisplayWidget> GetImageWidget();
	TScriptInterface<class IModioUIObjectSelector> GetImageSelectorWidget();
	TScriptInterface<class IModioUIClickableWidget> GetDecrementSelectionButtonWidget();
};

// 0x70 (0x4E0 - 0x470)
// Class ModioUICore.ModioModBrowser
class UModioModBrowser : public UModioUIComponentBase
{
public:
	uint8                                        Pad_3000[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EModioModBrowserState             CurrentView;                                       // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3002[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StoredSearchString;                                // 0x4C0(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StoredTagData;                                     // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               StoredLibraryTagData;                              // 0x4D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioModBrowser* GetDefaultObj();

	TArray<struct FModioModInfo> SearchSubscriptionsAndInstallsWithStoredParams();
	TArray<struct FModioModInfo> SearchPurchasesWithStoredParams();
	TArray<struct FModioModInfo> SearchLibraryWithStoredParams();
	void InitializeTagData(class UObject* InTagData);
	void InitializeLibraryTagData(class UObject* InTagData);
	void IncrementPresetFilterSelection();
	TScriptInterface<class IModioUIClickableWidget> GetWalletButtonWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetViewDescriptionTextWidget();
	TScriptInterface<class IModioUIImageDisplayWidget> GetViewDescriptionImageWidget();
	TScriptInterface<class IModioUIClickableWidget> GetTabRightButtonWidget();
	TScriptInterface<class IModioUIClickableWidget> GetTabLeftButtonWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetSearchTextWidget();
	TScriptInterface<class IModioUIStringInputWidget> GetSearchEditableTextBoxWidget();
	TScriptInterface<class IModioUIClickableWidget> GetSearchButtonWidget();
	TScriptInterface<class IModioUIObjectSelector> GetPresetFilterSelectorWidget();
	TScriptInterface<class IModioUIModListViewInterface> GetModTileViewWidget();
	TScriptInterface<class IModioUIClickableWidget> GetLibraryViewButtonWidget();
	TScriptInterface<class IModioUIClickableWidget> GetFilterButtonWidget();
	TScriptInterface<class IModioUIClickableWidget> GetCloseBrowserButtonWidget();
	TScriptInterface<class IModioUIClickableWidget> GetClearSearchButtonWidget();
	bool DoFilterParamsIncludeUserId(struct FModioFilterParams& Params);
	void DecrementPresetFilterSelection();
};

// 0x230 (0x258 - 0x28)
// Class ModioUICore.ModioModCollectionEntryUI
class UModioModCollectionEntryUI : public UObject
{
public:
	uint8                                        Pad_3015[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModCollectionEntry              Underlying;                                        // 0x30(0x220)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                         bCachedSubscriptionStatus;                         // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3018[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModCollectionEntryUI* GetDefaultObj();

};

// 0x100 (0x128 - 0x28)
// Class ModioUICore.ModioModDependencyUI
class UModioModDependencyUI : public UObject
{
public:
	uint8                                        Pad_301C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModDependency                   Underlying;                                        // 0x30(0xF8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModDependencyUI* GetDefaultObj();

};

// 0x238 (0x6A8 - 0x470)
// Class ModioUICore.ModioModDetailsDialog
class UModioModDetailsDialog : public UModioUIComponentBase
{
public:
	uint8                                        Pad_30C3[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ExpandLabelText;                                   // 0x4A0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FModioModInfo                         BoundModInfo;                                      // 0x4B8(0x1E8)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                         bHasFullDescription;                               // 0x6A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30D2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModDetailsDialog* GetDefaultObj();

	void PopulateExtraOptionsCommands(TArray<class UObject*>* Commands, class UObject* Context);
	bool IsUserSubscribed();
	bool IsModPurchased();
	TScriptInterface<class IModioUIClickableWidget> GetWalletButtonWidget();
	TScriptInterface<class IModioUIDataSourceWidget> GetTagDisplayWidget();
	TScriptInterface<class IModioUIClickableWidget> GetSubscribeButtonWidget();
	TScriptInterface<class IModioUIClickableWidget> GetRateUpButtonWidget();
	TScriptInterface<class IModioUIClickableWidget> GetRateDownButtonWidget();
	TScriptInterface<class IModioUIClickableWidget> GetPurchaseButtonWidget();
	TScriptInterface<class IModioUICommandMenu> GetMoreOptionsMenuWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetModSummaryShortTextWidget();
	TScriptInterface<class IModioUIDataSourceWidget> GetModStatusWidget();
	TScriptInterface<class IModioUIDataSourceWidget> GetModPropertiesWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetModNameTextWidget();
	TScriptInterface<class IModioUIMediaDownloadCompletedReceiver> GetModImageGalleryWidget();
	TScriptInterface<class IModioUIClickableWidget> GetModDependenciesButtonWidget();
	TScriptInterface<class IModioUIDataSourceWidget> GetModAuthorDisplayWidget();
	TScriptInterface<class IModioUIClickableWidget> GetExpandDescriptionButtonWidget();
	TScriptInterface<class IModioUIClickableWidget> GetCloseDialogButtonWidget();
};

// 0x10 (0x480 - 0x470)
// Class ModioUICore.ModioModEnabledStatusWidget
class UModioModEnabledStatusWidget : public UModioUIComponentBase
{
public:
	uint8                                        Pad_30DC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModEnabledStatusWidget* GetDefaultObj();

};

// 0x10 (0x480 - 0x470)
// Class ModioUICore.ModioModEnabledToggleWidget
class UModioModEnabledToggleWidget : public UModioUIComponentBase
{
public:
	uint8                                        Pad_30E2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModEnabledToggleWidget* GetDefaultObj();

};

// 0x1F0 (0x218 - 0x28)
// Class ModioUICore.ModioModInfoUI
class UModioModInfoUI : public UObject
{
public:
	uint8                                        Pad_3102[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModInfo                         Underlying;                                        // 0x30(0x1E8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModInfoUI* GetDefaultObj();

};

// 0x230 (0x6A0 - 0x470)
// Class ModioUICore.ModioModInstallationStatusWidget
class UModioModInstallationStatusWidget : public UModioUIComponentBase
{
public:
	uint8                                        Pad_311A[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModInfo                         BoundModInfo;                                      // 0x4A0(0x1E8)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnInstallationStatusChanged;                       // 0x688(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	enum class EModioModInstallationStatus       CurrentInstallationStatus;                         // 0x698(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_311B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModInstallationStatusWidget* GetDefaultObj();

	float QueryProgressValueForState(enum class EModioModProgressState ProgressState);
};

// 0x18 (0x40 - 0x28)
// Class ModioUICore.ModioModManagementEventUI
class UModioModManagementEventUI : public UObject
{
public:
	struct FModioModManagementEvent              Underlying;                                        // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModManagementEventUI* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class ModioUICore.ModioModProgressInfoUI
class UModioModProgressInfoUI : public UObject
{
public:
	struct FModioModProgressInfo                 Underlying;                                        // 0x28(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModProgressInfoUI* GetDefaultObj();

};

// 0x0 (0x470 - 0x470)
// Class ModioUICore.ModioModPropCollectionVisualizer
class UModioModPropCollectionVisualizer : public UModioUIComponentBase
{
public:

	static class UClass* StaticClass();
	static class UModioModPropCollectionVisualizer* GetDefaultObj();

	TArray<TScriptInterface<class IModioUIDataSourceWidget>> GetModPropertyVisualizerWidgets();
};

// 0x0 (0x470 - 0x470)
// Class ModioUICore.ModioModRatingDisplay
class UModioModRatingDisplay : public UModioUIComponentBase
{
public:

	static class UClass* StaticClass();
	static class UModioModRatingDisplay* GetDefaultObj();

	TScriptInterface<class IModioUIHasTextWidget> GetRatingPercentageLabelWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetRatingDescriptionLabelWidget();
};

// 0x10 (0x480 - 0x470)
// Class ModioUICore.ModioModSubscriptionStatusWidget
class UModioModSubscriptionStatusWidget : public UModioUIComponentBase
{
public:
	uint8                                        Pad_314D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModSubscriptionStatusWidget* GetDefaultObj();

};

// 0x0 (0x470 - 0x470)
// Class ModioUICore.ModioModTagDisplay
class UModioModTagDisplay : public UModioUIComponentBase
{
public:

	static class UClass* StaticClass();
	static class UModioModTagDisplay* GetDefaultObj();

	TScriptInterface<class IModioUIObjectListWidget> GetTagContainerWidget();
};

// 0x18 (0x488 - 0x470)
// Class ModioUICore.ModioModTagSelector
class UModioModTagSelector : public UModioUIComponentBase
{
public:
	uint8                                        Pad_3175[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IModioModTagOptionsUIDetails> CachedTagOptions;                                  // 0x478(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioModTagSelector* GetDefaultObj();

	TScriptInterface<class IModioUIModTagSelector> GetSelectorMenuWidget();
	TScriptInterface<class IModioUIClickableWidget> GetMenuToggleClickableWidget();
};

// 0x18 (0x488 - 0x470)
// Class ModioUICore.ModioModTagSelectorCategory
class UModioModTagSelectorCategory : public UModioUIComponentBase
{
public:
	uint8                                        Pad_31D7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModTagSelectorCategory* GetDefaultObj();

	TScriptInterface<class IModioUIHasTextWidget> GetTagCategoryLabel();
	TScriptInterface<class IModioUIObjectSelector> GetCategoryTagListWidget();
};

// 0x48 (0x4B8 - 0x470)
// Class ModioUICore.ModioModTagSelectorEntry
class UModioModTagSelectorEntry : public UModioUIComponentBase
{
public:
	uint8                                        Pad_3227[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionStateChanged;                           // 0x498(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x4A8(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioModTagSelectorEntry* GetDefaultObj();

	void OnTagEntryClicked(class UObject* ClickedObject);
	void NotifySelectionChanged();
	void NotifyClicked();
	TScriptInterface<class IModioUIHasTextWidget> GetTagLabelWidget();
	TScriptInterface<class IModioUISelectableWidget> GetSelectionWidget();
	TScriptInterface<class IModioUIClickableWidget> GetClickableWidget();
};

// 0x30 (0x4A0 - 0x470)
// Class ModioUICore.ModioModTagSelectorMenu
class UModioModTagSelectorMenu : public UModioUIComponentBase
{
public:
	uint8                                        Pad_3265[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bShowHiddenTags;                                   // 0x478(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowLockedTags;                                   // 0x479(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3267[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTagSelectionChanged;                             // 0x480(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	TScriptInterface<class IModioModTagOptionsUIDetails> CachedTagOptions;                                  // 0x490(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioModTagSelectorMenu* GetDefaultObj();

	void OnCategoryWidgetCreated(class UWidget* CategoryWidget, class UObject* CategoryDataSource);
	void OnCategoryEntrySelectionChanged(class UObject* NewlySelectedEntry);
	void NotifySelectionChanged();
	TScriptInterface<class IModioUIObjectListWidget> GetCategoryContainerWidget();
	TArray<TScriptInterface<class IModioModTagCategoryUIDetails>> GetAllowedTags();
};

// 0x38 (0x1F8 - 0x1C0)
// Class ModioUICore.ModioObjectWrapBox
class UModioObjectWrapBox : public UWrapBox
{
public:
	uint8                                        Pad_326D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       BoundObjects;                                      // 0x1D0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UWidget>                   WidgetClass;                                       // 0x1E0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnWidgetCreated;                                   // 0x1E8(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioObjectWrapBox* GetDefaultObj();

};

// 0x78 (0x4E8 - 0x470)
// Class ModioUICore.ModioOperationTracker
class UModioOperationTracker : public UModioUIComponentBase
{
public:
	uint8                                        Pad_32CA[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SizeFormatText;                                    // 0x4B8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  SpeedFormatText;                                   // 0x4D0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioOperationTracker* GetDefaultObj();

	void RefreshQueueData();
	void HandleOperationComplete();
	TScriptInterface<class IModioUIProgressWidget> GetRadialProgressWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetQueueLabelTextWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetQueueCountTextWidget();
	TScriptInterface<class IModioUIImageDisplayWidget> GetQueueCountIconWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetPercentProgressTextWidget();
	TScriptInterface<class IModioUIImageDisplayWidget> GetOperationTypeIconWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetDownloadSpeedTextWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetDownloadSizeTextWidget();
};

// 0x0 (0x198 - 0x198)
// Class ModioUICore.ModioPlatformSpecificWidget
class UModioPlatformSpecificWidget : public UContentWidget
{
public:

	static class UClass* StaticClass();
	static class UModioPlatformSpecificWidget* GetDefaultObj();

};

// 0x8 (0x478 - 0x470)
// Class ModioUICore.ModioPopupCommandMenu
class UModioPopupCommandMenu : public UModioUIComponentBase
{
public:
	uint8                                        Pad_32EC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioPopupCommandMenu* GetDefaultObj();

	TScriptInterface<class IModioUICommandMenu> GetCommandMenuWidget();
	void ConstructCommandMenuWidget();
};

// 0x20 (0x490 - 0x470)
// Class ModioUICore.ModioPresetFilterEntryWidget
class UModioPresetFilterEntryWidget : public UModioUIComponentBase
{
public:
	uint8                                        Pad_3300[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioPresetFilterEntryWidget* GetDefaultObj();

	TScriptInterface<class IModioUIHasTextWidget> GetLabelWidget();
};

// 0x18 (0x488 - 0x470)
// Class ModioUICore.ModioPresetFilterSelector
class UModioPresetFilterSelector : public UModioUIComponentBase
{
public:
	uint8                                        Pad_3328[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       CachedBoundPresets;                                // 0x478(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioPresetFilterSelector* GetDefaultObj();

	TScriptInterface<class IModioUIObjectSelector> GetPresetListWidget();
	TArray<TScriptInterface<class IModioModFilterUIDetails>> GetFilterPresets();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.PropertyOverridesLibrary
class UPropertyOverridesLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPropertyOverridesLibrary* GetDefaultObj();

	enum class ETextTransformPolicy ResolveTextTransformOverrideAsExec(struct FTextTransformOverride& Target, bool* bOverrideSet);
	enum class ETextTransformPolicy ResolveTextTransformOverride(struct FTextTransformOverride& Target, bool* bOverrideSet);
	class FText ResolveTextOverrideAsExec(struct FTextOverride& Target, bool* bOverrideSet);
	class FText ResolveTextOverride(struct FTextOverride& Target, bool* bOverrideSet);
	int32 ResolveIntOverrideAsExec(struct FIntegerOverride& Target, bool* bOverrideSet);
	int32 ResolveIntOverride(struct FIntegerOverride& Target, bool* bOverrideSet);
	struct FDataTableRowHandle ResolveInputActionOverrideAsExec(struct FInputActionOverride& Target, bool* bOverrideSet);
	struct FDataTableRowHandle ResolveInputActionOverride(struct FInputActionOverride& Target, bool* bOverrideSet);
	enum class EHorizontalAlignment ResolveHAlignOverrideAsExec(struct FHAlignOverride& Target, bool* bOverrideSet);
	enum class EHorizontalAlignment ResolveHAlignOverride(struct FHAlignOverride& Target, bool* bOverrideSet);
	struct FSlateFontInfo ResolveFontInfoOverrideAsExec(struct FSlateFontInfoOverride& Target, bool* bOverrideSet);
	struct FSlateFontInfo ResolveFontInfoOverride(struct FSlateFontInfoOverride& Target, bool* bOverrideSet);
	float ResolveFloatOverrideAsExec(struct FFloatOverride& Target, bool* bOverrideSet);
	float ResolveFloatOverride(struct FFloatOverride& Target, bool* bOverrideSet);
	class UClass* ResolveClassPathOverrideAsExec_Casted(struct FClassPathOverride& Target, TSubclassOf<class UObject> BaseClass, bool* bOverrideSet);
	struct FSoftClassPath ResolveClassPathOverrideAsExec(struct FClassPathOverride& Target, bool* bOverrideSet);
	class UClass* ResolveClassPathOverride_Casted(struct FClassPathOverride& Target, TSubclassOf<class UObject> BaseClass, bool* bOverrideSet);
	struct FSoftClassPath ResolveClassPathOverride(struct FClassPathOverride& Target, bool* bOverrideSet);
	enum class ETextTransformPolicy ApplyTextTransformOverride(struct FTextTransformOverride& Target, enum class ETextTransformPolicy DefaultValue);
	class FText ApplyTextOverride(struct FTextOverride& Target, class FText DefaultValue);
	int32 ApplyIntOverride(struct FIntegerOverride& Target, int32 DefaultValue);
	struct FDataTableRowHandle ApplyInputActionOverride(struct FInputActionOverride& Target, const struct FDataTableRowHandle& DefaultValue);
	enum class EHorizontalAlignment ApplyHAlignOverride(struct FHAlignOverride& Target, enum class EHorizontalAlignment DefaultValue);
	struct FSlateFontInfo ApplyFontInfoOverride(struct FSlateFontInfoOverride& Target, const struct FSlateFontInfo& DefaultValue);
	float ApplyFloatOverride(struct FFloatOverride& Target, float DefaultValue);
	class UClass* ApplyClassPathOverride_Casted(struct FClassPathOverride& Target, TSubclassOf<class UObject> BaseClass, class UClass* DefaultValue);
	struct FSoftClassPath ApplyClassPathOverride(struct FClassPathOverride& Target, const struct FSoftClassPath& DefaultValue);
};

// 0x68 (0x90 - 0x28)
// Class ModioUICore.ModioReportInfoUI
class UModioReportInfoUI : public UObject
{
public:
	uint8                                        Pad_3574[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioReportParams                    ReportData;                                        // 0x30(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                               ModInfo;                                           // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioReportInfoUI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioRetryLibrary
class UModioRetryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioRetryLibrary* GetDefaultObj();

	bool Retry(struct FModioRetryCounter& Target);
	struct FModioRetryCounter ResetRetryCountPure(struct FModioRetryCounter& Target);
	void ResetRetryCount(struct FModioRetryCounter& Target);
	bool CanRetryAsExec(struct FModioRetryCounter& Target);
	bool CanRetry(struct FModioRetryCounter& Target);
};

// 0x10 (0x480 - 0x470)
// Class ModioUICore.ModioSearchBar
class UModioSearchBar : public UModioUIComponentBase
{
public:
	uint8                                        Pad_3617[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioSearchBar* GetDefaultObj();

	TScriptInterface<class IModioUIStringInputWidget> GetSearchBoxWidget();
	TScriptInterface<class IModioUIClickableWidget> GetButtonWidget();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioStackedBoolLibrary
class UModioStackedBoolLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioStackedBoolLibrary* GetDefaultObj();

	void PushBoolValue(struct FModioStackedBool& Target, bool bNewValue);
	bool PopBoolValue(struct FModioStackedBool& Target, bool* bDidPopSuccessfully);
	bool PeekBoolValue(struct FModioStackedBool& Target, bool* bDidPeekSuccessfully);
};

// 0x10 (0x480 - 0x470)
// Class ModioUICore.ModioStorageTracker
class UModioStorageTracker : public UModioUIComponentBase
{
public:
	uint8                                        Pad_3668[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioStorageTracker* GetDefaultObj();

	void RefreshData();
	TScriptInterface<class IModioUIHasTextWidget> GetStorageUsedTextWidget();
};

// 0x10 (0x480 - 0x470)
// Class ModioUICore.ModioTagCounterIcon
class UModioTagCounterIcon : public UModioUIComponentBase
{
public:
	uint8                                        Pad_36AC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioTagCounterIcon* GetDefaultObj();

	int32 SynchronizeCounter();
	TScriptInterface<class IModioUIHasTextWidget> GetCounterLabelWidget();
};

// 0x38 (0x60 - 0x28)
// Class ModioUICore.ModioModTagUI
class UModioModTagUI : public UObject
{
public:
	uint8                                        Pad_36C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Underlying;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LocalizedText;                                     // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bSelectionState;                                   // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36CA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioModTagUI* GetDefaultObj();

};

// 0xE8 (0x110 - 0x28)
// Class ModioUICore.ModioModTagInfoUI
class UModioModTagInfoUI : public UObject
{
public:
	uint8                                        Pad_36D3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModTagInfo                      Underlying;                                        // 0x30(0xB8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  LocalizedCategoryName;                             // 0xE8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UModioModTagUI*>                BindableTags;                                      // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModTagInfoUI* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class ModioUICore.ModioModTagOptionsUI
class UModioModTagOptionsUI : public UObject
{
public:
	uint8                                        Pad_36D5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioModTagOptions                   Underlying;                                        // 0x30(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UModioModTagInfoUI*>            BindableTagCategories;                             // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioModTagOptionsUI* GetDefaultObj();

};

// 0x30 (0x4A0 - 0x470)
// Class ModioUICore.ModioTokenPackBrowser
class UModioTokenPackBrowser : public UModioUIComponentBase
{
public:
	uint8                                        Pad_36F8[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioTokenPackBrowser* GetDefaultObj();

	TScriptInterface<class IModioUITokenPackListInterface> GetTokenTileViewWidget();
	TScriptInterface<class IModioUIHasTextWidget> GetTitleTextWidget();
};

// 0x120 (0x148 - 0x28)
// Class ModioUICore.ModioTokenPackUI
class UModioTokenPackUI : public UObject
{
public:
	uint8                                        Pad_3714[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioTokenPack                       Underlying;                                        // 0x30(0x118)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioTokenPackUI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioTokenPackUIDetails
class IModioTokenPackUIDetails : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IModioTokenPackUIDetails* GetDefaultObj();

	struct FModioTokenPackID GetTokenPackID();
	struct FModioTokenPack GetFullTokenPack();
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUICommonFunctionLibrary
class UModioUICommonFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModioUICommonFunctionLibrary* GetDefaultObj();

	class UWidget* ValidateWidget(TScriptInterface<class IInterface> TargetWidget);
	bool MapValueIntoRangeIndex(TArray<struct FInt32Range>& ValueRanges, int32 Value, int32* OutIndex);
	bool IsDesignTimeAsExec(class UWidget* Target);
	bool IsDesignTime(class UWidget* Target);
	class FText GetModioText(class FName StringKey);
	class FText GetLocalizedTagValue(struct FModioModTagLocalizationData& InTagLocalizationData);
	class FText GetLocalizedTagCategory(struct FModioModTagInfo& InTagInfo);
	class FText FormatTimespan(struct FTimespan& Timespan, class FText& YearFormat, class FText& MonthFormat, class FText& DaysFormat, class FText& TodayFormat);
	class FText FormatNumberWithSIUnit(int64 Value, class FText& FormatText);
	class UModioUserUI* CreateBindableUser(struct FModioUser& InRawUser);
	TArray<class UModioEnumEntryUI*> CreateBindableReportTypeEnumArray();
	class UModioModTagUI* CreateBindableModTagRawValue(struct FModioModTag& InTag);
	class UModioModTagOptionsUI* CreateBindableModTagOptions(struct FModioModTagOptions& InRawOptions);
	class UModioModTagInfoUI* CreateBindableModTagInfo(struct FModioModTagInfo& InRawTagInfo);
	TArray<class UModioModTagUI*> CreateBindableModTagArray(TArray<struct FModioModTag>& InTags);
	class UModioModTagUI* CreateBindableModTag(struct FModioModTagLocalizationData& InTagLocalizationData);
	TArray<class UModioModDependencyUI*> CreateBindableModDependencyArrayFromList(struct FModioModDependencyList& InModDependencyList);
	TArray<class UModioModDependencyUI*> CreateBindableModDependencyArrayFromArray(TArray<struct FModioModDependency>& InModDependencyArray);
	class UModioModDependencyUI* CreateBindableModDependency(struct FModioModDependency& InModDependency);
	class UModioEnumEntryUI* CreateBindableEnum(uint8 InValue, class FText InText);
	bool CheckLogoDownloadEventForDataSource(const struct FModioModID& EventModID, enum class EModioLogoSize EventLogoSize, class UObject* DataSource, enum class EModioLogoSize RequestedSize);
	bool CheckLogoDownloadEvent(const struct FModioModID& EventModID, enum class EModioLogoSize EventLogoSize, const struct FModioModID& RequestedModID, enum class EModioLogoSize RequestedSize);
	TArray<class UObject*> AsObjectArray(TArray<int32>& TargetArray);
	void ApplyTextPropertyOverridesHelper(struct FSlateFontInfoOverride& FontPropertiesOverride, struct FHAlignOverride& TextJustificationOverride, struct FTextTransformOverride& TextTransformOverride, class UObject* Target);
};

// 0x0 (0x28 - 0x28)
// Class ModioUICore.ModioUIComponentStatics
class UModioUIComponentStatics : public UObject
{
public:

	static class UClass* StaticClass();
	static class UModioUIComponentStatics* GetDefaultObj();

	struct FModioUIComponentMetadata GetMetadataForComponent(enum class EModioUIComponentID ComponentType, bool* bComponentTypeFound);
	TMap<enum class EModioUIComponentID, struct FModioUIComponentMetadata> GetAllComponentMetadata();
};

// 0xD8 (0x100 - 0x28)
// Class ModioUICore.ModioUIDisplayFilteredModsCommand
class UModioUIDisplayFilteredModsCommand : public UObject
{
public:
	uint8                                        Pad_3926[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FModioFilterParams                    UnderlyingParams;                                  // 0x40(0xB8)(Protected, NativeAccessSpecifierProtected)
	class FName                                  DisplayStringKey;                                  // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIDisplayFilteredModsCommand* GetDefaultObj();

	void SetFilterParams(struct FModioFilterParams& FilterParams);
	void SetDisplayStringKey(class FName& InDisplayStringKey);
};

// 0x10 (0x38 - 0x28)
// Class ModioUICore.ModioUIManageModSubscriptionCommand
class UModioUIManageModSubscriptionCommand : public UObject
{
public:
	uint8                                        Pad_3929[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIManageModSubscriptionCommand* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ModioUICore.ModioUIPrioritizeModCommand
class UModioUIPrioritizeModCommand : public UObject
{
public:
	uint8                                        Pad_392B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIPrioritizeModCommand* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ModioUICore.ModioUIPurchaseModCommand
class UModioUIPurchaseModCommand : public UObject
{
public:
	uint8                                        Pad_392E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIPurchaseModCommand* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ModioUICore.ModioUIReportModCommand
class UModioUIReportModCommand : public UObject
{
public:
	uint8                                        Pad_3930[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIReportModCommand* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class ModioUICore.ModioUISettings
class UModioUISettings : public UObject
{
public:
	TSoftObjectPtr<class UDataTable>             ColorsTable;                                       // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             CommandsTable;                                     // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              UnderlineMaterial;                                 // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              FakeCaretMaterial;                                 // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FModioPresetFilterParams>      PresetNamedFilters;                                // 0xC8(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioUISettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ModioUICore.ModioUIDefaultModEnabledStateProvider
class UModioUIDefaultModEnabledStateProvider : public UObject
{
public:
	uint8                                        Pad_393F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioUIDefaultModEnabledStateProvider* GetDefaultObj();

};

// 0x2C0 (0x2F0 - 0x30)
// Class ModioUICore.ModioUISubsystem
class UModioUISubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_39CB[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ModEnabledStateDataProvider;                       // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               ModRatingStateProvider;                            // 0x88(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39CC[0x260];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModioUISubsystem* GetDefaultObj();

	void UnsubscribeHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID);
	void UninstallHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID);
	void SubscriptionHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID);
	void SetModRatingStateDataProvider(TScriptInterface<class IModRatingStateProvider> InModRatingStateProvider);
	void SetModEnabledStateDataProvider(TScriptInterface<class IModioUIModEnabledStateProvider> InModEnabledStateDataProvider);
	void RequestWalletBalanceRefreshWithHandler(FDelegateProperty_& Callback);
	void RequestWalletBalanceRefresh();
	void RequestUserAvatar();
	void RequestSubscriptionForModIDWithHandler(const struct FModioModID& ID, bool IncludeDependencies, FDelegateProperty_ Callback);
	void RequestSubscriptionForModID(const struct FModioModID& ID, bool IncludeDependencies);
	enum class EModioOpenStoreResult RequestShowTokenPurchaseUIWithHandler(FDelegateProperty_& Callback);
	enum class EModioOpenStoreResult RequestShowTokenPurchaseUI();
	void RequestShowDialog(enum class EModioUIDialogType DialogType, class UObject* DataSource);
	void RequestRemoveSubscriptionForModIDWithHandler(const struct FModioModID& ID, FDelegateProperty_ DedicatedCallback);
	void RequestRemoveSubscriptionForModID(const struct FModioModID& ID);
	void RequestRefreshEntitlements();
	bool RequestPurchaseTokenPack(const struct FModioTokenPackID& TokenPackID, FDelegateProperty_& Callback);
	void RequestPurchaseForModIDWithHandler(const struct FModioModID& ID, const struct FModioUnsigned64& ExpectedPrice, FDelegateProperty_& Callback);
	void RequestModInfoForModIDs(const TArray<struct FModioModID>& IDs);
	bool RequestModEnabledStateChange(const struct FModioModID& ID, bool bNewEnabledState);
	void RequestLogoDownloadForModID(const struct FModioModID& ID, enum class EModioLogoSize LogoSize);
	void RequestListAllTokenPacks();
	void RequestListAllMods(const struct FModioFilterParams& Params, const class FString& RequestIdentifier);
	void RequestGalleryImageDownloadForModID(const struct FModioModID& ID, int32 Index, enum class EModioGallerySize ImageSize);
	void RequestEmailAuthenticationWithHandler(const struct FModioEmailAuthCode& Code, FDelegateProperty_ Callback);
	bool QueryIsModEnabled(const struct FModioModID& ID);
	bool QueryConnectivityState();
	void OnModEnabledChanged(int64 RawModID, bool bNewEnabledState);
	void NotifyConnectivityChange(bool bNewConnectivityState);
	bool IsUGCFeatureEnabled(enum class EModioUIFeatureFlags Feature);
	float GetCurrentDPIScaleValue();
	struct FModioErrorCode EnableModManagement();
	void DisableModManagement();
};

// 0x10 (0x38 - 0x28)
// Class ModioUICore.ModioUIToggleModEnabledCommand
class UModioUIToggleModEnabledCommand : public UObject
{
public:
	uint8                                        Pad_39D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIToggleModEnabledCommand* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ModioUICore.ModioUIViewModCommand
class UModioUIViewModCommand : public UObject
{
public:
	uint8                                        Pad_39D4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DataSource;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModioUIViewModCommand* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class ModioUICore.ModioUserUI
class UModioUserUI : public UObject
{
public:
	uint8                                        Pad_39D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModioUser                            Underlying;                                        // 0x30(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModioUserUI* GetDefaultObj();

};

}


