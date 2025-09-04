#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x470 - 0x2C0)
// WidgetBlueprintGeneratedClass W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C
class UW_RadialIcon_MapMarking_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Select;                                            // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Shake;                                             // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Grow;                                              // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Sizer;                                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                ID;                                                // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x300(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            IconImage;                                         // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HasSubCommands;                                    // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_229F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Commands                          CommandStructure;                                  // 0x328(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSwatCommand                          SwatCommand;                                       // 0x398(0x60)(Edit, BlueprintVisible)
	double                                       IconSize;                                          // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FFBasicIconSettings                   Settings;                                          // 0x400(0x28)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          CurrentColor;                                      // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Highlighted;                                       // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Alpha;                                             // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  IconText;                                          // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EPreMissionSubCategory            SubCategory;                                       // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               PreMissionPlanning;                                // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_RadialIcon_MapMarking_C* GetDefaultObj();

	struct FLinearColor Get_Icon_ColorAndOpacity_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnUnhighlight(bool Unselected);
	void Selected();
	void OnHighlight(bool Selected);
	void ExecuteUbergraph_W_RadialIcon_MapMarking(int32 EntryPoint, bool K2Node_Event_Selected, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool K2Node_Event_IsDesignTime, double CallFunc_FClamp_ReturnValue_1, class UWidgetAnimation* Temp_object_Variable, enum class EIconAnimationStyles Temp_byte_Variable, bool K2Node_Event_Unselected, class UWidgetAnimation* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
};

}


