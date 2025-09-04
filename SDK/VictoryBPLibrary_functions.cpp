#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VictoryBPLibrary.RamaColorPicker
// (None)

class UClass* URamaColorPicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RamaColorPicker");

	return Clss;
}


// RamaColorPicker VictoryBPLibrary.Default__RamaColorPicker
// (Public, ClassDefaultObject, ArchetypeObject)

class URamaColorPicker* URamaColorPicker::GetDefaultObj()
{
	static class URamaColorPicker* Default = nullptr;

	if (!Default)
		Default = static_cast<URamaColorPicker*>(URamaColorPicker::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryBPLibrary.RamaColorPicker.SetJoyColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SkipAnimation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URamaColorPicker::SetJoyColor(const struct FLinearColor& NewColor, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RamaColorPicker", "SetJoyColor");

	Params::URamaColorPicker_SetJoyColor_Params Parms{};

	Parms.NewColor = NewColor;
	Parms.SkipAnimation = SkipAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe
// (None)

class UClass* URamaVictoryPluginCreateProcessPipe::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RamaVictoryPluginCreateProcessPipe");

	return Clss;
}


// RamaVictoryPluginCreateProcessPipe VictoryBPLibrary.Default__RamaVictoryPluginCreateProcessPipe
// (Public, ClassDefaultObject, ArchetypeObject)

class URamaVictoryPluginCreateProcessPipe* URamaVictoryPluginCreateProcessPipe::GetDefaultObj()
{
	static class URamaVictoryPluginCreateProcessPipe* Default = nullptr;

	if (!Default)
		Default = static_cast<URamaVictoryPluginCreateProcessPipe*>(URamaVictoryPluginCreateProcessPipe::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe.ReadFromPipe
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PipeContents                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URamaVictoryPluginCreateProcessPipe::ReadFromPipe(class FString* PipeContents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RamaVictoryPluginCreateProcessPipe", "ReadFromPipe");

	Params::URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PipeContents != nullptr)
		*PipeContents = std::move(Parms.PipeContents);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe.PipeIsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URamaVictoryPluginCreateProcessPipe::PipeIsValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RamaVictoryPluginCreateProcessPipe", "PipeIsValid");

	Params::URamaVictoryPluginCreateProcessPipe_PipeIsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe.CreatePipe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URamaVictoryPluginCreateProcessPipe::CreatePipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RamaVictoryPluginCreateProcessPipe", "CreatePipe");

	Params::URamaVictoryPluginCreateProcessPipe_CreatePipe_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe.ClosePipe
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URamaVictoryPluginCreateProcessPipe::ClosePipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RamaVictoryPluginCreateProcessPipe", "ClosePipe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class VictoryBPLibrary.VictoryBPFunctionLibrary
// (None)

class UClass* UVictoryBPFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryBPFunctionLibrary");

	return Clss;
}


// VictoryBPFunctionLibrary VictoryBPLibrary.Default__VictoryBPFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVictoryBPFunctionLibrary* UVictoryBPFunctionLibrary::GetDefaultObj()
{
	static class UVictoryBPFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryBPFunctionLibrary*>(UVictoryBPFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::WorldType__InPIEWorld(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WorldType__InPIEWorld");

	Params::UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WorldType__InGameInstanceWorld");

	Params::UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::WorldType__InEditorWorld(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WorldType__InEditorWorld");

	Params::UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     ChildWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UVictoryBPFunctionLibrary::WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WidgetGetParentOfClass");

	Params::UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Params Parms{};

	Parms.ChildWidget = ChildWidget;
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                     ParentWidget                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>         ChildWidgets                                                     (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediateOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>* ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "WidgetGetChildrenOfClass");

	Params::UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Params Parms{};

	Parms.ParentWidget = ParentWidget;
	Parms.WidgetClass = WidgetClass;
	Parms.bImmediateOnly = bImmediateOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ChildWidgets != nullptr)
		*ChildWidgets = std::move(Parms.ChildWidgets);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWorldOrigin                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWorldDirection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::ViewportPositionDeproject(class UObject* WorldContextObject, struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ViewportPositionDeproject");

	Params::UVictoryBPFunctionLibrary_ViewportPositionDeproject_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ViewportPosition = ViewportPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWorldOrigin != nullptr)
		*OutWorldOrigin = std::move(Parms.OutWorldOrigin);

	if (OutWorldDirection != nullptr)
		*OutWorldDirection = std::move(Parms.OutWorldDirection);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           ThePC                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosX                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosY                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Viewport__SetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Viewport__SetMousePosition");

	Params::UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Params Parms{};

	Parms.ThePC = ThePC;
	Parms.PosX = PosX;
	Parms.PosY = PosY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           ThePC                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosX                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosY                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Viewport__GetMousePosition");

	Params::UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Params Parms{};

	Parms.ThePC = ThePC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PosX != nullptr)
		*PosX = Parms.PosX;

	if (PosY != nullptr)
		*PosY = Parms.PosY;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           ThePC                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosX                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PosY                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Viewport__GetCenterOfViewport");

	Params::UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Params Parms{};

	Parms.ThePC = ThePC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PosX != nullptr)
		*PosX = Parms.PosX;

	if (PosY != nullptr)
		*PosY = Parms.PosY;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortStringArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              StringArray                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              StringArrayRef                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySortStringArray(TArray<class FString>& StringArray, TArray<class FString>* StringArrayRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySortStringArray");

	Params::UVictoryBPFunctionLibrary_VictorySortStringArray_Params Parms{};

	Parms.StringArray = StringArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StringArrayRef != nullptr)
		*StringArrayRef = std::move(Parms.StringArrayRef);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      IntArray                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      IntArrayRef                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySortIntArray(TArray<int32>& IntArray, TArray<int32>* IntArrayRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySortIntArray");

	Params::UVictoryBPFunctionLibrary_VictorySortIntArray_Params Parms{};

	Parms.IntArray = IntArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntArrayRef != nullptr)
		*IntArrayRef = std::move(Parms.IntArrayRef);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      FloatArray                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      FloatArrayRef                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>* FloatArrayRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySortFloatArray");

	Params::UVictoryBPFunctionLibrary_VictorySortFloatArray_Params Parms{};

	Parms.FloatArray = FloatArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FloatArrayRef != nullptr)
		*FloatArrayRef = std::move(Parms.FloatArrayRef);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Delta                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(float& Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySimulateMouseWheel");

	Params::UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Params Parms{};

	Parms.Delta = Delta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           ThePC                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, enum class EInputEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySimulateKeyPress");

	Params::UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Params Parms{};

	Parms.ThePC = ThePC;
	Parms.Key = Key;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Vector2D");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Vector");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_String");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Rotator");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Int");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Float");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Color");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictorySetCustomConfigVar_Bool");

	Params::UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ProcessId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::VictoryIsApplicationRunning(int32 ProcessId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryIsApplicationRunning");

	Params::UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Params Parms{};

	Parms.ProcessId = ProcessId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Add                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IntOut                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryIntPlusEquals(int32& Int, int32 Add, int32* IntOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryIntPlusEquals");

	Params::UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Params Parms{};

	Parms.Int = Int;
	Parms.Add = Add;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntOut != nullptr)
		*IntOut = Parms.IntOut;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Int                                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Sub                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IntOut                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryIntMinusEquals(int32& Int, int32 Sub, int32* IntOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryIntMinusEquals");

	Params::UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Params Parms{};

	Parms.Int = Int;
	Parms.Sub = Sub;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntOut != nullptr)
		*IntOut = Parms.IntOut;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Vector2D");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Vector");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_String");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Rotator");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Int");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Float");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Color");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SectionName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariableName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetCustomConfigVar_Bool");

	Params::UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Params Parms{};

	Parms.SectionName = SectionName;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ProcessId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::VictoryGetApplicationName(int32 ProcessId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryGetApplicationName");

	Params::UVictoryBPFunctionLibrary_VictoryGetApplicationName_Params Parms{};

	Parms.ProcessId = ProcessId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Float                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Add                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatOut                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(float& Float, float Add, float* FloatOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryFloatPlusEquals");

	Params::UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Params Parms{};

	Parms.Float = Float;
	Parms.Add = Add;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FloatOut != nullptr)
		*FloatOut = Parms.FloatOut;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Float                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Sub                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatOut                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(float& Float, float Sub, float* FloatOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryFloatMinusEquals");

	Params::UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Params Parms{};

	Parms.Float = Float;
	Parms.Sub = Sub;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FloatOut != nullptr)
		*FloatOut = Parms.FloatOut;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              ProcessId                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FullPathOfProgramToRun                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              CommandlineArgs                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               Detach                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Hidden                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OptionalWorkingDirectory                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URamaVictoryPluginCreateProcessPipe*ReadPipeObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::VictoryCreateProc(int32* ProcessId, const class FString& FullPathOfProgramToRun, const TArray<class FString>& CommandlineArgs, bool Detach, bool Hidden, int32 Priority, const class FString& OptionalWorkingDirectory, class URamaVictoryPluginCreateProcessPipe* ReadPipeObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "VictoryCreateProc");

	Params::UVictoryBPFunctionLibrary_VictoryCreateProc_Params Parms{};

	Parms.FullPathOfProgramToRun = FullPathOfProgramToRun;
	Parms.CommandlineArgs = CommandlineArgs;
	Parms.Detach = Detach;
	Parms.Hidden = Hidden;
	Parms.Priority = Priority;
	Parms.OptionalWorkingDirectory = OptionalWorkingDirectory;
	Parms.ReadPipeObject = ReadPipeObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProcessId != nullptr)
		*ProcessId = Parms.ProcessId;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SetTimeStamp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   Timestamp                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Victory_SetTimeStamp(const class FString& File, struct FDateTime& Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_SetTimeStamp");

	Params::UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Params Parms{};

	Parms.File = File;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ToClipboard                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(const class FString& ToClipboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_SaveStringToOSClipboard");

	Params::UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Params Parms{};

	Parms.ToClipboard = ToClipboard;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        ImagePixels                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               SaveAsBMP                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SRGB                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ErrorString                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_SavePixels(const class FString& FullFilePath, int32 Width, int32 Height, TArray<struct FLinearColor>& ImagePixels, bool SaveAsBMP, bool SRGB, class FString* ErrorString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_SavePixels");

	Params::UVictoryBPFunctionLibrary_Victory_SavePixels_Params Parms{};

	Parms.FullFilePath = FullFilePath;
	Parms.Width = Width;
	Parms.Height = Height;
	Parms.ImagePixels = ImagePixels;
	Parms.SaveAsBMP = SaveAsBMP;
	Parms.SRGB = SRGB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ErrorString != nullptr)
		*ErrorString = std::move(Parms.ErrorString);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFileByExtension
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EJoyImageFormats        ImageFormat                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFileByExtension(const class FString& FullFilePath, enum class EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_LoadTexture2D_FromFileByExtension");

	Params::UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Params Parms{};

	Parms.FullFilePath = FullFilePath;
	Parms.ImageFormat = ImageFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EJoyImageFormats        ImageFormat                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        OutPixels                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(const class FString& FullFilePath, enum class EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height, TArray<struct FLinearColor>* OutPixels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_LoadTexture2D_FromFile_Pixels");

	Params::UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Params Parms{};

	Parms.FullFilePath = FullFilePath;
	Parms.ImageFormat = ImageFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	if (OutPixels != nullptr)
		*OutPixels = std::move(Parms.OutPixels);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(const class FString& FullFilePath, bool* IsValid, int32* Width, int32* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_LoadTexture2D_FromFile");

	Params::UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Params Parms{};

	Parms.FullFilePath = FullFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      FromClipboard                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(class FString* FromClipboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetStringFromOSClipboard");

	Params::UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FromClipboard != nullptr)
		*FromClipboard = std::move(Parms.FromClipboard);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture2D*                  T2D                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TextureWidth                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TextureHeight                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        PixelArray                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32* TextureWidth, int32* TextureHeight, TArray<struct FLinearColor>* PixelArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetPixelsArrayFromT2D");

	Params::UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Params Parms{};

	Parms.T2D = T2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TextureWidth != nullptr)
		*TextureWidth = Parms.TextureWidth;

	if (TextureHeight != nullptr)
		*TextureHeight = Parms.TextureHeight;

	if (PixelArray != nullptr)
		*PixelArray = std::move(Parms.PixelArray);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*                  T2D                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                PixelColor                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(class UTexture2D* T2D, int32 X, int32 Y, struct FLinearColor* PixelColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetPixelFromT2D");

	Params::UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Params Parms{};

	Parms.T2D = T2D;
	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PixelColor != nullptr)
		*PixelColor = std::move(Parms.PixelColor);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetFileTimeStamp
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      File                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UVictoryBPFunctionLibrary::Victory_GetFileTimeStamp(const class FString& File)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetFileTimeStamp");

	Params::UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Params Parms{};

	Parms.File = File;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetFilesInRootAndAllSubFolders
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Files                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      RootFolderFullPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ext                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_GetFilesInRootAndAllSubFolders(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetFilesInRootAndAllSubFolders");

	Params::UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Params Parms{};

	Parms.RootFolderFullPath = RootFolderFullPath;
	Parms.Ext = Ext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Files != nullptr)
		*Files = std::move(Parms.Files);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Files                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      RootFolderFullPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ext                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_GetFiles(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_GetFiles");

	Params::UVictoryBPFunctionLibrary_Victory_GetFiles_Params Parms{};

	Parms.RootFolderFullPath = RootFolderFullPath;
	Parms.Ext = Ext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Files != nullptr)
		*Files = std::move(Parms.Files);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>        Pixels                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ImageHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                FoundColor                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Victory_Get_Pixel(TArray<struct FLinearColor>& Pixels, int32 ImageHeight, int32 X, int32 Y, struct FLinearColor* FoundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Victory_Get_Pixel");

	Params::UVictoryBPFunctionLibrary_Victory_Get_Pixel_Params Parms{};

	Parms.Pixels = Pixels;
	Parms.ImageHeight = ImageHeight;
	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FoundColor != nullptr)
		*FoundColor = std::move(Parms.FoundColor);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   UTCTime                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   LocalTime                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::UTCToLocal(struct FDateTime& UTCTime, struct FDateTime* LocalTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "UTCToLocal");

	Params::UVictoryBPFunctionLibrary_UTCToLocal_Params Parms{};

	Parms.UTCTime = UTCTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LocalTime != nullptr)
		*LocalTime = std::move(Parms.LocalTime);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               UseDotForThousands                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::Text_ToInt(class FText& Text, bool UseDotForThousands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Text_ToInt");

	Params::UVictoryBPFunctionLibrary_Text_ToInt_Params Parms{};

	Parms.Text = Text;
	Parms.UseDotForThousands = UseDotForThousands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               UseDotForThousands                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::Text_ToFloat(class FText& Text, bool UseDotForThousands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Text_ToFloat");

	Params::UVictoryBPFunctionLibrary_Text_ToFloat_Params Parms{};

	Parms.Text = Text;
	Parms.UseDotForThousands = UseDotForThousands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::String__CombineStrings_Multi(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "String__CombineStrings_Multi");

	Params::UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      StringFirst                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringSecond                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Separator                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringFirstLabel                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringSecondLabel                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::String__CombineStrings(const class FString& StringFirst, const class FString& StringSecond, const class FString& Separator, const class FString& StringFirstLabel, const class FString& StringSecondLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "String__CombineStrings");

	Params::UVictoryBPFunctionLibrary_String__CombineStrings_Params Parms{};

	Parms.StringFirst = StringFirst;
	Parms.StringSecond = StringSecond;
	Parms.Separator = Separator;
	Parms.StringFirstLabel = StringFirstLabel;
	Parms.StringSecondLabel = StringSecondLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSkipNotifyPlayers                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::ServerTravel(class UObject* WorldContextObject, const class FString& MapName, bool bSkipNotifyPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ServerTravel");

	Params::UVictoryBPFunctionLibrary_ServerTravel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MapName = MapName;
	Parms.bSkipNotifyPlayers = bSkipNotifyPlayers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "RemoveAllWidgetsOfClass");

	Params::UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.NegateFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVictoryBPFunctionLibrary::NegateFloat(float A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "NegateFloat");

	Params::UVictoryBPFunctionLibrary_NegateFloat_Params Parms{};

	Parms.A = A;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::LoadStringFromFile(class FString* Result, const class FString& FullFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "LoadStringFromFile");

	Params::UVictoryBPFunctionLibrary_LoadStringFromFile_Params Parms{};

	Parms.FullFilePath = FullFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              StringArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ArraySize                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FullFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ExcludeEmptyLines                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::LoadStringArrayFromFile(TArray<class FString>* StringArray, int32* ArraySize, const class FString& FullFilePath, bool ExcludeEmptyLines)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "LoadStringArrayFromFile");

	Params::UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Params Parms{};

	Parms.FullFilePath = FullFilePath;
	Parms.ExcludeEmptyLines = ExcludeEmptyLines;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StringArray != nullptr)
		*StringArray = std::move(Parms.StringArray);

	if (ArraySize != nullptr)
		*ArraySize = Parms.ArraySize;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class UObject>         ObjectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Path                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(TSubclassOf<class UObject> ObjectClass, class FName Path, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "LoadObjectFromAssetPath");

	Params::UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Params Parms{};

	Parms.ObjectClass = ObjectClass;
	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "IsWidgetOfClassInViewport");

	Params::UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::IsAlphaNumeric(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "IsAlphaNumeric");

	Params::UVictoryBPFunctionLibrary_IsAlphaNumeric_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UVictoryBPFunctionLibrary::InsertChildAt(class UWidget* Parent, int32 Index, class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "InsertChildAt");

	Params::UVictoryBPFunctionLibrary_InsertChildAt_Params Parms{};

	Parms.Parent = Parent;
	Parms.Index = Index;
	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SearchIn                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Substring                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESearchCase             SearchCase                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESearchDir              SearchDir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::HasSubstring(const class FString& SearchIn, const class FString& Substring, enum class ESearchCase SearchCase, enum class ESearchDir SearchDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "HasSubstring");

	Params::UVictoryBPFunctionLibrary_HasSubstring_Params Parms{};

	Parms.SearchIn = SearchIn;
	Parms.Substring = Substring;
	Parms.SearchCase = SearchCase;
	Parms.SearchDir = SearchDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUserWidget*                 ParentUserWidget                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UVictoryBPFunctionLibrary::GetWidgetFromName(class UUserWidget* ParentUserWidget, class FName& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetWidgetFromName");

	Params::UVictoryBPFunctionLibrary_GetWidgetFromName_Params Parms{};

	Parms.ParentUserWidget = ParentUserWidget;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              UnixTimeStamp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   UTCTime                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::GetUTCFromUnixTimeStamp(int64 UnixTimeStamp, struct FDateTime* UTCTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetUTCFromUnixTimeStamp");

	Params::UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Params Parms{};

	Parms.UnixTimeStamp = UnixTimeStamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UTCTime != nullptr)
		*UTCTime = std::move(Parms.UTCTime);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   UTCTime                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UVictoryBPFunctionLibrary::GetUnixTimeStamp(struct FDateTime& UTCTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetUnixTimeStamp");

	Params::UVictoryBPFunctionLibrary_GetUnixTimeStamp_Params Parms{};

	Parms.UTCTime = UTCTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        Comp                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             VertexPositions                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              LODIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions, int32 LODIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetStaticMeshVertexLocations");

	Params::UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Params Parms{};

	Parms.Comp = Comp;
	Parms.LODIndex = LODIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexPositions != nullptr)
		*VertexPositions = std::move(Parms.VertexPositions);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Obj                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UVictoryBPFunctionLibrary::GetObjectPath(class UObject* Obj)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetObjectPath");

	Params::UVictoryBPFunctionLibrary_GetObjectPath_Params Parms{};

	Parms.Obj = Obj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              NamesOfLoadedLevels                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<class FString>* NamesOfLoadedLevels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetNamesOfLoadedLevels");

	Params::UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NamesOfLoadedLevels != nullptr)
		*NamesOfLoadedLevels = std::move(Parms.NamesOfLoadedLevels);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TopLevelOnly                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetFirstWidgetOfClass");

	Params::UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetClass = WidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const struct FVector& Center, float Radius, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetClosestActorOfClassInRadiusOfLocation");

	Params::UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;
	Parms.Center = Center;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorCenter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetClosestActorOfClassInRadiusOfActor");

	Params::UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;
	Parms.ActorCenter = ActorCenter;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComp                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartingBoneName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                BoneNames                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, class FName StartingBoneName, TArray<class FName>* BoneNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GetAllBoneNamesBelowBone");

	Params::UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Params Parms{};

	Parms.SkeletalMeshComp = SkeletalMeshComp;
	Parms.StartingBoneName = StartingBoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneNames != nullptr)
		*BoneNames = std::move(Parms.BoneNames);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GenerateUniqueContentRelativeFileName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ContentRelativeFilePath                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContentRelativeNewFileName                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AbsolutePath                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CreateFolderTree                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::GenerateUniqueContentRelativeFileName(const class FString& ContentRelativeFilePath, class FString* ContentRelativeNewFileName, class FString* AbsolutePath, bool CreateFolderTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "GenerateUniqueContentRelativeFileName");

	Params::UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Params Parms{};

	Parms.ContentRelativeFilePath = ContentRelativeFilePath;
	Parms.CreateFolderTree = CreateFolderTree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ContentRelativeNewFileName != nullptr)
		*ContentRelativeNewFileName = std::move(Parms.ContentRelativeNewFileName);

	if (AbsolutePath != nullptr)
		*AbsolutePath = std::move(Parms.AbsolutePath);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PC                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               FlashContinuous                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxFlashCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FlashFrequencyMilliseconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32 MaxFlashCount, int32 FlashFrequencyMilliseconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "FlashGameOnTaskBar");

	Params::UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Params Parms{};

	Parms.PC = PC;
	Parms.FlashContinuous = FlashContinuous;
	Parms.MaxFlashCount = MaxFlashCount;
	Parms.FlashFrequencyMilliseconds = FlashFrequencyMilliseconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SaveDirectory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JoyfulFileName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SaveText                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowOverWriting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowAppend                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const class FString& SaveText, bool AllowOverWriting, bool AllowAppend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "FileIO__SaveStringTextToFile");

	Params::UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Params Parms{};

	Parms.SaveDirectory = SaveDirectory;
	Parms.JoyfulFileName = JoyfulFileName;
	Parms.SaveText = SaveText;
	Parms.AllowOverWriting = AllowOverWriting;
	Parms.AllowAppend = AllowAppend;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SaveDirectory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JoyfulFileName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SaveText                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               AllowOverWriting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowAppend                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const TArray<class FString>& SaveText, bool AllowOverWriting, bool AllowAppend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "FileIO__SaveStringArrayToFile");

	Params::UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Params Parms{};

	Parms.SaveDirectory = SaveDirectory;
	Parms.JoyfulFileName = JoyfulFileName;
	Parms.SaveText = SaveText;
	Parms.AllowOverWriting = AllowOverWriting;
	Parms.AllowAppend = AllowAppend;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateStaticMeshAssetFromDynamicMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ContentFolderPath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDynamicMeshComponent*       DynamicMeshComp                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Status                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewAssetFilePath                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStaticMesh* UVictoryBPFunctionLibrary::CreateStaticMeshAssetFromDynamicMesh(const class FString& ContentFolderPath, class UDynamicMeshComponent* DynamicMeshComp, class FString* Status, class FString* NewAssetFilePath, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CreateStaticMeshAssetFromDynamicMesh");

	Params::UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Params Parms{};

	Parms.ContentFolderPath = ContentFolderPath;
	Parms.DynamicMeshComp = DynamicMeshComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Status != nullptr)
		*Status = std::move(Parms.Status);

	if (NewAssetFilePath != nullptr)
		*NewAssetFilePath = std::move(Parms.NewAssetFilePath);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClosestPointsOnTwoLines
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ClosestPointLine1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ClosestPointLine2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint1                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineVec1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint2                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineVec2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::ClosestPointsOnTwoLines(struct FVector* ClosestPointLine1, struct FVector* ClosestPointLine2, const struct FVector& LinePoint1, const struct FVector& LineVec1, const struct FVector& LinePoint2, const struct FVector& LineVec2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ClosestPointsOnTwoLines");

	Params::UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Params Parms{};

	Parms.LinePoint1 = LinePoint1;
	Parms.LineVec1 = LineVec1;
	Parms.LinePoint2 = LinePoint2;
	Parms.LineVec2 = LineVec2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClosestPointLine1 != nullptr)
		*ClosestPointLine1 = std::move(Parms.ClosestPointLine1);

	if (ClosestPointLine2 != nullptr)
		*ClosestPointLine2 = std::move(Parms.ClosestPointLine2);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClosestPointsOfLineSegments
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Line1Start                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Line1End                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Line2Start                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Line2End                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint1                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinePoint2                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ClosestPointsOfLineSegments");

	Params::UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Params Parms{};

	Parms.Line1Start = Line1Start;
	Parms.Line1End = Line1End;
	Parms.Line2Start = Line2Start;
	Parms.Line2End = Line2End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LinePoint1 != nullptr)
		*LinePoint1 = std::move(Parms.LinePoint1);

	if (LinePoint2 != nullptr)
		*LinePoint2 = std::move(Parms.LinePoint2);

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "ClientWindow__GameWindowIsForeGroundInOS");

	Params::UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneCaptureComponent2D*    Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ImagePath                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ClearColour                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CaptureComponent2D_SaveImage");

	Params::UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Params Parms{};

	Parms.Target = Target;
	Parms.ImagePath = ImagePath;
	Parms.ClearColour = ClearColour;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneCaptureComponent2D*    Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   OutPixelLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "CaptureComponent2D_Project");

	Params::UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Params Parms{};

	Parms.Target = Target;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPixelLocation != nullptr)
		*OutPixelLocation = std::move(Parms.OutPixelLocation);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ASceneCapture2D*             Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ImagePath                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ClearColour                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Capture2D_SaveImage(class ASceneCapture2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Capture2D_SaveImage");

	Params::UVictoryBPFunctionLibrary_Capture2D_SaveImage_Params Parms{};

	Parms.Target = Target;
	Parms.ImagePath = ImagePath;
	Parms.ClearColour = ClearColour;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ASceneCapture2D*             Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   OutPixelLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Capture2D_Project");

	Params::UVictoryBPFunctionLibrary_Capture2D_Project_Params Parms{};

	Parms.Target = Target;
	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPixelLocation != nullptr)
		*OutPixelLocation = std::move(Parms.OutPixelLocation);

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      TargetArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAscendingOrder                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VariableName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryBPFunctionLibrary::Array_Sort(TArray<int32>& TargetArray, bool bAscendingOrder, class FName VariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Array_Sort");

	Params::UVictoryBPFunctionLibrary_Array_Sort_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.bAscendingOrder = bAscendingOrder;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVictoryBPFunctionLibrary::AppendMultiple(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "AppendMultiple");

	Params::UVictoryBPFunctionLibrary_AppendMultiple_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      AnimBPOwner                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    TheRotation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Pitch                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, struct FRotator& TheRotation, float* Pitch, float* Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Animation__GetAimOffsetsFromRotation");

	Params::UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Params Parms{};

	Parms.AnimBPOwner = AnimBPOwner;
	Parms.TheRotation = TheRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      AnimBPOwner                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Pitch                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryBPFunctionLibrary::Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Animation__GetAimOffsets");

	Params::UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Params Parms{};

	Parms.AnimBPOwner = AnimBPOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;

	return Parms.ReturnValue;

}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      TheCharacter                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerController* UVictoryBPFunctionLibrary::Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryBPFunctionLibrary", "Accessor__GetPlayerController");

	Params::UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Params Parms{};

	Parms.TheCharacter = TheCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;

}

}


