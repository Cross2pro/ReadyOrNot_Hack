#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass W_RadialSelectionBase.W_RadialSelectionBase_C
class UW_RadialSelectionBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABasePlayer_C*                         PlayerCharacter;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentSelectionIndex;                             // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousSelectionIndex;                            // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_RadialSelectionBase_C* GetDefaultObj();

	void UpdateIcon(int32 SelectionIndex, const struct FSlateBrush& InBrush);
	void Select(int32 Index);
	void Previous(bool* bSuccess, bool bSucceeded);
	void Next(bool* bSuccess);
	void ExecuteRadial();
	void OnDeselected(bool Play_Animation);
	void OnSelected(bool Play_Animation);
	void PreConstruct(bool IsDesignTime);
	void On_Wheel_Created();
	void ExecuteUbergraph_W_RadialSelectionBase(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime);
};

}


