#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
// (Actor)

class UClass* AGameplayDebuggerCategoryReplicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerCategoryReplicator");

	return Clss;
}


// GameplayDebuggerCategoryReplicator GameplayDebugger.Default__GameplayDebuggerCategoryReplicator
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayDebuggerCategoryReplicator* AGameplayDebuggerCategoryReplicator::GetDefaultObj()
{
	static class AGameplayDebuggerCategoryReplicator* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayDebuggerCategoryReplicator*>(AGameplayDebuggerCategoryReplicator::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                     InViewLocation                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InViewDirection                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSetViewPoint(struct FVector& InViewLocation, struct FVector& InViewDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetViewPoint");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Params Parms{};

	Parms.InViewLocation = InViewLocation;
	Parms.InViewDirection = InViewDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetEnabled");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelectInEditor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetDebugActor");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.bSelectInEditor = bSelectInEditor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32 CategoryId, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetCategoryEnabled");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params Parms{};

	Parms.CategoryId = CategoryId;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              ExtensionId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HandlerId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendExtensionInputEvent");

	Params::AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params Parms{};

	Parms.ExtensionId = ExtensionId;
	Parms.HandlerId = HandlerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HandlerId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendCategoryInputEvent");

	Params::AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params Parms{};

	Parms.CategoryId = CategoryId;
	Parms.HandlerId = HandlerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void AGameplayDebuggerCategoryReplicator::ServerResetViewPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerResetViewPoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData
// (Final, RequiredAPI, Native, Protected)
// Parameters:

void AGameplayDebuggerCategoryReplicator::OnRep_ReplicatedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "OnRep_ReplicatedData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayDebuggerDataPackRPCParamsParams                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ClientDataPackPacket(struct FGameplayDebuggerDataPackRPCParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ClientDataPackPacket");

	Params::AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayDebugger.GameplayDebuggerConfig
// (None)

class UClass* UGameplayDebuggerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerConfig");

	return Clss;
}


// GameplayDebuggerConfig GameplayDebugger.Default__GameplayDebuggerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerConfig* UGameplayDebuggerConfig::GetDefaultObj()
{
	static class UGameplayDebuggerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerConfig*>(UGameplayDebuggerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerUserSettings
// (None)

class UClass* UGameplayDebuggerUserSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerUserSettings");

	return Clss;
}


// GameplayDebuggerUserSettings GameplayDebugger.Default__GameplayDebuggerUserSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerUserSettings* UGameplayDebuggerUserSettings::GetDefaultObj()
{
	static class UGameplayDebuggerUserSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerUserSettings*>(UGameplayDebuggerUserSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerLocalController
// (None)

class UClass* UGameplayDebuggerLocalController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerLocalController");

	return Clss;
}


// GameplayDebuggerLocalController GameplayDebugger.Default__GameplayDebuggerLocalController
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerLocalController* UGameplayDebuggerLocalController::GetDefaultObj()
{
	static class UGameplayDebuggerLocalController* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerLocalController*>(UGameplayDebuggerLocalController::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerPlayerManager
// (Actor)

class UClass* AGameplayDebuggerPlayerManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerPlayerManager");

	return Clss;
}


// GameplayDebuggerPlayerManager GameplayDebugger.Default__GameplayDebuggerPlayerManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AGameplayDebuggerPlayerManager* AGameplayDebuggerPlayerManager::GetDefaultObj()
{
	static class AGameplayDebuggerPlayerManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayDebuggerPlayerManager*>(AGameplayDebuggerPlayerManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGameplayDebuggerRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerRenderingComponent");

	return Clss;
}


// GameplayDebuggerRenderingComponent GameplayDebugger.Default__GameplayDebuggerRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerRenderingComponent* UGameplayDebuggerRenderingComponent::GetDefaultObj()
{
	static class UGameplayDebuggerRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerRenderingComponent*>(UGameplayDebuggerRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}

}


