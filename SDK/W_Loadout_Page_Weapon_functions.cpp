#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C
// (None)

class UClass* UW_Loadout_Page_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Page_Weapon_C");

	return Clss;
}


// W_Loadout_Page_Weapon_C W_Loadout_Page_Weapon.Default__W_Loadout_Page_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Page_Weapon_C* UW_Loadout_Page_Weapon_C::GetDefaultObj()
{
	static class UW_Loadout_Page_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Page_Weapon_C*>(UW_Loadout_Page_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::GetFocusTarget(class UWidget** Focus, class UWidget* CallFunc_GetFocusTarget_Focus, class UWidget* CallFunc_GetFocusTarget_Focus_1, class FName CallFunc_GetActiveTab_ReturnValue, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "GetFocusTarget");

	Params::UW_Loadout_Page_Weapon_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_GetFocusTarget_Focus_1 = CallFunc_GetFocusTarget_Focus_1;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Page_WeaponEdit_C*K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Page_WeaponEdit_C*K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit_1                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>CallFunc_BackPage_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BackPage(bool* Handled, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Loadout_Page_WeaponEdit_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UW_Loadout_Page_WeaponEdit_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IReadyOrNotUI_C> CallFunc_BackPage_self_CastInput, bool CallFunc_BackPage_Handled, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BackPage");

	Params::UW_Loadout_Page_Weapon_C_BackPage_Params Parms{};

	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit = K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit_1 = K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BackPage_self_CastInput = CallFunc_BackPage_self_CastInput;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.IsPrimaryActiveTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::IsPrimaryActiveTab(bool* Active, class FName CallFunc_GetActiveTab_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "IsPrimaryActiveTab");

	Params::UW_Loadout_Page_Weapon_C_IsPrimaryActiveTab_Params Parms{};

	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Loadout_Page_Weapon_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BP_GetDesiredFocusTarget");

	Params::UW_Loadout_Page_Weapon_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.RegisterTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::RegisterTabs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "RegisterTabs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::UpdateStyle(bool bUseGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "UpdateStyle");

	Params::UW_Loadout_Page_Weapon_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "Reveal");

	Params::UW_Loadout_Page_Weapon_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "Hide");

	Params::UW_Loadout_Page_Weapon_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "SetInputMode");

	Params::UW_Loadout_Page_Weapon_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_Weapon_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "UpdateActiveLoadout");

	Params::UW_Loadout_Page_Weapon_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_Weapon_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_Page_Weapon_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_WeaponEdit_K2Node_ComponentBoundEvent_0_OnCurrentWeaponClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Secondary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemClass              ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_WeaponEdit_K2Node_ComponentBoundEvent_0_OnCurrentWeaponClicked__DelegateSignature(bool Secondary, enum class EItemClass ItemClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_WeaponEdit_K2Node_ComponentBoundEvent_0_OnCurrentWeaponClicked__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_Weapon_WeaponEdit_K2Node_ComponentBoundEvent_0_OnCurrentWeaponClicked__DelegateSignature_Params Parms{};

	Parms.Secondary = Secondary;
	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "InputMethodChanged");

	Params::UW_Loadout_Page_Weapon_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ABaseWeapon*                 Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature(class ABaseWeapon* Weapon, class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_5_OnWeaponUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_5_OnWeaponUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_5_OnWeaponUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TSubclassOf<class ABaseWeapon>     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature(TSubclassOf<class ABaseWeapon> Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_1_OnCurrentWeaponClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Secondary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemClass              ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_1_OnCurrentWeaponClicked__DelegateSignature(bool Secondary, enum class EItemClass ItemClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_1_OnCurrentWeaponClicked__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_1_OnCurrentWeaponClicked__DelegateSignature_Params Parms{};

	Parms.Secondary = Secondary;
	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "ChangePage");

	Params::UW_Loadout_Page_Weapon_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.TabSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::TabSwitched(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "TabSwitched");

	Params::UW_Loadout_Page_Weapon_C_TabSwitched_Params Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_2_OnAttachmentHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWeaponAttachment*           Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_2_OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_2_OnAttachmentHovered__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_2_OnAttachmentHovered__DelegateSignature_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.AttachmentType = AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_3_OnAttachmentHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWeaponAttachment*           Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_3_OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_3_OnAttachmentHovered__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_3_OnAttachmentHovered__DelegateSignature_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.AttachmentType = AttachmentType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_Page_Weapon_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_7_OnAttachmentUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_7_OnAttachmentUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_7_OnAttachmentUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_8_OnAttachmentUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_8_OnAttachmentUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_8_OnAttachmentUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_Carousel_K2Node_ComponentBoundEvent_9_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_Carousel_K2Node_ComponentBoundEvent_9_OnTabSelected__DelegateSignature(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_Carousel_K2Node_ComponentBoundEvent_9_OnTabSelected__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_Weapon_Carousel_K2Node_ComponentBoundEvent_9_OnTabSelected__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_10_OnCurrentWeaponHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_10_OnCurrentWeaponHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_10_OnCurrentWeaponHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_11_OnCurrentWeaponHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_11_OnCurrentWeaponHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_11_OnCurrentWeaponHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_WeaponList_K2Node_ComponentBoundEvent_12_OnWidgetActivationChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_WeaponList_K2Node_ComponentBoundEvent_12_OnWidgetActivationChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_WeaponList_K2Node_ComponentBoundEvent_12_OnWidgetActivationChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_Carousel_1_K2Node_ComponentBoundEvent_13_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_Carousel_1_K2Node_ComponentBoundEvent_13_OnTabSelected__DelegateSignature(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_Carousel_1_K2Node_ComponentBoundEvent_13_OnTabSelected__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_Weapon_Carousel_1_K2Node_ComponentBoundEvent_13_OnTabSelected__DelegateSignature_Params Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_Ammo_K2Node_ComponentBoundEvent_14_OnMunitionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Loadout_Munitions_C*      TriggeringList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_Ammo_K2Node_ComponentBoundEvent_14_OnMunitionHovered__DelegateSignature(class UW_Loadout_Munitions_C* TriggeringList, class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_Ammo_K2Node_ComponentBoundEvent_14_OnMunitionHovered__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_Weapon_Ammo_K2Node_ComponentBoundEvent_14_OnMunitionHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringList = TriggeringList;
	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_Deployables_K2Node_ComponentBoundEvent_15_OnMunitionHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Loadout_Munitions_C*      TriggeringList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_Deployables_K2Node_ComponentBoundEvent_15_OnMunitionHovered__DelegateSignature(class UW_Loadout_Munitions_C* TriggeringList, class UW_LoadoutSlot_v2_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_Deployables_K2Node_ComponentBoundEvent_15_OnMunitionHovered__DelegateSignature");

	Params::UW_Loadout_Page_Weapon_C_BndEvt__W_Loadout_Page_Weapon_Deployables_K2Node_ComponentBoundEvent_15_OnMunitionHovered__DelegateSignature_Params Parms{};

	Parms.TriggeringList = TriggeringList;
	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_16_OnItemUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_16_OnItemUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_16_OnItemUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_17_OnItemUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_17_OnItemUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_17_OnItemUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.EnableSwitcherFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Weapon_C::EnableSwitcherFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "EnableSwitcherFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C.ExecuteUbergraph_W_Loadout_Page_Weapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutCategory        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutCategory        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDescendantScrollDestinationTemp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDescendantScrollDestinationTemp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDescendantScrollDestinationTemp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDescendantScrollDestinationTemp_byte_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// bool                               K2Node_ComponentBoundEvent_Secondary_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemClass              K2Node_ComponentBoundEvent_ItemClass_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon*                 K2Node_ComponentBoundEvent_Weapon_1                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_2                      (ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDescendantScrollDestinationK2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     K2Node_ComponentBoundEvent_Weapon                                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               CallFunc_GetItemType_Item_Type                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Secondary                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemClass              K2Node_ComponentBoundEvent_ItemClass                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_TabId                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           K2Node_ComponentBoundEvent_Attachment_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   K2Node_ComponentBoundEvent_AttachmentType_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           K2Node_ComponentBoundEvent_Attachment                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   K2Node_ComponentBoundEvent_AttachmentType                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Page_WeaponEdit_C*K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutCategory        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon*                 CallFunc_GetWeaponObject_WeaponObject                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon*                 CallFunc_GetWeaponObject_WeaponObject_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_Select_Default_3                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Munitions_C*      K2Node_ComponentBoundEvent_TriggeringList_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Munitions_C*      K2Node_ComponentBoundEvent_TriggeringList                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         K2Node_ComponentBoundEvent_TriggeringSlot                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Weapon_C::ExecuteUbergraph_W_Loadout_Page_Weapon(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class ELoadoutCategory Temp_byte_Variable, enum class ELoadoutCategory Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ECommonInputType Temp_byte_Variable_2, enum class EDescendantScrollDestination Temp_byte_Variable_3, enum class EDescendantScrollDestination Temp_byte_Variable_4, enum class EDescendantScrollDestination Temp_byte_Variable_5, enum class EDescendantScrollDestination Temp_byte_Variable_6, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue_2, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, bool K2Node_ComponentBoundEvent_Secondary_1, enum class EItemClass K2Node_ComponentBoundEvent_ItemClass_1, bool Temp_bool_Variable_2, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class ABaseWeapon* K2Node_ComponentBoundEvent_Weapon_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EDescendantScrollDestination K2Node_Select_Default, TSubclassOf<class ABaseWeapon> K2Node_ComponentBoundEvent_Weapon, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EItemType CallFunc_GetItemType_Item_Type, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, bool K2Node_ComponentBoundEvent_Secondary, enum class EItemClass K2Node_ComponentBoundEvent_ItemClass, bool CallFunc_BackPage_Handled, class FName K2Node_Event_PageName, bool CallFunc_SelectTabByID_ReturnValue, class FName K2Node_CustomEvent_TabId, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, bool CallFunc_EqualEqual_NameName_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UWidget* CallFunc_GetFocusTarget_Focus, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class UWeaponAttachment* K2Node_ComponentBoundEvent_Attachment_1, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType_1, class UWeaponAttachment* K2Node_ComponentBoundEvent_Attachment, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5, bool CallFunc_IsActivated_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7, class FName K2Node_Event_OptionNameID, bool CallFunc_EqualEqual_NameName_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue, class UW_Loadout_Page_WeaponEdit_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BackPage_Handled_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ELoadoutCategory K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8, class FName K2Node_ComponentBoundEvent_TabId_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9, class FName CallFunc_GetActiveTab_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class ABaseWeapon* CallFunc_GetWeaponObject_WeaponObject, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABaseWeapon* CallFunc_GetWeaponObject_WeaponObject_1, class UFMODEvent* K2Node_Select_Default_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13, class FName K2Node_ComponentBoundEvent_TabId, class UW_Loadout_Munitions_C* K2Node_ComponentBoundEvent_TriggeringList_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Loadout_Munitions_C* K2Node_ComponentBoundEvent_TriggeringList, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetFocusTarget_Focus_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Weapon_C", "ExecuteUbergraph_W_Loadout_Page_Weapon");

	Params::UW_Loadout_Page_Weapon_C_ExecuteUbergraph_W_Loadout_Page_Weapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_ComponentBoundEvent_Secondary_1 = K2Node_ComponentBoundEvent_Secondary_1;
	Parms.K2Node_ComponentBoundEvent_ItemClass_1 = K2Node_ComponentBoundEvent_ItemClass_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_ComponentBoundEvent_Weapon_1 = K2Node_ComponentBoundEvent_Weapon_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_2 = K2Node_ComponentBoundEvent_TriggeringSlot_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Weapon = K2Node_ComponentBoundEvent_Weapon;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetItemType_Item_Type = CallFunc_GetItemType_Item_Type;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1;
	Parms.K2Node_ComponentBoundEvent_Secondary = K2Node_ComponentBoundEvent_Secondary;
	Parms.K2Node_ComponentBoundEvent_ItemClass = K2Node_ComponentBoundEvent_ItemClass;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.K2Node_CustomEvent_TabId = K2Node_CustomEvent_TabId;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Attachment_1 = K2Node_ComponentBoundEvent_Attachment_1;
	Parms.K2Node_ComponentBoundEvent_AttachmentType_1 = K2Node_ComponentBoundEvent_AttachmentType_1;
	Parms.K2Node_ComponentBoundEvent_Attachment = K2Node_ComponentBoundEvent_Attachment;
	Parms.K2Node_ComponentBoundEvent_AttachmentType = K2Node_ComponentBoundEvent_AttachmentType;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit = K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BackPage_Handled_1 = CallFunc_BackPage_Handled_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8;
	Parms.K2Node_ComponentBoundEvent_TabId_1 = K2Node_ComponentBoundEvent_TabId_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetWeaponObject_WeaponObject = CallFunc_GetWeaponObject_WeaponObject;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetWeaponObject_WeaponObject_1 = CallFunc_GetWeaponObject_WeaponObject_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TriggeringList_1 = K2Node_ComponentBoundEvent_TriggeringList_1;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot_1 = K2Node_ComponentBoundEvent_TriggeringSlot_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TriggeringList = K2Node_ComponentBoundEvent_TriggeringList;
	Parms.K2Node_ComponentBoundEvent_TriggeringSlot = K2Node_ComponentBoundEvent_TriggeringSlot;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFocusTarget_Focus_1 = CallFunc_GetFocusTarget_Focus_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


