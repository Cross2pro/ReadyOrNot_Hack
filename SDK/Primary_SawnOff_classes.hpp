#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1940 - 0x1920)
// BlueprintGeneratedClass Primary_SawnOff.Primary_SawnOff_C
class APrimary_SawnOff_C : public AShotgun
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1920(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x1928(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   PointLight1;                                       // 0x1930(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LightToggle1P;                                     // 0x1938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APrimary_SawnOff_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void Multicast_EnableLight();
	void Multicast_DisableLight();
	void OnAttachmentActivated_Event_0(enum class EItemAttachment AttachmentChanged);
	void OnAttachmentDeactivated_Event_0(enum class EItemAttachment AttachmentChanged);
	void ReceiveBeginPlay();
	void Server_DisableLight();
	void Server_EnableLight();
	void ExecuteUbergraph_Primary_SawnOff(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, enum class EItemAttachment K2Node_CustomEvent_AttachmentChanged_1, enum class EItemAttachment K2Node_CustomEvent_AttachmentChanged, bool K2Node_SwitchEnum_CmpSuccess);
};

}


