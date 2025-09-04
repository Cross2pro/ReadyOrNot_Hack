#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3E0 - 0x3C0)
// WidgetBlueprintGeneratedClass W_ConsoleHotkey.W_ConsoleHotkey_C
class UW_ConsoleHotkey_C : public UConsoleHotkey
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonVisibilitySwitcher*             IconSwitcher;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputAction;                                       // 0x3D0(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_ConsoleHotkey_C* GetDefaultObj();

	void Construct();
	void ShoulderButtonPressed(bool Pressed);
	void ExecuteUbergraph_W_ConsoleHotkey(int32 EntryPoint, bool K2Node_Event_Pressed);
};

}


