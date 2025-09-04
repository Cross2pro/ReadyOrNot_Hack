#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2E0 - 0x2C0)
// WidgetBlueprintGeneratedClass W_Simple_Tooltip.W_Simple_Tooltip_C
class UW_Simple_Tooltip_C : public UUserWidget
{
public:
	class UCommonTextBlock*                      Txt_Tooltip;                                       // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_Simple_Tooltip_C* GetDefaultObj();

	class FText Get_txt_Tooltip_Text();
};

}


