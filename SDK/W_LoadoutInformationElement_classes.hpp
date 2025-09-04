#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x114 (0x3FC - 0x2E8)
// WidgetBlueprintGeneratedClass W_LoadoutInformationElement.W_LoadoutInformationElement_C
class UW_LoadoutInformationElement_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border;                                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Type;                                              // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  AttachmentName;                                    // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  AttachmentType;                                    // 0x320(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  EffectsName;                                       // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  EffectsType;                                       // 0x350(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          BorderColorAttachment;                             // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BorderColorEffects;                                // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           TypeTextColorAttachment;                           // 0x388(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TypeTextColorEffects;                              // 0x39C(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TypeTextColorEffectsPos;                           // 0x3B0(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TypeTextColorEffectsNeg;                           // 0x3C4(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsEffect;                                         // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2547[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BorderColorEffectsPos;                             // 0x3DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BorderColorEffectsNeg;                             // 0x3EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_LoadoutInformationElement_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_LoadoutInformationElement(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


