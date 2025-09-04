#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x12BC - 0x12B0)
// BlueprintGeneratedClass BP_SteamGas.BP_SteamGas_C
class ABP_SteamGas_C : public ABaseGasGrenade
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x12B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        GasRadius;                                         // 0x12B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SteamGas_C* GetDefaultObj();

	float GetGasRadius();
	class UScoringComponent* GetScoringComponent();
	class UInteractableComponent* GetInteractableComponent();
	bool CanShowActionSlot1(class AReadyOrNotCharacter* PC);
	bool CanInteractThroughHitActors(struct FHitResult& Hit);
	bool CanInteract();
	bool CanPing();
	bool CanIssueCommand();
	bool CanBeSecuredByTrailers();
	bool CanBeSecured();
	void UserConstructionScript();
	void Secure(class AReadyOrNotCharacter* Instigator);
	void DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent);
	void ExecuteUbergraph_BP_SteamGas(int32 EntryPoint, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator, class UInteractableComponent* K2Node_Event_InInteractableComponent, class AReadyOrNotCharacter* K2Node_Event_Instigator, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_3, class UInteractableComponent* K2Node_Event_InInteractableComponent_3, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_2, class UInteractableComponent* K2Node_Event_InInteractableComponent_2, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_1, class UInteractableComponent* K2Node_Event_InInteractableComponent_1);
};

}


