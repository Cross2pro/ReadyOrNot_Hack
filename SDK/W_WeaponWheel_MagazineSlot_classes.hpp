#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2E0 - 0x2C0)
// WidgetBlueprintGeneratedClass W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C
class UW_WeaponWheel_MagazineSlot_C : public UUserWidget
{
public:
	class UHorizontalBox*                        Mags_Container;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        MagsOutline_Container;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UImage*>                        Mags;                                              // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_WeaponWheel_MagazineSlot_C* GetDefaultObj();

	void GetMag(int32 Index, class UImage** Return_Value, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UImage* CallFunc_Array_Get_Item);
	void CreateMag(class UObject* MagOutlineIcon, class UTexture* MagIconEmpty, class UTexture* MagIconFull, double IconSize);
	void AddMagOutline(class UObject* Icon, double IconSize, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UImage* CallFunc_SpawnObject_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast);
	void AddMag(class UTexture* IconEmpty, class UTexture* Icon_Full, double IconSize, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FMargin& K2Node_MakeStruct_Margin, class UImage* CallFunc_SpawnObject_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast);
};

}


