#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x3D8 - 0x2C0)
// WidgetBlueprintGeneratedClass W_FireMode.W_FireMode_C
class UW_FireMode_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                FireMode_Icon_Image;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Firemode;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_21A7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Icon;                                              // 0x2E0(0xD0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                          SelectedColor;                                     // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  FireModeText;                                      // 0x3C0(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_FireMode_C* GetDefaultObj();

	void Deselect();
	void Select();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_FireMode(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


