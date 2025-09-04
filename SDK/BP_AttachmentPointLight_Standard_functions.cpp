#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AttachmentPointLight_Standard.BP_AttachmentPointLight_Standard_C
// (SceneComponent)

class UClass* UBP_AttachmentPointLight_Standard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AttachmentPointLight_Standard_C");

	return Clss;
}


// BP_AttachmentPointLight_Standard_C BP_AttachmentPointLight_Standard.Default__BP_AttachmentPointLight_Standard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AttachmentPointLight_Standard_C* UBP_AttachmentPointLight_Standard_C::GetDefaultObj()
{
	static class UBP_AttachmentPointLight_Standard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AttachmentPointLight_Standard_C*>(UBP_AttachmentPointLight_Standard_C::StaticClass()->DefaultObject);

	return Default;
}

}


