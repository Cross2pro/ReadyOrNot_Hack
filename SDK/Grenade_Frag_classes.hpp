#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x12A8 - 0x1270)
// BlueprintGeneratedClass Grenade_Frag.Grenade_Frag_C
class AGrenade_Frag_C : public ABaseGrenade
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  FlareLight;                                        // 0x1278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       TimeoutPeriod;                                     // 0x1280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFadingOut_;                                       // 0x1288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       IntensityTarget;                                   // 0x1290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LenFlare_RoadFlare_C*              Lens_Flare;                                        // 0x1298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BrightnessDefault;                                 // 0x12A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGrenade_Frag_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Grenade_Frag(int32 EntryPoint);
};

}


