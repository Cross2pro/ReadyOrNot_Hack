#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RichTextInlineImageDecorator.BP_RichTextInlineImageDecorator_C
// (None)

class UClass* UBP_RichTextInlineImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RichTextInlineImageDecorator_C");

	return Clss;
}


// BP_RichTextInlineImageDecorator_C BP_RichTextInlineImageDecorator.Default__BP_RichTextInlineImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RichTextInlineImageDecorator_C* UBP_RichTextInlineImageDecorator_C::GetDefaultObj()
{
	static class UBP_RichTextInlineImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RichTextInlineImageDecorator_C*>(UBP_RichTextInlineImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


