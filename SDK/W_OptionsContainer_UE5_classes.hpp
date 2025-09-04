#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x340 - 0x2C0)
// WidgetBlueprintGeneratedClass W_OptionsContainer_UE5.W_OptionsContainer_UE5_C
class UW_OptionsContainer_UE5_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpacer*                               ContentSpacer;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Dependents;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Dependents;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_DependentLine;                                 // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            SettingsContent;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SettingLabel_C*                     W_SettingLabel;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  InputBindText;                                     // 0x2F8(0x18)(Edit, BlueprintVisible)
	struct FVector2D                             SpacerSize;                                        // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDependentsVisible;                                // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDesignTime;                                       // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  InputBindText_PS5Variant;                          // 0x328(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_OptionsContainer_UE5_C* GetDefaultObj();

	void DisplayDependents(bool ShowDependents, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_OptionsContainer_UE5(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_TextIsNotEmpty_NotEmpty, float Temp_real_Variable, bool Temp_bool_Variable_1, float Temp_real_Variable_1, float Temp_real_Variable_2, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool K2Node_Event_IsDesignTime, float K2Node_Select_Default, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, float K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_BooleanAND_ReturnValue);
};

}


