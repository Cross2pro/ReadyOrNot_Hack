#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x410 (0x6D0 - 0x2C0)
// WidgetBlueprintGeneratedClass W_FriendsList_Entry.W_FriendsList_Entry_C
class UW_FriendsList_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Avatar;                                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                       btn_Interact;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Join;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Profile;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Platform;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PlayerName;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Status;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFriend                               Friend;                                            // 0x300(0x1C8)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bFoundLobby;                                       // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3329[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlueprintSessionResult               FriendSession;                                     // 0x4D0(0x120)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  StatusText;                                        // 0x5F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AReadyOrNotGameMode*>           Modes;                                             // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                PlayingMode;                                       // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TimeUntilNextRefresh;                              // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnProfileClicked;                                  // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnJoinClicked;                                     // 0x638(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHovered;                                          // 0x648(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Gamepad;                                        // 0x649(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bJoinable;                                         // 0x64A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   IAR_ViewProfile;                                   // 0x650(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   IAR_Blank;                                         // 0x660(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                          Col_Default;                                       // 0x670(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_Away;                                          // 0x680(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_Online;                                        // 0x690(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_Joinable;                                      // 0x6A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEntryHovered;                                    // 0x6B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEntryUnhovered;                                  // 0x6C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_FriendsList_Entry_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void GetDisplayName(class FString* Display_Name);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void GetUniqueNetId(class FString* Unique_Net_Id_Str);
	void UpdatePlatformIcon(enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetPlatformIcon_NewParam);
	void UpdateStyle(bool CallFunc_BooleanAND_ReturnValue, const struct FSlateColor& CallFunc_GetColorAndOpacity_ReturnValue);
	void UpdateJoinable(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void UpdateStatus(class FText CallFunc_Conv_StringToText_ReturnValue);
	struct FSlateColor GetColorAndOpacity(const struct FLinearColor& ColorAndOpacity, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_SwitchInteger_CmpSuccess);
	void OnImageFetched(class UTexture2D* InTexture);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void ChangePage(class FName PageName);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RefreshFriend(const struct FFriend& Friend);
	void BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__FriendsList_Entry_btn_Interact_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void SetInputMode(bool IsGamepad);
	void BndEvt__FriendsList_Entry_btn_Interact_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__FriendsList_Entry_btn_Interact_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__FriendsList_Entry_btn_Profile_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__FriendsList_Entry_btn_Profile_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature();
	void ForceUnhover();
	void ForceHover();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_W_FriendsList_Entry(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, class UTexture2D* K2Node_CustomEvent_InTexture, bool CallFunc_IsValid_ReturnValue_1, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, class FName K2Node_Event_PageName, const struct FGeometry& K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, const struct FFriend& K2Node_CustomEvent_Friend, class UW_Button_C* K2Node_ComponentBoundEvent_Button_5, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_GetProfileResizedURI_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, bool K2Node_Event_IsGamepad, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_BooleanAND_ReturnValue);
	void OnEntryUnhovered__DelegateSignature(class UW_FriendsList_Entry_C* TriggeringEntry, const struct FFriend& Friend);
	void OnEntryHovered__DelegateSignature(class UW_FriendsList_Entry_C* TriggeringEntry, const struct FFriend& Friend);
	void OnJoinClicked__DelegateSignature(class UW_FriendsList_Entry_C* TriggeringEntry, const struct FFriend& Friend);
	void OnProfileClicked__DelegateSignature(class UW_FriendsList_Entry_C* TriggeringEntry, const struct FFriend& Friend);
};

}


