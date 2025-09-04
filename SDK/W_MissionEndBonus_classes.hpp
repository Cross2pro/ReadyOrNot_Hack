#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x320 - 0x2C0)
// WidgetBlueprintGeneratedClass W_MissionEndBonus.W_MissionEndBonus_C
class UW_MissionEndBonus_C : public UUserWidget
{
public:
	class UTextBlock*                            BonusAmount;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BonusName;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BonusScoreAmount;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  BonusTxt;                                          // 0x2D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  BonusAmountTxt;                                    // 0x2F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  ScoreAmountTxt;                                    // 0x308(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_MissionEndBonus_C* GetDefaultObj();

};

}


