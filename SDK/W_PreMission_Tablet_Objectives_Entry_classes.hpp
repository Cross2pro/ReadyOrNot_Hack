#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x82 (0x342 - 0x2C0)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Objectives_Entry.W_PreMission_Tablet_Objectives_Entry_C
class UW_PreMission_Tablet_Objectives_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             CheckBox_14;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Description;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Objective;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Objective_Count;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TabletText_C*                       W_TabletText_Description;                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TabletText_C*                       W_TabletText_Objective;                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TabletText_C*                       W_TabletText_ObjectiveCount;                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AObjective*                            Objective;                                         // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                ObjectiveClass;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  ObjectiveName;                                     // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ObjectiveDescription;                              // 0x328(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EObjectiveStatus                  ObjectiveStatus;                                   // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsBombDefusal;                                    // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_Objectives_Entry_C* GetDefaultObj();

	void UpdateObjectiveState(enum class EObjectiveStatus Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool CallFunc_IsValid_ReturnValue, enum class EObjectiveStatus CallFunc_GetObjectiveStatus_ReturnValue, enum class EObjectiveStatus Temp_byte_Variable_1, enum class ECheckBoxState Temp_byte_Variable_2, enum class ECheckBoxState Temp_byte_Variable_3, enum class ECheckBoxState Temp_byte_Variable_4, enum class ECheckBoxState K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1);
	void UpdateObjectiveInfo(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetFormattedDescription_ReturnValue, class FText CallFunc_GetFormattedName_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnObjectiveUpdated(class AObjective* Objective);
	void ExecuteUbergraph_W_PreMission_Tablet_Objectives_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue, class AObjective* CallFunc_GetClassDefaultObject_ReturnValue, class FText CallFunc_GetFormattedDescription_ReturnValue, class FText CallFunc_GetFormattedName_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AObjective* K2Node_CustomEvent_Objective, class ADefuseBombThreats* K2Node_DynamicCast_AsDefuse_Bomb_Threats, bool K2Node_DynamicCast_bSuccess);
};

}


