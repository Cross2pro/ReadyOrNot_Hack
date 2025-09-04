#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E0 - 0x2D0)
// WidgetBlueprintGeneratedClass W_MunitionsOverviewSlot_Element.W_MunitionsOverviewSlot_Element_C
class UW_MunitionsOverviewSlot_Element_C : public UMunitionsSlotElement
{
public:
	class UHorizontalBox*                        ImageBox;                                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                ImageClass;                                        // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MunitionsOverviewSlot_Element_C* GetDefaultObj();

	void AddNewImage(class UTexture2D* Texture, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UImage* CallFunc_SpawnObject_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
};

}


