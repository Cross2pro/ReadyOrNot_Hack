#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2DC (0x614 - 0x338)
// WidgetBlueprintGeneratedClass W_Text.W_Text_C
class UW_Text_C : public UTextWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_TextStyles                      SelectTextStyle;                                   // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3741[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x348(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FST_Style_Text                        TextStyleOld;                                      // 0x360(0xC8)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ShadowOffset;                                      // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShadowColor;                                       // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoWrapText;                                      // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Substring;                                         // 0x459(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SingleWord;                                        // 0x45A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_375B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LetterSpacing;                                     // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Truncate;                                          // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterLimit;                                    // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class FString                                TruncationCharacters;                              // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	double                                       CalculatedSpacing;                                 // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      Justification;                                     // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CalculatedWidth;                                   // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentLetterSpacing;                              // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterCount;                                    // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CharacterArray;                                    // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class UW_Text_C*>                SpacedCharacterElements;                           // 0x4A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UWrapBoxSlot*, class UW_Text_C*>  WordElements;                                      // 0x4F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        WordCount;                                         // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBox*                        HB_Substring;                                      // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_SingleLine;                                     // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ETextTransformPolicy              TransformPolicy;                                   // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            TextStyleDataTable;                                // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRichText;                                       // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3803[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFontOutlineSettings                  Outline_Settings;                                  // 0x578(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  Typeface;                                          // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x5A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_381B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWidgetTransform                      TextRenderTransform;                               // 0x5A8(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                          TextColor;                                         // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TextStyles                      CurrentTextStyle;                                  // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_3823[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorOverride;                                     // 0x5F4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSizeOverride;                                  // 0x604(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TextStyle;                                         // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        In_Wrap_Text_At;                                   // 0x610(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Text_C* GetDefaultObj();

	void SetTextJustification(enum class ETextJustify Justification);
	void SetOutline(const struct FFontOutlineSettings& FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetFont(const struct FSlateFontInfo& Font, const struct FST_Style_Text& K2Node_MakeStruct_ST_Style_Text);
	void SetFontSize(int32 FontSize, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Size_ImplicitCast);
	void SetTextTransform(enum class ETextTransformPolicy TextTransform);
	void SetTextShadow(const struct FVector2D& ShadowOffset, const struct FLinearColor& ShadowColor);
	void SetTextLetterSpacing(int32 LetterSpacing, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetTextColor(const struct FLinearColor& Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetText(class FText* CurrentText);
	void UpdateText(class FText Text);
	void TruncateText(bool Truncate, int32 CharacterLimit, const class FString& TruncationCharacters, class FText* TruncatedText, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Left_ReturnValue, int32 CallFunc_Len_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EndsWith_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default);
	void UpdateFont(const struct FSlateFontInfo& Font);
	void SetStyle(const struct FST_Style_Text& TextStyle, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
	void SetText(class FText Text, class FText CallFunc_TruncateText_TruncatedText);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_Text(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_RemoveSpacesFromString_ReturnString, class FText CallFunc_RemoveSpacesFromString_ReturnText, class FName CallFunc_RemoveSpacesFromString_ReturnName, const struct FST_Style_Text& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


