#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x2CC - 0x2C0)
// WidgetBlueprintGeneratedClass BulletImpactDebugText.BulletImpactDebugText_C
class UBulletImpactDebugText_C : public UUserWidget
{
public:
	class UTextBlock*                            Text;                                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ID;                                                // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBulletImpactDebugText_C* GetDefaultObj();

	void SetData(int32 ID, class FText Text);
};

}


