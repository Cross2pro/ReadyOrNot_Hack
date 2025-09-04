#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x590 - 0x418)
// WidgetBlueprintGeneratedClass W_RosterReview.W_RosterReview_C
class UW_RosterReview_C : public URosterReviewWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRevealNotice;                                  // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x428(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BackgroundImage;                                   // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Events;                                         // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_SquadMembers;                                   // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_NoticeBackground;                              // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Notice;                                            // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Rtxt_NoticeText;                                   // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll;                                            // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_NoticeTitle;                                   // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Notice;                                         // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterReview_EventCard_C*           W_RosterReview_EventCard_1;                        // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterReview_EventCard_C*           W_RosterReview_EventCard_2;                        // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterReview_EventCard_C*           W_RosterReview_EventCard_3;                        // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterReview_EventCard_C*           W_RosterReview_EventCard_4;                        // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterReview_EventCard_C*           W_RosterReview_EventCard_C;                        // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterReview_EventCard_C*           W_RosterReview_EventCard_C_1;                      // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterReview_EventCard_C*           W_RosterReview_EventCard_C_2;                      // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        OutcomeValue;                                      // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3775[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URosterCharacter*                      EventCharacter;                                    // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UW_RosterReview_EventCard_C*           EventCard;                                         // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_RosterReview_EventCard_C*>   SquadCards;                                        // 0x4D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UW_RosterReview_EventCard_C*>   EventCards;                                        // 0x4E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       NextRevealDelay;                                   // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       ScrollNavItems;                                    // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CurrentScrollIndex;                                // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowScroll;                                       // 0x50C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3787[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DesiredScrollOffset;                               // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ScrollAnimProgress;                                // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UWidget*, double>                 ScrollNavOffsetMap;                                // 0x520(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       CurrentOffset;                                     // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimateScroll;                                     // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastScrollIndex;                                   // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ScrollingPrevious;                                 // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ScrollingNext;                                     // 0x581(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            TherapistNoticeSound;                              // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_RosterReview_C* GetDefaultObj();

	void NavigateNext(bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_Array_Get_Item, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double K2Node_VariableSet_CurrentOffset_ImplicitCast);
	void NavigatePrevious(bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_Array_Get_Item, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double K2Node_VariableSet_CurrentOffset_ImplicitCast);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void AddEventCards(TArray<class URosterCharacter*>& Characters, class UHorizontalBox* HorizontalBox, class UW_RosterReview_EventCard_C* Widget, class UW_RosterSelection_MiniCard_C* CardWidget, bool IsFirst, class URosterCharacter* Character, class UW_RosterReview_EventCard_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class URosterCharacter* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_MakeStruct_Left_ImplicitCast);
	void AddSquadCards(TArray<class URosterCharacter*>& Characters, class UWidget* Container, class UHorizontalBox* HorizontalBox, class UW_RosterReview_EventCard_C* Widget, class UW_RosterSelection_MiniCard_C* CardWidget, bool IsFirst, class URosterCharacter* Character, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_RosterReview_EventCard_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class URosterCharacter* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_MakeStruct_Left_ImplicitCast);
	void Finished_3686F5CB4ADA0FFCB83EB0827362E0B6();
	void Construct();
	void AddRemovedCharacters(TArray<class URosterCharacter*>& Characters);
	void AddIncapacitatedCharacters(TArray<class URosterCharacter*>& Characters);
	void AddReturningCharacters(TArray<class URosterCharacter*>& Characters);
	void AddSquadCharacters(TMap<enum class ERosterSquadPosition, class URosterCharacter*>& Characters);
	void SetupEventChar();
	void BP_OnActivated();
	void OnInitialized();
	void ShowNotice();
	void PreConstruct(bool IsDesignTime);
	void DisplayEventCards();
	void NextEvent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetupScrollNavigation();
	void ExecuteUbergraph_W_RosterReview(int32 EntryPoint, double CallFunc_Conv_IntToDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, TMap<enum class ERosterSquadPosition, class URosterCharacter*> K2Node_Event_Characters, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<class URosterCharacter*>& CallFunc_Map_Values_Values, TArray<class URosterCharacter*>& K2Node_Event_Characters_1, TArray<class URosterCharacter*>& K2Node_Event_Characters_2, int32 Temp_int_Loop_Counter_Variable, TArray<class URosterCharacter*>& K2Node_Event_Characters_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UW_RosterReview_EventCard_C* CallFunc_Array_Get_Item, TScriptInterface<class IReadyOrNotUI_C> CallFunc_Reveal_self_CastInput, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_RosterReview_EventCard_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double CallFunc_Ease_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, class UWidget* CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, class FText CallFunc_GetTherapistReminderPrompt_ReturnValue, bool CallFunc_TextIsNotEmpty_NotEmpty, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, double CallFunc_Map_Add_Value_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double K2Node_VariableSet_CurrentOffset_ImplicitCast);
};

}


