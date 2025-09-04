#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x7D2 - 0x7C0)
// BlueprintGeneratedClass BaseButtonStyle.BaseButtonStyle_C
class UBaseButtonStyle_C : public UCommonButtonStyle
{
public:
	class UFMODEvent*                            FMOD_Pressed_Event;                                // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMOD_Hovered_Event;                                // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ETextTransformPolicy              Text_Transform_Policy;                             // 0x7D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      Justification;                                     // 0x7D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBaseButtonStyle_C* GetDefaultObj();

};

}


