#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD00 - 0xCE0)
// BlueprintGeneratedClass Device_Tablet.Device_Tablet_C
class ADevice_Tablet_C : public ATablet
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   VibrationComponent;                                // 0xCE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   SpeakerComponent;                                  // 0xCF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      ScreenWidget;                                      // 0xCF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADevice_Tablet_C* GetDefaultObj();

	void SleepScreen();
	void ReceiveBeginPlay();
	void PlayNotificationEvent();
	void PlayVibrationEvent();
	void PlaySoundEvent(class UFMODEvent* Event);
	void WakeScreen();
	void HolsterScreen();
	void ExecuteUbergraph_Device_Tablet(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UW_PreMission_Tablet_C* K2Node_DynamicCast_AsW_Pre_Mission_Tablet, bool K2Node_DynamicCast_bSuccess, class UW_PreMission_Tablet_C* K2Node_DynamicCast_AsW_Pre_Mission_Tablet_1, bool K2Node_DynamicCast_bSuccess_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UW_PreMission_Tablet_C* K2Node_DynamicCast_AsW_Pre_Mission_Tablet_2, bool K2Node_DynamicCast_bSuccess_2, class UFMODEvent* K2Node_Event_Event, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetLevelData_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue);
};

}


