#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x430 - 0x418)
// WidgetBlueprintGeneratedClass W_GammaSetting.W_GammaSetting_C
class UW_GammaSetting_C : public UGammaSetting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnalogSlider*                         AnalogSlider_57;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar;                                       // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_GammaSetting_C* GetDefaultObj();

	void DoCustomNavigation(enum class EUINavigation Navigation, double Value, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_FClamp_ReturnValue, float CallFunc_GetValue_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_Min_ImplicitCast, double CallFunc_FClamp_Max_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void Construct();
	void BndEvt__W_GammaSetting_AnalogSlider_57_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_W_GammaSetting(int32 EntryPoint, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_ComponentBoundEvent_Value, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_LoadGammaSetting_Gamma, bool CallFunc_LoadGammaSetting_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


