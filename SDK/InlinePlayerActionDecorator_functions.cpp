#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InlinePlayerActionDecorator.InlinePlayerActionDecorator_C
// (None)

class UClass* UInlinePlayerActionDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InlinePlayerActionDecorator_C");

	return Clss;
}


// InlinePlayerActionDecorator_C InlinePlayerActionDecorator.Default__InlinePlayerActionDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInlinePlayerActionDecorator_C* UInlinePlayerActionDecorator_C::GetDefaultObj()
{
	static class UInlinePlayerActionDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInlinePlayerActionDecorator_C*>(UInlinePlayerActionDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


