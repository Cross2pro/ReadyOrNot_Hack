#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Popup_Base.W_Popup_Base_C
// (None)

class UClass* UW_Popup_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Popup_Base_C");

	return Clss;
}


// W_Popup_Base_C W_Popup_Base.Default__W_Popup_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Popup_Base_C* UW_Popup_Base_C::GetDefaultObj()
{
	static class UW_Popup_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Popup_Base_C*>(UW_Popup_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


