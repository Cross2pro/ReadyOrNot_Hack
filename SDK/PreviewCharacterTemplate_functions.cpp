#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PreviewCharacterTemplate.PreviewCharacterTemplate_C
// (Actor)

class UClass* APreviewCharacterTemplate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewCharacterTemplate_C");

	return Clss;
}


// PreviewCharacterTemplate_C PreviewCharacterTemplate.Default__PreviewCharacterTemplate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APreviewCharacterTemplate_C* APreviewCharacterTemplate_C::GetDefaultObj()
{
	static class APreviewCharacterTemplate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewCharacterTemplate_C*>(APreviewCharacterTemplate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.PlayLipSyncAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Speaker                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      VoiceLine                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticCharacterFaceAnimInstance*K2Node_DynamicCast_AsStatic_Character_Face_Anim_Instance         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APreviewCharacterTemplate_C::PlayLipSyncAnimation(const class FString& Speaker, const class FString& VoiceLine, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UStaticCharacterFaceAnimInstance* K2Node_DynamicCast_AsStatic_Character_Face_Anim_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewCharacterTemplate_C", "PlayLipSyncAnimation");

	Params::APreviewCharacterTemplate_C_PlayLipSyncAnimation_Params Parms{};

	Parms.Speaker = Speaker;
	Parms.VoiceLine = VoiceLine;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Character_Face_Anim_Instance = K2Node_DynamicCast_AsStatic_Character_Face_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsHalloween_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APreviewCharacterTemplate_C::UserConstructionScript(bool CallFunc_IsHalloween_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewCharacterTemplate_C", "UserConstructionScript");

	Params::APreviewCharacterTemplate_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsHalloween_ReturnValue = CallFunc_IsHalloween_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APreviewCharacterTemplate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewCharacterTemplate_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.VeryImportantHalloweenCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APreviewCharacterTemplate_C::VeryImportantHalloweenCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewCharacterTemplate_C", "VeryImportantHalloweenCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PreviewCharacterTemplate.PreviewCharacterTemplate_C.ExecuteUbergraph_PreviewCharacterTemplate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHalloween_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APreviewCharacterTemplate_C::ExecuteUbergraph_PreviewCharacterTemplate(int32 EntryPoint, bool CallFunc_IsHalloween_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewCharacterTemplate_C", "ExecuteUbergraph_PreviewCharacterTemplate");

	Params::APreviewCharacterTemplate_C_ExecuteUbergraph_PreviewCharacterTemplate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsHalloween_ReturnValue = CallFunc_IsHalloween_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue = CallFunc_GetSkeletalMeshAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


