#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E0 (0x6F0 - 0x410)
// WidgetBlueprintGeneratedClass W_PageWrapper.W_PageWrapper_C
class UW_PageWrapper_C : public UPageWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRefresh;                                       // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAspectRatioConstraintBox*             AspectBox;                                         // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_81;                                 // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_60;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_AnimatedHeaderFillLine;                        // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_FooterFade;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HeaderFillLine;                                // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HeaderFillLine_Unconstrained;                  // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HeaderLine;                                    // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HeaderLine_Refresh;                            // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            PageContent;                                       // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageHeader_Carousel_C*              PageHeaderNav;                                     // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_HeaderText;                                    // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_PageTagline;                                   // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Vignette;                                          // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ScreenFooter_C*                     W_ScreenFooter;                                    // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tagline;                                           // 0x4B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  HeaderText;                                        // 0x4C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         DesignTime;                                        // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNavOptionSelected;                               // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, class FText>               NavOptionMap;                                      // 0x4F8(0x50)(Edit, BlueprintVisible)
	bool                                         NavIgnoreGamepad;                                  // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Revealed;                                          // 0x549(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseGamepad;                                       // 0x54A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowVignette;                                     // 0x54B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CurrentNavOptions;                                 // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bUseFixedAspect;                                   // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FixedAspectRatio;                                  // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPreviewFixedAspect;                               // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PreviewAspectRatio;                                // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FScreenFooterEntry>            FooterEntriesArray;                                // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       LineMax;                                           // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynMatLine;                                        // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFooterButtonClicked;                             // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             ViewportSize;                                      // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBackgroundBlur;                                   // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bApplyAlphaToBlur;                                 // 0x5C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BlurStrength;                                      // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          VignetteColor;                                     // 0x5D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       VignetteIntensity;                                 // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynMatVignette;                                    // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LineMarginWidth;                                   // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SelectedNavOption;                                 // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CurrentFocus;                                      // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FScreenFooterEntry> FooterEntries;                                     // 0x608(0x50)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            OnFooterButtonPressed;                             // 0x658(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFooterButtonReleased;                            // 0x668(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bAllowWrap;                                        // 0x678(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNavOptionPrevious;                               // 0x680(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNavOptionNext;                                   // 0x690(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, class FText>               NavOptionMap_PS5;                                  // 0x6A0(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_PageWrapper_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void BackPage(bool* Handled);
	void IsPS5(bool* IsPlaystation, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HideRedLine();
	void SetFooterFocusByID(const class FString& ID, class UWidget* CallFunc_SetFocusByID_FocusedEntryButton, bool CallFunc_IsValid_ReturnValue);
	void GetCurrentNavSelection(class FName* SelectedNavOption);
	void UnhideFooterEntryByIndex(int32 Index);
	void UnhideFooterEntryByID(const class FString& ID);
	void HideFooterEntryByIndex(int32 Index);
	void HideFooterEntryByID(const class FString& ID);
	bool IsAspectConstrained(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	double GetLineWidthByConstraint(double RelativeScreenLength, double OpenSpace, bool CallFunc_IsAspectConstrained_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_1);
	void UpdateVignette(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void ClearTagline();
	void ClearHeadline();
	void InitializeHeader();
	void InitializeNavigation(bool Temp_bool_Variable, bool CallFunc_IsPS5_IsPlaystation, bool CallFunc_Map_IsNotEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TMap<class FName, class FText> K2Node_Select_Default);
	void InitializeMaterials(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void UpdateBackgroundBlur(float CallFunc_SetBlurStrength_InStrength_ImplicitCast);
	void AddFooterEntry(int32 InsertAtIndex, class FString& EntryID, const struct FScreenFooterEntry& ScreenFooterEntry);
	void SetFooterEntries(TMap<class FString, struct FScreenFooterEntry> FooterEntries, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void HideFooter();
	void ShowFooter(bool* IsPlaystation, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void InitializeFooter();
	void SetAspectConstraints(float CallFunc_SetFixedAspectRatio_NewAspectRatio_ImplicitCast);
	void UpdateCurrentNavOptions(TArray<class FName>& CallFunc_Map_Keys_Keys);
	void ToggleNavVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void RemoveHeaderNavOption(class FName OptionNameID, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Map_Remove_ReturnValue);
	void EnableHeaderNavOption(class FName OptionNameID);
	void DisableHeaderNavOption(class FName OptionNameID);
	void SetHeaderNavSelection(class FName OptionNameID);
	void AddHeaderNavOption(class FName OptionNameID, class FText OptionLabelText, bool DefaultSelection);
	void SetHeaderNavOptions(TMap<class FName, class FText> OptionMap, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_Identical_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateHeader(class FText NewHeader, class FText NewTagline, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_TextIsNotEmpty_NotEmpty_1);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__W_PageHeader_W_PageHeader_Carousel_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature(class FName OptionID);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void ChangePage(class FName PageName);
	void SetInputMode(bool IsGamepad);
	void BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_2_OnFooterEntriesUpdated__DelegateSignature();
	void BndEvt__W_PageHeader_W_ScreenFooter_K2Node_ComponentBoundEvent_3_OnFooterEntryClicked__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
	void OnInitialized();
	void Destruct();
	void Animating();
	void BP_OnActivated();
	void OnFooterEntryPressed(class UW_ScreenFooterEntry_C* NewParam);
	void BndEvt__W_PageWrapper_PageHeaderNav_K2Node_ComponentBoundEvent_1_OnNextHandled__DelegateSignature(class FName OptionID);
	void BndEvt__W_PageWrapper_PageHeaderNav_K2Node_ComponentBoundEvent_4_OnPreviousHandled__DelegateSignature(class FName OptionID);
	void ExecuteUbergraph_W_PageWrapper(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName K2Node_ComponentBoundEvent_OptionID_2, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsDesignTime, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class FName K2Node_Event_PageName, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Event_IsGamepad, class UW_ScreenFooterEntry_C* K2Node_ComponentBoundEvent_FooterEntry, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const class FString& CallFunc_GetButtonID_ButtonID, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetLineWidthByConstraint_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UW_ScreenFooterEntry_C* K2Node_CustomEvent_NewParam, const class FString& CallFunc_GetButtonID_ButtonID_1, class FName K2Node_ComponentBoundEvent_OptionID_1, class FName K2Node_ComponentBoundEvent_OptionID, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void OnNavOptionNext__DelegateSignature(class FName Option_ID);
	void OnNavOptionPrevious__DelegateSignature(class FName Option_ID);
	void OnFooterButtonReleased__DelegateSignature(const class FString& Button_ID);
	void OnFooterButtonPressed__DelegateSignature(const class FString& Button_ID);
	void OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId);
	void OnNavOptionSelected__DelegateSignature(class FName OptionNameID);
};

}


