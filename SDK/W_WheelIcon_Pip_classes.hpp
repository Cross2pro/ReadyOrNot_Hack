#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass W_WheelIcon_Pip.W_WheelIcon_Pip_C
class UW_WheelIcon_Pip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Sizer;                                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_WheelIcon_Pip_C* GetDefaultObj();

	void OnHighlight(bool Selected);
	void OnUnhighlight(bool Unselected);
	void ExecuteUbergraph_W_WheelIcon_Pip(int32 EntryPoint, bool K2Node_Event_Unselected, bool K2Node_Event_Selected);
};

}


