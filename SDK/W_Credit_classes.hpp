#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x379 (0x641 - 0x2C8)
// WidgetBlueprintGeneratedClass W_Credit.W_Credit_C
class UW_Credit_C : public UBaseCredit
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRevealCreditsTitle;                            // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimRevealLegal;                                   // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimRevealNameOnly;                                // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimRevealHeader;                                  // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Credit;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_CreditsTitle;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Header;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Legal;                                          // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_NameOnly;                                       // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Header;                                            // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Name;                                              // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RoleList;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_CreditsTitle;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Header;                                        // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Legal;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Name;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_NameOnly;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WB_Roles;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  FullName;                                          // 0x368(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class FText>                          Roles;                                             // 0x380(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FST_Style_Text                        NameTextStyle;                                     // 0x390(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FST_Style_Text                        RolesTextStyle;                                    // 0x458(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  CreditHeader;                                      // 0x520(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FST_Credit                            CreditFlow;                                        // 0x538(0x98)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	class UDataTable*                            CreditsDataTable;                                  // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeader;                                          // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_320B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CreditsTitle;                                      // 0x5E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  NameOnly;                                          // 0x5F8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Legal;                                             // 0x610(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsCreditsTitle;                                    // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsLegal;                                           // 0x629(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsNameOnly;                                        // 0x62A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3223[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VisibleMin;                                        // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       VisibleMax;                                        // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsScrollingDown;                                   // 0x640(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Credit_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void IsInBotMargin(bool* IsInBotMargin, const struct FGeometry& CallFunc_GetTickSpaceGeometry_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_InRange_FloatFloat_ReturnValue);
	void IsInTopMargin(bool* InView, const struct FGeometry& CallFunc_GetTickSpaceGeometry_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_InRange_FloatFloat_ReturnValue);
	void Get_Anim_Duration(class UWidgetAnimation* Anim, double* Duration, double Temp_real_Variable, TScriptInterface<class IAnimationDataModel> K2Node_DynamicCast_AsAnimation_Data_Model, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetPlayLength_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	void WhichAnimation(class UWidgetAnimation** Animation, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue_3, bool CallFunc_IsAnimationPlaying_ReturnValue_4);
	void IsAnimating(bool* Animating, bool CallFunc_IsAnyAnimationPlaying_ReturnValue);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_Credit(int32 EntryPoint, class UW_Text_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_Text_C* CallFunc_Create_ReturnValue_1, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class FText Temp_text_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, double CallFunc_Get_Anim_Duration_Duration, double CallFunc_Get_Anim_Duration_Duration_1, double CallFunc_Get_Anim_Duration_Duration_2, double CallFunc_Get_Anim_Duration_Duration_3, double CallFunc_Get_Anim_Duration_Duration_4, double CallFunc_Get_Anim_Duration_Duration_5, double CallFunc_Get_Anim_Duration_Duration_6, double CallFunc_Get_Anim_Duration_Duration_7, double CallFunc_Get_Anim_Duration_Duration_8, double CallFunc_Get_Anim_Duration_Duration_9, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UW_Credits_C* K2Node_DynamicCast_AsW_Credits, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsInBotMargin_IsInBotMargin, bool CallFunc_IsInTopMargin_InView, bool CallFunc_IsInBotMargin_IsInBotMargin_1, bool CallFunc_IsInTopMargin_InView_1, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast_2, float CallFunc_Delay_Duration_ImplicitCast_3, float CallFunc_Delay_Duration_ImplicitCast_4, float CallFunc_Delay_Duration_ImplicitCast_5, float CallFunc_Delay_Duration_ImplicitCast_6, float CallFunc_Delay_Duration_ImplicitCast_7, float CallFunc_Delay_Duration_ImplicitCast_8, float CallFunc_Delay_Duration_ImplicitCast_9, float CallFunc_Delay_Duration_ImplicitCast_10, float CallFunc_Delay_Duration_ImplicitCast_11);
};

}


