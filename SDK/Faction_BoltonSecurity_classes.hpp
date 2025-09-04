#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x308 - 0x2F0)
// BlueprintGeneratedClass Faction_BoltonSecurity.Faction_BoltonSecurity_C
class AFaction_BoltonSecurity_C : public AAIFactionManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                  LeviShanks;                                        // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFaction_BoltonSecurity_C* GetDefaultObj();

	void AlertOtherSuspectsInTeam_Blueprint(class ASuspectCharacter* Suspect, class AReadyOrNotCharacter* Enemy);
	void OnAIAdded_Blueprint(class ACyberneticCharacter* Character);
	void ExecuteUbergraph_Faction_BoltonSecurity(int32 EntryPoint, class ASuspectCharacter* K2Node_Event_Suspect, class AReadyOrNotCharacter* K2Node_Event_Enemy, class ACyberneticCharacter* K2Node_Event_Character, bool CallFunc_ActorHasTag_ReturnValue);
};

}


