#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x5E0 - 0x4B8)
// WidgetBlueprintGeneratedClass W_ReportModal.W_ReportModal_C
class UW_ReportModal_C : public UStandardModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimDisplayWarningText;                            // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_InputActionButton_C*                btn_Apply;                                         // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InputActionButton_C*                btn_Cancel;                                        // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InputActionButton_C*                btn_Ok;                                            // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ContentSizeBox;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Header;                                            // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_64;                                          // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*             Input_AdditionalDetails;                           // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ReportReason_C*                     Reason_Cheating;                                   // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ReportReason_C*                     Reason_Disruptive;                                 // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ReportReason_C*                     Reason_Inactivity;                                 // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ReportReason_C*                     Reason_Other;                                      // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ReportReason_C*                     Reason_UGC;                                        // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ReportReason_C*                     Reason_Username;                                   // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ReportReason_C*                     Reason_Verbal;                                     // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Error;                                         // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_MaxCharacters;                                 // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_PlayerName;                                    // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Title;                                         // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Title_1;                                       // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_103;                                   // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageWrapper;                                     // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOkClicked;                                       // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnApplyClicked;                                    // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ScrolledToBottom;                                  // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TextEntryModal;                                    // 0x591(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_199D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsTextConfirm;                                     // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_199F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextEntryMaxCharacters;                            // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        TextEntryMinCharacters;                            // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_19A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           FocusTarget;                                       // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                PlayerName;                                        // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FString>                        ReportReasons;                                     // 0x5D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_ReportModal_C* GetDefaultObj();

	void Verify(bool* Verified, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_IsTextOverMax_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Update_Report_Reasons(class FText& Reason, bool Checked, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	class UWidget* Do_Custom_Navigation_Cancel_Up(enum class EUINavigation Navigation);
	bool BP_OnHandleBackAction();
	class UWidget* BP_GetDesiredFocusTarget();
	void Confirm(bool OkClicked, bool ApplyClicked, bool TextInputConfirm);
	void WarnTextUnderMin(int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	bool IsTextUnderMin();
	void WarnTextOverMax(int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HideWarningText();
	bool IsTextOverMax(class FText CallFunc_GetText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetDescriptionText(class FText ModalDescription);
	void DisplayWarningText(class FText WarningText);
	void CancelConfirmTextEntry();
	void ConfirmTextEntry(class FText ConfirmTitleText, class FText ConfirmDescriptionText);
	bool Get_OkButton_bIsEnabled_0(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_StandardModal_btn_Ok_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_StandardModal_btn_Apply_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_StandardModal_btn_Cancel_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_ReportModal_Reason_Cheating_K2Node_ComponentBoundEvent_3_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked);
	void BndEvt__W_ReportModal_Reason_Verbal_K2Node_ComponentBoundEvent_4_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked);
	void BndEvt__W_ReportModal_Reason_Disruptive_K2Node_ComponentBoundEvent_5_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked);
	void BndEvt__W_ReportModal_Reason_Username_K2Node_ComponentBoundEvent_6_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked);
	void BndEvt__W_ReportModal_Reason_Inactivity_K2Node_ComponentBoundEvent_8_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked);
	void BndEvt__W_ReportModal_Reason_UGC_K2Node_ComponentBoundEvent_9_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked);
	void BndEvt__W_ReportModal_Reason_Other_K2Node_ComponentBoundEvent_10_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked);
	void ExecuteUbergraph_W_ReportModal(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText CallFunc_Conv_StringToText_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText K2Node_ComponentBoundEvent_Reason_6, bool K2Node_ComponentBoundEvent_Checked_6, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_ComponentBoundEvent_Reason_5, bool K2Node_ComponentBoundEvent_Checked_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_ComponentBoundEvent_Reason_4, bool K2Node_ComponentBoundEvent_Checked_4, class FText K2Node_ComponentBoundEvent_Reason_3, bool K2Node_ComponentBoundEvent_Checked_3, class FText K2Node_ComponentBoundEvent_Reason_2, bool K2Node_ComponentBoundEvent_Checked_2, class FText K2Node_ComponentBoundEvent_Reason_1, bool K2Node_ComponentBoundEvent_Checked_1, class FText K2Node_ComponentBoundEvent_Reason, bool K2Node_ComponentBoundEvent_Checked, bool CallFunc_Verify_Verified, bool CallFunc_Verify_Verified_1, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1);
	void OnTextCommitted__DelegateSignature(class UW_ReportModal_C* CallingModal, class FText TextEntry);
	void OnApplyClicked__DelegateSignature(class UW_ReportModal_C* CallingModal, class FText TextEntry);
	void OnOkClicked__DelegateSignature(class UW_ReportModal_C* CallingModal, class FText TextEntry);
};

}


