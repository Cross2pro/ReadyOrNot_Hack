#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x3F8 - 0x2C0)
// WidgetBlueprintGeneratedClass W_PremissionTablet_Button.W_PremissionTablet_Button_C
class UW_PremissionTablet_Button_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Button;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_1;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG;                                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG_1;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_icon;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           PopoutAnchorLeft;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           PopoutAnchorRight;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Label;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Label2;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x310(0x18)(Edit, BlueprintVisible)
	class UTexture2D*                            Icon;                                              // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                ID;                                                // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_175A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Col_Active;                                        // 0x354(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_ActiveIcon;                                    // 0x364(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_Hover;                                         // 0x374(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_Inactive;                                      // 0x384(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_175D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             HoverIconScale;                                    // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               PopoutWidget;                                      // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PopoutWidgetClass;                                 // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_C*                TabletWidget;                                      // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         PopoutLeft;                                        // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PoputAlwaysOpen;                                   // 0x3C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1776[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnActiveStateChange;                               // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PremissionTablet_Button_C* GetDefaultObj();

	void ClickButton(class UW_PremissionTablet_Button_C* Button, class UW_PreMission_Tablet_C* CallFunc_WidgetGetParentOfClass_ReturnValue);
	void GetIsActive(bool* IsActive);
	void SpawnPopOut(bool Open, bool Temp_bool_Variable, class UMenuAnchor* K2Node_Select_Default, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FAnchorData& CallFunc_GetLayout_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue);
	void SetHovered(bool Hovered);
	void SetActive(bool Active, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, class UMenuAnchor* K2Node_Select_Default, class UMenuAnchor* K2Node_Select_Default_1);
	void Construct();
	void BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void PreConstruct(bool IsDesignTime);
	void AddPopout();
	void BndEvt__W_PremissionTablet_Button_PopoutAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PremissionTablet_Button_btn_Button_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature();
	void BndEvt__W_PremissionTablet_Button_PopoutAnchorLeft_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void OnInitialized();
	void ExecuteUbergraph_W_PremissionTablet_Button(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_bIsOpen_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_bIsOpen, bool Temp_bool_Variable, class UMenuAnchor* K2Node_Select_Default);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnActiveStateChange__DelegateSignature(bool Active);
	void OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
};

}


