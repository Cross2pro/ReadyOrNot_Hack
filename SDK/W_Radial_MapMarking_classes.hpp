#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F0 (0x4B0 - 0x2C0)
// WidgetBlueprintGeneratedClass W_Radial_MapMarking.W_Radial_MapMarking_C
class UW_Radial_MapMarking_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRevealSubMenu;                                 // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_BgFade;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                     InnerRadial;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                     OutterRadial;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          RadialCanvas;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SB_Hotkey;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_2;                                        // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_CategoryName;                                  // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Secondary;                                     // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HotkeyBar_Entry_C*                  W_HotkeyBar_Entry;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FKey>                          BackKeys;                                          // 0x320(0x10)(Edit, BlueprintVisible)
	TArray<struct FKey>                          SubmitKeys;                                        // 0x330(0x10)(Edit, BlueprintVisible)
	class UUMG_RadialMenu_C*                     MainRadial;                                        // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                     SubRadial;                                         // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SubmenuCommit;                                     // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Cancel;                                            // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDataTable*                            CategoriesDataTable;                               // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            MarkersDataTable;                                  // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFBasicIconSettings                   IconStyle;                                         // 0x380(0x28)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       IconSize;                                          // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MainRadialMaterial;                                // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SubRadialMaterial;                                 // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     GoldTeamMaterial;                                  // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     RedTeamMaterial;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     BlueTeamMaterial;                                  // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSwatCommand                          CurrentSelectedCommand;                            // 0x3D8(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_RadialIcon_MapMarking_C*            CurrentCategory;                                   // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCollapsed;                                       // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         SubmenuOpen;                                       // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSubmenuCollapse;                                 // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_RadialIcon_MapMarking_C*            CurrentMarker;                                     // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       InnerRadius;                                       // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OuterRadius;                                       // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHoverSelect;                                    // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_RadialMenu_C*                     ActiveRadial;                                      // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUsingGamepad;                                    // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGamepadHoveringSelection;                        // 0x491(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21E7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             SelectionDirection;                                // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_PlanningMap_C*           PlanningMapWidget;                                 // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Radial_MapMarking_C* GetDefaultObj();

	void Give_Focus_To_Map(bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, float CallFunc_GetAnalogValue_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_GetAnalogValue_ReturnValue_1, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double Temp_real_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_GetAnalogValue_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double K2Node_VariableSetRef_Target_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast);
	void InitGamepadSupport(class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HandleGamepad(class UUMG_RadialMenu_C* UMGRadial, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, double CallFunc_VSize2D_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue);
	void SetGamepadInputDirection(class UUMG_RadialMenu_C* UMGRadial, double CallFunc_VSize2D_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void Update_Position(const struct FVector2D& Coordinates, const struct FVector2D& RawCoordinates, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Finished_344D667B4B5F9FD05121C694FD14ED92();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddCategory(const class FString& ID, class FText DisplayName, class UTexture2D* IconImage, bool HasSubCommands);
	void PopulateSubmenu();
	void Populate();
	void Construct();
	void GoBack();
	void Submit();
	void SelectionMade();
	void CollapseRadial();
	void CollapseSubMenu();
	void OnPageViewUpdate_1();
	void OpenSubmenu();
	void BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
	void BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
	void BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_1_EnteredDeadzone__DelegateSignature();
	void BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_2_ExitedDeadzone__DelegateSignature();
	void BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_5_EnteredDeadzone__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void InputChange(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_Radial_MapMarking(int32 EntryPoint, class UW_RadialIcon_MapMarking_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const class FString& K2Node_CustomEvent_ID, class FText K2Node_CustomEvent_DisplayName, class UTexture2D* K2Node_CustomEvent_IconImage, bool K2Node_CustomEvent_HasSubCommands, class UW_RadialIcon_MapMarking_C* CallFunc_Create_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_AddChildToRadialMenu_Success, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FSt_PreMissionMarker_Categories& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FSt_PreMissionMarkers& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_AddChildToRadialMenu_Success_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUserWidget* CallFunc_GetChild_Output, bool CallFunc_GetChild_Success, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 K2Node_ComponentBoundEvent_NewSelection_1, int32 K2Node_ComponentBoundEvent_OldSelection_1, class UUserWidget* CallFunc_GetChild_Output_1, bool CallFunc_GetChild_Success_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_ComponentBoundEvent_NewSelection, int32 K2Node_ComponentBoundEvent_OldSelection, class UUserWidget* CallFunc_GetChild_Output_2, bool CallFunc_GetChild_Success_2, class UW_RadialIcon_MapMarking_C* K2Node_DynamicCast_AsW_Radial_Icon_Map_Marking_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class FName CallFunc_Array_Get_Item_1, const struct FSt_PreMissionMarker_Categories& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1);
	void OnSubmenuCollapse__DelegateSignature();
	void OnCollapsed__DelegateSignature();
	void Cancel__DelegateSignature();
	void SubmenuCommit__DelegateSignature(class FName Category, class FName MarkerName);
};

}


