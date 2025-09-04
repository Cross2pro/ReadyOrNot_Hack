#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x400 - 0x3F0)
// WidgetBlueprintGeneratedClass W_SWATCommandStatus_V2.W_SWATCommandStatus_V2_C
class UW_SWATCommandStatus_V2_C : public USwatCommandStatusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonVisibilitySwitcher*             IconSwitcher;                                      // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SWATCommandStatus_V2_C* GetDefaultObj();

	void ShoulderButtonPressed(bool Pressed);
	void ExecuteUbergraph_W_SWATCommandStatus_V2(int32 EntryPoint, bool K2Node_Event_Pressed);
};

}


