#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default10ptBoldShadowTextStyle.Default10ptBoldShadowTextStyle_C
// (None)

class UClass* UDefault10ptBoldShadowTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default10ptBoldShadowTextStyle_C");

	return Clss;
}


// Default10ptBoldShadowTextStyle_C Default10ptBoldShadowTextStyle.Default__Default10ptBoldShadowTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault10ptBoldShadowTextStyle_C* UDefault10ptBoldShadowTextStyle_C::GetDefaultObj()
{
	static class UDefault10ptBoldShadowTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault10ptBoldShadowTextStyle_C*>(UDefault10ptBoldShadowTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


