#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// WidgetBlueprintGeneratedClass W_MagazineAmmoCheck.W_MagazineAmmoCheck_C
class UW_MagazineAmmoCheck_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            MagAmmoCount;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MagazineAmmoCheck_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_W_MagazineAmmoCheck(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess_1, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetAmmo_ReturnValue, float CallFunc_GetAmmo_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_3, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1);
};

}


