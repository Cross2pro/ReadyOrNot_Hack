#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cursor_OpenHand.Cursor_OpenHand_C
// (None)

class UClass* UCursor_OpenHand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cursor_OpenHand_C");

	return Clss;
}


// Cursor_OpenHand_C Cursor_OpenHand.Default__Cursor_OpenHand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCursor_OpenHand_C* UCursor_OpenHand_C::GetDefaultObj()
{
	static class UCursor_OpenHand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCursor_OpenHand_C*>(UCursor_OpenHand_C::StaticClass()->DefaultObject);

	return Default;
}

}


