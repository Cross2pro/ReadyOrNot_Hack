#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Sentry.SentryAttachment
// (None)

class UClass* USentryAttachment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryAttachment");

	return Clss;
}


// SentryAttachment Sentry.Default__SentryAttachment
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryAttachment* USentryAttachment::GetDefaultObj()
{
	static class USentryAttachment* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryAttachment*>(USentryAttachment::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryAttachment.InitializeWithPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryAttachment::InitializeWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "InitializeWithPath");

	Params::USentryAttachment_InitializeWithPath_Params Parms{};

	Parms.Path = Path;
	Parms.Filename = Filename;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryAttachment.InitializeWithData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryAttachment::InitializeWithData(TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "InitializeWithData");

	Params::USentryAttachment_InitializeWithData_Params Parms{};

	Parms.Data = Data;
	Parms.Filename = Filename;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryAttachment.GetPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryAttachment::GetPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetPath");

	Params::USentryAttachment_GetPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetFilename
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryAttachment::GetFilename()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetFilename");

	Params::USentryAttachment_GetFilename_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> USentryAttachment::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetData");

	Params::USentryAttachment_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetContentType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryAttachment::GetContentType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetContentType");

	Params::USentryAttachment_GetContentType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryBeforeBreadcrumbHandler
// (None)

class UClass* USentryBeforeBreadcrumbHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryBeforeBreadcrumbHandler");

	return Clss;
}


