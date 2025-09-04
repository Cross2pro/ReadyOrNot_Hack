#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x490 (0x990 - 0x500)
// WidgetBlueprintGeneratedClass W_Options_UE5.W_Options_UE5_C
class UW_Options_UE5_C : public USettingsMenuGamepad
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x500(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            AppliedSettingsText;                               // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DescriptionText;                                   // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KeybindDescriptionText;                            // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      OptionsPageWrapper;                                // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      SettingsSwitcher;                                  // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_Accessibility_UE5_C*        W_Options_Accessibility;                           // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_Audio_UE5_C*                W_Options_Audio;                                   // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_Controls_UE5_C*             W_Options_Controls;                                // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_Gamepad_UE5_C*              W_Options_Gamepad;                                 // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_Gameplay_UE5_C*             W_Options_Gameplay;                                // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_Graphics_UE5_C*             W_Options_Graphics;                                // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ENVGStyle                         StagedNVGStyle;                                    // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GraphicsChanged;                                   // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D8C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       StagedInterfaceAspectRatio;                        // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StagedFOV;                                         // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedMotionBlur;                                  // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedBounceLight;                                 // 0x579(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInControlsMenu;                                  // 0x57A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D8F[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StagedResolution;                                  // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSGraphicPreset                       StagedGraphicsPreset;                              // 0x590(0x4F)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D91[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StagedScreenMode;                                  // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D94[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSGraphicPreset>               GraphicsPresets;                                   // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_Button_C*                           ActiveControlTabButton;                            // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsXBox;                                            // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D9B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKeyBinding>                   Unbindable_Controls;                               // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsAxis;                                            // 0x618(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D9E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               BindNamePadding;                                   // 0x61C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               Bind1Padding;                                      // 0x62C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               Bind2Padding;                                      // 0x63C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DA2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     Temp_FirstInput;                                   // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     Temp_SecondInput;                                  // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               BindResetPadding;                                  // 0x660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UW_ControlsBind_C*                     ListeningBinding;                                  // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Conflicting_Bind_Format;                           // 0x678(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_ControlsBind_C*                     ConflictingBindPending;                            // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSStandardModalDetails                BindConflictModalDetails;                          // 0x698(0x79)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_DB9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSStandardModalDetails                IllegalKeyConflictModalDetails;                    // 0x718(0x79)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_DBA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_BindConflictModal_C*                ConflictDetectedPopUp;                             // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_IllegalUnbindModal_C*               IllegalKeyConflictDetectedPopUp_0;                 // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class UW_ControlsBind_C*, struct FAxisMappingStruct> AxesControlBinds_0;                                // 0x7A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UW_ControlsBind_C*, struct FActionMappingStruct> ActionsControlBinds_0;                             // 0x7F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FKeyBinding>                   MovementControls;                                  // 0x848(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSKeybinding>                  DroneControls_0;                                   // 0x858(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKeyBinding>                   EquipmentControls;                                 // 0x868(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKeyBinding>                   InteractionControls;                               // 0x878(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKeyBinding>                   TeamworkControls;                                  // 0x888(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKeyBinding>                   MiscellaneousControls;                             // 0x898(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKeyBinding>                   ReplayControls;                                    // 0x8A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsInGraphicsMenu;                                  // 0x8B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedPiPFPSEnabled;                               // 0x8B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DBB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StagedReflex;                                      // 0x8BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedGtRLatency;                                  // 0x8C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedGameLatency;                                 // 0x8C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedRenderLatency;                               // 0x8C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedDecalsEnabled;                               // 0x8C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DC9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       StagedDecalsDensity;                               // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StagedDecalFade;                                   // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedADSZoom;                                     // 0x8D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DCA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StagedMirrorReflection;                            // 0x8DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedFlashlightShadows;                           // 0x8E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DCD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StagedDLSS;                                        // 0x8E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StagedFrameGeneration;                             // 0x8E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StagedFSR;                                         // 0x8EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSKeybinding>                  CharacterControls_0;                               // 0x8F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSKeybinding>                  SharedControls_0;                                  // 0x900(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsPcPlatform;                                      // 0x910(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           CurrentButton;                                     // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         StagedAlternateControls;                           // 0x920(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, int32>                           InterfaceAspectRatioMap;                           // 0x928(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         StagedPerObjectShadows;                            // 0x978(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInitialized;                                     // 0x979(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActiveMenuName;                                    // 0x980(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Options_UE5_C* GetDefaultObj();

	void Clear_Controls_Tab();
	void SetupDescriptionWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TArray<class UW_StandardSlider_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, TArray<class UW_OnOffButton_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets_1, class UW_StandardSlider_C* CallFunc_Array_Get_Item, class UW_OnOffButton_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UW_CommonCarousel_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets_2, class UW_CommonCarousel_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void OpenGamepadOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OpenAccessibilityOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OpenControlOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OpenAudioOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OpenGraphicsOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OpenGameOptions(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue);
	void ToggleApplyButton(bool ShowApply);
	void ToggleResetButton(bool ShowReset);
	void PopulateSubtitleLocales(class UW_CommonCarousel_C* Carousel, TMap<class FString, class FText> CallFunc_GetAvailableLocales_ReturnValue, TArray<class FText>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_IsValid_ReturnValue);
	bool BP_OnHandleBackAction();
	void SetupControlsCategories();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Add_To_Control_Binds_Lists(class UW_ControlsBind_C* ControlBind, const struct FAxisMappingStruct& InputAxis, const struct FActionMappingStruct& InputAction, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	void Clear_Control_Binds_Lists();
	void Initialise_Or_Get_Pop_Up(class UClass* PopUpType, const struct FSStandardModalDetails& ModalDetails, class UStandardModal** OutputPopUp, class UStandardModal* TempPopUp, class UClass* PopUpClass, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UStandardModal* CallFunc_Create_ReturnValue, TArray<class UStandardModal*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UStandardModal* CallFunc_Array_Get_Item);
	void GetConflictingKeybindListText(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, TArray<class FText>& ConflictBinds, class FText* Text, class FText LocalizedActionChain, class FText Inputs_2LocalizedComma, class FText Inputs_2LocalizedAnd, const TArray<class FText>& LocalizedActions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText CallFunc_Array_Get_Item_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3);
	void GetConflictingKeybindText(const struct FKey& Key, TArray<struct FAxisMappingStruct>& ConflictingAxes, TArray<struct FActionMappingStruct>& ConflictingActions, TArray<class FText>& ConflictBindNames, class FText* Text, class FText CallFunc_GetConflictingKeybindListText_Text, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void TryAssignUnbindableControl(const struct FKeyBinding& KeyBinding, bool* bSuccess, bool CannotBeUnbindable, int32 CallFunc_Array_AddUnique_ReturnValue);
	void SetGamepadButtonPrompts();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SwitchTab(class UCommonActivatableWidget* MenuWidget, class FText Tab_Name, bool bShowResetButton, bool bShowApplyButton, const class FString& CallFunc_Conv_ObjectToString_ReturnValue);
	void BP_OnActivated();
	void BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_98_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId);
	void BndEvt__W_SettingsMenuGamepad_PageWrapper_K2Node_ComponentBoundEvent_110_OnNavOptionSelected__DelegateSignature(class FName OptionNameID);
	void Destruct();
	void ExitMenu();
	void Construct();
	void InitGraphicsChangedModal();
	void OkGraphics(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void CancelGraphics(class UStandardModal* CallingModal);
	void NoGraphics(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void DisableAppliedSettingsText();
	void ExecuteUbergraph_W_Options_UE5(int32 EntryPoint, bool CallFunc_SaveSettings_ReturnValue, class FText Temp_text_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_SaveKeybinds_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_SaveControlScheme_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SaveKeybinds_ReturnValue_1, class FText Temp_text_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, class FName K2Node_ComponentBoundEvent_OptionNameID, bool K2Node_SwitchName_CmpSuccess, class FText Temp_text_Variable_2, TArray<class UW_KeyDisplay_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_KeyDisplay_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& Temp_struct_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_StandardModal_C* CallFunc_Create_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry_1, class UStandardModal* K2Node_CustomEvent_CallingModal_1, class FText Temp_text_Variable_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, bool CallFunc_IsPcPlatform_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UConsoleHotkeys* CallFunc_GetConsoleHotkeys_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool K2Node_SwitchString_CmpSuccess_1);
};

}


