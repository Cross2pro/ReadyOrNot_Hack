#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x3C0 - 0x2C0)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_EntryPoint_Selection.W_PreMission_Tablet_EntryPoint_Selection_C
class UW_PreMission_Tablet_EntryPoint_Selection_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimShowInfo;                                      // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Text_C*                             Lbl_Selected;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_EntryPoint;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_FloorLocation;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       InfoFadeDelay;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InfoVisible;                                       // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEntryPoint                           PointData;                                         // 0x300(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                CurrentMissionURL;                                 // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UW_PreMission_PlanningMap_C*           W_Pre_Mission_Planning_Map;                        // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_EntryPoint_Selection_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void UpdatePointInfo(const struct FEntryPoint& EntryPointData, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void HidePointInfo();
	void SetInputMode(bool IsGamepad);
	void ShowPointInfo(double Delay);
	void ChangePage(class FName PageName);
	void Construct();
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void ExecuteUbergraph_W_PreMission_Tablet_EntryPoint_Selection(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsGamepad, double K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FName K2Node_Event_PageName, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}


