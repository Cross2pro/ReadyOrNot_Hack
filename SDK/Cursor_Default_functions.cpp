#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cursor_Default.Cursor_Default_C
// (None)

class UClass* UCursor_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cursor_Default_C");

	return Clss;
}


// Cursor_Default_C Cursor_Default.Default__Cursor_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCursor_Default_C* UCursor_Default_C::GetDefaultObj()
{
	static class UCursor_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCursor_Default_C*>(UCursor_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


