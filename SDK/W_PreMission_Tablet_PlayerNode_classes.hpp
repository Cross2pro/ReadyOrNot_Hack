#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x350 - 0x2C0)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_PlayerNode.W_PreMission_Tablet_PlayerNode_C
class UW_PreMission_Tablet_PlayerNode_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Dot;                                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Designation;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Designation;                                       // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                PlayerName;                                        // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSt_PreMissionPlayerNode              PlayerInfo;                                        // 0x310(0x30)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        ID;                                                // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_22C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                AssignedPlayerState;                               // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_PlayerNode_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetupWidget(int32 NewParam, const struct FLinearColor& NewParam2);
	void ExecuteUbergraph_W_PreMission_Tablet_PlayerNode(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Get_Player_State_Team_Color_LinearColor, const struct FSlateColor& CallFunc_Get_Player_State_Team_Color_SlateColor, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetPlanningPlayerNumber_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 K2Node_CustomEvent_NewParam, const struct FLinearColor& K2Node_CustomEvent_NewParam2, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


