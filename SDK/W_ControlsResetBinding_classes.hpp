#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x3D0 - 0x2C0)
// WidgetBlueprintGeneratedClass W_ControlsResetBinding.W_ControlsResetBinding_C
class UW_ControlsResetBinding_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Button_Disabled;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Button_Dn;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Button_Hi;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Button_Up;                                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ResetButton;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  BindName;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnResetClicked;                                    // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnResetHovered;                                    // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnResetUnhovered;                                  // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnResetPressed;                                    // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnResetReleased;                                   // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bAxis;                                             // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2A8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            DescriptionText;                                   // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Description;                                       // 0x358(0x18)(Edit, BlueprintVisible)
	TArray<class UW_ControlsBind_C*>             BindingButtons;                                    // 0x370(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	class UFMODEvent*                            ResetBindingClickedSound;                          // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFMODEvent*                            ResetBindingHoveredSound;                          // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FAxisMappingStruct>            AxisMappings;                                      // 0x390(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FActionMappingStruct>          ActionMappings;                                    // 0x3A0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FAxisMappingStruct>            TempRemoveAxisMappings;                            // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FActionMappingStruct>          TempRemoveActionMappings;                          // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_ControlsResetBinding_C* GetDefaultObj();

	void Remove_Key_Bind(class UW_ControlsBind_C* Control_Bind, class UW_ControlsBind_C* TempControlsBind, bool CallFunc_RemoveActionMapping_ReturnValue, bool CallFunc_RemoveAxisMapping_ReturnValue);
	void Update_Input_Mappings(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_RemoveActionMapping_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_RemoveAxisMapping_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Clear_Temp_Input_Mappings();
	void Check_if_None_Key_Is_Assigned_Action(bool* IsNoneKeyAssigned, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EActionMappingFilter>& K2Node_MakeArray_Array, const struct FActionMappingStruct& K2Node_MakeStruct_ActionMappingStruct, bool CallFunc_GetAllActionMappings_ReturnValue, TArray<struct FActionMappingStruct>& CallFunc_GetAllActionMappings_ActionMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FActionMappingStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Check_if_None_Key_Is_Assigned_Axis(bool* IsNoneKeyAssigned, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EAxisMappingFilter>& K2Node_MakeArray_Array, const struct FAxisMappingStruct& K2Node_MakeStruct_AxisMappingStruct, bool CallFunc_GetAllAxisMappings_ReturnValue, TArray<struct FAxisMappingStruct>& CallFunc_GetAllAxisMappings_AxisMappings, int32 CallFunc_Array_Length_ReturnValue, const struct FAxisMappingStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue);
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_ControlsResetBinding(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UW_ControlsBind_C* CallFunc_Array_Get_Item, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnResetReleased__DelegateSignature();
	void OnResetPressed__DelegateSignature();
	void OnResetUnhovered__DelegateSignature();
	void OnResetHovered__DelegateSignature();
	void OnResetClicked__DelegateSignature(class UW_ControlsResetBinding_C* CallingWidget);
};

}


