#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C
// (None)

class UClass* UW_Premission_Tablet_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Premission_Tablet_Overlay_C");

	return Clss;
}


// W_Premission_Tablet_Overlay_C W_Premission_Tablet_Overlay.Default__W_Premission_Tablet_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Premission_Tablet_Overlay_C* UW_Premission_Tablet_Overlay_C::GetDefaultObj()
{
	static class UW_Premission_Tablet_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Premission_Tablet_Overlay_C*>(UW_Premission_Tablet_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.SetChatFooterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsChatVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Premission_Tablet_Overlay_C::SetChatFooterVisibility(bool bIsChatVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "SetChatFooterVisibility");

	Params::UW_Premission_Tablet_Overlay_C_SetChatFooterVisibility_Params Parms{};

	Parms.bIsChatVisible = bIsChatVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.Update Roster Buttons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Premission_Tablet_Overlay_C::Update_Roster_Buttons(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_SetVisibilityFromBool_SameBool, bool CallFunc_SetVisibilityFromBool_SameBool_1, bool CallFunc_SetVisibilityFromBool_SameBool_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "Update Roster Buttons");

	Params::UW_Premission_Tablet_Overlay_C_Update_Roster_Buttons_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_SetVisibilityFromBool_SameBool = CallFunc_SetVisibilityFromBool_SameBool;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_1 = CallFunc_SetVisibilityFromBool_SameBool_1;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_2 = CallFunc_SetVisibilityFromBool_SameBool_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.Update Map Buttons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHoveringDeletable                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LegendIsOpen                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsNotDrawingOrPlacingOrHovering                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlacingIcon                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDrawing                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_6                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_7                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_8                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_9                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_5                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_6                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_7                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_8                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_9                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGamepadCrosshairHovering_Hovering                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Premission_Tablet_Overlay_C::Update_Map_Buttons(bool NewLocalVar, bool IsHoveringDeletable, bool LegendIsOpen, bool IsNotDrawingOrPlacingOrHovering, bool IsPlacingIcon, bool IsDrawing, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& Temp_string_Variable_9, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_SetVisibilityFromBool_SameBool, bool CallFunc_SetVisibilityFromBool_SameBool_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, bool CallFunc_SetVisibilityFromBool_SameBool_2, bool CallFunc_SetVisibilityFromBool_SameBool_3, bool CallFunc_SetVisibilityFromBool_SameBool_4, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_6, bool CallFunc_Map_Find_ReturnValue_6, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_7, bool CallFunc_Map_Find_ReturnValue_7, bool CallFunc_SetVisibilityFromBool_SameBool_5, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_8, bool CallFunc_Map_Find_ReturnValue_8, bool CallFunc_SetVisibilityFromBool_SameBool_6, bool CallFunc_SetVisibilityFromBool_SameBool_7, bool CallFunc_SetVisibilityFromBool_SameBool_8, bool CallFunc_IsValid_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_9, bool CallFunc_Map_Find_ReturnValue_9, bool CallFunc_SetVisibilityFromBool_SameBool_9, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsGamepadCrosshairHovering_Hovering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "Update Map Buttons");

	Params::UW_Premission_Tablet_Overlay_C_Update_Map_Buttons_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.IsHoveringDeletable = IsHoveringDeletable;
	Parms.LegendIsOpen = LegendIsOpen;
	Parms.IsNotDrawingOrPlacingOrHovering = IsNotDrawingOrPlacingOrHovering;
	Parms.IsPlacingIcon = IsPlacingIcon;
	Parms.IsDrawing = IsDrawing;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_SetVisibilityFromBool_SameBool = CallFunc_SetVisibilityFromBool_SameBool;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_1 = CallFunc_SetVisibilityFromBool_SameBool_1;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value_5 = CallFunc_Map_Find_Value_5;
	Parms.CallFunc_Map_Find_ReturnValue_5 = CallFunc_Map_Find_ReturnValue_5;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_2 = CallFunc_SetVisibilityFromBool_SameBool_2;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_3 = CallFunc_SetVisibilityFromBool_SameBool_3;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_4 = CallFunc_SetVisibilityFromBool_SameBool_4;
	Parms.CallFunc_Map_Find_Value_6 = CallFunc_Map_Find_Value_6;
	Parms.CallFunc_Map_Find_ReturnValue_6 = CallFunc_Map_Find_ReturnValue_6;
	Parms.CallFunc_Map_Find_Value_7 = CallFunc_Map_Find_Value_7;
	Parms.CallFunc_Map_Find_ReturnValue_7 = CallFunc_Map_Find_ReturnValue_7;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_5 = CallFunc_SetVisibilityFromBool_SameBool_5;
	Parms.CallFunc_Map_Find_Value_8 = CallFunc_Map_Find_Value_8;
	Parms.CallFunc_Map_Find_ReturnValue_8 = CallFunc_Map_Find_ReturnValue_8;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_6 = CallFunc_SetVisibilityFromBool_SameBool_6;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_7 = CallFunc_SetVisibilityFromBool_SameBool_7;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_8 = CallFunc_SetVisibilityFromBool_SameBool_8;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value_9 = CallFunc_Map_Find_Value_9;
	Parms.CallFunc_Map_Find_ReturnValue_9 = CallFunc_Map_Find_ReturnValue_9;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_9 = CallFunc_SetVisibilityFromBool_SameBool_9;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsGamepadCrosshairHovering_Hovering = CallFunc_IsGamepadCrosshairHovering_Hovering;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.Update Brief Buttons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlaying                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_on_Audio_Page_OnAudioPage                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEnabledMediaPlayer_MediaPlayerEnabled                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAudioPlaying_IsPlaying                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      CallFunc_Map_Find_Value_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityFromBool_SameBool_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Premission_Tablet_Overlay_C::Update_Brief_Buttons(bool IsPlaying, const class FString& Temp_string_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& Temp_string_Variable_1, bool CallFunc_Is_on_Audio_Page_OnAudioPage, bool CallFunc_HasEnabledMediaPlayer_MediaPlayerEnabled, const class FString& Temp_string_Variable_2, bool CallFunc_BooleanAND_ReturnValue, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsAudioPlaying_IsPlaying, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_SetVisibilityFromBool_SameBool, bool CallFunc_SetVisibilityFromBool_SameBool_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_SetVisibilityFromBool_SameBool_2, bool CallFunc_SetVisibilityFromBool_SameBool_3, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, bool CallFunc_SetVisibilityFromBool_SameBool_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "Update Brief Buttons");

	Params::UW_Premission_Tablet_Overlay_C_Update_Brief_Buttons_Params Parms{};

	Parms.IsPlaying = IsPlaying;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_Is_on_Audio_Page_OnAudioPage = CallFunc_Is_on_Audio_Page_OnAudioPage;
	Parms.CallFunc_HasEnabledMediaPlayer_MediaPlayerEnabled = CallFunc_HasEnabledMediaPlayer_MediaPlayerEnabled;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsAudioPlaying_IsPlaying = CallFunc_IsAudioPlaying_IsPlaying;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_SetVisibilityFromBool_SameBool = CallFunc_SetVisibilityFromBool_SameBool;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_1 = CallFunc_SetVisibilityFromBool_SameBool_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_2 = CallFunc_SetVisibilityFromBool_SameBool_2;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_3 = CallFunc_SetVisibilityFromBool_SameBool_3;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.CallFunc_SetVisibilityFromBool_SameBool_4 = CallFunc_SetVisibilityFromBool_SameBool_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.HandleInputChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Premission_Tablet_Overlay_C::HandleInputChange(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "HandleInputChange");

	Params::UW_Premission_Tablet_Overlay_C_HandleInputChange_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.SetVisibilityFromBool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*           Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Bool                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        VisibilityIfTrue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        VisibilityIfFalse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SameBool                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Premission_Tablet_Overlay_C::SetVisibilityFromBool(class UCommonUserWidget* Widget, bool Bool, enum class ESlateVisibility VisibilityIfTrue, enum class ESlateVisibility VisibilityIfFalse, bool* SameBool, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "SetVisibilityFromBool");

	Params::UW_Premission_Tablet_Overlay_C_SetVisibilityFromBool_Params Parms{};

	Parms.Widget = Widget;
	Parms.Bool = Bool;
	Parms.VisibilityIfTrue = VisibilityIfTrue;
	Parms.VisibilityIfFalse = VisibilityIfFalse;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SameBool != nullptr)
		*SameBool = Parms.SameBool;

}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.ScreenChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Premission_Tablet_Overlay_C::ScreenChange(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "ScreenChange");

	Params::UW_Premission_Tablet_Overlay_C_ScreenChange_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.SubscribeToTabletEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PreMission_Tablet_C*      Tablet                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Premission_Tablet_Overlay_C::SubscribeToTabletEvents(class UW_PreMission_Tablet_C* Tablet, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "SubscribeToTabletEvents");

	Params::UW_Premission_Tablet_Overlay_C_SubscribeToTabletEvents_Params Parms{};

	Parms.Tablet = Tablet;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Premission_Tablet_Overlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Premission_Tablet_Overlay.W_Premission_Tablet_Overlay_C.ExecuteUbergraph_W_Premission_Tablet_Overlay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Premission_Tablet_Overlay_C::ExecuteUbergraph_W_Premission_Tablet_Overlay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Premission_Tablet_Overlay_C", "ExecuteUbergraph_W_Premission_Tablet_Overlay");

	Params::UW_Premission_Tablet_Overlay_C_ExecuteUbergraph_W_Premission_Tablet_Overlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


