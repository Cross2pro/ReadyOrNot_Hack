#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x491 - 0x420)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Roster_MP.W_PreMission_Tablet_Roster_MP_C
class UW_PreMission_Tablet_Roster_MP_C : public URosterSelectionWidget
{
public:
	class UW_PremissionTablet_Button_C*          btn_ChangeTeam;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*          btn_Invite;                                        // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_PlayerList;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class AReadyOrNotPlayerState*, class UW_PreMission_Tablet_Roster_Entry_C*> RosterMap;                                         // 0x438(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class UW_RosterSelection_Card_C*             PreviousCharacterCard;                             // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ERosterSquadPosition              CurrentPositionSelection;                          // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_Roster_MP_C* GetDefaultObj();

	void RemovePlayer(class AReadyOrNotPlayerState* Ready_or_Not_Player_State, bool CallFunc_Map_Remove_ReturnValue, class UW_PreMission_Tablet_Roster_Entry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void AddPlayer(class AReadyOrNotPlayerState*& Ready_or_Not_Player_State, bool CallFunc_IsValid_ReturnValue, class UW_PreMission_Tablet_Roster_Entry_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}


