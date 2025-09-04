#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x459 - 0x410)
// WidgetBlueprintGeneratedClass W_MainMenu_Overlay.W_MainMenu_Overlay_C
class UW_MainMenu_Overlay_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn;                                            // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFriendsList_C*                        FriendsList;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CurrentUserVisualization_C*         W_CurrentUserVisualization;                        // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DLC_Button_C*                       W_DLC_HomeInvasion_Button;                         // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DLC_Button_C*                       W_DLC_Maritime_Button;                             // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ScreenFooter_C*                     W_ScreenFooter;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         WidgetStack;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidget*              MainMenu;                                          // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bFriendsListOffline;                               // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MainMenu_Overlay_C* GetDefaultObj();

	void Switch_to_Main_Menu();
	void Set_EOS_Button_Visibility(bool CallFunc_Not_PreBool_ReturnValue, class UEOSMultiplayerSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsAccountLinked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsFriendListEmpty(int32 CallFunc_GetNumberOfFriends_Count, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void FooterButtonClicked(class UW_ScreenFooterEntry_C* FooterEntry);
	void FriendsListUpdate(int32 Number_of_Friends);
	void OverlayWidgetActivated();
	void Construct();
	void OnOverlayWidgetDeactivated();
	void BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_0_ViewableProfileHovered__DelegateSignature(const struct FFriend& Friend);
	void BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_1_NonViewableProfileHovered__DelegateSignature(const struct FFriend& Friend);
	void OnFriendsListConnectionUpdate(bool Offline);
	void ExecuteUbergraph_W_MainMenu_Overlay(int32 EntryPoint, int32 K2Node_CustomEvent_Number_of_Friends, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetNumberOfFriends_Count, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UW_ScreenFooterEntry_C* K2Node_CustomEvent_FooterEntry, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_IsFriendListEmpty_ReturnValue, bool CallFunc_IsFriendListEmpty_ReturnValue_1, bool CallFunc_IsInitialOptionsSet_ReturnValue, const struct FFriend& K2Node_ComponentBoundEvent_Friend_1, class FText CallFunc_FormatViewProfileText_FormattedText, const struct FFriend& K2Node_ComponentBoundEvent_Friend, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsHiddenEntry_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_ShowEOSSocialOverlay_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_Offline);
};

}