// SentryBeforeBreadcrumbHandler Sentry.Default__SentryBeforeBreadcrumbHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryBeforeBreadcrumbHandler* USentryBeforeBreadcrumbHandler::GetDefaultObj()
{
	static class USentryBeforeBreadcrumbHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryBeforeBreadcrumbHandler*>(USentryBeforeBreadcrumbHandler::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryBeforeBreadcrumbHandler.HandleBeforeBreadcrumb
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USentryBreadcrumb*           Breadcrumb                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryHint*                 Hint                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryBreadcrumb*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryBreadcrumb* USentryBeforeBreadcrumbHandler::HandleBeforeBreadcrumb(class USentryBreadcrumb* Breadcrumb, class USentryHint* Hint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBeforeBreadcrumbHandler", "HandleBeforeBreadcrumb");

	Params::USentryBeforeBreadcrumbHandler_HandleBeforeBreadcrumb_Params Parms{};

	Parms.Breadcrumb = Breadcrumb;
	Parms.Hint = Hint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryBeforeSendHandler
// (None)

class UClass* USentryBeforeSendHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryBeforeSendHandler");

	return Clss;
}


// SentryBeforeSendHandler Sentry.Default__SentryBeforeSendHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryBeforeSendHandler* USentryBeforeSendHandler::GetDefaultObj()
{
	static class USentryBeforeSendHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryBeforeSendHandler*>(USentryBeforeSendHandler::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryBeforeSendHandler.HandleBeforeSend
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USentryEvent*                Event                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryHint*                 Hint                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryEvent*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryEvent* USentryBeforeSendHandler::HandleBeforeSend(class USentryEvent* Event, class USentryHint* Hint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBeforeSendHandler", "HandleBeforeSend");

	Params::USentryBeforeSendHandler_HandleBeforeSend_Params Parms{};

	Parms.Event = Event;
	Parms.Hint = Hint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryBreadcrumb
// (None)

class UClass* USentryBreadcrumb::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryBreadcrumb");

	return Clss;
}


// SentryBreadcrumb Sentry.Default__SentryBreadcrumb
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryBreadcrumb* USentryBreadcrumb::GetDefaultObj()
{
	static class USentryBreadcrumb* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryBreadcrumb*>(USentryBreadcrumb::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryBreadcrumb.SetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetType(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetType");

	Params::USentryBreadcrumb_SetType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetMessage(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetMessage");

	Params::USentryBreadcrumb_SetMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetLevel");

	Params::USentryBreadcrumb_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, struct FSentryVariant>Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetData(TMap<class FString, struct FSentryVariant>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetData");

	Params::USentryBreadcrumb_SetData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Category                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryBreadcrumb::SetCategory(const class FString& Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetCategory");

	Params::USentryBreadcrumb_SetCategory_Params Parms{};

	Parms.Category = Category;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryBreadcrumb::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryBreadcrumb::GetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetType");

	Params::USentryBreadcrumb_GetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryBreadcrumb::GetMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetMessage");

	Params::USentryBreadcrumb_GetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESentryLevel USentryBreadcrumb::GetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetLevel");

	Params::USentryBreadcrumb_GetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, struct FSentryVariant>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, struct FSentryVariant> USentryBreadcrumb::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetData");

	Params::USentryBreadcrumb_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryBreadcrumb::GetCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetCategory");

	Params::USentryBreadcrumb_GetCategory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryEvent
// (None)

class UClass* USentryEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryEvent");

	return Clss;
}


// SentryEvent Sentry.Default__SentryEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryEvent* USentryEvent::GetDefaultObj()
{
	static class USentryEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryEvent*>(USentryEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryEvent.TryGetTag
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryEvent::TryGetTag(const class FString& Key, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "TryGetTag");

	Params::USentryEvent_TryGetTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.TryGetExtra
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryEvent::TryGetExtra(const class FString& Key, struct FSentryVariant* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "TryGetExtra");

	Params::USentryEvent_TryGetExtra_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.TryGetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryEvent::TryGetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "TryGetContext");

	Params::USentryEvent_TryGetContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.SetTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Tags                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryEvent::SetTags(TMap<class FString, class FString>& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetTags");

	Params::USentryEvent_SetTags_Params Parms{};

	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryEvent::SetTag(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetTag");

	Params::USentryEvent_SetTag_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.SetMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryEvent::SetMessage(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetMessage");

	Params::USentryEvent_SetMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryEvent::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetLevel");

	Params::USentryEvent_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.SetFingerprint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Fingerprint                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USentryEvent::SetFingerprint(TArray<class FString>& Fingerprint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetFingerprint");

	Params::USentryEvent_SetFingerprint_Params Parms{};

	Parms.Fingerprint = Fingerprint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.SetExtras
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, struct FSentryVariant>Extras                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryEvent::SetExtras(TMap<class FString, struct FSentryVariant>& Extras)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetExtras");

	Params::USentryEvent_SetExtras_Params Parms{};

	Parms.Extras = Extras;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.SetExtra
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryEvent::SetExtra(const class FString& Key, struct FSentryVariant& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetExtra");

	Params::USentryEvent_SetExtra_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Values                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryEvent::SetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetContext");

	Params::USentryEvent_SetContext_Params Parms{};

	Parms.Key = Key;
	Parms.Values = Values;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryEvent::RemoveTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "RemoveTag");

	Params::USentryEvent_RemoveTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.RemoveExtra
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryEvent::RemoveExtra(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "RemoveExtra");

	Params::USentryEvent_RemoveExtra_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.RemoveContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryEvent::RemoveContext(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "RemoveContext");

	Params::USentryEvent_RemoveContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.IsCrash
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryEvent::IsCrash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "IsCrash");

	Params::USentryEvent_IsCrash_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.IsAnr
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryEvent::IsAnr()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "IsAnr");

	Params::USentryEvent_IsAnr_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryEvent::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryEvent.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> USentryEvent::GetTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetTags");

	Params::USentryEvent_GetTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryEvent::GetTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetTag");

	Params::USentryEvent_GetTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryEvent::GetMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetMessage");

	Params::USentryEvent_GetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESentryLevel USentryEvent::GetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetLevel");

	Params::USentryEvent_GetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryEvent::GetID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetID");

	Params::USentryEvent_GetID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetFingerprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> USentryEvent::GetFingerprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetFingerprint");

	Params::USentryEvent_GetFingerprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetExtras
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, struct FSentryVariant>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, struct FSentryVariant> USentryEvent::GetExtras()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetExtras");

	Params::USentryEvent_GetExtras_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetExtra
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryEvent::GetExtra(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetExtra");

	Params::USentryEvent_GetExtra_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, struct FSentryVariant> USentryEvent::GetContext(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetContext");

	Params::USentryEvent_GetContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryHint
// (None)

class UClass* USentryHint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryHint");

	return Clss;
}


// SentryHint Sentry.Default__SentryHint
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryHint* USentryHint::GetDefaultObj()
{
	static class USentryHint* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryHint*>(USentryHint::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryHint.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryHint::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryHint", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryHint.AddAttachment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryAttachment*           Attachment                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryHint::AddAttachment(class USentryAttachment* Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryHint", "AddAttachment");

	Params::USentryHint_AddAttachment_Params Parms{};

	Parms.Attachment = Attachment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentryLibrary
// (None)

class UClass* USentryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryLibrary");

	return Clss;
}


// SentryLibrary Sentry.Default__SentryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryLibrary* USentryLibrary::GetDefaultObj()
{
	static class USentryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryLibrary*>(USentryLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryLibrary.CreateSentryUserFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Comments                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryUserFeedback*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryUserFeedback* USentryLibrary::CreateSentryUserFeedback(const class FString& EventID, const class FString& Name, const class FString& Email, const class FString& Comments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryUserFeedback");

	Params::USentryLibrary_CreateSentryUserFeedback_Params Parms{};

	Parms.EventID = EventID;
	Parms.Name = Name;
	Parms.Email = Email;
	Parms.Comments = Comments;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryUser
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Username                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      IpAddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USentryUser*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryUser* USentryLibrary::CreateSentryUser(const class FString& Email, const class FString& ID, const class FString& Username, const class FString& IpAddress, TMap<class FString, class FString>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryUser");

	Params::USentryLibrary_CreateSentryUser_Params Parms{};

	Parms.Email = Email;
	Parms.ID = ID;
	Parms.Username = Username;
	Parms.IpAddress = IpAddress;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryTransactionContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Operation                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryTransactionContext*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryTransactionContext* USentryLibrary::CreateSentryTransactionContext(const class FString& Name, const class FString& Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryTransactionContext");

	Params::USentryLibrary_CreateSentryTransactionContext_Params Parms{};

	Parms.Name = Name;
	Parms.Operation = Operation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryEvent*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryEvent* USentryLibrary::CreateSentryEvent(const class FString& Message, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryEvent");

	Params::USentryLibrary_CreateSentryEvent_Params Parms{};

	Parms.Message = Message;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryBreadcrumb
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Category                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryBreadcrumb*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryBreadcrumb* USentryLibrary::CreateSentryBreadcrumb(const class FString& Message, const class FString& Type, const class FString& Category, TMap<class FString, struct FSentryVariant>& Data, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryBreadcrumb");

	Params::USentryLibrary_CreateSentryBreadcrumb_Params Parms{};

	Parms.Message = Message;
	Parms.Type = Type;
	Parms.Category = Category;
	Parms.Data = Data;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryAttachment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryAttachment* USentryLibrary::CreateSentryAttachmentWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryAttachmentWithPath");

	Params::USentryLibrary_CreateSentryAttachmentWithPath_Params Parms{};

	Parms.Path = Path;
	Parms.Filename = Filename;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryAttachmentWithData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryAttachment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryAttachment* USentryLibrary::CreateSentryAttachmentWithData(TArray<uint8>& Data, const class FString& Filename, const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryAttachmentWithData");

	Params::USentryLibrary_CreateSentryAttachmentWithData_Params Parms{};

	Parms.Data = Data;
	Parms.Filename = Filename;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentrySamplingContext
// (None)

class UClass* USentrySamplingContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySamplingContext");

	return Clss;
}


// SentrySamplingContext Sentry.Default__SentrySamplingContext
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySamplingContext* USentrySamplingContext::GetDefaultObj()
{
	static class USentrySamplingContext* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySamplingContext*>(USentrySamplingContext::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentrySamplingContext.GetTransactionContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USentryTransactionContext*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryTransactionContext* USentrySamplingContext::GetTransactionContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySamplingContext", "GetTransactionContext");

	Params::USentrySamplingContext_GetTransactionContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySamplingContext.GetCustomSamplingContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> USentrySamplingContext::GetCustomSamplingContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySamplingContext", "GetCustomSamplingContext");

	Params::USentrySamplingContext_GetCustomSamplingContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryScope
// (None)

class UClass* USentryScope::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryScope");

	return Clss;
}


// SentryScope Sentry.Default__SentryScope
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryScope* USentryScope::GetDefaultObj()
{
	static class USentryScope* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryScope*>(USentryScope::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryScope.TryGetTag
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryScope::TryGetTag(const class FString& Key, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "TryGetTag");

	Params::USentryScope_TryGetTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.TryGetExtra
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryScope::TryGetExtra(const class FString& Key, struct FSentryVariant* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "TryGetExtra");

	Params::USentryScope_TryGetExtra_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.TryGetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryScope::TryGetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "TryGetContext");

	Params::USentryScope_TryGetContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.SetTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Tags                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryScope::SetTags(TMap<class FString, class FString>& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetTags");

	Params::USentryScope_SetTags_Params Parms{};

	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::SetTag(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetTag");

	Params::USentryScope_SetTag_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetLevel");

	Params::USentryScope_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetFingerprint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Fingerprint                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USentryScope::SetFingerprint(TArray<class FString>& Fingerprint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetFingerprint");

	Params::USentryScope_SetFingerprint_Params Parms{};

	Parms.Fingerprint = Fingerprint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetExtras
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, struct FSentryVariant>Extras                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryScope::SetExtras(TMap<class FString, struct FSentryVariant>& Extras)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetExtras");

	Params::USentryScope_SetExtras_Params Parms{};

	Parms.Extras = Extras;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetExtra
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryScope::SetExtra(const class FString& Key, struct FSentryVariant& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetExtra");

	Params::USentryScope_SetExtra_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Values                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryScope::SetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetContext");

	Params::USentryScope_SetContext_Params Parms{};

	Parms.Key = Key;
	Parms.Values = Values;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::RemoveTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveTag");

	Params::USentryScope_RemoveTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.RemoveExtra
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::RemoveExtra(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveExtra");

	Params::USentryScope_RemoveExtra_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.RemoveContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::RemoveContext(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveContext");

	Params::USentryScope_RemoveContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> USentryScope::GetTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetTags");

	Params::USentryScope_GetTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryScope::GetTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetTag");

	Params::USentryScope_GetTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESentryLevel USentryScope::GetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetLevel");

	Params::USentryScope_GetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetFingerprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> USentryScope::GetFingerprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetFingerprint");

	Params::USentryScope_GetFingerprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetExtras
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, struct FSentryVariant>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, struct FSentryVariant> USentryScope::GetExtras()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetExtras");

	Params::USentryScope_GetExtras_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetExtra
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryScope::GetExtra(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetExtra");

	Params::USentryScope_GetExtra_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, struct FSentryVariant> USentryScope::GetContext(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetContext");

	Params::USentryScope_GetContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.ClearBreadcrumbs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::ClearBreadcrumbs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "ClearBreadcrumbs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.ClearAttachments
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::ClearAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "ClearAttachments");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.AddBreadcrumb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryBreadcrumb*           Breadcrumb                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::AddBreadcrumb(class USentryBreadcrumb* Breadcrumb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "AddBreadcrumb");

	Params::USentryScope_AddBreadcrumb_Params Parms{};

	Parms.Breadcrumb = Breadcrumb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.AddAttachment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryAttachment*           Attachment                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryScope::AddAttachment(class USentryAttachment* Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "AddAttachment");

	Params::USentryScope_AddAttachment_Params Parms{};

	Parms.Attachment = Attachment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.ScopeTestBeforeSendHandler
// (None)

class UClass* UScopeTestBeforeSendHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScopeTestBeforeSendHandler");

	return Clss;
}


// ScopeTestBeforeSendHandler Sentry.Default__ScopeTestBeforeSendHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UScopeTestBeforeSendHandler* UScopeTestBeforeSendHandler::GetDefaultObj()
{
	static class UScopeTestBeforeSendHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UScopeTestBeforeSendHandler*>(UScopeTestBeforeSendHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class Sentry.SentrySettings
// (None)

class UClass* USentrySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySettings");

	return Clss;
}


// SentrySettings Sentry.Default__SentrySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySettings* USentrySettings::GetDefaultObj()
{
	static class USentrySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySettings*>(USentrySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Sentry.SentrySpan
// (None)

class UClass* USentrySpan::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySpan");

	return Clss;
}


// SentrySpan Sentry.Default__SentrySpan
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySpan* USentrySpan::GetDefaultObj()
{
	static class USentrySpan* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySpan*>(USentrySpan::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentrySpan.StartChildWithTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Operation                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Timestamp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentrySpan*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentrySpan* USentrySpan::StartChildWithTimestamp(const class FString& Operation, const class FString& Description, int64 Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "StartChildWithTimestamp");

	Params::USentrySpan_StartChildWithTimestamp_Params Parms{};

	Parms.Operation = Operation;
	Parms.Description = Description;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySpan.StartChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Operation                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentrySpan*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentrySpan* USentrySpan::StartChild(const class FString& Operation, const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "StartChild");

	Params::USentrySpan_StartChild_Params Parms{};

	Parms.Operation = Operation;
	Parms.Description = Description;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySpan.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySpan::SetTag(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "SetTag");

	Params::USentrySpan_SetTag_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySpan.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Values                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentrySpan::SetData(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "SetData");

	Params::USentrySpan_SetData_Params Parms{};

	Parms.Key = Key;
	Parms.Values = Values;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySpan.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySpan::RemoveTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "RemoveTag");

	Params::USentrySpan_RemoveTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySpan.RemoveData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySpan::RemoveData(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "RemoveData");

	Params::USentrySpan_RemoveData_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySpan.IsFinished
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentrySpan::IsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "IsFinished");

	Params::USentrySpan_IsFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySpan.GetTrace
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySpan::GetTrace(class FString* Name, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "GetTrace");

	Params::USentrySpan_GetTrace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function Sentry.SentrySpan.FinishWithTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Timestamp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySpan::FinishWithTimestamp(int64 Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "FinishWithTimestamp");

	Params::USentrySpan_FinishWithTimestamp_Params Parms{};

	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySpan.Finish
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySpan::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySpan", "Finish");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentrySubsystem
// (None)

class UClass* USentrySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySubsystem");

	return Clss;
}


// SentrySubsystem Sentry.Default__SentrySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySubsystem* USentrySubsystem::GetDefaultObj()
{
	static class USentrySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySubsystem*>(USentrySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentrySubsystem.StartTransactionWithContextAndTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryTransactionContext*   Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Timestamp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryTransaction*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryTransaction* USentrySubsystem::StartTransactionWithContextAndTimestamp(class USentryTransactionContext* Context, int64 Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "StartTransactionWithContextAndTimestamp");

	Params::USentrySubsystem_StartTransactionWithContextAndTimestamp_Params Parms{};

	Parms.Context = Context;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.StartTransactionWithContextAndOptions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USentryTransactionContext*   Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USentryTransaction*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryTransaction* USentrySubsystem::StartTransactionWithContextAndOptions(class USentryTransactionContext* Context, TMap<class FString, class FString>& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "StartTransactionWithContextAndOptions");

	Params::USentrySubsystem_StartTransactionWithContextAndOptions_Params Parms{};

	Parms.Context = Context;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.StartTransactionWithContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryTransactionContext*   Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryTransaction*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryTransaction* USentrySubsystem::StartTransactionWithContext(class USentryTransactionContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "StartTransactionWithContext");

	Params::USentrySubsystem_StartTransactionWithContext_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.StartTransaction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Operation                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentryTransaction*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryTransaction* USentrySubsystem::StartTransaction(const class FString& Name, const class FString& Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "StartTransaction");

	Params::USentrySubsystem_StartTransaction_Params Parms{};

	Parms.Name = Name;
	Parms.Operation = Operation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.StartSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::StartSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "StartSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.SetUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryUser*                 User                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::SetUser(class USentryUser* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetUser");

	Params::USentrySubsystem_SetUser_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::SetTag(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetTag");

	Params::USentrySubsystem_SetTag_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::SetLevel(enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetLevel");

	Params::USentrySubsystem_SetLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Values                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentrySubsystem::SetContext(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetContext");

	Params::USentrySubsystem_SetContext_Params Parms{};

	Parms.Key = Key;
	Parms.Values = Values;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.RemoveUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::RemoveUser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "RemoveUser");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::RemoveTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "RemoveTag");

	Params::USentrySubsystem_RemoveTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.IsSupportedForCurrentSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentrySubsystem::IsSupportedForCurrentSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "IsSupportedForCurrentSettings");

	Params::USentrySubsystem_IsSupportedForCurrentSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentrySubsystem::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "IsEnabled");

	Params::USentrySubsystem_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.IsCrashedLastRun
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryCrashedLastRun   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESentryCrashedLastRun USentrySubsystem::IsCrashedLastRun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "IsCrashedLastRun");

	Params::USentrySubsystem_IsCrashedLastRun_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.InitializeWithSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnConfigureSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::InitializeWithSettings(FDelegateProperty_& OnConfigureSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "InitializeWithSettings");

	Params::USentrySubsystem_InitializeWithSettings_Params Parms{};

	Parms.OnConfigureSettings = OnConfigureSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.EndSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::EndSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "EndSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.ContinueTrace
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      SentryTrace                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              BaggageHeaders                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class USentryTransactionContext*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentryTransactionContext* USentrySubsystem::ContinueTrace(const class FString& SentryTrace, TArray<class FString>& BaggageHeaders)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "ContinueTrace");

	Params::USentrySubsystem_ContinueTrace_Params Parms{};

	Parms.SentryTrace = SentryTrace;
	Parms.BaggageHeaders = BaggageHeaders;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.ClearBreadcrumbs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::ClearBreadcrumbs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "ClearBreadcrumbs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.ClearAttachments
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::ClearAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "ClearAttachments");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Comments                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::CaptureUserFeedbackWithParams(const class FString& EventID, const class FString& Email, const class FString& Comments, const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureUserFeedbackWithParams");

	Params::USentrySubsystem_CaptureUserFeedbackWithParams_Params Parms{};

	Parms.EventID = EventID;
	Parms.Email = Email;
	Parms.Comments = Comments;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.CaptureUserFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryUserFeedback*         UserFeedback                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::CaptureUserFeedback(class USentryUserFeedback* UserFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureUserFeedback");

	Params::USentrySubsystem_CaptureUserFeedback_Params Parms{};

	Parms.UserFeedback = UserFeedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.CaptureMessageWithScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnConfigureScope                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentrySubsystem::CaptureMessageWithScope(const class FString& Message, FDelegateProperty_& OnConfigureScope, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureMessageWithScope");

	Params::USentrySubsystem_CaptureMessageWithScope_Params Parms{};

	Parms.Message = Message;
	Parms.OnConfigureScope = OnConfigureScope;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.CaptureMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentrySubsystem::CaptureMessage(const class FString& Message, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureMessage");

	Params::USentrySubsystem_CaptureMessage_Params Parms{};

	Parms.Message = Message;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.CaptureEventWithScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USentryEvent*                Event                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnConfigureScope                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentrySubsystem::CaptureEventWithScope(class USentryEvent* Event, FDelegateProperty_& OnConfigureScope)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureEventWithScope");

	Params::USentrySubsystem_CaptureEventWithScope_Params Parms{};

	Parms.Event = Event;
	Parms.OnConfigureScope = OnConfigureScope;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.CaptureEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryEvent*                Event                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentrySubsystem::CaptureEvent(class USentryEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureEvent");

	Params::USentrySubsystem_CaptureEvent_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.AddBreadcrumbWithParams
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Category                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ESentryLevel            Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::AddBreadcrumbWithParams(const class FString& Message, const class FString& Category, const class FString& Type, TMap<class FString, struct FSentryVariant>& Data, enum class ESentryLevel Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "AddBreadcrumbWithParams");

	Params::USentrySubsystem_AddBreadcrumbWithParams_Params Parms{};

	Parms.Message = Message;
	Parms.Category = Category;
	Parms.Type = Type;
	Parms.Data = Data;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.AddBreadcrumb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryBreadcrumb*           Breadcrumb                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::AddBreadcrumb(class USentryBreadcrumb* Breadcrumb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "AddBreadcrumb");

	Params::USentrySubsystem_AddBreadcrumb_Params Parms{};

	Parms.Breadcrumb = Breadcrumb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.AddAttachment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryAttachment*           Attachment                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentrySubsystem::AddAttachment(class USentryAttachment* Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "AddAttachment");

	Params::USentrySubsystem_AddAttachment_Params Parms{};

	Parms.Attachment = Attachment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentryTraceSampler
// (None)

class UClass* USentryTraceSampler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryTraceSampler");

	return Clss;
}


// SentryTraceSampler Sentry.Default__SentryTraceSampler
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryTraceSampler* USentryTraceSampler::GetDefaultObj()
{
	static class USentryTraceSampler* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryTraceSampler*>(USentryTraceSampler::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryTraceSampler.Sample
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class USentrySamplingContext*      SamplingContext                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SamplingValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryTraceSampler::Sample(class USentrySamplingContext* SamplingContext, float* SamplingValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTraceSampler", "Sample");

	Params::USentryTraceSampler_Sample_Params Parms{};

	Parms.SamplingContext = SamplingContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SamplingValue != nullptr)
		*SamplingValue = Parms.SamplingValue;

	return Parms.ReturnValue;

}


// Class Sentry.SentryTransaction
// (None)

class UClass* USentryTransaction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryTransaction");

	return Clss;
}


// SentryTransaction Sentry.Default__SentryTransaction
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryTransaction* USentryTransaction::GetDefaultObj()
{
	static class USentryTransaction* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryTransaction*>(USentryTransaction::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryTransaction.StartChildSpanWithTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Operation                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Timestamp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentrySpan*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentrySpan* USentryTransaction::StartChildSpanWithTimestamp(const class FString& Operation, const class FString& Description, int64 Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "StartChildSpanWithTimestamp");

	Params::USentryTransaction_StartChildSpanWithTimestamp_Params Parms{};

	Parms.Operation = Operation;
	Parms.Description = Description;
	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryTransaction.StartChildSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Operation                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USentrySpan*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USentrySpan* USentryTransaction::StartChildSpan(const class FString& Operation, const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "StartChildSpan");

	Params::USentryTransaction_StartChildSpan_Params Parms{};

	Parms.Operation = Operation;
	Parms.Description = Description;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryTransaction.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryTransaction::SetTag(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "SetTag");

	Params::USentryTransaction_SetTag_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryTransaction.SetName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryTransaction::SetName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "SetName");

	Params::USentryTransaction_SetName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryTransaction.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Values                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryTransaction::SetData(const class FString& Key, TMap<class FString, struct FSentryVariant>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "SetData");

	Params::USentryTransaction_SetData_Params Parms{};

	Parms.Key = Key;
	Parms.Values = Values;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryTransaction.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryTransaction::RemoveTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "RemoveTag");

	Params::USentryTransaction_RemoveTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryTransaction.RemoveData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryTransaction::RemoveData(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "RemoveData");

	Params::USentryTransaction_RemoveData_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryTransaction.IsFinished
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryTransaction::IsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "IsFinished");

	Params::USentryTransaction_IsFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryTransaction.GetTrace
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryTransaction::GetTrace(class FString* Name, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "GetTrace");

	Params::USentryTransaction_GetTrace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function Sentry.SentryTransaction.FinishWithTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Timestamp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryTransaction::FinishWithTimestamp(int64 Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "FinishWithTimestamp");

	Params::USentryTransaction_FinishWithTimestamp_Params Parms{};

	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryTransaction.Finish
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryTransaction::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransaction", "Finish");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Sentry.SentryTransactionContext
// (None)

class UClass* USentryTransactionContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryTransactionContext");

	return Clss;
}


// SentryTransactionContext Sentry.Default__SentryTransactionContext
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryTransactionContext* USentryTransactionContext::GetDefaultObj()
{
	static class USentryTransactionContext* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryTransactionContext*>(USentryTransactionContext::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryTransactionContext.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Operation                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryTransactionContext::Initialize(const class FString& Name, const class FString& Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransactionContext", "Initialize");

	Params::USentryTransactionContext_Initialize_Params Parms{};

	Parms.Name = Name;
	Parms.Operation = Operation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryTransactionContext.GetOperation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryTransactionContext::GetOperation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransactionContext", "GetOperation");

	Params::USentryTransactionContext_GetOperation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryTransactionContext.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryTransactionContext::GetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryTransactionContext", "GetName");

	Params::USentryTransactionContext_GetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryUser
// (None)

class UClass* USentryUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryUser");

	return Clss;
}


// SentryUser Sentry.Default__SentryUser
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryUser* USentryUser::GetDefaultObj()
{
	static class USentryUser* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryUser*>(USentryUser::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryUser.SetUsername
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Username                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUser::SetUsername(const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetUsername");

	Params::USentryUser_SetUsername_Params Parms{};

	Parms.Username = Username;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetIpAddress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      IpAddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUser::SetIpAddress(const class FString& IpAddress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetIpAddress");

	Params::USentryUser_SetIpAddress_Params Parms{};

	Parms.IpAddress = IpAddress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUser::SetId(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetId");

	Params::USentryUser_SetId_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetEmail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUser::SetEmail(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetEmail");

	Params::USentryUser_SetEmail_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USentryUser::SetData(TMap<class FString, class FString>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetData");

	Params::USentryUser_SetData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.GetUsername
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUser::GetUsername()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetUsername");

	Params::USentryUser_GetUsername_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetIpAddress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUser::GetIpAddress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetIpAddress");

	Params::USentryUser_GetIpAddress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUser::GetID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetID");

	Params::USentryUser_GetID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetEmail
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUser::GetEmail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetEmail");

	Params::USentryUser_GetEmail_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> USentryUser::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetData");

	Params::USentryUser_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryUserFeedback
// (None)

class UClass* USentryUserFeedback::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryUserFeedback");

	return Clss;
}


// SentryUserFeedback Sentry.Default__SentryUserFeedback
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryUserFeedback* USentryUserFeedback::GetDefaultObj()
{
	static class USentryUserFeedback* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryUserFeedback*>(USentryUserFeedback::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryUserFeedback.SetName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUserFeedback::SetName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetName");

	Params::USentryUserFeedback_SetName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.SetEmail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUserFeedback::SetEmail(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetEmail");

	Params::USentryUserFeedback_SetEmail_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.SetComment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Comments                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUserFeedback::SetComment(const class FString& Comments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetComment");

	Params::USentryUserFeedback_SetComment_Params Parms{};

	Parms.Comments = Comments;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventID                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USentryUserFeedback::Initialize(const class FString& EventID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "Initialize");

	Params::USentryUserFeedback_Initialize_Params Parms{};

	Parms.EventID = EventID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUserFeedback::GetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetName");

	Params::USentryUserFeedback_GetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUserFeedback.GetEmail
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUserFeedback::GetEmail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetEmail");

	Params::USentryUserFeedback_GetEmail_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUserFeedback.GetComment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryUserFeedback::GetComment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetComment");

	Params::USentryUserFeedback_GetComment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryVariantHelper
// (None)

class UClass* USentryVariantHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryVariantHelper");

	return Clss;
}


// SentryVariantHelper Sentry.Default__SentryVariantHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryVariantHelper* USentryVariantHelper::GetDefaultObj()
{
	static class USentryVariantHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryVariantHelper*>(USentryVariantHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryVariantHelper.TryGetString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryVariantHelper::TryGetString(struct FSentryVariant& Variant, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "TryGetString");

	Params::USentryVariantHelper_TryGetString_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.TryGetMap
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryVariantHelper::TryGetMap(struct FSentryVariant& Variant, TMap<class FString, struct FSentryVariant>* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "TryGetMap");

	Params::USentryVariantHelper_TryGetMap_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.TryGetInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryVariantHelper::TryGetInteger(struct FSentryVariant& Variant, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "TryGetInteger");

	Params::USentryVariantHelper_TryGetInteger_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.TryGetFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryVariantHelper::TryGetFloat(struct FSentryVariant& Variant, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "TryGetFloat");

	Params::USentryVariantHelper_TryGetFloat_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.TryGetBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryVariantHelper::TryGetBool(struct FSentryVariant& Variant, bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "TryGetBool");

	Params::USentryVariantHelper_TryGetBool_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.TryGetArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSentryVariant>      Value                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryVariantHelper::TryGetArray(struct FSentryVariant& Variant, TArray<struct FSentryVariant>* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "TryGetArray");

	Params::USentryVariantHelper_TryGetArray_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.MakeSentryVariantFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::MakeSentryVariantFromString(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "MakeSentryVariantFromString");

	Params::USentryVariantHelper_MakeSentryVariantFromString_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.MakeSentryVariantFromMap
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<class FString, struct FSentryVariant>Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::MakeSentryVariantFromMap(TMap<class FString, struct FSentryVariant>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "MakeSentryVariantFromMap");

	Params::USentryVariantHelper_MakeSentryVariantFromMap_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.MakeSentryVariantFromInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::MakeSentryVariantFromInteger(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "MakeSentryVariantFromInteger");

	Params::USentryVariantHelper_MakeSentryVariantFromInteger_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.MakeSentryVariantFromFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::MakeSentryVariantFromFloat(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "MakeSentryVariantFromFloat");

	Params::USentryVariantHelper_MakeSentryVariantFromFloat_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.MakeSentryVariantFromBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::MakeSentryVariantFromBool(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "MakeSentryVariantFromBool");

	Params::USentryVariantHelper_MakeSentryVariantFromBool_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.MakeSentryVariantFromArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSentryVariant>      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::MakeSentryVariantFromArray(TArray<struct FSentryVariant>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "MakeSentryVariantFromArray");

	Params::USentryVariantHelper_MakeSentryVariantFromArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.GetType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ESentryVariantType      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESentryVariantType USentryVariantHelper::GetType(struct FSentryVariant& Variant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "GetType");

	Params::USentryVariantHelper_GetType_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.GetString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USentryVariantHelper::GetString(struct FSentryVariant& Variant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "GetString");

	Params::USentryVariantHelper_GetString_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.GetMap
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<class FString, struct FSentryVariant>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, struct FSentryVariant> USentryVariantHelper::GetMap(struct FSentryVariant& Variant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "GetMap");

	Params::USentryVariantHelper_GetMap_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.GetInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USentryVariantHelper::GetInteger(struct FSentryVariant& Variant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "GetInteger");

	Params::USentryVariantHelper_GetInteger_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.GetFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USentryVariantHelper::GetFloat(struct FSentryVariant& Variant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "GetFloat");

	Params::USentryVariantHelper_GetFloat_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.GetBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USentryVariantHelper::GetBool(struct FSentryVariant& Variant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "GetBool");

	Params::USentryVariantHelper_GetBool_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.GetArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSentryVariant              Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSentryVariant>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSentryVariant> USentryVariantHelper::GetArray(struct FSentryVariant& Variant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "GetArray");

	Params::USentryVariantHelper_GetArray_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.Conv_StringToFSentryVariant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::Conv_StringToFSentryVariant(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "Conv_StringToFSentryVariant");

	Params::USentryVariantHelper_Conv_StringToFSentryVariant_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.Conv_MapToFSentryVariant
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<class FString, struct FSentryVariant>Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::Conv_MapToFSentryVariant(TMap<class FString, struct FSentryVariant>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "Conv_MapToFSentryVariant");

	Params::USentryVariantHelper_Conv_MapToFSentryVariant_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.Conv_IntToFSentryVariant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::Conv_IntToFSentryVariant(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "Conv_IntToFSentryVariant");

	Params::USentryVariantHelper_Conv_IntToFSentryVariant_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.Conv_FloatToFSentryVariant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::Conv_FloatToFSentryVariant(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "Conv_FloatToFSentryVariant");

	Params::USentryVariantHelper_Conv_FloatToFSentryVariant_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.Conv_BoolToFSentryVariant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::Conv_BoolToFSentryVariant(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "Conv_BoolToFSentryVariant");

	Params::USentryVariantHelper_Conv_BoolToFSentryVariant_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryVariantHelper.Conv_ArrayToFSentryVariant
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSentryVariant>      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSentryVariant              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSentryVariant USentryVariantHelper::Conv_ArrayToFSentryVariant(TArray<struct FSentryVariant>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryVariantHelper", "Conv_ArrayToFSentryVariant");

	Params::USentryVariantHelper_Conv_ArrayToFSentryVariant_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


