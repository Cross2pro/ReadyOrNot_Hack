#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x16A0 - 0x15D8)
// WidgetBlueprintGeneratedClass W_Briefing_Media_GalleryEntry.W_Briefing_Media_GalleryEntry_C
class UW_Briefing_Media_GalleryEntry_C : public UCommonButtonImplementation
{
public:
	uint8                                        Pad_1C43[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Highlight;                                     // 0x15E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      Img_Image;                                         // 0x15F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Entry;                                        // 0x15F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMissionPhoto                         MissionPhotoData;                                  // 0x1600(0x58)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x1658(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                            Image;                                             // 0x1668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x1670(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bHighlighted;                                      // 0x1688(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelect;                                          // 0x1690(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Briefing_Media_GalleryEntry_C* GetDefaultObj();

	void SetHighlight(bool Highlighted);
	void UpdateVisualStyle(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetSelected(bool Selected);
	void Construct();
	void BP_OnClicked();
	void BP_OnSelected();
	void BP_OnHovered();
	void ExecuteUbergraph_W_Briefing_Media_GalleryEntry(int32 EntryPoint);
	void OnSelect__DelegateSignature(class UW_Briefing_Media_GalleryEntry_C* Gallery_Entry);
	void OnClick__DelegateSignature(class UW_Briefing_Media_GalleryEntry_C* GalleryEntry);
};

}


