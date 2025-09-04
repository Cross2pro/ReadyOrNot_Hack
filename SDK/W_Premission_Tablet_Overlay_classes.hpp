#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x328 - 0x2E8)
// WidgetBlueprintGeneratedClass W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C
class UW_Premission_Tablet_Overlay_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_ScreenFooter_C*                     BriefFooter;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ScreenFooter_C*                     ChatFooter;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ScreenFooter_C*                     MapFooter;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ScreenFooter_C*                     RosterFooter;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ScreenFooter_C*                     TeamViewFooter;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_C*                PremissionTablet;                                  // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ScreenFooter_C*                     ActiveFooter;                                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Premission_Tablet_Overlay_C* GetDefaultObj();

	void SetChatFooterVisibility(bool bIsChatVisible);
	void Update_Roster_Buttons(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_SetVisibilityFromBool_SameBool, bool CallFunc_SetVisibilityFromBool_SameBool_1, bool CallFunc_SetVisibilityFromBool_SameBool_2);
	void Update_Map_Buttons(bool NewLocalVar, bool IsHoveringDeletable, bool LegendIsOpen, bool IsNotDrawingOrPlacingOrHovering, bool IsPlacingIcon, bool IsDrawing, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& Temp_string_Variable_9, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_SetVisibilityFromBool_SameBool, bool CallFunc_SetVisibilityFromBool_SameBool_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, bool CallFunc_SetVisibilityFromBool_SameBool_2, bool CallFunc_SetVisibilityFromBool_SameBool_3, bool CallFunc_SetVisibilityFromBool_SameBool_4, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_6, bool CallFunc_Map_Find_ReturnValue_6, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_7, bool CallFunc_Map_Find_ReturnValue_7, bool CallFunc_SetVisibilityFromBool_SameBool_5, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_8, bool CallFunc_Map_Find_ReturnValue_8, bool CallFunc_SetVisibilityFromBool_SameBool_6, bool CallFunc_SetVisibilityFromBool_SameBool_7, bool CallFunc_SetVisibilityFromBool_SameBool_8, bool CallFunc_IsValid_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_9, bool CallFunc_Map_Find_ReturnValue_9, bool CallFunc_SetVisibilityFromBool_SameBool_9, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsGamepadCrosshairHovering_Hovering);
	void Update_Brief_Buttons(bool IsPlaying, const class FString& Temp_string_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& Temp_string_Variable_1, bool CallFunc_Is_on_Audio_Page_OnAudioPage, bool CallFunc_HasEnabledMediaPlayer_MediaPlayerEnabled, const class FString& Temp_string_Variable_2, bool CallFunc_BooleanAND_ReturnValue, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsAudioPlaying_IsPlaying, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_SetVisibilityFromBool_SameBool, bool CallFunc_SetVisibilityFromBool_SameBool_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_SetVisibilityFromBool_SameBool_2, bool CallFunc_SetVisibilityFromBool_SameBool_3, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, bool CallFunc_SetVisibilityFromBool_SameBool_4);
	void HandleInputChange(enum class ECommonInputType bNewInputType);
	void SetVisibilityFromBool(class UCommonUserWidget* Widget, bool Bool, enum class ESlateVisibility VisibilityIfTrue, enum class ESlateVisibility VisibilityIfFalse, bool* SameBool, bool CallFunc_IsValid_ReturnValue);
	void ScreenChange(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3);
	void SubscribeToTabletEvents(class UW_PreMission_Tablet_C* Tablet, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void Construct();
	void ExecuteUbergraph_W_Premission_Tablet_Overlay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
};

}


