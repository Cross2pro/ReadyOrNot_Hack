#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModioUICore.ModioActivatableWidget
// (None)

class UClass* IModioActivatableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioActivatableWidget");

	return Clss;
}


// ModioActivatableWidget ModioUICore.Default__ModioActivatableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioActivatableWidget* IModioActivatableWidget::GetDefaultObj()
{
	static class IModioActivatableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioActivatableWidget*>(IModioActivatableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioActivatableWidget.RemoveActivationChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioActivatableWidget::RemoveActivationChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioActivatableWidget", "RemoveActivationChangedHandler");

	Params::IModioActivatableWidget_RemoveActivationChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioActivatableWidget.Deactivate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioActivatableWidget::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioActivatableWidget", "Deactivate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioActivatableWidget.AddActivationChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioActivatableWidget::AddActivationChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioActivatableWidget", "AddActivationChangedHandler");

	Params::IModioActivatableWidget_AddActivationChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioActivatableWidget.Activate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioActivatableWidget::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioActivatableWidget", "Activate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioEnumEntryUIDetails
// (None)

class UClass* IModioEnumEntryUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioEnumEntryUIDetails");

	return Clss;
}


// ModioEnumEntryUIDetails ModioUICore.Default__ModioEnumEntryUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioEnumEntryUIDetails* IModioEnumEntryUIDetails::GetDefaultObj()
{
	static class IModioEnumEntryUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioEnumEntryUIDetails*>(IModioEnumEntryUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioEnumEntryUIDetails.GetEnumEntryDetails
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              EnumValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        EnumValueDisplayText                                             (Parm, OutParm, NativeAccessSpecifierPublic)

void IModioEnumEntryUIDetails::GetEnumEntryDetails(uint8* EnumValue, class FText* EnumValueDisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumEntryUIDetails", "GetEnumEntryDetails");

	Params::IModioEnumEntryUIDetails_GetEnumEntryDetails_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EnumValue != nullptr)
		*EnumValue = Parms.EnumValue;

	if (EnumValueDisplayText != nullptr)
		*EnumValueDisplayText = Parms.EnumValueDisplayText;

}


// Class ModioUICore.ModioFocusableWidget
// (None)

class UClass* IModioFocusableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFocusableWidget");

	return Clss;
}


// ModioFocusableWidget ModioUICore.Default__ModioFocusableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioFocusableWidget* IModioFocusableWidget::GetDefaultObj()
{
	static class IModioFocusableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioFocusableWidget*>(IModioFocusableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioFocusableWidget.RemoveFocusPathChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioFocusableWidget::RemoveFocusPathChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFocusableWidget", "RemoveFocusPathChangedHandler");

	Params::IModioFocusableWidget_RemoveFocusPathChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioFocusableWidget.GetWidgetToFocus
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EUINavigation           NavigationType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* IModioFocusableWidget::GetWidgetToFocus(enum class EUINavigation NavigationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFocusableWidget", "GetWidgetToFocus");

	Params::IModioFocusableWidget_GetWidgetToFocus_Params Parms{};

	Parms.NavigationType = NavigationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioFocusableWidget.AddFocusPathChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioFocusableWidget::AddFocusPathChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFocusableWidget", "AddFocusPathChangedHandler");

	Params::IModioFocusableWidget_AddFocusPathChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioGalleryImageUIDetails
// (None)

class UClass* IModioGalleryImageUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioGalleryImageUIDetails");

	return Clss;
}


// ModioGalleryImageUIDetails ModioUICore.Default__ModioGalleryImageUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioGalleryImageUIDetails* IModioGalleryImageUIDetails::GetDefaultObj()
{
	static class IModioGalleryImageUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioGalleryImageUIDetails*>(IModioGalleryImageUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioGalleryImageUIDetails.GetIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IModioGalleryImageUIDetails::GetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioGalleryImageUIDetails", "GetIndex");

	Params::IModioGalleryImageUIDetails_GetIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioGalleryImageUIDetails.GetImage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioImageWrapper          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioImageWrapper IModioGalleryImageUIDetails::GetImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioGalleryImageUIDetails", "GetImage");

	Params::IModioGalleryImageUIDetails_GetImage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModDependencyUIDetails
// (None)

class UClass* IModioModDependencyUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDependencyUIDetails");

	return Clss;
}


// ModioModDependencyUIDetails ModioUICore.Default__ModioModDependencyUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioModDependencyUIDetails* IModioModDependencyUIDetails::GetDefaultObj()
{
	static class IModioModDependencyUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioModDependencyUIDetails*>(IModioModDependencyUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModDependencyUIDetails.GetModID
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModID                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioModID IModioModDependencyUIDetails::GetModID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDependencyUIDetails", "GetModID");

	Params::IModioModDependencyUIDetails_GetModID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDependencyUIDetails.GetModDependency
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModDependency         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioModDependency IModioModDependencyUIDetails::GetModDependency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDependencyUIDetails", "GetModDependency");

	Params::IModioModDependencyUIDetails_GetModDependency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModFilterUIDetails
// (None)

class UClass* IModioModFilterUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModFilterUIDetails");

	return Clss;
}


// ModioModFilterUIDetails ModioUICore.Default__ModioModFilterUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioModFilterUIDetails* IModioModFilterUIDetails::GetDefaultObj()
{
	static class IModioModFilterUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioModFilterUIDetails*>(IModioModFilterUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModFilterUIDetails.GetFilterParams
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioFilterParams          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioFilterParams IModioModFilterUIDetails::GetFilterParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModFilterUIDetails", "GetFilterParams");

	Params::IModioModFilterUIDetails_GetFilterParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModFilterUIDetails.GetFilterName
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioModFilterUIDetails::GetFilterName(class FText& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModFilterUIDetails", "GetFilterName");

	Params::IModioModFilterUIDetails_GetFilterName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModInfoUIDetails
// (None)

class UClass* IModioModInfoUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModInfoUIDetails");

	return Clss;
}


// ModioModInfoUIDetails ModioUICore.Default__ModioModInfoUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioModInfoUIDetails* IModioModInfoUIDetails::GetDefaultObj()
{
	static class IModioModInfoUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioModInfoUIDetails*>(IModioModInfoUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModInfoUIDetails.GetModID
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModID                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioModID IModioModInfoUIDetails::GetModID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModInfoUIDetails", "GetModID");

	Params::IModioModInfoUIDetails_GetModID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModInfoUIDetails.GetFullModInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModInfo               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioModInfo IModioModInfoUIDetails::GetFullModInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModInfoUIDetails", "GetFullModInfo");

	Params::IModioModInfoUIDetails_GetFullModInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModTagUIDetails
// (None)

class UClass* IModioModTagUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagUIDetails");

	return Clss;
}


// ModioModTagUIDetails ModioUICore.Default__ModioModTagUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioModTagUIDetails* IModioModTagUIDetails::GetDefaultObj()
{
	static class IModioModTagUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioModTagUIDetails*>(IModioModTagUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModTagUIDetails.SetSelectionState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewSelectionState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioModTagUIDetails::SetSelectionState(bool bNewSelectionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagUIDetails", "SetSelectionState");

	Params::IModioModTagUIDetails_SetSelectionState_Params Parms{};

	Parms.bNewSelectionState = bNewSelectionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModTagUIDetails.GetSelectionState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioModTagUIDetails::GetSelectionState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagUIDetails", "GetSelectionState");

	Params::IModioModTagUIDetails_GetSelectionState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagUIDetails.GetRawStringValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString IModioModTagUIDetails::GetRawStringValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagUIDetails", "GetRawStringValue");

	Params::IModioModTagUIDetails_GetRawStringValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagUIDetails.GetLocalizedText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText IModioModTagUIDetails::GetLocalizedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagUIDetails", "GetLocalizedText");

	Params::IModioModTagUIDetails_GetLocalizedText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModTagCategoryUIDetails
// (None)

class UClass* IModioModTagCategoryUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagCategoryUIDetails");

	return Clss;
}


// ModioModTagCategoryUIDetails ModioUICore.Default__ModioModTagCategoryUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioModTagCategoryUIDetails* IModioModTagCategoryUIDetails::GetDefaultObj()
{
	static class IModioModTagCategoryUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioModTagCategoryUIDetails*>(IModioModTagCategoryUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModTagCategoryUIDetails.GetSelectedTags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> IModioModTagCategoryUIDetails::GetSelectedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagCategoryUIDetails", "GetSelectedTags");

	Params::IModioModTagCategoryUIDetails_GetSelectedTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagCategoryUIDetails.GetRawCategoryName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString IModioModTagCategoryUIDetails::GetRawCategoryName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagCategoryUIDetails", "GetRawCategoryName");

	Params::IModioModTagCategoryUIDetails_GetRawCategoryName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagCategoryUIDetails.GetLocalizedCategoryName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText IModioModTagCategoryUIDetails::GetLocalizedCategoryName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagCategoryUIDetails", "GetLocalizedCategoryName");

	Params::IModioModTagCategoryUIDetails_GetLocalizedCategoryName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagCategoryUIDetails.GetIsCategoryLocked
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioModTagCategoryUIDetails::GetIsCategoryLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagCategoryUIDetails", "GetIsCategoryLocked");

	Params::IModioModTagCategoryUIDetails_GetIsCategoryLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagCategoryUIDetails.GetIsCategoryHidden
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioModTagCategoryUIDetails::GetIsCategoryHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagCategoryUIDetails", "GetIsCategoryHidden");

	Params::IModioModTagCategoryUIDetails_GetIsCategoryHidden_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagCategoryUIDetails.GetCategoryTags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class IModioModTagUIDetails>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class IModioModTagUIDetails>> IModioModTagCategoryUIDetails::GetCategoryTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagCategoryUIDetails", "GetCategoryTags");

	Params::IModioModTagCategoryUIDetails_GetCategoryTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagCategoryUIDetails.GetAllowMultipleSelection
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioModTagCategoryUIDetails::GetAllowMultipleSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagCategoryUIDetails", "GetAllowMultipleSelection");

	Params::IModioModTagCategoryUIDetails_GetAllowMultipleSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModTagOptionsUIDetails
// (None)

class UClass* IModioModTagOptionsUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagOptionsUIDetails");

	return Clss;
}


// ModioModTagOptionsUIDetails ModioUICore.Default__ModioModTagOptionsUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioModTagOptionsUIDetails* IModioModTagOptionsUIDetails::GetDefaultObj()
{
	static class IModioModTagOptionsUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioModTagOptionsUIDetails*>(IModioModTagOptionsUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModTagOptionsUIDetails.GetSelectedTags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> IModioModTagOptionsUIDetails::GetSelectedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagOptionsUIDetails", "GetSelectedTags");

	Params::IModioModTagOptionsUIDetails_GetSelectedTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagOptionsUIDetails.GetCategories
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class IModioModTagCategoryUIDetails>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class IModioModTagCategoryUIDetails>> IModioModTagOptionsUIDetails::GetCategories()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagOptionsUIDetails", "GetCategories");

	Params::IModioModTagOptionsUIDetails_GetCategories_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagOptionsUIDetails.ClearSelectedTags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioModTagOptionsUIDetails::ClearSelectedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagOptionsUIDetails", "ClearSelectedTags");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioScrollableWidget
// (None)

class UClass* IModioScrollableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioScrollableWidget");

	return Clss;
}


// ModioScrollableWidget ModioUICore.Default__ModioScrollableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioScrollableWidget* IModioScrollableWidget::GetDefaultObj()
{
	static class IModioScrollableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioScrollableWidget*>(IModioScrollableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioScrollableWidget.SetScrollOffset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioScrollableWidget::SetScrollOffset(float Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioScrollableWidget", "SetScrollOffset");

	Params::IModioScrollableWidget_SetScrollOffset_Params Parms{};

	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioScrollableWidget.ScrollToTop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioScrollableWidget::ScrollToTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioScrollableWidget", "ScrollToTop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioScrollableWidget.ScrollToBottom
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioScrollableWidget::ScrollToBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioScrollableWidget", "ScrollToBottom");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioScrollableWidget.GetScrollOffset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float IModioScrollableWidget::GetScrollOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioScrollableWidget", "GetScrollOffset");

	Params::IModioScrollableWidget_GetScrollOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioToggleableWidget
// (None)

class UClass* IModioToggleableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioToggleableWidget");

	return Clss;
}


// ModioToggleableWidget ModioUICore.Default__ModioToggleableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioToggleableWidget* IModioToggleableWidget::GetDefaultObj()
{
	static class IModioToggleableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioToggleableWidget*>(IModioToggleableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioToggleableWidget.RemoveToggleStateChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioToggleableWidget::RemoveToggleStateChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioToggleableWidget", "RemoveToggleStateChangedHandler");

	Params::IModioToggleableWidget_RemoveToggleStateChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioToggleableWidget.Open
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFocusMenu                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioToggleableWidget::Open(bool bForce, bool bFocusMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioToggleableWidget", "Open");

	Params::IModioToggleableWidget_Open_Params Parms{};

	Parms.bForce = bForce;
	Parms.bFocusMenu = bFocusMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioToggleableWidget.IsOpen
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioToggleableWidget::IsOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioToggleableWidget", "IsOpen");

	Params::IModioToggleableWidget_IsOpen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioToggleableWidget.Close
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioToggleableWidget::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioToggleableWidget", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioToggleableWidget.AddToggleStateChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioToggleableWidget::AddToggleStateChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioToggleableWidget", "AddToggleStateChangedHandler");

	Params::IModioToggleableWidget_AddToggleStateChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIClickableWidget
// (None)

class UClass* IModioUIClickableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIClickableWidget");

	return Clss;
}


// ModioUIClickableWidget ModioUICore.Default__ModioUIClickableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIClickableWidget* IModioUIClickableWidget::GetDefaultObj()
{
	static class IModioUIClickableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIClickableWidget*>(IModioUIClickableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIClickableWidget.RemoveClickedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIClickableWidget::RemoveClickedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIClickableWidget", "RemoveClickedHandler");

	Params::IModioUIClickableWidget_RemoveClickedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIClickableWidget.EnableClick
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIClickableWidget::EnableClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIClickableWidget", "EnableClick");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIClickableWidget.DisableClick
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIClickableWidget::DisableClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIClickableWidget", "DisableClick");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIClickableWidget.AddClickedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIClickableWidget::AddClickedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIClickableWidget", "AddClickedHandler");

	Params::IModioUIClickableWidget_AddClickedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIBoundActionWidget
// (None)

class UClass* IModioUIBoundActionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIBoundActionWidget");

	return Clss;
}


// ModioUIBoundActionWidget ModioUICore.Default__ModioUIBoundActionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIBoundActionWidget* IModioUIBoundActionWidget::GetDefaultObj()
{
	static class IModioUIBoundActionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIBoundActionWidget*>(IModioUIBoundActionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIBoundActionWidget.TryGetBoundAction
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUIBoundActionWidget::TryGetBoundAction(struct FDataTableRowHandle* InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIBoundActionWidget", "TryGetBoundAction");

	Params::IModioUIBoundActionWidget_TryGetBoundAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InputActionRow != nullptr)
		*InputActionRow = std::move(Parms.InputActionRow);

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIBoundActionWidget.SetBoundAction
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IModioUIBoundActionWidget::SetBoundAction(struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIBoundActionWidget", "SetBoundAction");

	Params::IModioUIBoundActionWidget_SetBoundAction_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIBoundActionWidget.RemoveActionProgressHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIBoundActionWidget::RemoveActionProgressHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIBoundActionWidget", "RemoveActionProgressHandler");

	Params::IModioUIBoundActionWidget_RemoveActionProgressHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIBoundActionWidget.RemoveActionCompletedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIBoundActionWidget::RemoveActionCompletedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIBoundActionWidget", "RemoveActionCompletedHandler");

	Params::IModioUIBoundActionWidget_RemoveActionCompletedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIBoundActionWidget.ClearBoundAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIBoundActionWidget::ClearBoundAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIBoundActionWidget", "ClearBoundAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIBoundActionWidget.AddActionProgressHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIBoundActionWidget::AddActionProgressHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIBoundActionWidget", "AddActionProgressHandler");

	Params::IModioUIBoundActionWidget_AddActionProgressHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIBoundActionWidget.AddActionCompletedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIBoundActionWidget::AddActionCompletedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIBoundActionWidget", "AddActionCompletedHandler");

	Params::IModioUIBoundActionWidget_AddActionCompletedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUICommandMenu
// (None)

class UClass* IModioUICommandMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUICommandMenu");

	return Clss;
}


// ModioUICommandMenu ModioUICore.Default__ModioUICommandMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUICommandMenu* IModioUICommandMenu::GetDefaultObj()
{
	static class IModioUICommandMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUICommandMenu*>(IModioUICommandMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUICommandMenu.RemoveCommandListBuilder
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Builder                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUICommandMenu::RemoveCommandListBuilder(FDelegateProperty_& Builder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandMenu", "RemoveCommandListBuilder");

	Params::IModioUICommandMenu_RemoveCommandListBuilder_Params Parms{};

	Parms.Builder = Builder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUICommandMenu.RebuildCommandList
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUICommandMenu::RebuildCommandList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandMenu", "RebuildCommandList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUICommandMenu.AddCommandListBuilder
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Builder                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUICommandMenu::AddCommandListBuilder(FDelegateProperty_& Builder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandMenu", "AddCommandListBuilder");

	Params::IModioUICommandMenu_AddCommandListBuilder_Params Parms{};

	Parms.Builder = Builder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUICommandObject
// (None)

class UClass* IModioUICommandObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUICommandObject");

	return Clss;
}


// ModioUICommandObject ModioUICore.Default__ModioUICommandObject
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUICommandObject* IModioUICommandObject::GetDefaultObj()
{
	static class IModioUICommandObject* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUICommandObject*>(IModioUICommandObject::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUICommandObject.SetDataSource
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InDataSource                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUICommandObject::SetDataSource(class UObject* InDataSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandObject", "SetDataSource");

	Params::IModioUICommandObject_SetDataSource_Params Parms{};

	Parms.InDataSource = InDataSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUICommandObject.GetCommandDisplayString
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText IModioUICommandObject::GetCommandDisplayString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandObject", "GetCommandDisplayString");

	Params::IModioUICommandObject_GetCommandDisplayString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommandObject.GetCommandBrush
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush IModioUICommandObject::GetCommandBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandObject", "GetCommandBrush");

	Params::IModioUICommandObject_GetCommandBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommandObject.Execute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUICommandObject::Execute(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandObject", "Execute");

	Params::IModioUICommandObject_Execute_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUICommandObject.CanExecute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUICommandObject::CanExecute(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandObject", "CanExecute");

	Params::IModioUICommandObject_CanExecute_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUICommandLibrary
// (None)

class UClass* UModioUICommandLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUICommandLibrary");

	return Clss;
}


// ModioUICommandLibrary ModioUICore.Default__ModioUICommandLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUICommandLibrary* UModioUICommandLibrary::GetDefaultObj()
{
	static class UModioUICommandLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUICommandLibrary*>(UModioUICommandLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUICommandLibrary.GetCommandText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      CommandID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TextName                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResolved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UModioUICommandLibrary::GetCommandText(const class FString& CommandID, class FName& TextName, bool* bResolved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandLibrary", "GetCommandText");

	Params::UModioUICommandLibrary_GetCommandText_Params Parms{};

	Parms.CommandID = CommandID;
	Parms.TextName = TextName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bResolved != nullptr)
		*bResolved = Parms.bResolved;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommandLibrary.GetCommandBrush
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      CommandID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BrushName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResolved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FSlateBrush UModioUICommandLibrary::GetCommandBrush(const class FString& CommandID, class FName& BrushName, bool* bResolved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandLibrary", "GetCommandBrush");

	Params::UModioUICommandLibrary_GetCommandBrush_Params Parms{};

	Parms.CommandID = CommandID;
	Parms.BrushName = BrushName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bResolved != nullptr)
		*bResolved = Parms.bResolved;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommandLibrary.GetCommandAssetEntry
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      CommandID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResolved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioUICommandAssetEntry   ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FModioUICommandAssetEntry UModioUICommandLibrary::GetCommandAssetEntry(const class FString& CommandID, bool* bResolved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandLibrary", "GetCommandAssetEntry");

	Params::UModioUICommandLibrary_GetCommandAssetEntry_Params Parms{};

	Parms.CommandID = CommandID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bResolved != nullptr)
		*bResolved = Parms.bResolved;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUICommonButtonWidget
// (None)

class UClass* IModioUICommonButtonWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUICommonButtonWidget");

	return Clss;
}


// ModioUICommonButtonWidget ModioUICore.Default__ModioUICommonButtonWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUICommonButtonWidget* IModioUICommonButtonWidget::GetDefaultObj()
{
	static class IModioUICommonButtonWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUICommonButtonWidget*>(IModioUICommonButtonWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUICommonButtonWidget.ConfigureCommonButton
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioCommonButtonParams    Params                                                           (Parm, NativeAccessSpecifierPublic)

void IModioUICommonButtonWidget::ConfigureCommonButton(const struct FModioCommonButtonParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonButtonWidget", "ConfigureCommonButton");

	Params::IModioUICommonButtonWidget_ConfigureCommonButton_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIConnectivityChangedReceiver
// (None)

class UClass* IModioUIConnectivityChangedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIConnectivityChangedReceiver");

	return Clss;
}


// ModioUIConnectivityChangedReceiver ModioUICore.Default__ModioUIConnectivityChangedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIConnectivityChangedReceiver* IModioUIConnectivityChangedReceiver::GetDefaultObj()
{
	static class IModioUIConnectivityChangedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIConnectivityChangedReceiver*>(IModioUIConnectivityChangedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIConnectivityChangedReceiver.OnConnectivityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewConnectivityState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIConnectivityChangedReceiver::OnConnectivityChanged(bool bNewConnectivityState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIConnectivityChangedReceiver", "OnConnectivityChanged");

	Params::IModioUIConnectivityChangedReceiver_OnConnectivityChanged_Params Parms{};

	Parms.bNewConnectivityState = bNewConnectivityState;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIConnectivityChangedReceiverLibrary
// (None)

class UClass* UModioUIConnectivityChangedReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIConnectivityChangedReceiverLibrary");

	return Clss;
}


// ModioUIConnectivityChangedReceiverLibrary ModioUICore.Default__ModioUIConnectivityChangedReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIConnectivityChangedReceiverLibrary* UModioUIConnectivityChangedReceiverLibrary::GetDefaultObj()
{
	static class UModioUIConnectivityChangedReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIConnectivityChangedReceiverLibrary*>(UModioUIConnectivityChangedReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIConnectivityChangedReceiverLibrary.RegisterConnectivityChangedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIConnectivityChangedReceiverLibrary::RegisterConnectivityChangedReceiver(class UObject* ObjectToRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIConnectivityChangedReceiverLibrary", "RegisterConnectivityChangedReceiver");

	Params::UModioUIConnectivityChangedReceiverLibrary_RegisterConnectivityChangedReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIConnectivityChangedReceiverLibrary.DeregisterConnectivityChangedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIConnectivityChangedReceiverLibrary::DeregisterConnectivityChangedReceiver(class UObject* ObjectToDeregister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIConnectivityChangedReceiverLibrary", "DeregisterConnectivityChangedReceiver");

	Params::UModioUIConnectivityChangedReceiverLibrary_DeregisterConnectivityChangedReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIDataSourceWidget
// (None)

class UClass* IModioUIDataSourceWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDataSourceWidget");

	return Clss;
}


// ModioUIDataSourceWidget ModioUICore.Default__ModioUIDataSourceWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIDataSourceWidget* IModioUIDataSourceWidget::GetDefaultObj()
{
	static class IModioUIDataSourceWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIDataSourceWidget*>(IModioUIDataSourceWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIDataSourceWidget.SetDataSource
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InDataSource                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDataSourceWidget::SetDataSource(class UObject* InDataSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDataSourceWidget", "SetDataSource");

	Params::IModioUIDataSourceWidget_SetDataSource_Params Parms{};

	Parms.InDataSource = InDataSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDataSourceWidget.GetDataSource
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* IModioUIDataSourceWidget::GetDataSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDataSourceWidget", "GetDataSource");

	Params::IModioUIDataSourceWidget_GetDataSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUIDialog
// (None)

class UClass* IModioUIDialog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDialog");

	return Clss;
}


// ModioUIDialog ModioUICore.Default__ModioUIDialog
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIDialog* IModioUIDialog::GetDefaultObj()
{
	static class IModioUIDialog* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIDialog*>(IModioUIDialog::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIDialog.ShowModal
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFocusCancelButton                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialog::ShowModal(bool bFocusCancelButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "ShowModal");

	Params::IModioUIDialog_ShowModal_Params Parms{};

	Parms.bFocusCancelButton = bFocusCancelButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialog.RemoveDialogShownHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialog::RemoveDialogShownHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "RemoveDialogShownHandler");

	Params::IModioUIDialog_RemoveDialogShownHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialog.RemoveDialogConfirmedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialog::RemoveDialogConfirmedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "RemoveDialogConfirmedHandler");

	Params::IModioUIDialog_RemoveDialogConfirmedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialog.RemoveDialogCanceledHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialog::RemoveDialogCanceledHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "RemoveDialogCanceledHandler");

	Params::IModioUIDialog_RemoveDialogCanceledHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialog.RemoveDialogButtonClickedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialog::RemoveDialogButtonClickedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "RemoveDialogButtonClickedHandler");

	Params::IModioUIDialog_RemoveDialogButtonClickedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialog.CloseModal
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIDialog::CloseModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "CloseModal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialog.AddDialogShownHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialog::AddDialogShownHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "AddDialogShownHandler");

	Params::IModioUIDialog_AddDialogShownHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialog.AddDialogConfirmedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialog::AddDialogConfirmedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "AddDialogConfirmedHandler");

	Params::IModioUIDialog_AddDialogConfirmedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialog.AddDialogCanceledHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialog::AddDialogCanceledHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "AddDialogCanceledHandler");

	Params::IModioUIDialog_AddDialogCanceledHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialog.AddDialogButtonClickedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialog::AddDialogButtonClickedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialog", "AddDialogButtonClickedHandler");

	Params::IModioUIDialog_AddDialogButtonClickedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIDialogDisplayEventReceiver
// (None)

class UClass* IModioUIDialogDisplayEventReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDialogDisplayEventReceiver");

	return Clss;
}


// ModioUIDialogDisplayEventReceiver ModioUICore.Default__ModioUIDialogDisplayEventReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIDialogDisplayEventReceiver* IModioUIDialogDisplayEventReceiver::GetDefaultObj()
{
	static class IModioUIDialogDisplayEventReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIDialogDisplayEventReceiver*>(IModioUIDialogDisplayEventReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIDialogDisplayEventReceiver.OnDialogDisplayEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EModioUIDialogType      DialogRequested                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     DataSource                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialogDisplayEventReceiver::OnDialogDisplayEvent(enum class EModioUIDialogType DialogRequested, class UObject* DataSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialogDisplayEventReceiver", "OnDialogDisplayEvent");

	Params::IModioUIDialogDisplayEventReceiver_OnDialogDisplayEvent_Params Parms{};

	Parms.DialogRequested = DialogRequested;
	Parms.DataSource = DataSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIDialogDisplayEventReceiverLibrary
// (None)

class UClass* UModioUIDialogDisplayEventReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDialogDisplayEventReceiverLibrary");

	return Clss;
}


// ModioUIDialogDisplayEventReceiverLibrary ModioUICore.Default__ModioUIDialogDisplayEventReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIDialogDisplayEventReceiverLibrary* UModioUIDialogDisplayEventReceiverLibrary::GetDefaultObj()
{
	static class UModioUIDialogDisplayEventReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIDialogDisplayEventReceiverLibrary*>(UModioUIDialogDisplayEventReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIDialogDisplayEventReceiverLibrary.RegisterDialogDisplayEventReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIDialogDisplayEventReceiverLibrary::RegisterDialogDisplayEventReceiver(class UObject* ObjectToRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialogDisplayEventReceiverLibrary", "RegisterDialogDisplayEventReceiver");

	Params::UModioUIDialogDisplayEventReceiverLibrary_RegisterDialogDisplayEventReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDialogDisplayEventReceiverLibrary.DeregisterDialogDisplayEventReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIDialogDisplayEventReceiverLibrary::DeregisterDialogDisplayEventReceiver(class UObject* ObjectToDeregister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialogDisplayEventReceiverLibrary", "DeregisterDialogDisplayEventReceiver");

	Params::UModioUIDialogDisplayEventReceiverLibrary_DeregisterDialogDisplayEventReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIEntitlementRefreshEventReceiver
// (None)

class UClass* IModioUIEntitlementRefreshEventReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIEntitlementRefreshEventReceiver");

	return Clss;
}


// ModioUIEntitlementRefreshEventReceiver ModioUICore.Default__ModioUIEntitlementRefreshEventReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIEntitlementRefreshEventReceiver* IModioUIEntitlementRefreshEventReceiver::GetDefaultObj()
{
	static class IModioUIEntitlementRefreshEventReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIEntitlementRefreshEventReceiver*>(IModioUIEntitlementRefreshEventReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIEntitlementRefreshEventReceiver.OnEntitlementRefreshEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void IModioUIEntitlementRefreshEventReceiver::OnEntitlementRefreshEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIEntitlementRefreshEventReceiver", "OnEntitlementRefreshEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ModioUICore.ModioUIEntitlementRefreshEventReceiverLibrary
// (None)

class UClass* UModioUIEntitlementRefreshEventReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIEntitlementRefreshEventReceiverLibrary");

	return Clss;
}


// ModioUIEntitlementRefreshEventReceiverLibrary ModioUICore.Default__ModioUIEntitlementRefreshEventReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIEntitlementRefreshEventReceiverLibrary* UModioUIEntitlementRefreshEventReceiverLibrary::GetDefaultObj()
{
	static class UModioUIEntitlementRefreshEventReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIEntitlementRefreshEventReceiverLibrary*>(UModioUIEntitlementRefreshEventReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIEntitlementRefreshEventReceiverLibrary.RegisterEntitlementRefreshEventReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIEntitlementRefreshEventReceiverLibrary::RegisterEntitlementRefreshEventReceiver(class UObject* ObjectToRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIEntitlementRefreshEventReceiverLibrary", "RegisterEntitlementRefreshEventReceiver");

	Params::UModioUIEntitlementRefreshEventReceiverLibrary_RegisterEntitlementRefreshEventReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIEntitlementRefreshEventReceiverLibrary.DeregisterEntitlementRefreshEventReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIEntitlementRefreshEventReceiverLibrary::DeregisterEntitlementRefreshEventReceiver(class UObject* ObjectToDeregister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIEntitlementRefreshEventReceiverLibrary", "DeregisterEntitlementRefreshEventReceiver");

	Params::UModioUIEntitlementRefreshEventReceiverLibrary_DeregisterEntitlementRefreshEventReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIHasConfigurableColor
// (None)

class UClass* IModioUIHasConfigurableColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIHasConfigurableColor");

	return Clss;
}


// ModioUIHasConfigurableColor ModioUICore.Default__ModioUIHasConfigurableColor
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIHasConfigurableColor* IModioUIHasConfigurableColor::GetDefaultObj()
{
	static class IModioUIHasConfigurableColor* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIHasConfigurableColor*>(IModioUIHasConfigurableColor::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIHasConfigurableColor.ConfigureWidgetColorDirectly
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ColorName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateColor                 ColorValue                                                       (Parm, NativeAccessSpecifierPublic)

void IModioUIHasConfigurableColor::ConfigureWidgetColorDirectly(class FName ColorName, const struct FSlateColor& ColorValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasConfigurableColor", "ConfigureWidgetColorDirectly");

	Params::IModioUIHasConfigurableColor_ConfigureWidgetColorDirectly_Params Parms{};

	Parms.ColorName = ColorName;
	Parms.ColorValue = ColorValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIHasConfigurableColor.ConfigureWidgetColor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ColorName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColorRef             ColorValue                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void IModioUIHasConfigurableColor::ConfigureWidgetColor(class FName ColorName, const struct FLinearColorRef& ColorValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasConfigurableColor", "ConfigureWidgetColor");

	Params::IModioUIHasConfigurableColor_ConfigureWidgetColor_Params Parms{};

	Parms.ColorName = ColorName;
	Parms.ColorValue = ColorValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIHasLoadStateWidget
// (None)

class UClass* IModioUIHasLoadStateWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIHasLoadStateWidget");

	return Clss;
}


// ModioUIHasLoadStateWidget ModioUICore.Default__ModioUIHasLoadStateWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIHasLoadStateWidget* IModioUIHasLoadStateWidget::GetDefaultObj()
{
	static class IModioUIHasLoadStateWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIHasLoadStateWidget*>(IModioUIHasLoadStateWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIHasLoadStateWidget.SetLoadState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EModioUILoadState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIHasLoadStateWidget::SetLoadState(enum class EModioUILoadState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasLoadStateWidget", "SetLoadState");

	Params::IModioUIHasLoadStateWidget_SetLoadState_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIHasLoadStateWidget.RemoveLoadStateChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIHasLoadStateWidget::RemoveLoadStateChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasLoadStateWidget", "RemoveLoadStateChangedHandler");

	Params::IModioUIHasLoadStateWidget_RemoveLoadStateChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIHasLoadStateWidget.GetLoadState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EModioUILoadState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioUILoadState IModioUIHasLoadStateWidget::GetLoadState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasLoadStateWidget", "GetLoadState");

	Params::IModioUIHasLoadStateWidget_GetLoadState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIHasLoadStateWidget.AddLoadStateChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIHasLoadStateWidget::AddLoadStateChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasLoadStateWidget", "AddLoadStateChangedHandler");

	Params::IModioUIHasLoadStateWidget_AddLoadStateChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIHasTextWidget
// (None)

class UClass* IModioUIHasTextWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIHasTextWidget");

	return Clss;
}


// ModioUIHasTextWidget ModioUICore.Default__ModioUIHasTextWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIHasTextWidget* IModioUIHasTextWidget::GetDefaultObj()
{
	static class IModioUIHasTextWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIHasTextWidget*>(IModioUIHasTextWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIHasTextWidget.SetWidgetTextFont
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              FontInfo                                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIHasTextWidget::SetWidgetTextFont(const struct FSlateFontInfo& FontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasTextWidget", "SetWidgetTextFont");

	Params::IModioUIHasTextWidget_SetWidgetTextFont_Params Parms{};

	Parms.FontInfo = FontInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIHasTextWidget.SetWidgetText
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIHasTextWidget::SetWidgetText(class FText& DisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasTextWidget", "SetWidgetText");

	Params::IModioUIHasTextWidget_SetWidgetText_Params Parms{};

	Parms.DisplayText = DisplayText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIHasTextWidget.GetWidgetTextFont
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSlateFontInfo IModioUIHasTextWidget::GetWidgetTextFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasTextWidget", "GetWidgetTextFont");

	Params::IModioUIHasTextWidget_GetWidgetTextFont_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIHasTextWidget.GetWidgetText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText IModioUIHasTextWidget::GetWidgetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasTextWidget", "GetWidgetText");

	Params::IModioUIHasTextWidget_GetWidgetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUIHasTooltipWidget
// (None)

class UClass* IModioUIHasTooltipWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIHasTooltipWidget");

	return Clss;
}


// ModioUIHasTooltipWidget ModioUICore.Default__ModioUIHasTooltipWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIHasTooltipWidget* IModioUIHasTooltipWidget::GetDefaultObj()
{
	static class IModioUIHasTooltipWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIHasTooltipWidget*>(IModioUIHasTooltipWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIHasTooltipWidget.SetTooltipEnabledState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewEnabledState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIHasTooltipWidget::SetTooltipEnabledState(bool bNewEnabledState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasTooltipWidget", "SetTooltipEnabledState");

	Params::IModioUIHasTooltipWidget_SetTooltipEnabledState_Params Parms{};

	Parms.bNewEnabledState = bNewEnabledState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIHasTooltipWidget.ConfigureTooltip
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        InfoText                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        TagText                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIHasTooltipWidget::ConfigureTooltip(class FText& TitleText, class FText& InfoText, class FText& TagText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHasTooltipWidget", "ConfigureTooltip");

	Params::IModioUIHasTooltipWidget_ConfigureTooltip_Params Parms{};

	Parms.TitleText = TitleText;
	Parms.InfoText = InfoText;
	Parms.TagText = TagText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIHoverableWidget
// (None)

class UClass* IModioUIHoverableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIHoverableWidget");

	return Clss;
}


// ModioUIHoverableWidget ModioUICore.Default__ModioUIHoverableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIHoverableWidget* IModioUIHoverableWidget::GetDefaultObj()
{
	static class IModioUIHoverableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIHoverableWidget*>(IModioUIHoverableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIHoverableWidget.RemoveHoverStateChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIHoverableWidget::RemoveHoverStateChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHoverableWidget", "RemoveHoverStateChangedHandler");

	Params::IModioUIHoverableWidget_RemoveHoverStateChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIHoverableWidget.EnableHoverEvents
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIHoverableWidget::EnableHoverEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHoverableWidget", "EnableHoverEvents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIHoverableWidget.DisableHoverEvents
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIHoverableWidget::DisableHoverEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHoverableWidget", "DisableHoverEvents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIHoverableWidget.AddHoverStateChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIHoverableWidget::AddHoverStateChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIHoverableWidget", "AddHoverStateChangedHandler");

	Params::IModioUIHoverableWidget_AddHoverStateChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIImageDisplayWidget
// (None)

class UClass* IModioUIImageDisplayWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIImageDisplayWidget");

	return Clss;
}


// ModioUIImageDisplayWidget ModioUICore.Default__ModioUIImageDisplayWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIImageDisplayWidget* IModioUIImageDisplayWidget::GetDefaultObj()
{
	static class IModioUIImageDisplayWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIImageDisplayWidget*>(IModioUIImageDisplayWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIImageDisplayWidget.SetDesiredBrushSize
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   DesiredSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIImageDisplayWidget::SetDesiredBrushSize(const struct FVector2D& DesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIImageDisplayWidget", "SetDesiredBrushSize");

	Params::IModioUIImageDisplayWidget_SetDesiredBrushSize_Params Parms{};

	Parms.DesiredSize = DesiredSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIImageDisplayWidget.SetBrushMatchTextureSize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bMatchTextureSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIImageDisplayWidget::SetBrushMatchTextureSize(bool bMatchTextureSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIImageDisplayWidget", "SetBrushMatchTextureSize");

	Params::IModioUIImageDisplayWidget_SetBrushMatchTextureSize_Params Parms{};

	Parms.bMatchTextureSize = bMatchTextureSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIImageDisplayWidget.SetBrushDirectly
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 NewBrush                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIImageDisplayWidget::SetBrushDirectly(struct FSlateBrush& NewBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIImageDisplayWidget", "SetBrushDirectly");

	Params::IModioUIImageDisplayWidget_SetBrushDirectly_Params Parms{};

	Parms.NewBrush = NewBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIImageDisplayWidget.RemoveImageLoadEventHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIImageDisplayWidget::RemoveImageLoadEventHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIImageDisplayWidget", "RemoveImageLoadEventHandler");

	Params::IModioUIImageDisplayWidget_RemoveImageLoadEventHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIImageDisplayWidget.BeginLoadImageFromFile
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioImageWrapper          Image                                                            (Parm, NativeAccessSpecifierPublic)

void IModioUIImageDisplayWidget::BeginLoadImageFromFile(const struct FModioImageWrapper& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIImageDisplayWidget", "BeginLoadImageFromFile");

	Params::IModioUIImageDisplayWidget_BeginLoadImageFromFile_Params Parms{};

	Parms.Image = Image;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIImageDisplayWidget.AddImageLoadEventHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIImageDisplayWidget::AddImageLoadEventHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIImageDisplayWidget", "AddImageLoadEventHandler");

	Params::IModioUIImageDisplayWidget_AddImageLoadEventHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIMediaDownloadCompletedReceiver
// (None)

class UClass* IModioUIMediaDownloadCompletedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIMediaDownloadCompletedReceiver");

	return Clss;
}


// ModioUIMediaDownloadCompletedReceiver ModioUICore.Default__ModioUIMediaDownloadCompletedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIMediaDownloadCompletedReceiver* IModioUIMediaDownloadCompletedReceiver::GetDefaultObj()
{
	static class IModioUIMediaDownloadCompletedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIMediaDownloadCompletedReceiver*>(IModioUIMediaDownloadCompletedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModLogoDownloadCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioOptionalImage         Image                                                            (Parm, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          LogoSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIMediaDownloadCompletedReceiver::OnModLogoDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Image, enum class EModioLogoSize LogoSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIMediaDownloadCompletedReceiver", "OnModLogoDownloadCompleted");

	Params::IModioUIMediaDownloadCompletedReceiver_OnModLogoDownloadCompleted_Params Parms{};

	Parms.ModId = ModId;
	Parms.ErrorCode = ErrorCode;
	Parms.Image = Image;
	Parms.LogoSize = LogoSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModGalleryImageDownloadCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// int32                              ImageIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioOptionalImage         Image                                                            (Parm, NativeAccessSpecifierPublic)

void IModioUIMediaDownloadCompletedReceiver::OnModGalleryImageDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& ErrorCode, int32 ImageIndex, const struct FModioOptionalImage& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIMediaDownloadCompletedReceiver", "OnModGalleryImageDownloadCompleted");

	Params::IModioUIMediaDownloadCompletedReceiver_OnModGalleryImageDownloadCompleted_Params Parms{};

	Parms.ModId = ModId;
	Parms.ErrorCode = ErrorCode;
	Parms.ImageIndex = ImageIndex;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModCreatorAvatarDownloadCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioOptionalImage         Image                                                            (Parm, NativeAccessSpecifierPublic)

void IModioUIMediaDownloadCompletedReceiver::OnModCreatorAvatarDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIMediaDownloadCompletedReceiver", "OnModCreatorAvatarDownloadCompleted");

	Params::IModioUIMediaDownloadCompletedReceiver_OnModCreatorAvatarDownloadCompleted_Params Parms{};

	Parms.ModId = ModId;
	Parms.ErrorCode = ErrorCode;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIMediaDownloadCompletedReceiverLibrary
// (None)

class UClass* UModioUIMediaDownloadCompletedReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIMediaDownloadCompletedReceiverLibrary");

	return Clss;
}


// ModioUIMediaDownloadCompletedReceiverLibrary ModioUICore.Default__ModioUIMediaDownloadCompletedReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIMediaDownloadCompletedReceiverLibrary* UModioUIMediaDownloadCompletedReceiverLibrary::GetDefaultObj()
{
	static class UModioUIMediaDownloadCompletedReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIMediaDownloadCompletedReceiverLibrary*>(UModioUIMediaDownloadCompletedReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIMediaDownloadCompletedReceiverLibrary.RegisterMediaDownloadCompletedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioUIMediaDownloadEventTypeDownloadTypes                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIMediaDownloadCompletedReceiverLibrary::RegisterMediaDownloadCompletedReceiver(class UObject* ObjectToRegister, enum class EModioUIMediaDownloadEventType DownloadTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIMediaDownloadCompletedReceiverLibrary", "RegisterMediaDownloadCompletedReceiver");

	Params::UModioUIMediaDownloadCompletedReceiverLibrary_RegisterMediaDownloadCompletedReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;
	Parms.DownloadTypes = DownloadTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIMediaDownloadCompletedReceiverLibrary.DeregisterMediaDownloadCompletedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioUIMediaDownloadEventTypeDownloadTypes                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIMediaDownloadCompletedReceiverLibrary::DeregisterMediaDownloadCompletedReceiver(class UObject* ObjectToDeregister, enum class EModioUIMediaDownloadEventType DownloadTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIMediaDownloadCompletedReceiverLibrary", "DeregisterMediaDownloadCompletedReceiver");

	Params::UModioUIMediaDownloadCompletedReceiverLibrary_DeregisterMediaDownloadCompletedReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;
	Parms.DownloadTypes = DownloadTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIModEnabledStateChangedReceiver
// (None)

class UClass* IModioUIModEnabledStateChangedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModEnabledStateChangedReceiver");

	return Clss;
}


// ModioUIModEnabledStateChangedReceiver ModioUICore.Default__ModioUIModEnabledStateChangedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModEnabledStateChangedReceiver* IModioUIModEnabledStateChangedReceiver::GetDefaultObj()
{
	static class IModioUIModEnabledStateChangedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModEnabledStateChangedReceiver*>(IModioUIModEnabledStateChangedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModEnabledStateChangedReceiver.OnModEnabledStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewEnabledState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModEnabledStateChangedReceiver::OnModEnabledStateChanged(const struct FModioModID& ModId, bool bNewEnabledState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModEnabledStateChangedReceiver", "OnModEnabledStateChanged");

	Params::IModioUIModEnabledStateChangedReceiver_OnModEnabledStateChanged_Params Parms{};

	Parms.ModId = ModId;
	Parms.bNewEnabledState = bNewEnabledState;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIModEnabledStateChangedReceiverLibrary
// (None)

class UClass* UModioUIModEnabledStateChangedReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModEnabledStateChangedReceiverLibrary");

	return Clss;
}


// ModioUIModEnabledStateChangedReceiverLibrary ModioUICore.Default__ModioUIModEnabledStateChangedReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIModEnabledStateChangedReceiverLibrary* UModioUIModEnabledStateChangedReceiverLibrary::GetDefaultObj()
{
	static class UModioUIModEnabledStateChangedReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIModEnabledStateChangedReceiverLibrary*>(UModioUIModEnabledStateChangedReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModEnabledStateChangedReceiverLibrary.RegisterModEnabledStateChangedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIModEnabledStateChangedReceiverLibrary::RegisterModEnabledStateChangedReceiver(class UObject* ObjectToRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModEnabledStateChangedReceiverLibrary", "RegisterModEnabledStateChangedReceiver");

	Params::UModioUIModEnabledStateChangedReceiverLibrary_RegisterModEnabledStateChangedReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModEnabledStateChangedReceiverLibrary.DeregisterModEnabledStateChangedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIModEnabledStateChangedReceiverLibrary::DeregisterModEnabledStateChangedReceiver(class UObject* ObjectToDeregister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModEnabledStateChangedReceiverLibrary", "DeregisterModEnabledStateChangedReceiver");

	Params::UModioUIModEnabledStateChangedReceiverLibrary_DeregisterModEnabledStateChangedReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIModEnabledStateProvider
// (None)

class UClass* IModioUIModEnabledStateProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModEnabledStateProvider");

	return Clss;
}


// ModioUIModEnabledStateProvider ModioUICore.Default__ModioUIModEnabledStateProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModEnabledStateProvider* IModioUIModEnabledStateProvider::GetDefaultObj()
{
	static class IModioUIModEnabledStateProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModEnabledStateProvider*>(IModioUIModEnabledStateProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModEnabledStateProvider.RequestModEnabledStateChange
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewEnabledState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUIModEnabledStateProvider::RequestModEnabledStateChange(const struct FModioModID& ID, bool bNewEnabledState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModEnabledStateProvider", "RequestModEnabledStateChange");

	Params::IModioUIModEnabledStateProvider_RequestModEnabledStateChange_Params Parms{};

	Parms.ID = ID;
	Parms.bNewEnabledState = bNewEnabledState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIModEnabledStateProvider.RemoveModEnabledStateChangeHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModEnabledStateProvider::RemoveModEnabledStateChangeHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModEnabledStateProvider", "RemoveModEnabledStateChangeHandler");

	Params::IModioUIModEnabledStateProvider_RemoveModEnabledStateChangeHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModEnabledStateProvider.QueryIsModEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUIModEnabledStateProvider::QueryIsModEnabled(const struct FModioModID& ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModEnabledStateProvider", "QueryIsModEnabled");

	Params::IModioUIModEnabledStateProvider_QueryIsModEnabled_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIModEnabledStateProvider.AddModEnabledStateChangeHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModEnabledStateProvider::AddModEnabledStateChangeHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModEnabledStateProvider", "AddModEnabledStateChangeHandler");

	Params::IModioUIModEnabledStateProvider_AddModEnabledStateChangeHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIModInfoReceiver
// (None)

class UClass* IModioUIModInfoReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModInfoReceiver");

	return Clss;
}


// ModioUIModInfoReceiver ModioUICore.Default__ModioUIModInfoReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModInfoReceiver* IModioUIModInfoReceiver::GetDefaultObj()
{
	static class IModioUIModInfoReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModInfoReceiver*>(IModioUIModInfoReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModInfoReceiver.OnModInfoRequestCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioOptionalModInfo       Info                                                             (Parm, NativeAccessSpecifierPublic)

void IModioUIModInfoReceiver::OnModInfoRequestCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModInfoReceiver", "OnModInfoRequestCompleted");

	Params::IModioUIModInfoReceiver_OnModInfoRequestCompleted_Params Parms{};

	Parms.ModId = ModId;
	Parms.ErrorCode = ErrorCode;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUICore.ModioUIModInfoReceiver.OnListAllModsRequestCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      RequestIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioOptionalModInfoList   List                                                             (Parm, NativeAccessSpecifierPublic)

void IModioUIModInfoReceiver::OnListAllModsRequestCompleted(const class FString& RequestIdentifier, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModInfoList& List)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModInfoReceiver", "OnListAllModsRequestCompleted");

	Params::IModioUIModInfoReceiver_OnListAllModsRequestCompleted_Params Parms{};

	Parms.RequestIdentifier = RequestIdentifier;
	Parms.ErrorCode = ErrorCode;
	Parms.List = List;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIModInfoReceiverLibrary
// (None)

class UClass* UModioUIModInfoReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModInfoReceiverLibrary");

	return Clss;
}


// ModioUIModInfoReceiverLibrary ModioUICore.Default__ModioUIModInfoReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIModInfoReceiverLibrary* UModioUIModInfoReceiverLibrary::GetDefaultObj()
{
	static class UModioUIModInfoReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIModInfoReceiverLibrary*>(UModioUIModInfoReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModInfoReceiverLibrary.RegisterModInfoReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioUIModInfoEventTypeEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIModInfoReceiverLibrary::RegisterModInfoReceiver(class UObject* ObjectToRegister, enum class EModioUIModInfoEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModInfoReceiverLibrary", "RegisterModInfoReceiver");

	Params::UModioUIModInfoReceiverLibrary_RegisterModInfoReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModInfoReceiverLibrary.DeregisterModInfoReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioUIModInfoEventTypeEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIModInfoReceiverLibrary::DeregisterModInfoReceiver(class UObject* ObjectToDeregister, enum class EModioUIModInfoEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModInfoReceiverLibrary", "DeregisterModInfoReceiver");

	Params::UModioUIModInfoReceiverLibrary_DeregisterModInfoReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIModListViewInterface
// (None)

class UClass* IModioUIModListViewInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModListViewInterface");

	return Clss;
}


// ModioUIModListViewInterface ModioUICore.Default__ModioUIModListViewInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModListViewInterface* IModioUIModListViewInterface::GetDefaultObj()
{
	static class IModioUIModListViewInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModListViewInterface*>(IModioUIModListViewInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModListViewInterface.SetModsFromModInfoList
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModInfoList           InList                                                           (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddToExisting                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModListViewInterface::SetModsFromModInfoList(struct FModioModInfoList& InList, bool bAddToExisting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModListViewInterface", "SetModsFromModInfoList");

	Params::IModioUIModListViewInterface_SetModsFromModInfoList_Params Parms{};

	Parms.InList = InList;
	Parms.bAddToExisting = bAddToExisting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModListViewInterface.SetModsFromModInfoArray
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModioModInfo>       InArray                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAddToExisting                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModListViewInterface::SetModsFromModInfoArray(TArray<struct FModioModInfo>& InArray, bool bAddToExisting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModListViewInterface", "SetModsFromModInfoArray");

	Params::IModioUIModListViewInterface_SetModsFromModInfoArray_Params Parms{};

	Parms.InArray = InArray;
	Parms.bAddToExisting = bAddToExisting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModListViewInterface.SetModsFromModCollectionEntryArray
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModioModCollectionEntry>InArray                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAddToExisting                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModListViewInterface::SetModsFromModCollectionEntryArray(TArray<struct FModioModCollectionEntry>& InArray, bool bAddToExisting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModListViewInterface", "SetModsFromModCollectionEntryArray");

	Params::IModioUIModListViewInterface_SetModsFromModCollectionEntryArray_Params Parms{};

	Parms.InArray = InArray;
	Parms.bAddToExisting = bAddToExisting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModListViewInterface.SetModSelectionByID
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModListViewInterface::SetModSelectionByID(const struct FModioModID& ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModListViewInterface", "SetModSelectionByID");

	Params::IModioUIModListViewInterface_SetModSelectionByID_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIModManagementEventReceiver
// (None)

class UClass* IModioUIModManagementEventReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModManagementEventReceiver");

	return Clss;
}


// ModioUIModManagementEventReceiver ModioUICore.Default__ModioUIModManagementEventReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModManagementEventReceiver* IModioUIModManagementEventReceiver::GetDefaultObj()
{
	static class IModioUIModManagementEventReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModManagementEventReceiver*>(IModioUIModManagementEventReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModManagementEventReceiver.OnModManagementEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModManagementEvent    Event                                                            (Parm, NativeAccessSpecifierPublic)

void IModioUIModManagementEventReceiver::OnModManagementEvent(const struct FModioModManagementEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModManagementEventReceiver", "OnModManagementEvent");

	Params::IModioUIModManagementEventReceiver_OnModManagementEvent_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioModManagementEventReceiverLibrary
// (None)

class UClass* UModioModManagementEventReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModManagementEventReceiverLibrary");

	return Clss;
}


// ModioModManagementEventReceiverLibrary ModioUICore.Default__ModioModManagementEventReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModManagementEventReceiverLibrary* UModioModManagementEventReceiverLibrary::GetDefaultObj()
{
	static class UModioModManagementEventReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModManagementEventReceiverLibrary*>(UModioModManagementEventReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModManagementEventReceiverLibrary.RegisterModManagementEventReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModManagementEventReceiverLibrary::RegisterModManagementEventReceiver(class UObject* ObjectToRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModManagementEventReceiverLibrary", "RegisterModManagementEventReceiver");

	Params::UModioModManagementEventReceiverLibrary_RegisterModManagementEventReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModManagementEventReceiverLibrary.DeregisterModManagementEventReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModManagementEventReceiverLibrary::DeregisterModManagementEventReceiver(class UObject* ObjectToDeregister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModManagementEventReceiverLibrary", "DeregisterModManagementEventReceiver");

	Params::UModioModManagementEventReceiverLibrary_DeregisterModManagementEventReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIModTagSelector
// (None)

class UClass* IModioUIModTagSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModTagSelector");

	return Clss;
}


// ModioUIModTagSelector ModioUICore.Default__ModioUIModTagSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModTagSelector* IModioUIModTagSelector::GetDefaultObj()
{
	static class IModioUIModTagSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModTagSelector*>(IModioUIModTagSelector::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModTagSelector.SetAvailableTagsFromModTagOptions
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModTagOptions         InOptions                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModTagSelector::SetAvailableTagsFromModTagOptions(struct FModioModTagOptions& InOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModTagSelector", "SetAvailableTagsFromModTagOptions");

	Params::IModioUIModTagSelector_SetAvailableTagsFromModTagOptions_Params Parms{};

	Parms.InOptions = InOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModTagSelector.SetAvailableTagsFromBoundModTagOptions
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IModioModTagOptionsUIDetails>InOptions                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModTagSelector::SetAvailableTagsFromBoundModTagOptions(TScriptInterface<class IModioModTagOptionsUIDetails>& InOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModTagSelector", "SetAvailableTagsFromBoundModTagOptions");

	Params::IModioUIModTagSelector_SetAvailableTagsFromBoundModTagOptions_Params Parms{};

	Parms.InOptions = InOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModTagSelector.RemoveTagSelectionChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModTagSelector::RemoveTagSelectionChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModTagSelector", "RemoveTagSelectionChangedHandler");

	Params::IModioUIModTagSelector_RemoveTagSelectionChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModTagSelector.GetSelectedTags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> IModioUIModTagSelector::GetSelectedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModTagSelector", "GetSelectedTags");

	Params::IModioUIModTagSelector_GetSelectedTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIModTagSelector.GetAllowLockedTags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUIModTagSelector::GetAllowLockedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModTagSelector", "GetAllowLockedTags");

	Params::IModioUIModTagSelector_GetAllowLockedTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIModTagSelector.GetAllowHiddenTags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUIModTagSelector::GetAllowHiddenTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModTagSelector", "GetAllowHiddenTags");

	Params::IModioUIModTagSelector_GetAllowHiddenTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIModTagSelector.ClearSelectedTags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIModTagSelector::ClearSelectedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModTagSelector", "ClearSelectedTags");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIModTagSelector.AddTagSelectionChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModTagSelector::AddTagSelectionChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModTagSelector", "AddTagSelectionChangedHandler");

	Params::IModioUIModTagSelector_AddTagSelectionChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIObjectListWidget
// (None)

class UClass* IModioUIObjectListWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIObjectListWidget");

	return Clss;
}


// ModioUIObjectListWidget ModioUICore.Default__ModioUIObjectListWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIObjectListWidget* IModioUIObjectListWidget::GetDefaultObj()
{
	static class IModioUIObjectListWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIObjectListWidget*>(IModioUIObjectListWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIObjectListWidget.SetObjects
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             InObjects                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIObjectListWidget::SetObjects(TArray<class UObject*>& InObjects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectListWidget", "SetObjects");

	Params::IModioUIObjectListWidget_SetObjects_Params Parms{};

	Parms.InObjects = InObjects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectListWidget.RemoveObjectWidgetCreatedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectListWidget::RemoveObjectWidgetCreatedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectListWidget", "RemoveObjectWidgetCreatedHandler");

	Params::IModioUIObjectListWidget_RemoveObjectWidgetCreatedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectListWidget.GetObjects
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> IModioUIObjectListWidget::GetObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectListWidget", "GetObjects");

	Params::IModioUIObjectListWidget_GetObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectListWidget.GetObjectAt
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* IModioUIObjectListWidget::GetObjectAt(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectListWidget", "GetObjectAt");

	Params::IModioUIObjectListWidget_GetObjectAt_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectListWidget.GetFirstEntryWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* IModioUIObjectListWidget::GetFirstEntryWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectListWidget", "GetFirstEntryWidget");

	Params::IModioUIObjectListWidget_GetFirstEntryWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectListWidget.AddObjectWidgetCreatedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectListWidget::AddObjectWidgetCreatedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectListWidget", "AddObjectWidgetCreatedHandler");

	Params::IModioUIObjectListWidget_AddObjectWidgetCreatedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIObjectSelector
// (None)

class UClass* IModioUIObjectSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIObjectSelector");

	return Clss;
}


// ModioUIObjectSelector ModioUICore.Default__ModioUIObjectSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIObjectSelector* IModioUIObjectSelector::GetDefaultObj()
{
	static class IModioUIObjectSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIObjectSelector*>(IModioUIObjectSelector::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIObjectSelector.SetValues
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             InValues                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIObjectSelector::SetValues(TArray<class UObject*>& InValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "SetValues");

	Params::IModioUIObjectSelector_SetValues_Params Parms{};

	Parms.InValues = InValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectSelector.SetSingleSelectionByValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEmitSelectionEvent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectSelector::SetSingleSelectionByValue(class UObject* Value, bool bEmitSelectionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "SetSingleSelectionByValue");

	Params::IModioUIObjectSelector_SetSingleSelectionByValue_Params Parms{};

	Parms.Value = Value;
	Parms.bEmitSelectionEvent = bEmitSelectionEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectSelector.SetSingleSelectionByIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEmitSelectionEvent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectSelector::SetSingleSelectionByIndex(int32 Index, bool bEmitSelectionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "SetSingleSelectionByIndex");

	Params::IModioUIObjectSelector_SetSingleSelectionByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.bEmitSelectionEvent = bEmitSelectionEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectSelector.SetSelectedStateForValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewSelectionState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEmitSelectionEvent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectSelector::SetSelectedStateForValue(class UObject* Value, bool bNewSelectionState, bool bEmitSelectionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "SetSelectedStateForValue");

	Params::IModioUIObjectSelector_SetSelectedStateForValue_Params Parms{};

	Parms.Value = Value;
	Parms.bNewSelectionState = bNewSelectionState;
	Parms.bEmitSelectionEvent = bEmitSelectionEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectSelector.SetSelectedStateForIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewSelectionState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEmitSelectionEvent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectSelector::SetSelectedStateForIndex(int32 Index, bool bNewSelectionState, bool bEmitSelectionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "SetSelectedStateForIndex");

	Params::IModioUIObjectSelector_SetSelectedStateForIndex_Params Parms{};

	Parms.Index = Index;
	Parms.bNewSelectionState = bNewSelectionState;
	Parms.bEmitSelectionEvent = bEmitSelectionEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectSelector.SetMultiSelectionAllowed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bMultiSelectionAllowed                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectSelector::SetMultiSelectionAllowed(bool bMultiSelectionAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "SetMultiSelectionAllowed");

	Params::IModioUIObjectSelector_SetMultiSelectionAllowed_Params Parms{};

	Parms.bMultiSelectionAllowed = bMultiSelectionAllowed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectSelector.SetListEntryWidgetClass
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UWidget>         InNewEntryClass                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectSelector::SetListEntryWidgetClass(TSubclassOf<class UWidget> InNewEntryClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "SetListEntryWidgetClass");

	Params::IModioUIObjectSelector_SetListEntryWidgetClass_Params Parms{};

	Parms.InNewEntryClass = InNewEntryClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectSelector.RemoveSelectionChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectSelector::RemoveSelectionChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "RemoveSelectionChangedHandler");

	Params::IModioUIObjectSelector_RemoveSelectionChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectSelector.GetWidgetForValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* IModioUIObjectSelector::GetWidgetForValue(class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "GetWidgetForValue");

	Params::IModioUIObjectSelector_GetWidgetForValue_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectSelector.GetSingleSelectionIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IModioUIObjectSelector::GetSingleSelectionIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "GetSingleSelectionIndex");

	Params::IModioUIObjectSelector_GetSingleSelectionIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectSelector.GetSingleSelectedValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* IModioUIObjectSelector::GetSingleSelectedValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "GetSingleSelectedValue");

	Params::IModioUIObjectSelector_GetSingleSelectedValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectSelector.GetSelectedValues
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> IModioUIObjectSelector::GetSelectedValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "GetSelectedValues");

	Params::IModioUIObjectSelector_GetSelectedValues_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectSelector.GetNumEntries
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IModioUIObjectSelector::GetNumEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "GetNumEntries");

	Params::IModioUIObjectSelector_GetNumEntries_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectSelector.GetMultiSelectionAllowed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUIObjectSelector::GetMultiSelectionAllowed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "GetMultiSelectionAllowed");

	Params::IModioUIObjectSelector_GetMultiSelectionAllowed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectSelector.GetLastSelectionIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IModioUIObjectSelector::GetLastSelectionIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "GetLastSelectionIndex");

	Params::IModioUIObjectSelector_GetLastSelectionIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectSelector.GetIndexForValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IModioUIObjectSelector::GetIndexForValue(class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "GetIndexForValue");

	Params::IModioUIObjectSelector_GetIndexForValue_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIObjectSelector.ClearSelectedValues
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIObjectSelector::ClearSelectedValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "ClearSelectedValues");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIObjectSelector.AddSelectionChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIObjectSelector::AddSelectionChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIObjectSelector", "AddSelectionChangedHandler");

	Params::IModioUIObjectSelector_AddSelectionChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIProgressWidget
// (None)

class UClass* IModioUIProgressWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIProgressWidget");

	return Clss;
}


// ModioUIProgressWidget ModioUICore.Default__ModioUIProgressWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIProgressWidget* IModioUIProgressWidget::GetDefaultObj()
{
	static class IModioUIProgressWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIProgressWidget*>(IModioUIProgressWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIProgressWidget.SetProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewProgressValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIProgressWidget::SetProgress(float NewProgressValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIProgressWidget", "SetProgress");

	Params::IModioUIProgressWidget_SetProgress_Params Parms{};

	Parms.NewProgressValue = NewProgressValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIProgressWidget.SetMarquee
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewIsMarquee                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIProgressWidget::SetMarquee(bool bNewIsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIProgressWidget", "SetMarquee");

	Params::IModioUIProgressWidget_SetMarquee_Params Parms{};

	Parms.bNewIsMarquee = bNewIsMarquee;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIProgressWidget.SetColorOverride
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Override                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIProgressWidget::SetColorOverride(const struct FLinearColor& Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIProgressWidget", "SetColorOverride");

	Params::IModioUIProgressWidget_SetColorOverride_Params Parms{};

	Parms.Override = Override;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIProgressWidget.RemoveValueChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIProgressWidget::RemoveValueChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIProgressWidget", "RemoveValueChangedHandler");

	Params::IModioUIProgressWidget_RemoveValueChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIProgressWidget.GetProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float IModioUIProgressWidget::GetProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIProgressWidget", "GetProgress");

	Params::IModioUIProgressWidget_GetProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIProgressWidget.ClearColorOverride
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIProgressWidget::ClearColorOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIProgressWidget", "ClearColorOverride");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIProgressWidget.AddValueChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIProgressWidget::AddValueChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIProgressWidget", "AddValueChangedHandler");

	Params::IModioUIProgressWidget_AddValueChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUISelectableWidget
// (None)

class UClass* IModioUISelectableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUISelectableWidget");

	return Clss;
}


// ModioUISelectableWidget ModioUICore.Default__ModioUISelectableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUISelectableWidget* IModioUISelectableWidget::GetDefaultObj()
{
	static class IModioUISelectableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUISelectableWidget*>(IModioUISelectableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUISelectableWidget.ToggleSelectedState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUISelectableWidget::ToggleSelectedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISelectableWidget", "ToggleSelectedState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISelectableWidget.SetToggleable
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewToggleableState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISelectableWidget::SetToggleable(bool bNewToggleableState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISelectableWidget", "SetToggleable");

	Params::IModioUISelectableWidget_SetToggleable_Params Parms{};

	Parms.bNewToggleableState = bNewToggleableState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISelectableWidget.SetSelectedState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewSelectedState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISelectableWidget::SetSelectedState(bool bNewSelectedState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISelectableWidget", "SetSelectedState");

	Params::IModioUISelectableWidget_SetSelectedState_Params Parms{};

	Parms.bNewSelectedState = bNewSelectedState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISelectableWidget.SetSelectable
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewSelectableState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISelectableWidget::SetSelectable(bool bNewSelectableState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISelectableWidget", "SetSelectable");

	Params::IModioUISelectableWidget_SetSelectable_Params Parms{};

	Parms.bNewSelectableState = bNewSelectableState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISelectableWidget.RemoveSelectedStateChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISelectableWidget::RemoveSelectedStateChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISelectableWidget", "RemoveSelectedStateChangedHandler");

	Params::IModioUISelectableWidget_RemoveSelectedStateChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISelectableWidget.GetToggleable
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsToggleable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISelectableWidget::GetToggleable(bool* bIsToggleable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISelectableWidget", "GetToggleable");

	Params::IModioUISelectableWidget_GetToggleable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsToggleable != nullptr)
		*bIsToggleable = Parms.bIsToggleable;

}


// Function ModioUICore.ModioUISelectableWidget.GetSelectedState
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCurrentSelectedState                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISelectableWidget::GetSelectedState(bool* bCurrentSelectedState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISelectableWidget", "GetSelectedState");

	Params::IModioUISelectableWidget_GetSelectedState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bCurrentSelectedState != nullptr)
		*bCurrentSelectedState = Parms.bCurrentSelectedState;

}


// Function ModioUICore.ModioUISelectableWidget.GetSelectable
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSelectable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISelectableWidget::GetSelectable(bool* bIsSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISelectableWidget", "GetSelectable");

	Params::IModioUISelectableWidget_GetSelectable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsSelectable != nullptr)
		*bIsSelectable = Parms.bIsSelectable;

}


// Function ModioUICore.ModioUISelectableWidget.AddSelectedStateChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISelectableWidget::AddSelectedStateChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISelectableWidget", "AddSelectedStateChangedHandler");

	Params::IModioUISelectableWidget_AddSelectedStateChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIStringInputWidget
// (None)

class UClass* IModioUIStringInputWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIStringInputWidget");

	return Clss;
}


// ModioUIStringInputWidget ModioUICore.Default__ModioUIStringInputWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIStringInputWidget* IModioUIStringInputWidget::GetDefaultObj()
{
	static class IModioUIStringInputWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIStringInputWidget*>(IModioUIStringInputWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIStringInputWidget.SetInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Input                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIStringInputWidget::SetInput(const class FString& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "SetInput");

	Params::IModioUIStringInputWidget_SetInput_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIStringInputWidget.SetHint
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        HintText                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIStringInputWidget::SetHint(class FText& HintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "SetHint");

	Params::IModioUIStringInputWidget_SetHint_Params Parms{};

	Parms.HintText = HintText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIStringInputWidget.RemoveTextCommittedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIStringInputWidget::RemoveTextCommittedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "RemoveTextCommittedHandler");

	Params::IModioUIStringInputWidget_RemoveTextCommittedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIStringInputWidget.RemoveTextChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIStringInputWidget::RemoveTextChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "RemoveTextChangedHandler");

	Params::IModioUIStringInputWidget_RemoveTextChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIStringInputWidget.GatherInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString IModioUIStringInputWidget::GatherInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "GatherInput");

	Params::IModioUIStringInputWidget_GatherInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIStringInputWidget.AddTextCommittedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIStringInputWidget::AddTextCommittedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "AddTextCommittedHandler");

	Params::IModioUIStringInputWidget_AddTextCommittedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIStringInputWidget.AddTextChangedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIStringInputWidget::AddTextChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "AddTextChangedHandler");

	Params::IModioUIStringInputWidget_AddTextChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUISubscriptionsChangedReceiver
// (None)

class UClass* IModioUISubscriptionsChangedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUISubscriptionsChangedReceiver");

	return Clss;
}


// ModioUISubscriptionsChangedReceiver ModioUICore.Default__ModioUISubscriptionsChangedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUISubscriptionsChangedReceiver* IModioUISubscriptionsChangedReceiver::GetDefaultObj()
{
	static class IModioUISubscriptionsChangedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUISubscriptionsChangedReceiver*>(IModioUISubscriptionsChangedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUISubscriptionsChangedReceiver.OnSubscriptionsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewSubscriptionState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISubscriptionsChangedReceiver::OnSubscriptionsChanged(const struct FModioModID& ModId, bool bNewSubscriptionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubscriptionsChangedReceiver", "OnSubscriptionsChanged");

	Params::IModioUISubscriptionsChangedReceiver_OnSubscriptionsChanged_Params Parms{};

	Parms.ModId = ModId;
	Parms.bNewSubscriptionState = bNewSubscriptionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUISubscriptionsChangedReceiverLibrary
// (None)

class UClass* UModioUISubscriptionsChangedReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUISubscriptionsChangedReceiverLibrary");

	return Clss;
}


// ModioUISubscriptionsChangedReceiverLibrary ModioUICore.Default__ModioUISubscriptionsChangedReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUISubscriptionsChangedReceiverLibrary* UModioUISubscriptionsChangedReceiverLibrary::GetDefaultObj()
{
	static class UModioUISubscriptionsChangedReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUISubscriptionsChangedReceiverLibrary*>(UModioUISubscriptionsChangedReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUISubscriptionsChangedReceiverLibrary.RegisterSubscriptionsChangedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubscriptionsChangedReceiverLibrary::RegisterSubscriptionsChangedReceiver(class UObject* ObjectToRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubscriptionsChangedReceiverLibrary", "RegisterSubscriptionsChangedReceiver");

	Params::UModioUISubscriptionsChangedReceiverLibrary_RegisterSubscriptionsChangedReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubscriptionsChangedReceiverLibrary.DeregisterSubscriptionsChangedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubscriptionsChangedReceiverLibrary::DeregisterSubscriptionsChangedReceiver(class UObject* ObjectToDeregister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubscriptionsChangedReceiverLibrary", "DeregisterSubscriptionsChangedReceiver");

	Params::UModioUISubscriptionsChangedReceiverLibrary_DeregisterSubscriptionsChangedReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUISupportsCustomNavigation
// (None)

class UClass* IModioUISupportsCustomNavigation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUISupportsCustomNavigation");

	return Clss;
}


// ModioUISupportsCustomNavigation ModioUICore.Default__ModioUISupportsCustomNavigation
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUISupportsCustomNavigation* IModioUISupportsCustomNavigation::GetDefaultObj()
{
	static class IModioUISupportsCustomNavigation* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUISupportsCustomNavigation*>(IModioUISupportsCustomNavigation::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUISupportsCustomNavigation.SetNavigationDelegate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ContentNavigationDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISupportsCustomNavigation::SetNavigationDelegate(uint8 Context, FDelegateProperty_& ContentNavigationDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISupportsCustomNavigation", "SetNavigationDelegate");

	Params::IModioUISupportsCustomNavigation_SetNavigationDelegate_Params Parms{};

	Parms.Context = Context;
	Parms.ContentNavigationDelegate = ContentNavigationDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUITextValidator
// (None)

class UClass* IModioUITextValidator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUITextValidator");

	return Clss;
}


// ModioUITextValidator ModioUICore.Default__ModioUITextValidator
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUITextValidator* IModioUITextValidator::GetDefaultObj()
{
	static class IModioUITextValidator* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUITextValidator*>(IModioUITextValidator::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUITextValidator.ValidateText
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InputText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ValidationMessageText                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUITextValidator::ValidateText(class FText& InputText, class FText* ValidationMessageText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITextValidator", "ValidateText");

	Params::IModioUITextValidator_ValidateText_Params Parms{};

	Parms.InputText = InputText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ValidationMessageText != nullptr)
		*ValidationMessageText = Parms.ValidationMessageText;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUITextValidator.SetValidationError
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUITextValidator::SetValidationError(class FText& ErrorText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITextValidator", "SetValidationError");

	Params::IModioUITextValidator_SetValidationError_Params Parms{};

	Parms.ErrorText = ErrorText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUITextValidator.RemoveTextValidationCompletedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUITextValidator::RemoveTextValidationCompletedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITextValidator", "RemoveTextValidationCompletedHandler");

	Params::IModioUITextValidator_RemoveTextValidationCompletedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUITextValidator.GetTextValidationRules
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModioTextValidationRule>Rules                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IModioUITextValidator::GetTextValidationRules(TArray<struct FModioTextValidationRule>* Rules)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITextValidator", "GetTextValidationRules");

	Params::IModioUITextValidator_GetTextValidationRules_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rules != nullptr)
		*Rules = std::move(Parms.Rules);

}


// Function ModioUICore.ModioUITextValidator.AddTextValidationCompletedHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUITextValidator::AddTextValidationCompletedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITextValidator", "AddTextValidationCompletedHandler");

	Params::IModioUITextValidator_AddTextValidationCompletedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIInputValidationLibrary
// (None)

class UClass* UModioUIInputValidationLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIInputValidationLibrary");

	return Clss;
}


// ModioUIInputValidationLibrary ModioUICore.Default__ModioUIInputValidationLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIInputValidationLibrary* UModioUIInputValidationLibrary::GetDefaultObj()
{
	static class UModioUIInputValidationLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIInputValidationLibrary*>(UModioUIInputValidationLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIInputValidationLibrary.ValidateUsingRule
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioTextValidationRule    Rule                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ValidationMessageText                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateUsingRule(struct FModioTextValidationRule& Rule, class FText& TextToValidate, class FText* ValidationMessageText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateUsingRule");

	Params::UModioUIInputValidationLibrary_ValidateUsingRule_Params Parms{};

	Parms.Rule = Rule;
	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ValidationMessageText != nullptr)
		*ValidationMessageText = Parms.ValidationMessageText;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIInputValidationLibrary.ValidateNoWhitespace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateNoWhitespace(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateNoWhitespace");

	Params::UModioUIInputValidationLibrary_ValidateNoWhitespace_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIInputValidationLibrary.ValidateNotEmpty
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateNotEmpty(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateNotEmpty");

	Params::UModioUIInputValidationLibrary_ValidateNotEmpty_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIInputValidationLibrary.ValidateNotBlank
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateNotBlank(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateNotBlank");

	Params::UModioUIInputValidationLibrary_ValidateNotBlank_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIInputValidationLibrary.ValidateLength
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              DesiredMaximumLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DesiredMinimumLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateLength(class FText& TextToValidate, int32 DesiredMaximumLength, int32 DesiredMinimumLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateLength");

	Params::UModioUIInputValidationLibrary_ValidateLength_Params Parms{};

	Parms.TextToValidate = TextToValidate;
	Parms.DesiredMaximumLength = DesiredMaximumLength;
	Parms.DesiredMinimumLength = DesiredMinimumLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIInputValidationLibrary.ValidateEmailAddress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateEmailAddress(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateEmailAddress");

	Params::UModioUIInputValidationLibrary_ValidateEmailAddress_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIInputValidationLibrary.ValidateAlphanumeric
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateAlphanumeric(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateAlphanumeric");

	Params::UModioUIInputValidationLibrary_ValidateAlphanumeric_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIInputValidationLibrary.ValidateAllNumeric
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateAllNumeric(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateAllNumeric");

	Params::UModioUIInputValidationLibrary_ValidateAllNumeric_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIInputValidationLibrary.ValidateAllLetters
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateAllLetters(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateAllLetters");

	Params::UModioUIInputValidationLibrary_ValidateAllLetters_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIInputValidationLibrary.DefaultValidateText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IModioUITextValidator>TargetObject                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        InputText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ValidationMessageText                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::DefaultValidateText(TScriptInterface<class IModioUITextValidator> TargetObject, class FText& InputText, class FText* ValidationMessageText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "DefaultValidateText");

	Params::UModioUIInputValidationLibrary_DefaultValidateText_Params Parms{};

	Parms.TargetObject = TargetObject;
	Parms.InputText = InputText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ValidationMessageText != nullptr)
		*ValidationMessageText = Parms.ValidationMessageText;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUITokenPackListInterface
// (None)

class UClass* IModioUITokenPackListInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUITokenPackListInterface");

	return Clss;
}


// ModioUITokenPackListInterface ModioUICore.Default__ModioUITokenPackListInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUITokenPackListInterface* IModioUITokenPackListInterface::GetDefaultObj()
{
	static class IModioUITokenPackListInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUITokenPackListInterface*>(IModioUITokenPackListInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUITokenPackListInterface.SetTokenPacksFromTokenPackList
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioTokenPackList         InList                                                           (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddToExisting                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUITokenPackListInterface::SetTokenPacksFromTokenPackList(struct FModioTokenPackList& InList, bool bAddToExisting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITokenPackListInterface", "SetTokenPacksFromTokenPackList");

	Params::IModioUITokenPackListInterface_SetTokenPacksFromTokenPackList_Params Parms{};

	Parms.InList = InList;
	Parms.bAddToExisting = bAddToExisting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUITokenPackListInterface.SetTokenPacksFromTokenPackArray
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModioTokenPack>     InArray                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAddToExisting                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUITokenPackListInterface::SetTokenPacksFromTokenPackArray(TArray<struct FModioTokenPack>& InArray, bool bAddToExisting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITokenPackListInterface", "SetTokenPacksFromTokenPackArray");

	Params::IModioUITokenPackListInterface_SetTokenPacksFromTokenPackArray_Params Parms{};

	Parms.InArray = InArray;
	Parms.bAddToExisting = bAddToExisting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUITokenPackListInterface.SetTokenPackSelectionByID
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioTokenPackID           TokenPackID                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUITokenPackListInterface::SetTokenPackSelectionByID(const struct FModioTokenPackID& TokenPackID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITokenPackListInterface", "SetTokenPackSelectionByID");

	Params::IModioUITokenPackListInterface_SetTokenPackSelectionByID_Params Parms{};

	Parms.TokenPackID = TokenPackID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUITokenPackReceiver
// (None)

class UClass* IModioUITokenPackReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUITokenPackReceiver");

	return Clss;
}


// ModioUITokenPackReceiver ModioUICore.Default__ModioUITokenPackReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUITokenPackReceiver* IModioUITokenPackReceiver::GetDefaultObj()
{
	static class IModioUITokenPackReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUITokenPackReceiver*>(IModioUITokenPackReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUITokenPackReceiver.OnTokenPackRequestCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioTokenPackID           TokenPackID                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioOptionalTokenPack     Info                                                             (Parm, NativeAccessSpecifierPublic)

void IModioUITokenPackReceiver::OnTokenPackRequestCompleted(const struct FModioTokenPackID& TokenPackID, const struct FModioErrorCode& ErrorCode, const struct FModioOptionalTokenPack& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITokenPackReceiver", "OnTokenPackRequestCompleted");

	Params::IModioUITokenPackReceiver_OnTokenPackRequestCompleted_Params Parms{};

	Parms.TokenPackID = TokenPackID;
	Parms.ErrorCode = ErrorCode;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUICore.ModioUITokenPackReceiver.OnListAllTokenPacksRequestCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioOptionalTokenPackList List                                                             (Parm, NativeAccessSpecifierPublic)

void IModioUITokenPackReceiver::OnListAllTokenPacksRequestCompleted(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalTokenPackList& List)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITokenPackReceiver", "OnListAllTokenPacksRequestCompleted");

	Params::IModioUITokenPackReceiver_OnListAllTokenPacksRequestCompleted_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.List = List;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUITokenPackReceiverLibrary
// (None)

class UClass* UModioUITokenPackReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUITokenPackReceiverLibrary");

	return Clss;
}


// ModioUITokenPackReceiverLibrary ModioUICore.Default__ModioUITokenPackReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUITokenPackReceiverLibrary* UModioUITokenPackReceiverLibrary::GetDefaultObj()
{
	static class UModioUITokenPackReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUITokenPackReceiverLibrary*>(UModioUITokenPackReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUITokenPackReceiverLibrary.RegisterTokenPackReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioUITokenPackEventTypeEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUITokenPackReceiverLibrary::RegisterTokenPackReceiver(class UObject* ObjectToRegister, enum class EModioUITokenPackEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITokenPackReceiverLibrary", "RegisterTokenPackReceiver");

	Params::UModioUITokenPackReceiverLibrary_RegisterTokenPackReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUITokenPackReceiverLibrary.DeregisterTokenPackReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioUITokenPackEventTypeEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUITokenPackReceiverLibrary::DeregisterTokenPackReceiver(class UObject* ObjectToDeregister, enum class EModioUITokenPackEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITokenPackReceiverLibrary", "DeregisterTokenPackReceiver");

	Params::UModioUITokenPackReceiverLibrary_DeregisterTokenPackReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver
// (None)

class UClass* IModioUIUserAvatarDownloadCompletedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIUserAvatarDownloadCompletedReceiver");

	return Clss;
}


// ModioUIUserAvatarDownloadCompletedReceiver ModioUICore.Default__ModioUIUserAvatarDownloadCompletedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIUserAvatarDownloadCompletedReceiver* IModioUIUserAvatarDownloadCompletedReceiver::GetDefaultObj()
{
	static class IModioUIUserAvatarDownloadCompletedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIUserAvatarDownloadCompletedReceiver*>(IModioUIUserAvatarDownloadCompletedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver.OnUserAvatarDownloadCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioOptionalImage         Image                                                            (Parm, NativeAccessSpecifierPublic)

void IModioUIUserAvatarDownloadCompletedReceiver::OnUserAvatarDownloadCompleted(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIUserAvatarDownloadCompletedReceiver", "OnUserAvatarDownloadCompleted");

	Params::IModioUIUserAvatarDownloadCompletedReceiver_OnUserAvatarDownloadCompleted_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIUserAvatarDownloadCompletedReceiverLibrary
// (None)

class UClass* UModioUIUserAvatarDownloadCompletedReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIUserAvatarDownloadCompletedReceiverLibrary");

	return Clss;
}


// ModioUIUserAvatarDownloadCompletedReceiverLibrary ModioUICore.Default__ModioUIUserAvatarDownloadCompletedReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIUserAvatarDownloadCompletedReceiverLibrary* UModioUIUserAvatarDownloadCompletedReceiverLibrary::GetDefaultObj()
{
	static class UModioUIUserAvatarDownloadCompletedReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIUserAvatarDownloadCompletedReceiverLibrary*>(UModioUIUserAvatarDownloadCompletedReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIUserAvatarDownloadCompletedReceiverLibrary.RegisterUserAvatarDownloadCompletedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIUserAvatarDownloadCompletedReceiverLibrary::RegisterUserAvatarDownloadCompletedReceiver(class UObject* ObjectToRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIUserAvatarDownloadCompletedReceiverLibrary", "RegisterUserAvatarDownloadCompletedReceiver");

	Params::UModioUIUserAvatarDownloadCompletedReceiverLibrary_RegisterUserAvatarDownloadCompletedReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIUserAvatarDownloadCompletedReceiverLibrary.DeregisterUserAvatarDownloadCompletedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIUserAvatarDownloadCompletedReceiverLibrary::DeregisterUserAvatarDownloadCompletedReceiver(class UObject* ObjectToDeregister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIUserAvatarDownloadCompletedReceiverLibrary", "DeregisterUserAvatarDownloadCompletedReceiver");

	Params::UModioUIUserAvatarDownloadCompletedReceiverLibrary_DeregisterUserAvatarDownloadCompletedReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIUserChangedReceiver
// (None)

class UClass* IModioUIUserChangedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIUserChangedReceiver");

	return Clss;
}


// ModioUIUserChangedReceiver ModioUICore.Default__ModioUIUserChangedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIUserChangedReceiver* IModioUIUserChangedReceiver::GetDefaultObj()
{
	static class IModioUIUserChangedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIUserChangedReceiver*>(IModioUIUserChangedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIUserChangedReceiver.OnUserChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioOptionalUser          NewUser                                                          (Parm, NativeAccessSpecifierPublic)

void IModioUIUserChangedReceiver::OnUserChanged(const struct FModioOptionalUser& NewUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIUserChangedReceiver", "OnUserChanged");

	Params::IModioUIUserChangedReceiver_OnUserChanged_Params Parms{};

	Parms.NewUser = NewUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIUserChangedReceiverLibrary
// (None)

class UClass* UModioUIUserChangedReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIUserChangedReceiverLibrary");

	return Clss;
}


// ModioUIUserChangedReceiverLibrary ModioUICore.Default__ModioUIUserChangedReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIUserChangedReceiverLibrary* UModioUIUserChangedReceiverLibrary::GetDefaultObj()
{
	static class UModioUIUserChangedReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIUserChangedReceiverLibrary*>(UModioUIUserChangedReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIUserChangedReceiverLibrary.RegisterUserChangedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIUserChangedReceiverLibrary::RegisterUserChangedReceiver(class UObject* ObjectToRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIUserChangedReceiverLibrary", "RegisterUserChangedReceiver");

	Params::UModioUIUserChangedReceiverLibrary_RegisterUserChangedReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIUserChangedReceiverLibrary.DeregisterUserChangedReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIUserChangedReceiverLibrary::DeregisterUserChangedReceiver(class UObject* ObjectToDeregister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIUserChangedReceiverLibrary", "DeregisterUserChangedReceiver");

	Params::UModioUIUserChangedReceiverLibrary_DeregisterUserChangedReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIWalletBalanceUpdatedEventReceiver
// (None)

class UClass* IModioUIWalletBalanceUpdatedEventReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIWalletBalanceUpdatedEventReceiver");

	return Clss;
}


// ModioUIWalletBalanceUpdatedEventReceiver ModioUICore.Default__ModioUIWalletBalanceUpdatedEventReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIWalletBalanceUpdatedEventReceiver* IModioUIWalletBalanceUpdatedEventReceiver::GetDefaultObj()
{
	static class IModioUIWalletBalanceUpdatedEventReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIWalletBalanceUpdatedEventReceiver*>(IModioUIWalletBalanceUpdatedEventReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIWalletBalanceUpdatedEventReceiver.OnWalletBalanceUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioUnsigned64            WalletBalance                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)

void IModioUIWalletBalanceUpdatedEventReceiver::OnWalletBalanceUpdated(const struct FModioUnsigned64& WalletBalance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIWalletBalanceUpdatedEventReceiver", "OnWalletBalanceUpdated");

	Params::IModioUIWalletBalanceUpdatedEventReceiver_OnWalletBalanceUpdated_Params Parms{};

	Parms.WalletBalance = WalletBalance;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIWalletBalanceUpdatedEventReceiverLibrary
// (None)

class UClass* UModioUIWalletBalanceUpdatedEventReceiverLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIWalletBalanceUpdatedEventReceiverLibrary");

	return Clss;
}


// ModioUIWalletBalanceUpdatedEventReceiverLibrary ModioUICore.Default__ModioUIWalletBalanceUpdatedEventReceiverLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIWalletBalanceUpdatedEventReceiverLibrary* UModioUIWalletBalanceUpdatedEventReceiverLibrary::GetDefaultObj()
{
	static class UModioUIWalletBalanceUpdatedEventReceiverLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIWalletBalanceUpdatedEventReceiverLibrary*>(UModioUIWalletBalanceUpdatedEventReceiverLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIWalletBalanceUpdatedEventReceiverLibrary.RegisterWalletBalanceUpdatedEventReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToRegister                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIWalletBalanceUpdatedEventReceiverLibrary::RegisterWalletBalanceUpdatedEventReceiver(class UObject* ObjectToRegister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIWalletBalanceUpdatedEventReceiverLibrary", "RegisterWalletBalanceUpdatedEventReceiver");

	Params::UModioUIWalletBalanceUpdatedEventReceiverLibrary_RegisterWalletBalanceUpdatedEventReceiver_Params Parms{};

	Parms.ObjectToRegister = ObjectToRegister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIWalletBalanceUpdatedEventReceiverLibrary.DeregisterWalletBalanceUpdatedEventReceiver
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     ObjectToDeregister                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIWalletBalanceUpdatedEventReceiverLibrary::DeregisterWalletBalanceUpdatedEventReceiver(class UObject* ObjectToDeregister)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIWalletBalanceUpdatedEventReceiverLibrary", "DeregisterWalletBalanceUpdatedEventReceiver");

	Params::UModioUIWalletBalanceUpdatedEventReceiverLibrary_DeregisterWalletBalanceUpdatedEventReceiver_Params Parms{};

	Parms.ObjectToDeregister = ObjectToDeregister;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUserUIDetails
// (None)

class UClass* IModioUserUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUserUIDetails");

	return Clss;
}


// ModioUserUIDetails ModioUICore.Default__ModioUserUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUserUIDetails* IModioUserUIDetails::GetDefaultObj()
{
	static class IModioUserUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUserUIDetails*>(IModioUserUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUserUIDetails.GetUserID
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioUserID                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioUserID IModioUserUIDetails::GetUserID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUserUIDetails", "GetUserID");

	Params::IModioUserUIDetails_GetUserID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUserUIDetails.GetFullUser
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioUser                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioUser IModioUserUIDetails::GetFullUser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUserUIDetails", "GetFullUser");

	Params::IModioUserUIDetails_GetFullUser_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModRatingStateProvider
// (None)

class UClass* IModRatingStateProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModRatingStateProvider");

	return Clss;
}


// ModRatingStateProvider ModioUICore.Default__ModRatingStateProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IModRatingStateProvider* IModRatingStateProvider::GetDefaultObj()
{
	static class IModRatingStateProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IModRatingStateProvider*>(IModRatingStateProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModRatingStateProvider.RequestModRatingChange
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioRating            NewRating                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModRatingStateProvider::RequestModRatingChange(int64 ID, enum class EModioRating NewRating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModRatingStateProvider", "RequestModRatingChange");

	Params::IModRatingStateProvider_RequestModRatingChange_Params Parms{};

	Parms.ID = ID;
	Parms.NewRating = NewRating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModRatingStateProvider.QueryModRating
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioRating            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioRating IModRatingStateProvider::QueryModRating(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModRatingStateProvider", "QueryModRating");

	Params::IModRatingStateProvider_QueryModRating_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.LinearColorRefLibrary
// (None)

class UClass* ULinearColorRefLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LinearColorRefLibrary");

	return Clss;
}


// LinearColorRefLibrary ModioUICore.Default__LinearColorRefLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULinearColorRefLibrary* ULinearColorRefLibrary::GetDefaultObj()
{
	static class ULinearColorRefLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULinearColorRefLibrary*>(ULinearColorRefLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.LinearColorRefLibrary.ResolveOverrideAsExec
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColorRefOverride     Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor ULinearColorRefLibrary::ResolveOverrideAsExec(struct FLinearColorRefOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinearColorRefLibrary", "ResolveOverrideAsExec");

	Params::ULinearColorRefLibrary_ResolveOverrideAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.LinearColorRefLibrary.ResolveOverride
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColorRefOverride     Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor ULinearColorRefLibrary::ResolveOverride(struct FLinearColorRefOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinearColorRefLibrary", "ResolveOverride");

	Params::ULinearColorRefLibrary_ResolveOverride_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.LinearColorRefLibrary.Resolve
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColorRef             Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bResolved                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor ULinearColorRefLibrary::Resolve(struct FLinearColorRef& Target, bool* bResolved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinearColorRefLibrary", "Resolve");

	Params::ULinearColorRefLibrary_Resolve_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bResolved != nullptr)
		*bResolved = Parms.bResolved;

	return Parms.ReturnValue;

}


// Function ModioUICore.LinearColorRefLibrary.RemoveColorChangeHandler
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULinearColorRefLibrary::RemoveColorChangeHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinearColorRefLibrary", "RemoveColorChangeHandler");

	Params::ULinearColorRefLibrary_RemoveColorChangeHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.LinearColorRefLibrary.GetValidColorKeys
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> ULinearColorRefLibrary::GetValidColorKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinearColorRefLibrary", "GetValidColorKeys");

	Params::ULinearColorRefLibrary_GetValidColorKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.LinearColorRefLibrary.AddColorChangeHandler
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULinearColorRefLibrary::AddColorChangeHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinearColorRefLibrary", "AddColorChangeHandler");

	Params::ULinearColorRefLibrary_AddColorChangeHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioButtonWidget
// (None)

class UClass* UModioButtonWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioButtonWidget");

	return Clss;
}


// ModioButtonWidget ModioUICore.Default__ModioButtonWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioButtonWidget* UModioButtonWidget::GetDefaultObj()
{
	static class UModioButtonWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioButtonWidget*>(UModioButtonWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioUIComponentBase
// (None)

class UClass* UModioUIComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIComponentBase");

	return Clss;
}


// ModioUIComponentBase ModioUICore.Default__ModioUIComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIComponentBase* UModioUIComponentBase::GetDefaultObj()
{
	static class UModioUIComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIComponentBase*>(UModioUIComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioCommandEntry
// (None)

class UClass* UModioCommandEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCommandEntry");

	return Clss;
}


// ModioCommandEntry ModioUICore.Default__ModioCommandEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCommandEntry* UModioCommandEntry::GetDefaultObj()
{
	static class UModioCommandEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCommandEntry*>(UModioCommandEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioCommandEntry.HandleInnerButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UObject*                     ClickContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCommandEntry::HandleInnerButtonClicked(class UObject* ClickContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommandEntry", "HandleInnerButtonClicked");

	Params::UModioCommandEntry_HandleInnerButtonClicked_Params Parms{};

	Parms.ClickContext = ClickContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioCommandEntry.GetLabelWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioCommandEntry::GetLabelWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommandEntry", "GetLabelWidget");

	Params::UModioCommandEntry_GetLabelWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioCommandEntry.GetIconWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIImageDisplayWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIImageDisplayWidget> UModioCommandEntry::GetIconWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommandEntry", "GetIconWidget");

	Params::UModioCommandEntry_GetIconWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioCommandEntry.GetClickableWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioCommandEntry::GetClickableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommandEntry", "GetClickableWidget");

	Params::UModioCommandEntry_GetClickableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioCommandMenu
// (None)

class UClass* UModioCommandMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCommandMenu");

	return Clss;
}


// ModioCommandMenu ModioUICore.Default__ModioCommandMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCommandMenu* UModioCommandMenu::GetDefaultObj()
{
	static class UModioCommandMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCommandMenu*>(UModioCommandMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioCommandMenu.OnCommandSelected
// (Final, Native, Protected)
// Parameters:
// class UObject*                     SelectedCommandObject                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCommandMenu::OnCommandSelected(class UObject* SelectedCommandObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommandMenu", "OnCommandSelected");

	Params::UModioCommandMenu_OnCommandSelected_Params Parms{};

	Parms.SelectedCommandObject = SelectedCommandObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioCommandMenu.GetSelectorWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIObjectSelector>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIObjectSelector> UModioCommandMenu::GetSelectorWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCommandMenu", "GetSelectorWidget");

	Params::UModioCommandMenu_GetSelectorWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUserDisplay
// (None)

class UClass* UModioUserDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUserDisplay");

	return Clss;
}


// ModioUserDisplay ModioUICore.Default__ModioUserDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUserDisplay* UModioUserDisplay::GetDefaultObj()
{
	static class UModioUserDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUserDisplay*>(UModioUserDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioCurrentUserAvatarWidget
// (None)

class UClass* UModioCurrentUserAvatarWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCurrentUserAvatarWidget");

	return Clss;
}


// ModioCurrentUserAvatarWidget ModioUICore.Default__ModioCurrentUserAvatarWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCurrentUserAvatarWidget* UModioCurrentUserAvatarWidget::GetDefaultObj()
{
	static class UModioCurrentUserAvatarWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCurrentUserAvatarWidget*>(UModioCurrentUserAvatarWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioCurrentUserAvatarWidget.GetAvatarImageWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIImageDisplayWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIImageDisplayWidget> UModioCurrentUserAvatarWidget::GetAvatarImageWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCurrentUserAvatarWidget", "GetAvatarImageWidget");

	Params::UModioCurrentUserAvatarWidget_GetAvatarImageWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultBorder
// (None)

class UClass* UModioDefaultBorder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultBorder");

	return Clss;
}


// ModioDefaultBorder ModioUICore.Default__ModioDefaultBorder
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultBorder* UModioDefaultBorder::GetDefaultObj()
{
	static class UModioDefaultBorder* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultBorder*>(UModioDefaultBorder::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDefaultCheckBox
// (None)

class UClass* UModioDefaultCheckBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultCheckBox");

	return Clss;
}


// ModioDefaultCheckBox ModioUICore.Default__ModioDefaultCheckBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultCheckBox* UModioDefaultCheckBox::GetDefaultObj()
{
	static class UModioDefaultCheckBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultCheckBox*>(UModioDefaultCheckBox::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDefaultCheckBox.SetLabel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InLabelText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UModioDefaultCheckBox::SetLabel(class FText& InLabelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultCheckBox", "SetLabel");

	Params::UModioDefaultCheckBox_SetLabel_Params Parms{};

	Parms.InLabelText = InLabelText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultCheckBox.SetHovered
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHovered                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDefaultCheckBox::SetHovered(bool bHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultCheckBox", "SetHovered");

	Params::UModioDefaultCheckBox_SetHovered_Params Parms{};

	Parms.bHovered = bHovered;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultCheckBox.HandleOnCheckStateChanged
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDefaultCheckBox::HandleOnCheckStateChanged(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultCheckBox", "HandleOnCheckStateChanged");

	Params::UModioDefaultCheckBox_HandleOnCheckStateChanged_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultCheckBox.GetLabelTextBlockText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioDefaultCheckBox::GetLabelTextBlockText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultCheckBox", "GetLabelTextBlockText");

	Params::UModioDefaultCheckBox_GetLabelTextBlockText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioDefaultCheckBox.GetLabel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioDefaultCheckBox::GetLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultCheckBox", "GetLabel");

	Params::UModioDefaultCheckBox_GetLabel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioDefaultCheckBox.GetCheckboxContentPadding
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FMargin                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FMargin UModioDefaultCheckBox::GetCheckboxContentPadding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultCheckBox", "GetCheckboxContentPadding");

	Params::UModioDefaultCheckBox_GetCheckboxContentPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultCodeInputTextBox
// (None)

class UClass* UModioDefaultCodeInputTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultCodeInputTextBox");

	return Clss;
}


// ModioDefaultCodeInputTextBox ModioUICore.Default__ModioDefaultCodeInputTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultCodeInputTextBox* UModioDefaultCodeInputTextBox::GetDefaultObj()
{
	static class UModioDefaultCodeInputTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultCodeInputTextBox*>(UModioDefaultCodeInputTextBox::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction ModioUICore.ModioDefaultCodeInputTextBox.OnCodeSubmitDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UModioDefaultCodeInputTextBox::OnCodeSubmitDynamic__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultCodeInputTextBox", "OnCodeSubmitDynamic__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ModioUICore.ModioDefaultCodeInputTextBox.GetValidationErrorWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioDefaultCodeInputTextBox::GetValidationErrorWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultCodeInputTextBox", "GetValidationErrorWidget");

	Params::UModioDefaultCodeInputTextBox_GetValidationErrorWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultEditableTextBox
// (None)

class UClass* UModioDefaultEditableTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultEditableTextBox");

	return Clss;
}


// ModioDefaultEditableTextBox ModioUICore.Default__ModioDefaultEditableTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultEditableTextBox* UModioDefaultEditableTextBox::GetDefaultObj()
{
	static class UModioDefaultEditableTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultEditableTextBox*>(UModioDefaultEditableTextBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDefaultTextButton
// (None)

class UClass* UModioDefaultTextButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultTextButton");

	return Clss;
}


// ModioDefaultTextButton ModioUICore.Default__ModioDefaultTextButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultTextButton* UModioDefaultTextButton::GetDefaultObj()
{
	static class UModioDefaultTextButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultTextButton*>(UModioDefaultTextButton::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDefaultTextButton.GetLabelWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioDefaultTextButton::GetLabelWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultTextButton", "GetLabelWidget");

	Params::UModioDefaultTextButton_GetLabelWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultIconButton
// (None)

class UClass* UModioDefaultIconButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultIconButton");

	return Clss;
}


// ModioDefaultIconButton ModioUICore.Default__ModioDefaultIconButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultIconButton* UModioDefaultIconButton::GetDefaultObj()
{
	static class UModioDefaultIconButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultIconButton*>(UModioDefaultIconButton::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDefaultIconButton.GetImageWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIImageDisplayWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIImageDisplayWidget> UModioDefaultIconButton::GetImageWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultIconButton", "GetImageWidget");

	Params::UModioDefaultIconButton_GetImageWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultImage
// (None)

class UClass* UModioDefaultImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultImage");

	return Clss;
}


// ModioDefaultImage ModioUICore.Default__ModioDefaultImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultImage* UModioDefaultImage::GetDefaultObj()
{
	static class UModioDefaultImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultImage*>(UModioDefaultImage::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDefaultModalDialogImpl
// (None)

class UClass* UModioDefaultModalDialogImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultModalDialogImpl");

	return Clss;
}


// ModioDefaultModalDialogImpl ModioUICore.Default__ModioDefaultModalDialogImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultModalDialogImpl* UModioDefaultModalDialogImpl::GetDefaultObj()
{
	static class UModioDefaultModalDialogImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultModalDialogImpl*>(UModioDefaultModalDialogImpl::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDefaultModListView
// (None)

class UClass* UModioDefaultModListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultModListView");

	return Clss;
}


// ModioDefaultModListView ModioUICore.Default__ModioDefaultModListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultModListView* UModioDefaultModListView::GetDefaultObj()
{
	static class UModioDefaultModListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultModListView*>(UModioDefaultModListView::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDefaultModTile
// (None)

class UClass* UModioDefaultModTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultModTile");

	return Clss;
}


// ModioDefaultModTile ModioUICore.Default__ModioDefaultModTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultModTile* UModioDefaultModTile::GetDefaultObj()
{
	static class UModioDefaultModTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultModTile*>(UModioDefaultModTile::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDefaultModTile.PopulateExtraOptionsCommands
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             Commands                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDefaultModTile::PopulateExtraOptionsCommands(TArray<class UObject*>* Commands, class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultModTile", "PopulateExtraOptionsCommands");

	Params::UModioDefaultModTile_PopulateExtraOptionsCommands_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Commands != nullptr)
		*Commands = std::move(Parms.Commands);

}


// Function ModioUICore.ModioDefaultModTile.NotifyHoverStateChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bNewHoveredState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDefaultModTile::NotifyHoverStateChanged(bool bNewHoveredState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultModTile", "NotifyHoverStateChanged");

	Params::UModioDefaultModTile_NotifyHoverStateChanged_Params Parms{};

	Parms.bNewHoveredState = bNewHoveredState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultModTile.NotifyClicked
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioDefaultModTile::NotifyClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultModTile", "NotifyClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultModTile.GetSelectedStateEx
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioDefaultModTile::GetSelectedStateEx()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultModTile", "GetSelectedStateEx");

	Params::UModioDefaultModTile_GetSelectedStateEx_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioDefaultModTile.GetMoreOptionsMenuWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUICommandMenu>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUICommandMenu> UModioDefaultModTile::GetMoreOptionsMenuWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultModTile", "GetMoreOptionsMenuWidget");

	Params::UModioDefaultModTile_GetMoreOptionsMenuWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultModTileView
// (None)

class UClass* UModioDefaultModTileView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultModTileView");

	return Clss;
}


// ModioDefaultModTileView ModioUICore.Default__ModioDefaultModTileView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultModTileView* UModioDefaultModTileView::GetDefaultObj()
{
	static class UModioDefaultModTileView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultModTileView*>(UModioDefaultModTileView::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDefaultMultiLineEditableTextBox
// (None)

class UClass* UModioDefaultMultiLineEditableTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultMultiLineEditableTextBox");

	return Clss;
}


// ModioDefaultMultiLineEditableTextBox ModioUICore.Default__ModioDefaultMultiLineEditableTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultMultiLineEditableTextBox* UModioDefaultMultiLineEditableTextBox::GetDefaultObj()
{
	static class UModioDefaultMultiLineEditableTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultMultiLineEditableTextBox*>(UModioDefaultMultiLineEditableTextBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDefaultObjectSelector
// (None)

class UClass* UModioDefaultObjectSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultObjectSelector");

	return Clss;
}


// ModioDefaultObjectSelector ModioUICore.Default__ModioDefaultObjectSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultObjectSelector* UModioDefaultObjectSelector::GetDefaultObj()
{
	static class UModioDefaultObjectSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultObjectSelector*>(UModioDefaultObjectSelector::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDefaultObjectSelector.OnEntryWidgetClicked
// (Final, Native, Protected)
// Parameters:
// class UObject*                     Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDefaultObjectSelector::OnEntryWidgetClicked(class UObject* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultObjectSelector", "OnEntryWidgetClicked");

	Params::UModioDefaultObjectSelector_OnEntryWidgetClicked_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultObjectSelector.GetEntryWidgetFromItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UModioDefaultObjectSelector::GetEntryWidgetFromItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultObjectSelector", "GetEntryWidgetFromItem");

	Params::UModioDefaultObjectSelector_GetEntryWidgetFromItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultProgressBar
// (None)

class UClass* UModioDefaultProgressBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultProgressBar");

	return Clss;
}


// ModioDefaultProgressBar ModioUICore.Default__ModioDefaultProgressBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultProgressBar* UModioDefaultProgressBar::GetDefaultObj()
{
	static class UModioDefaultProgressBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultProgressBar*>(UModioDefaultProgressBar::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDefaultScrollBox
// (None)

class UClass* UModioDefaultScrollBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultScrollBox");

	return Clss;
}


// ModioDefaultScrollBox ModioUICore.Default__ModioDefaultScrollBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultScrollBox* UModioDefaultScrollBox::GetDefaultObj()
{
	static class UModioDefaultScrollBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultScrollBox*>(UModioDefaultScrollBox::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDefaultScrollBox.UpdateNavigationData
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PendingScrollOffset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDefaultScrollBox::UpdateNavigationData(int32 PendingScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultScrollBox", "UpdateNavigationData");

	Params::UModioDefaultScrollBox_UpdateNavigationData_Params Parms{};

	Parms.PendingScrollOffset = PendingScrollOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultScrollBox.OnUserScrolledHandle
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentOffset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDefaultScrollBox::OnUserScrolledHandle(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultScrollBox", "OnUserScrolledHandle");

	Params::UModioDefaultScrollBox_OnUserScrolledHandle_Params Parms{};

	Parms.CurrentOffset = CurrentOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultScrollBox.HandleCustomBoundaryNavigation
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EUINavigation           InNavigation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UModioDefaultScrollBox::HandleCustomBoundaryNavigation(enum class EUINavigation InNavigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultScrollBox", "HandleCustomBoundaryNavigation");

	Params::UModioDefaultScrollBox_HandleCustomBoundaryNavigation_Params Parms{};

	Parms.InNavigation = InNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultTagWidget
// (None)

class UClass* UModioDefaultTagWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultTagWidget");

	return Clss;
}


// ModioDefaultTagWidget ModioUICore.Default__ModioDefaultTagWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultTagWidget* UModioDefaultTagWidget::GetDefaultObj()
{
	static class UModioDefaultTagWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultTagWidget*>(UModioDefaultTagWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDefaultTagWidget.GetLabelWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioDefaultTagWidget::GetLabelWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultTagWidget", "GetLabelWidget");

	Params::UModioDefaultTagWidget_GetLabelWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultTextBlock
// (None)

class UClass* UModioDefaultTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultTextBlock");

	return Clss;
}


// ModioDefaultTextBlock ModioUICore.Default__ModioDefaultTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultTextBlock* UModioDefaultTextBlock::GetDefaultObj()
{
	static class UModioDefaultTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultTextBlock*>(UModioDefaultTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDefaultTokenPackTile
// (None)

class UClass* UModioDefaultTokenPackTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultTokenPackTile");

	return Clss;
}


// ModioDefaultTokenPackTile ModioUICore.Default__ModioDefaultTokenPackTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultTokenPackTile* UModioDefaultTokenPackTile::GetDefaultObj()
{
	static class UModioDefaultTokenPackTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultTokenPackTile*>(UModioDefaultTokenPackTile::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDefaultTokenPackTile.NotifyHoverStateChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bNewHoveredState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDefaultTokenPackTile::NotifyHoverStateChanged(bool bNewHoveredState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultTokenPackTile", "NotifyHoverStateChanged");

	Params::UModioDefaultTokenPackTile_NotifyHoverStateChanged_Params Parms{};

	Parms.bNewHoveredState = bNewHoveredState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultTokenPackTile.NotifyClicked
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioDefaultTokenPackTile::NotifyClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultTokenPackTile", "NotifyClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioDefaultTokenPackTile.GetSelectedStateEx
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioDefaultTokenPackTile::GetSelectedStateEx()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDefaultTokenPackTile", "GetSelectedStateEx");

	Params::UModioDefaultTokenPackTile_GetSelectedStateEx_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioDefaultTokenPackTileView
// (None)

class UClass* UModioDefaultTokenPackTileView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultTokenPackTileView");

	return Clss;
}


// ModioDefaultTokenPackTileView ModioUICore.Default__ModioDefaultTokenPackTileView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultTokenPackTileView* UModioDefaultTokenPackTileView::GetDefaultObj()
{
	static class UModioDefaultTokenPackTileView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultTokenPackTileView*>(UModioDefaultTokenPackTileView::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDialogButtonUIDetails
// (None)

class UClass* IModioDialogButtonUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDialogButtonUIDetails");

	return Clss;
}


// ModioDialogButtonUIDetails ModioUICore.Default__ModioDialogButtonUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioDialogButtonUIDetails* IModioDialogButtonUIDetails::GetDefaultObj()
{
	static class IModioDialogButtonUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioDialogButtonUIDetails*>(IModioDialogButtonUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDialogButtonUIDetails.GetDialogButtonInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioDialogButtonInfo      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioDialogButtonInfo IModioDialogButtonUIDetails::GetDialogButtonInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDialogButtonUIDetails", "GetDialogButtonInfo");

	Params::IModioDialogButtonUIDetails_GetDialogButtonInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModBrowserDialogButtonInfoUI
// (None)

class UClass* UModioModBrowserDialogButtonInfoUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModBrowserDialogButtonInfoUI");

	return Clss;
}


// ModioModBrowserDialogButtonInfoUI ModioUICore.Default__ModioModBrowserDialogButtonInfoUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModBrowserDialogButtonInfoUI* UModioModBrowserDialogButtonInfoUI::GetDefaultObj()
{
	static class UModioModBrowserDialogButtonInfoUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModBrowserDialogButtonInfoUI*>(UModioModBrowserDialogButtonInfoUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioDropdownAnchor
// (None)

class UClass* UModioDropdownAnchor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDropdownAnchor");

	return Clss;
}


// ModioDropdownAnchor ModioUICore.Default__ModioDropdownAnchor
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDropdownAnchor* UModioDropdownAnchor::GetDefaultObj()
{
	static class UModioDropdownAnchor* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDropdownAnchor*>(UModioDropdownAnchor::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioDropdownAnchor.ModioHandleMenuOpenChanged
// (Native, Protected)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDropdownAnchor::ModioHandleMenuOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDropdownAnchor", "ModioHandleMenuOpenChanged");

	Params::UModioDropdownAnchor_ModioHandleMenuOpenChanged_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioEnumEntryUI
// (None)

class UClass* UModioEnumEntryUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioEnumEntryUI");

	return Clss;
}


// ModioEnumEntryUI ModioUICore.Default__ModioEnumEntryUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioEnumEntryUI* UModioEnumEntryUI::GetDefaultObj()
{
	static class UModioEnumEntryUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioEnumEntryUI*>(UModioEnumEntryUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioEnumSelector
// (None)

class UClass* UModioEnumSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioEnumSelector");

	return Clss;
}


// ModioEnumSelector ModioUICore.Default__ModioEnumSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioEnumSelector* UModioEnumSelector::GetDefaultObj()
{
	static class UModioEnumSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioEnumSelector*>(UModioEnumSelector::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioEnumSelector.NotifySelectionChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     SelectedObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEnumSelector::NotifySelectionChanged(class UObject* SelectedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelector", "NotifySelectionChanged");

	Params::UModioEnumSelector_NotifySelectionChanged_Params Parms{};

	Parms.SelectedObject = SelectedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioEnumSelector.InternalSelectionChangedHandler
// (Final, Native, Protected)
// Parameters:
// class UObject*                     SelectedObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEnumSelector::InternalSelectionChangedHandler(class UObject* SelectedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelector", "InternalSelectionChangedHandler");

	Params::UModioEnumSelector_InternalSelectionChangedHandler_Params Parms{};

	Parms.SelectedObject = SelectedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioEnumSelector.GetSelectorMenuWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIObjectSelector>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIObjectSelector> UModioEnumSelector::GetSelectorMenuWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelector", "GetSelectorMenuWidget");

	Params::UModioEnumSelector_GetSelectorMenuWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioEnumSelector.GetMenuToggleClickableWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioEnumSelector::GetMenuToggleClickableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelector", "GetMenuToggleClickableWidget");

	Params::UModioEnumSelector_GetMenuToggleClickableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioEnumSelectorEntry
// (None)

class UClass* UModioEnumSelectorEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioEnumSelectorEntry");

	return Clss;
}


// ModioEnumSelectorEntry ModioUICore.Default__ModioEnumSelectorEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioEnumSelectorEntry* UModioEnumSelectorEntry::GetDefaultObj()
{
	static class UModioEnumSelectorEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioEnumSelectorEntry*>(UModioEnumSelectorEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioEnumSelectorEntry.NotifySelectionChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bNewSelectedState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEnumSelectorEntry::NotifySelectionChanged(bool bNewSelectedState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorEntry", "NotifySelectionChanged");

	Params::UModioEnumSelectorEntry_NotifySelectionChanged_Params Parms{};

	Parms.bNewSelectedState = bNewSelectedState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioEnumSelectorEntry.NotifyClicked
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioEnumSelectorEntry::NotifyClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorEntry", "NotifyClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioEnumSelectorEntry.InternalSelectionChangedHandler
// (Final, Native, Protected)
// Parameters:
// class UObject*                     SelectionContext                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewSelectedState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEnumSelectorEntry::InternalSelectionChangedHandler(class UObject* SelectionContext, bool bNewSelectedState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorEntry", "InternalSelectionChangedHandler");

	Params::UModioEnumSelectorEntry_InternalSelectionChangedHandler_Params Parms{};

	Parms.SelectionContext = SelectionContext;
	Parms.bNewSelectedState = bNewSelectedState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioEnumSelectorEntry.InternalClickHandler
// (Final, Native, Protected)
// Parameters:
// class UObject*                     ClickContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEnumSelectorEntry::InternalClickHandler(class UObject* ClickContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorEntry", "InternalClickHandler");

	Params::UModioEnumSelectorEntry_InternalClickHandler_Params Parms{};

	Parms.ClickContext = ClickContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioEnumSelectorEntry.GetSelectableWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUISelectableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUISelectableWidget> UModioEnumSelectorEntry::GetSelectableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorEntry", "GetSelectableWidget");

	Params::UModioEnumSelectorEntry_GetSelectableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioEnumSelectorEntry.GetLabelWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioEnumSelectorEntry::GetLabelWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorEntry", "GetLabelWidget");

	Params::UModioEnumSelectorEntry_GetLabelWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioEnumSelectorEntry.GetClickableWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioEnumSelectorEntry::GetClickableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorEntry", "GetClickableWidget");

	Params::UModioEnumSelectorEntry_GetClickableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioEnumSelectorMenu
// (None)

class UClass* UModioEnumSelectorMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioEnumSelectorMenu");

	return Clss;
}


// ModioEnumSelectorMenu ModioUICore.Default__ModioEnumSelectorMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioEnumSelectorMenu* UModioEnumSelectorMenu::GetDefaultObj()
{
	static class UModioEnumSelectorMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioEnumSelectorMenu*>(UModioEnumSelectorMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioEnumSelectorMenu.NotifySelectionChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     SelectedObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEnumSelectorMenu::NotifySelectionChanged(class UObject* SelectedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorMenu", "NotifySelectionChanged");

	Params::UModioEnumSelectorMenu_NotifySelectionChanged_Params Parms{};

	Parms.SelectedObject = SelectedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioEnumSelectorMenu.InternalSelectionChangedHandler
// (Final, Native, Protected)
// Parameters:
// class UObject*                     SelectedObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioEnumSelectorMenu::InternalSelectionChangedHandler(class UObject* SelectedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorMenu", "InternalSelectionChangedHandler");

	Params::UModioEnumSelectorMenu_InternalSelectionChangedHandler_Params Parms{};

	Parms.SelectedObject = SelectedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioEnumSelectorMenu.GetSelectorWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIObjectSelector>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIObjectSelector> UModioEnumSelectorMenu::GetSelectorWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEnumSelectorMenu", "GetSelectorWidget");

	Params::UModioEnumSelectorMenu_GetSelectorWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioFeaturedCategoryParamsUI
// (None)

class UClass* UModioFeaturedCategoryParamsUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFeaturedCategoryParamsUI");

	return Clss;
}


// ModioFeaturedCategoryParamsUI ModioUICore.Default__ModioFeaturedCategoryParamsUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFeaturedCategoryParamsUI* UModioFeaturedCategoryParamsUI::GetDefaultObj()
{
	static class UModioFeaturedCategoryParamsUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFeaturedCategoryParamsUI*>(UModioFeaturedCategoryParamsUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioFeatureVisibilityWidget
// (None)

class UClass* UModioFeatureVisibilityWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFeatureVisibilityWidget");

	return Clss;
}


// ModioFeatureVisibilityWidget ModioUICore.Default__ModioFeatureVisibilityWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFeatureVisibilityWidget* UModioFeatureVisibilityWidget::GetDefaultObj()
{
	static class UModioFeatureVisibilityWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFeatureVisibilityWidget*>(UModioFeatureVisibilityWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioFilterCounterButton
// (None)

class UClass* UModioFilterCounterButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFilterCounterButton");

	return Clss;
}


// ModioFilterCounterButton ModioUICore.Default__ModioFilterCounterButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFilterCounterButton* UModioFilterCounterButton::GetDefaultObj()
{
	static class UModioFilterCounterButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFilterCounterButton*>(UModioFilterCounterButton::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioFilterCounterButton.GetFilterCounterWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IModioUIDataSourceWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIDataSourceWidget> UModioFilterCounterButton::GetFilterCounterWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterCounterButton", "GetFilterCounterWidget");

	Params::UModioFilterCounterButton_GetFilterCounterWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioFilterPanel
// (None)

class UClass* UModioFilterPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFilterPanel");

	return Clss;
}


// ModioFilterPanel ModioUICore.Default__ModioFilterPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFilterPanel* UModioFilterPanel::GetDefaultObj()
{
	static class UModioFilterPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFilterPanel*>(UModioFilterPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioFilterPanel.GetTagSelectorWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIModTagSelector>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIModTagSelector> UModioFilterPanel::GetTagSelectorWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterPanel", "GetTagSelectorWidget");

	Params::UModioFilterPanel_GetTagSelectorWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioFilterPanel.GetSelectedTags
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UModioFilterPanel::GetSelectedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterPanel", "GetSelectedTags");

	Params::UModioFilterPanel_GetSelectedTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioFilterPanel.GetClearButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioFilterPanel::GetClearButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterPanel", "GetClearButtonWidget");

	Params::UModioFilterPanel_GetClearButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioFilterPanel.GetBackgroundButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioFilterPanel::GetBackgroundButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterPanel", "GetBackgroundButtonWidget");

	Params::UModioFilterPanel_GetBackgroundButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioFilterPanel.ClearSelectedTags
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UModioFilterPanel::ClearSelectedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterPanel", "ClearSelectedTags");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioFilterPanel.AddTagSelectionChangedHandler
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Handler                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioFilterPanel::AddTagSelectionChangedHandler(FDelegateProperty_& Handler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFilterPanel", "AddTagSelectionChangedHandler");

	Params::UModioFilterPanel_AddTagSelectionChangedHandler_Params Parms{};

	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioFilterParamsUI
// (None)

class UClass* UModioFilterParamsUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFilterParamsUI");

	return Clss;
}


// ModioFilterParamsUI ModioUICore.Default__ModioFilterParamsUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFilterParamsUI* UModioFilterParamsUI::GetDefaultObj()
{
	static class UModioFilterParamsUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFilterParamsUI*>(UModioFilterParamsUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioGalleryImageUI
// (None)

class UClass* UModioGalleryImageUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioGalleryImageUI");

	return Clss;
}


// ModioGalleryImageUI ModioUICore.Default__ModioGalleryImageUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioGalleryImageUI* UModioGalleryImageUI::GetDefaultObj()
{
	static class UModioGalleryImageUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioGalleryImageUI*>(UModioGalleryImageUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioGalleryListEntry
// (None)

class UClass* UModioGalleryListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioGalleryListEntry");

	return Clss;
}


// ModioGalleryListEntry ModioUICore.Default__ModioGalleryListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioGalleryListEntry* UModioGalleryListEntry::GetDefaultObj()
{
	static class UModioGalleryListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioGalleryListEntry*>(UModioGalleryListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioImageGallery
// (None)

class UClass* UModioImageGallery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioImageGallery");

	return Clss;
}


// ModioImageGallery ModioUICore.Default__ModioImageGallery
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioImageGallery* UModioImageGallery::GetDefaultObj()
{
	static class UModioImageGallery* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioImageGallery*>(UModioImageGallery::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioImageGallery.Refresh
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioImageGallery::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageGallery", "Refresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioImageGallery.GetIncrementSelectionButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioImageGallery::GetIncrementSelectionButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageGallery", "GetIncrementSelectionButtonWidget");

	Params::UModioImageGallery_GetIncrementSelectionButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioImageGallery.GetImageWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIImageDisplayWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIImageDisplayWidget> UModioImageGallery::GetImageWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageGallery", "GetImageWidget");

	Params::UModioImageGallery_GetImageWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioImageGallery.GetImageSelectorWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIObjectSelector>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIObjectSelector> UModioImageGallery::GetImageSelectorWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageGallery", "GetImageSelectorWidget");

	Params::UModioImageGallery_GetImageSelectorWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioImageGallery.GetDecrementSelectionButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioImageGallery::GetDecrementSelectionButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageGallery", "GetDecrementSelectionButtonWidget");

	Params::UModioImageGallery_GetDecrementSelectionButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModBrowser
// (None)

class UClass* UModioModBrowser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModBrowser");

	return Clss;
}


// ModioModBrowser ModioUICore.Default__ModioModBrowser
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModBrowser* UModioModBrowser::GetDefaultObj()
{
	static class UModioModBrowser* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModBrowser*>(UModioModBrowser::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModBrowser.SearchSubscriptionsAndInstallsWithStoredParams
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FModioModInfo>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FModioModInfo> UModioModBrowser::SearchSubscriptionsAndInstallsWithStoredParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "SearchSubscriptionsAndInstallsWithStoredParams");

	Params::UModioModBrowser_SearchSubscriptionsAndInstallsWithStoredParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.SearchPurchasesWithStoredParams
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FModioModInfo>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FModioModInfo> UModioModBrowser::SearchPurchasesWithStoredParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "SearchPurchasesWithStoredParams");

	Params::UModioModBrowser_SearchPurchasesWithStoredParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.SearchLibraryWithStoredParams
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FModioModInfo>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FModioModInfo> UModioModBrowser::SearchLibraryWithStoredParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "SearchLibraryWithStoredParams");

	Params::UModioModBrowser_SearchLibraryWithStoredParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.InitializeTagData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     InTagData                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModBrowser::InitializeTagData(class UObject* InTagData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "InitializeTagData");

	Params::UModioModBrowser_InitializeTagData_Params Parms{};

	Parms.InTagData = InTagData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowser.InitializeLibraryTagData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     InTagData                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModBrowser::InitializeLibraryTagData(class UObject* InTagData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "InitializeLibraryTagData");

	Params::UModioModBrowser_InitializeLibraryTagData_Params Parms{};

	Parms.InTagData = InTagData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowser.IncrementPresetFilterSelection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioModBrowser::IncrementPresetFilterSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "IncrementPresetFilterSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowser.GetWalletButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModBrowser::GetWalletButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetWalletButtonWidget");

	Params::UModioModBrowser_GetWalletButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetViewDescriptionTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioModBrowser::GetViewDescriptionTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetViewDescriptionTextWidget");

	Params::UModioModBrowser_GetViewDescriptionTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetViewDescriptionImageWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIImageDisplayWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIImageDisplayWidget> UModioModBrowser::GetViewDescriptionImageWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetViewDescriptionImageWidget");

	Params::UModioModBrowser_GetViewDescriptionImageWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetTabRightButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModBrowser::GetTabRightButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetTabRightButtonWidget");

	Params::UModioModBrowser_GetTabRightButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetTabLeftButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModBrowser::GetTabLeftButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetTabLeftButtonWidget");

	Params::UModioModBrowser_GetTabLeftButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetSearchTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioModBrowser::GetSearchTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetSearchTextWidget");

	Params::UModioModBrowser_GetSearchTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetSearchEditableTextBoxWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIStringInputWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIStringInputWidget> UModioModBrowser::GetSearchEditableTextBoxWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetSearchEditableTextBoxWidget");

	Params::UModioModBrowser_GetSearchEditableTextBoxWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetSearchButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModBrowser::GetSearchButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetSearchButtonWidget");

	Params::UModioModBrowser_GetSearchButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetPresetFilterSelectorWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIObjectSelector>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIObjectSelector> UModioModBrowser::GetPresetFilterSelectorWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetPresetFilterSelectorWidget");

	Params::UModioModBrowser_GetPresetFilterSelectorWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetModTileViewWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIModListViewInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIModListViewInterface> UModioModBrowser::GetModTileViewWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetModTileViewWidget");

	Params::UModioModBrowser_GetModTileViewWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetLibraryViewButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModBrowser::GetLibraryViewButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetLibraryViewButtonWidget");

	Params::UModioModBrowser_GetLibraryViewButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetFilterButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModBrowser::GetFilterButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetFilterButtonWidget");

	Params::UModioModBrowser_GetFilterButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetCloseBrowserButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModBrowser::GetCloseBrowserButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetCloseBrowserButtonWidget");

	Params::UModioModBrowser_GetCloseBrowserButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.GetClearSearchButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModBrowser::GetClearSearchButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "GetClearSearchButtonWidget");

	Params::UModioModBrowser_GetClearSearchButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.DoFilterParamsIncludeUserId
// (Final, Native, Static, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioFilterParams          Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioModBrowser::DoFilterParamsIncludeUserId(struct FModioFilterParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "DoFilterParamsIncludeUserId");

	Params::UModioModBrowser_DoFilterParamsIncludeUserId_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModBrowser.DecrementPresetFilterSelection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioModBrowser::DecrementPresetFilterSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowser", "DecrementPresetFilterSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioModCollectionEntryUI
// (None)

class UClass* UModioModCollectionEntryUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModCollectionEntryUI");

	return Clss;
}


// ModioModCollectionEntryUI ModioUICore.Default__ModioModCollectionEntryUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModCollectionEntryUI* UModioModCollectionEntryUI::GetDefaultObj()
{
	static class UModioModCollectionEntryUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModCollectionEntryUI*>(UModioModCollectionEntryUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModDependencyUI
// (None)

class UClass* UModioModDependencyUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDependencyUI");

	return Clss;
}


// ModioModDependencyUI ModioUICore.Default__ModioModDependencyUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModDependencyUI* UModioModDependencyUI::GetDefaultObj()
{
	static class UModioModDependencyUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDependencyUI*>(UModioModDependencyUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModDetailsDialog
// (None)

class UClass* UModioModDetailsDialog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsDialog");

	return Clss;
}


// ModioModDetailsDialog ModioUICore.Default__ModioModDetailsDialog
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModDetailsDialog* UModioModDetailsDialog::GetDefaultObj()
{
	static class UModioModDetailsDialog* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsDialog*>(UModioModDetailsDialog::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModDetailsDialog.PopulateExtraOptionsCommands
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             Commands                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModDetailsDialog::PopulateExtraOptionsCommands(TArray<class UObject*>* Commands, class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "PopulateExtraOptionsCommands");

	Params::UModioModDetailsDialog_PopulateExtraOptionsCommands_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Commands != nullptr)
		*Commands = std::move(Parms.Commands);

}


// Function ModioUICore.ModioModDetailsDialog.IsUserSubscribed
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioModDetailsDialog::IsUserSubscribed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "IsUserSubscribed");

	Params::UModioModDetailsDialog_IsUserSubscribed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.IsModPurchased
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioModDetailsDialog::IsModPurchased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "IsModPurchased");

	Params::UModioModDetailsDialog_IsModPurchased_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetWalletButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModDetailsDialog::GetWalletButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetWalletButtonWidget");

	Params::UModioModDetailsDialog_GetWalletButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetTagDisplayWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIDataSourceWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIDataSourceWidget> UModioModDetailsDialog::GetTagDisplayWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetTagDisplayWidget");

	Params::UModioModDetailsDialog_GetTagDisplayWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetSubscribeButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModDetailsDialog::GetSubscribeButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetSubscribeButtonWidget");

	Params::UModioModDetailsDialog_GetSubscribeButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetRateUpButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModDetailsDialog::GetRateUpButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetRateUpButtonWidget");

	Params::UModioModDetailsDialog_GetRateUpButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetRateDownButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModDetailsDialog::GetRateDownButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetRateDownButtonWidget");

	Params::UModioModDetailsDialog_GetRateDownButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetPurchaseButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModDetailsDialog::GetPurchaseButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetPurchaseButtonWidget");

	Params::UModioModDetailsDialog_GetPurchaseButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetMoreOptionsMenuWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUICommandMenu>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUICommandMenu> UModioModDetailsDialog::GetMoreOptionsMenuWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetMoreOptionsMenuWidget");

	Params::UModioModDetailsDialog_GetMoreOptionsMenuWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetModSummaryShortTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioModDetailsDialog::GetModSummaryShortTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetModSummaryShortTextWidget");

	Params::UModioModDetailsDialog_GetModSummaryShortTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetModStatusWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIDataSourceWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIDataSourceWidget> UModioModDetailsDialog::GetModStatusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetModStatusWidget");

	Params::UModioModDetailsDialog_GetModStatusWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetModPropertiesWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIDataSourceWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIDataSourceWidget> UModioModDetailsDialog::GetModPropertiesWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetModPropertiesWidget");

	Params::UModioModDetailsDialog_GetModPropertiesWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetModNameTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioModDetailsDialog::GetModNameTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetModNameTextWidget");

	Params::UModioModDetailsDialog_GetModNameTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetModImageGalleryWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIMediaDownloadCompletedReceiver>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIMediaDownloadCompletedReceiver> UModioModDetailsDialog::GetModImageGalleryWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetModImageGalleryWidget");

	Params::UModioModDetailsDialog_GetModImageGalleryWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetModDependenciesButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModDetailsDialog::GetModDependenciesButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetModDependenciesButtonWidget");

	Params::UModioModDetailsDialog_GetModDependenciesButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetModAuthorDisplayWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIDataSourceWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIDataSourceWidget> UModioModDetailsDialog::GetModAuthorDisplayWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetModAuthorDisplayWidget");

	Params::UModioModDetailsDialog_GetModAuthorDisplayWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetExpandDescriptionButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModDetailsDialog::GetExpandDescriptionButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetExpandDescriptionButtonWidget");

	Params::UModioModDetailsDialog_GetExpandDescriptionButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModDetailsDialog.GetCloseDialogButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModDetailsDialog::GetCloseDialogButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsDialog", "GetCloseDialogButtonWidget");

	Params::UModioModDetailsDialog_GetCloseDialogButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModEnabledStatusWidget
// (None)

class UClass* UModioModEnabledStatusWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModEnabledStatusWidget");

	return Clss;
}


// ModioModEnabledStatusWidget ModioUICore.Default__ModioModEnabledStatusWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModEnabledStatusWidget* UModioModEnabledStatusWidget::GetDefaultObj()
{
	static class UModioModEnabledStatusWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModEnabledStatusWidget*>(UModioModEnabledStatusWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModEnabledToggleWidget
// (None)

class UClass* UModioModEnabledToggleWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModEnabledToggleWidget");

	return Clss;
}


// ModioModEnabledToggleWidget ModioUICore.Default__ModioModEnabledToggleWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModEnabledToggleWidget* UModioModEnabledToggleWidget::GetDefaultObj()
{
	static class UModioModEnabledToggleWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModEnabledToggleWidget*>(UModioModEnabledToggleWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModInfoUI
// (None)

class UClass* UModioModInfoUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModInfoUI");

	return Clss;
}


// ModioModInfoUI ModioUICore.Default__ModioModInfoUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModInfoUI* UModioModInfoUI::GetDefaultObj()
{
	static class UModioModInfoUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModInfoUI*>(UModioModInfoUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModInstallationStatusWidget
// (None)

class UClass* UModioModInstallationStatusWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModInstallationStatusWidget");

	return Clss;
}


// ModioModInstallationStatusWidget ModioUICore.Default__ModioModInstallationStatusWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModInstallationStatusWidget* UModioModInstallationStatusWidget::GetDefaultObj()
{
	static class UModioModInstallationStatusWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModInstallationStatusWidget*>(UModioModInstallationStatusWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModInstallationStatusWidget.QueryProgressValueForState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EModioModProgressState  ProgressState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UModioModInstallationStatusWidget::QueryProgressValueForState(enum class EModioModProgressState ProgressState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModInstallationStatusWidget", "QueryProgressValueForState");

	Params::UModioModInstallationStatusWidget_QueryProgressValueForState_Params Parms{};

	Parms.ProgressState = ProgressState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModManagementEventUI
// (None)

class UClass* UModioModManagementEventUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModManagementEventUI");

	return Clss;
}


// ModioModManagementEventUI ModioUICore.Default__ModioModManagementEventUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModManagementEventUI* UModioModManagementEventUI::GetDefaultObj()
{
	static class UModioModManagementEventUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModManagementEventUI*>(UModioModManagementEventUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModProgressInfoUI
// (None)

class UClass* UModioModProgressInfoUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModProgressInfoUI");

	return Clss;
}


// ModioModProgressInfoUI ModioUICore.Default__ModioModProgressInfoUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModProgressInfoUI* UModioModProgressInfoUI::GetDefaultObj()
{
	static class UModioModProgressInfoUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModProgressInfoUI*>(UModioModProgressInfoUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModPropCollectionVisualizer
// (None)

class UClass* UModioModPropCollectionVisualizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModPropCollectionVisualizer");

	return Clss;
}


// ModioModPropCollectionVisualizer ModioUICore.Default__ModioModPropCollectionVisualizer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModPropCollectionVisualizer* UModioModPropCollectionVisualizer::GetDefaultObj()
{
	static class UModioModPropCollectionVisualizer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModPropCollectionVisualizer*>(UModioModPropCollectionVisualizer::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModPropCollectionVisualizer.GetModPropertyVisualizerWidgets
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class IModioUIDataSourceWidget>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class IModioUIDataSourceWidget>> UModioModPropCollectionVisualizer::GetModPropertyVisualizerWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModPropCollectionVisualizer", "GetModPropertyVisualizerWidgets");

	Params::UModioModPropCollectionVisualizer_GetModPropertyVisualizerWidgets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModRatingDisplay
// (None)

class UClass* UModioModRatingDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModRatingDisplay");

	return Clss;
}


// ModioModRatingDisplay ModioUICore.Default__ModioModRatingDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModRatingDisplay* UModioModRatingDisplay::GetDefaultObj()
{
	static class UModioModRatingDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModRatingDisplay*>(UModioModRatingDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModRatingDisplay.GetRatingPercentageLabelWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioModRatingDisplay::GetRatingPercentageLabelWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModRatingDisplay", "GetRatingPercentageLabelWidget");

	Params::UModioModRatingDisplay_GetRatingPercentageLabelWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModRatingDisplay.GetRatingDescriptionLabelWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioModRatingDisplay::GetRatingDescriptionLabelWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModRatingDisplay", "GetRatingDescriptionLabelWidget");

	Params::UModioModRatingDisplay_GetRatingDescriptionLabelWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModSubscriptionStatusWidget
// (None)

class UClass* UModioModSubscriptionStatusWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModSubscriptionStatusWidget");

	return Clss;
}


// ModioModSubscriptionStatusWidget ModioUICore.Default__ModioModSubscriptionStatusWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModSubscriptionStatusWidget* UModioModSubscriptionStatusWidget::GetDefaultObj()
{
	static class UModioModSubscriptionStatusWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModSubscriptionStatusWidget*>(UModioModSubscriptionStatusWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModTagDisplay
// (None)

class UClass* UModioModTagDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagDisplay");

	return Clss;
}


// ModioModTagDisplay ModioUICore.Default__ModioModTagDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTagDisplay* UModioModTagDisplay::GetDefaultObj()
{
	static class UModioModTagDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTagDisplay*>(UModioModTagDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModTagDisplay.GetTagContainerWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIObjectListWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIObjectListWidget> UModioModTagDisplay::GetTagContainerWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagDisplay", "GetTagContainerWidget");

	Params::UModioModTagDisplay_GetTagContainerWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModTagSelector
// (None)

class UClass* UModioModTagSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagSelector");

	return Clss;
}


// ModioModTagSelector ModioUICore.Default__ModioModTagSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTagSelector* UModioModTagSelector::GetDefaultObj()
{
	static class UModioModTagSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTagSelector*>(UModioModTagSelector::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModTagSelector.GetSelectorMenuWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIModTagSelector>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIModTagSelector> UModioModTagSelector::GetSelectorMenuWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelector", "GetSelectorMenuWidget");

	Params::UModioModTagSelector_GetSelectorMenuWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagSelector.GetMenuToggleClickableWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModTagSelector::GetMenuToggleClickableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelector", "GetMenuToggleClickableWidget");

	Params::UModioModTagSelector_GetMenuToggleClickableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModTagSelectorCategory
// (None)

class UClass* UModioModTagSelectorCategory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagSelectorCategory");

	return Clss;
}


// ModioModTagSelectorCategory ModioUICore.Default__ModioModTagSelectorCategory
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTagSelectorCategory* UModioModTagSelectorCategory::GetDefaultObj()
{
	static class UModioModTagSelectorCategory* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTagSelectorCategory*>(UModioModTagSelectorCategory::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModTagSelectorCategory.GetTagCategoryLabel
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioModTagSelectorCategory::GetTagCategoryLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorCategory", "GetTagCategoryLabel");

	Params::UModioModTagSelectorCategory_GetTagCategoryLabel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagSelectorCategory.GetCategoryTagListWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIObjectSelector>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIObjectSelector> UModioModTagSelectorCategory::GetCategoryTagListWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorCategory", "GetCategoryTagListWidget");

	Params::UModioModTagSelectorCategory_GetCategoryTagListWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModTagSelectorEntry
// (None)

class UClass* UModioModTagSelectorEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagSelectorEntry");

	return Clss;
}


// ModioModTagSelectorEntry ModioUICore.Default__ModioModTagSelectorEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTagSelectorEntry* UModioModTagSelectorEntry::GetDefaultObj()
{
	static class UModioModTagSelectorEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTagSelectorEntry*>(UModioModTagSelectorEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModTagSelectorEntry.OnTagEntryClicked
// (Final, Native, Protected)
// Parameters:
// class UObject*                     ClickedObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModTagSelectorEntry::OnTagEntryClicked(class UObject* ClickedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorEntry", "OnTagEntryClicked");

	Params::UModioModTagSelectorEntry_OnTagEntryClicked_Params Parms{};

	Parms.ClickedObject = ClickedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModTagSelectorEntry.NotifySelectionChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioModTagSelectorEntry::NotifySelectionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorEntry", "NotifySelectionChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModTagSelectorEntry.NotifyClicked
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioModTagSelectorEntry::NotifyClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorEntry", "NotifyClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModTagSelectorEntry.GetTagLabelWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioModTagSelectorEntry::GetTagLabelWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorEntry", "GetTagLabelWidget");

	Params::UModioModTagSelectorEntry_GetTagLabelWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagSelectorEntry.GetSelectionWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUISelectableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUISelectableWidget> UModioModTagSelectorEntry::GetSelectionWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorEntry", "GetSelectionWidget");

	Params::UModioModTagSelectorEntry_GetSelectionWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagSelectorEntry.GetClickableWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioModTagSelectorEntry::GetClickableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorEntry", "GetClickableWidget");

	Params::UModioModTagSelectorEntry_GetClickableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModTagSelectorMenu
// (None)

class UClass* UModioModTagSelectorMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagSelectorMenu");

	return Clss;
}


// ModioModTagSelectorMenu ModioUICore.Default__ModioModTagSelectorMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTagSelectorMenu* UModioModTagSelectorMenu::GetDefaultObj()
{
	static class UModioModTagSelectorMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTagSelectorMenu*>(UModioModTagSelectorMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModTagSelectorMenu.OnCategoryWidgetCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     CategoryWidget                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     CategoryDataSource                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModTagSelectorMenu::OnCategoryWidgetCreated(class UWidget* CategoryWidget, class UObject* CategoryDataSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorMenu", "OnCategoryWidgetCreated");

	Params::UModioModTagSelectorMenu_OnCategoryWidgetCreated_Params Parms{};

	Parms.CategoryWidget = CategoryWidget;
	Parms.CategoryDataSource = CategoryDataSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModTagSelectorMenu.OnCategoryEntrySelectionChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     NewlySelectedEntry                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModTagSelectorMenu::OnCategoryEntrySelectionChanged(class UObject* NewlySelectedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorMenu", "OnCategoryEntrySelectionChanged");

	Params::UModioModTagSelectorMenu_OnCategoryEntrySelectionChanged_Params Parms{};

	Parms.NewlySelectedEntry = NewlySelectedEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModTagSelectorMenu.NotifySelectionChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioModTagSelectorMenu::NotifySelectionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorMenu", "NotifySelectionChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModTagSelectorMenu.GetCategoryContainerWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIObjectListWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIObjectListWidget> UModioModTagSelectorMenu::GetCategoryContainerWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorMenu", "GetCategoryContainerWidget");

	Params::UModioModTagSelectorMenu_GetCategoryContainerWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModTagSelectorMenu.GetAllowedTags
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class IModioModTagCategoryUIDetails>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class IModioModTagCategoryUIDetails>> UModioModTagSelectorMenu::GetAllowedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTagSelectorMenu", "GetAllowedTags");

	Params::UModioModTagSelectorMenu_GetAllowedTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioObjectWrapBox
// (None)

class UClass* UModioObjectWrapBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioObjectWrapBox");

	return Clss;
}


// ModioObjectWrapBox ModioUICore.Default__ModioObjectWrapBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioObjectWrapBox* UModioObjectWrapBox::GetDefaultObj()
{
	static class UModioObjectWrapBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioObjectWrapBox*>(UModioObjectWrapBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioOperationTracker
// (None)

class UClass* UModioOperationTracker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioOperationTracker");

	return Clss;
}


// ModioOperationTracker ModioUICore.Default__ModioOperationTracker
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioOperationTracker* UModioOperationTracker::GetDefaultObj()
{
	static class UModioOperationTracker* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioOperationTracker*>(UModioOperationTracker::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioOperationTracker.RefreshQueueData
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UModioOperationTracker::RefreshQueueData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "RefreshQueueData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioOperationTracker.HandleOperationComplete
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UModioOperationTracker::HandleOperationComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "HandleOperationComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioOperationTracker.GetRadialProgressWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIProgressWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIProgressWidget> UModioOperationTracker::GetRadialProgressWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "GetRadialProgressWidget");

	Params::UModioOperationTracker_GetRadialProgressWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioOperationTracker.GetQueueLabelTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioOperationTracker::GetQueueLabelTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "GetQueueLabelTextWidget");

	Params::UModioOperationTracker_GetQueueLabelTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioOperationTracker.GetQueueCountTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioOperationTracker::GetQueueCountTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "GetQueueCountTextWidget");

	Params::UModioOperationTracker_GetQueueCountTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioOperationTracker.GetQueueCountIconWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIImageDisplayWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIImageDisplayWidget> UModioOperationTracker::GetQueueCountIconWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "GetQueueCountIconWidget");

	Params::UModioOperationTracker_GetQueueCountIconWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioOperationTracker.GetPercentProgressTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioOperationTracker::GetPercentProgressTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "GetPercentProgressTextWidget");

	Params::UModioOperationTracker_GetPercentProgressTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioOperationTracker.GetOperationTypeIconWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIImageDisplayWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIImageDisplayWidget> UModioOperationTracker::GetOperationTypeIconWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "GetOperationTypeIconWidget");

	Params::UModioOperationTracker_GetOperationTypeIconWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioOperationTracker.GetDownloadSpeedTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioOperationTracker::GetDownloadSpeedTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "GetDownloadSpeedTextWidget");

	Params::UModioOperationTracker_GetDownloadSpeedTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioOperationTracker.GetDownloadSizeTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioOperationTracker::GetDownloadSizeTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioOperationTracker", "GetDownloadSizeTextWidget");

	Params::UModioOperationTracker_GetDownloadSizeTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioPlatformSpecificWidget
// (None)

class UClass* UModioPlatformSpecificWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioPlatformSpecificWidget");

	return Clss;
}


// ModioPlatformSpecificWidget ModioUICore.Default__ModioPlatformSpecificWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioPlatformSpecificWidget* UModioPlatformSpecificWidget::GetDefaultObj()
{
	static class UModioPlatformSpecificWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioPlatformSpecificWidget*>(UModioPlatformSpecificWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioPopupCommandMenu
// (None)

class UClass* UModioPopupCommandMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioPopupCommandMenu");

	return Clss;
}


// ModioPopupCommandMenu ModioUICore.Default__ModioPopupCommandMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioPopupCommandMenu* UModioPopupCommandMenu::GetDefaultObj()
{
	static class UModioPopupCommandMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioPopupCommandMenu*>(UModioPopupCommandMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioPopupCommandMenu.GetCommandMenuWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUICommandMenu>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUICommandMenu> UModioPopupCommandMenu::GetCommandMenuWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPopupCommandMenu", "GetCommandMenuWidget");

	Params::UModioPopupCommandMenu_GetCommandMenuWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioPopupCommandMenu.ConstructCommandMenuWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UModioPopupCommandMenu::ConstructCommandMenuWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPopupCommandMenu", "ConstructCommandMenuWidget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioPresetFilterEntryWidget
// (None)

class UClass* UModioPresetFilterEntryWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioPresetFilterEntryWidget");

	return Clss;
}


// ModioPresetFilterEntryWidget ModioUICore.Default__ModioPresetFilterEntryWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioPresetFilterEntryWidget* UModioPresetFilterEntryWidget::GetDefaultObj()
{
	static class UModioPresetFilterEntryWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioPresetFilterEntryWidget*>(UModioPresetFilterEntryWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioPresetFilterEntryWidget.GetLabelWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioPresetFilterEntryWidget::GetLabelWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPresetFilterEntryWidget", "GetLabelWidget");

	Params::UModioPresetFilterEntryWidget_GetLabelWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioPresetFilterSelector
// (None)

class UClass* UModioPresetFilterSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioPresetFilterSelector");

	return Clss;
}


// ModioPresetFilterSelector ModioUICore.Default__ModioPresetFilterSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioPresetFilterSelector* UModioPresetFilterSelector::GetDefaultObj()
{
	static class UModioPresetFilterSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioPresetFilterSelector*>(UModioPresetFilterSelector::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioPresetFilterSelector.GetPresetListWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIObjectSelector>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIObjectSelector> UModioPresetFilterSelector::GetPresetListWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPresetFilterSelector", "GetPresetListWidget");

	Params::UModioPresetFilterSelector_GetPresetListWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioPresetFilterSelector.GetFilterPresets
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class IModioModFilterUIDetails>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class IModioModFilterUIDetails>> UModioPresetFilterSelector::GetFilterPresets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPresetFilterSelector", "GetFilterPresets");

	Params::UModioPresetFilterSelector_GetFilterPresets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.PropertyOverridesLibrary
// (None)

class UClass* UPropertyOverridesLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyOverridesLibrary");

	return Clss;
}


// PropertyOverridesLibrary ModioUICore.Default__PropertyOverridesLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyOverridesLibrary* UPropertyOverridesLibrary::GetDefaultObj()
{
	static class UPropertyOverridesLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyOverridesLibrary*>(UPropertyOverridesLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.PropertyOverridesLibrary.ResolveTextTransformOverrideAsExec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextTransformOverride      Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextTransformPolicy    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextTransformPolicy UPropertyOverridesLibrary::ResolveTextTransformOverrideAsExec(struct FTextTransformOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveTextTransformOverrideAsExec");

	Params::UPropertyOverridesLibrary_ResolveTextTransformOverrideAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveTextTransformOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTextTransformOverride      Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextTransformPolicy    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextTransformPolicy UPropertyOverridesLibrary::ResolveTextTransformOverride(struct FTextTransformOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveTextTransformOverride");

	Params::UPropertyOverridesLibrary_ResolveTextTransformOverride_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveTextOverrideAsExec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextOverride               Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UPropertyOverridesLibrary::ResolveTextOverrideAsExec(struct FTextOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveTextOverrideAsExec");

	Params::UPropertyOverridesLibrary_ResolveTextOverrideAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveTextOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTextOverride               Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UPropertyOverridesLibrary::ResolveTextOverride(struct FTextOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveTextOverride");

	Params::UPropertyOverridesLibrary_ResolveTextOverride_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveIntOverrideAsExec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIntegerOverride            Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPropertyOverridesLibrary::ResolveIntOverrideAsExec(struct FIntegerOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveIntOverrideAsExec");

	Params::UPropertyOverridesLibrary_ResolveIntOverrideAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveIntOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIntegerOverride            Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPropertyOverridesLibrary::ResolveIntOverride(struct FIntegerOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveIntOverride");

	Params::UPropertyOverridesLibrary_ResolveIntOverride_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveInputActionOverrideAsExec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputActionOverride        Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UPropertyOverridesLibrary::ResolveInputActionOverrideAsExec(struct FInputActionOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveInputActionOverrideAsExec");

	Params::UPropertyOverridesLibrary_ResolveInputActionOverrideAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveInputActionOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionOverride        Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UPropertyOverridesLibrary::ResolveInputActionOverride(struct FInputActionOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveInputActionOverride");

	Params::UPropertyOverridesLibrary_ResolveInputActionOverride_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveHAlignOverrideAsExec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHAlignOverride             Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHorizontalAlignment    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHorizontalAlignment UPropertyOverridesLibrary::ResolveHAlignOverrideAsExec(struct FHAlignOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveHAlignOverrideAsExec");

	Params::UPropertyOverridesLibrary_ResolveHAlignOverrideAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveHAlignOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHAlignOverride             Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHorizontalAlignment    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHorizontalAlignment UPropertyOverridesLibrary::ResolveHAlignOverride(struct FHAlignOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveHAlignOverride");

	Params::UPropertyOverridesLibrary_ResolveHAlignOverride_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveFontInfoOverrideAsExec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateFontInfoOverride      Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateFontInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSlateFontInfo UPropertyOverridesLibrary::ResolveFontInfoOverrideAsExec(struct FSlateFontInfoOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveFontInfoOverrideAsExec");

	Params::UPropertyOverridesLibrary_ResolveFontInfoOverrideAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveFontInfoOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateFontInfoOverride      Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateFontInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSlateFontInfo UPropertyOverridesLibrary::ResolveFontInfoOverride(struct FSlateFontInfoOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveFontInfoOverride");

	Params::UPropertyOverridesLibrary_ResolveFontInfoOverride_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveFloatOverrideAsExec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFloatOverride              Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPropertyOverridesLibrary::ResolveFloatOverrideAsExec(struct FFloatOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveFloatOverrideAsExec");

	Params::UPropertyOverridesLibrary_ResolveFloatOverrideAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveFloatOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFloatOverride              Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPropertyOverridesLibrary::ResolveFloatOverride(struct FFloatOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveFloatOverride");

	Params::UPropertyOverridesLibrary_ResolveFloatOverride_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveClassPathOverrideAsExec_Casted
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FClassPathOverride          Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         BaseClass                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UPropertyOverridesLibrary::ResolveClassPathOverrideAsExec_Casted(struct FClassPathOverride& Target, TSubclassOf<class UObject> BaseClass, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveClassPathOverrideAsExec_Casted");

	Params::UPropertyOverridesLibrary_ResolveClassPathOverrideAsExec_Casted_Params Parms{};

	Parms.Target = Target;
	Parms.BaseClass = BaseClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveClassPathOverrideAsExec
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FClassPathOverride          Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoftClassPath              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSoftClassPath UPropertyOverridesLibrary::ResolveClassPathOverrideAsExec(struct FClassPathOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveClassPathOverrideAsExec");

	Params::UPropertyOverridesLibrary_ResolveClassPathOverrideAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveClassPathOverride_Casted
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FClassPathOverride          Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         BaseClass                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UPropertyOverridesLibrary::ResolveClassPathOverride_Casted(struct FClassPathOverride& Target, TSubclassOf<class UObject> BaseClass, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveClassPathOverride_Casted");

	Params::UPropertyOverridesLibrary_ResolveClassPathOverride_Casted_Params Parms{};

	Parms.Target = Target;
	Parms.BaseClass = BaseClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ResolveClassPathOverride
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FClassPathOverride          Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOverrideSet                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoftClassPath              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSoftClassPath UPropertyOverridesLibrary::ResolveClassPathOverride(struct FClassPathOverride& Target, bool* bOverrideSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ResolveClassPathOverride");

	Params::UPropertyOverridesLibrary_ResolveClassPathOverride_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOverrideSet != nullptr)
		*bOverrideSet = Parms.bOverrideSet;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ApplyTextTransformOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextTransformOverride      Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ETextTransformPolicy    DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextTransformPolicy    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextTransformPolicy UPropertyOverridesLibrary::ApplyTextTransformOverride(struct FTextTransformOverride& Target, enum class ETextTransformPolicy DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ApplyTextTransformOverride");

	Params::UPropertyOverridesLibrary_ApplyTextTransformOverride_Params Parms{};

	Parms.Target = Target;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ApplyTextOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextOverride               Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        DefaultValue                                                     (Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UPropertyOverridesLibrary::ApplyTextOverride(struct FTextOverride& Target, class FText DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ApplyTextOverride");

	Params::UPropertyOverridesLibrary_ApplyTextOverride_Params Parms{};

	Parms.Target = Target;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ApplyIntOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIntegerOverride            Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPropertyOverridesLibrary::ApplyIntOverride(struct FIntegerOverride& Target, int32 DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ApplyIntOverride");

	Params::UPropertyOverridesLibrary_ApplyIntOverride_Params Parms{};

	Parms.Target = Target;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ApplyInputActionOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputActionOverride        Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FDataTableRowHandle         DefaultValue                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UPropertyOverridesLibrary::ApplyInputActionOverride(struct FInputActionOverride& Target, const struct FDataTableRowHandle& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ApplyInputActionOverride");

	Params::UPropertyOverridesLibrary_ApplyInputActionOverride_Params Parms{};

	Parms.Target = Target;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ApplyHAlignOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHAlignOverride             Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EHorizontalAlignment    DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EHorizontalAlignment    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHorizontalAlignment UPropertyOverridesLibrary::ApplyHAlignOverride(struct FHAlignOverride& Target, enum class EHorizontalAlignment DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ApplyHAlignOverride");

	Params::UPropertyOverridesLibrary_ApplyHAlignOverride_Params Parms{};

	Parms.Target = Target;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ApplyFontInfoOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateFontInfoOverride      Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSlateFontInfo              DefaultValue                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateFontInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSlateFontInfo UPropertyOverridesLibrary::ApplyFontInfoOverride(struct FSlateFontInfoOverride& Target, const struct FSlateFontInfo& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ApplyFontInfoOverride");

	Params::UPropertyOverridesLibrary_ApplyFontInfoOverride_Params Parms{};

	Parms.Target = Target;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ApplyFloatOverride
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFloatOverride              Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPropertyOverridesLibrary::ApplyFloatOverride(struct FFloatOverride& Target, float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ApplyFloatOverride");

	Params::UPropertyOverridesLibrary_ApplyFloatOverride_Params Parms{};

	Parms.Target = Target;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ApplyClassPathOverride_Casted
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FClassPathOverride          Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         BaseClass                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      DefaultValue                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UPropertyOverridesLibrary::ApplyClassPathOverride_Casted(struct FClassPathOverride& Target, TSubclassOf<class UObject> BaseClass, class UClass* DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ApplyClassPathOverride_Casted");

	Params::UPropertyOverridesLibrary_ApplyClassPathOverride_Casted_Params Parms{};

	Parms.Target = Target;
	Parms.BaseClass = BaseClass;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.PropertyOverridesLibrary.ApplyClassPathOverride
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FClassPathOverride          Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSoftClassPath              DefaultValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSoftClassPath              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSoftClassPath UPropertyOverridesLibrary::ApplyClassPathOverride(struct FClassPathOverride& Target, const struct FSoftClassPath& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyOverridesLibrary", "ApplyClassPathOverride");

	Params::UPropertyOverridesLibrary_ApplyClassPathOverride_Params Parms{};

	Parms.Target = Target;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioReportInfoUI
// (None)

class UClass* UModioReportInfoUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioReportInfoUI");

	return Clss;
}


// ModioReportInfoUI ModioUICore.Default__ModioReportInfoUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioReportInfoUI* UModioReportInfoUI::GetDefaultObj()
{
	static class UModioReportInfoUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioReportInfoUI*>(UModioReportInfoUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioRetryLibrary
// (None)

class UClass* UModioRetryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRetryLibrary");

	return Clss;
}


// ModioRetryLibrary ModioUICore.Default__ModioRetryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRetryLibrary* UModioRetryLibrary::GetDefaultObj()
{
	static class UModioRetryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRetryLibrary*>(UModioRetryLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioRetryLibrary.Retry
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioRetryCounter          Target                                                           (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioRetryLibrary::Retry(struct FModioRetryCounter& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRetryLibrary", "Retry");

	Params::UModioRetryLibrary_Retry_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioRetryLibrary.ResetRetryCountPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioRetryCounter          Target                                                           (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioRetryCounter          ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FModioRetryCounter UModioRetryLibrary::ResetRetryCountPure(struct FModioRetryCounter& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRetryLibrary", "ResetRetryCountPure");

	Params::UModioRetryLibrary_ResetRetryCountPure_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioRetryLibrary.ResetRetryCount
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioRetryCounter          Target                                                           (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UModioRetryLibrary::ResetRetryCount(struct FModioRetryCounter& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRetryLibrary", "ResetRetryCount");

	Params::UModioRetryLibrary_ResetRetryCount_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioRetryLibrary.CanRetryAsExec
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioRetryCounter          Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioRetryLibrary::CanRetryAsExec(struct FModioRetryCounter& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRetryLibrary", "CanRetryAsExec");

	Params::UModioRetryLibrary_CanRetryAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioRetryLibrary.CanRetry
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioRetryCounter          Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioRetryLibrary::CanRetry(struct FModioRetryCounter& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRetryLibrary", "CanRetry");

	Params::UModioRetryLibrary_CanRetry_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioSearchBar
// (None)

class UClass* UModioSearchBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSearchBar");

	return Clss;
}


// ModioSearchBar ModioUICore.Default__ModioSearchBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSearchBar* UModioSearchBar::GetDefaultObj()
{
	static class UModioSearchBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSearchBar*>(UModioSearchBar::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioSearchBar.GetSearchBoxWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIStringInputWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIStringInputWidget> UModioSearchBar::GetSearchBoxWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchBar", "GetSearchBoxWidget");

	Params::UModioSearchBar_GetSearchBoxWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioSearchBar.GetButtonWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIClickableWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIClickableWidget> UModioSearchBar::GetButtonWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchBar", "GetButtonWidget");

	Params::UModioSearchBar_GetButtonWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioStackedBoolLibrary
// (None)

class UClass* UModioStackedBoolLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioStackedBoolLibrary");

	return Clss;
}


// ModioStackedBoolLibrary ModioUICore.Default__ModioStackedBoolLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioStackedBoolLibrary* UModioStackedBoolLibrary::GetDefaultObj()
{
	static class UModioStackedBoolLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioStackedBoolLibrary*>(UModioStackedBoolLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioStackedBoolLibrary.PushBoolValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioStackedBool           Target                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bNewValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioStackedBoolLibrary::PushBoolValue(struct FModioStackedBool& Target, bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioStackedBoolLibrary", "PushBoolValue");

	Params::UModioStackedBoolLibrary_PushBoolValue_Params Parms{};

	Parms.Target = Target;
	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioStackedBoolLibrary.PopBoolValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioStackedBool           Target                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bDidPopSuccessfully                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioStackedBoolLibrary::PopBoolValue(struct FModioStackedBool& Target, bool* bDidPopSuccessfully)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioStackedBoolLibrary", "PopBoolValue");

	Params::UModioStackedBoolLibrary_PopBoolValue_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDidPopSuccessfully != nullptr)
		*bDidPopSuccessfully = Parms.bDidPopSuccessfully;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioStackedBoolLibrary.PeekBoolValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModioStackedBool           Target                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bDidPeekSuccessfully                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioStackedBoolLibrary::PeekBoolValue(struct FModioStackedBool& Target, bool* bDidPeekSuccessfully)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioStackedBoolLibrary", "PeekBoolValue");

	Params::UModioStackedBoolLibrary_PeekBoolValue_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDidPeekSuccessfully != nullptr)
		*bDidPeekSuccessfully = Parms.bDidPeekSuccessfully;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioStorageTracker
// (None)

class UClass* UModioStorageTracker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioStorageTracker");

	return Clss;
}


// ModioStorageTracker ModioUICore.Default__ModioStorageTracker
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioStorageTracker* UModioStorageTracker::GetDefaultObj()
{
	static class UModioStorageTracker* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioStorageTracker*>(UModioStorageTracker::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioStorageTracker.RefreshData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioStorageTracker::RefreshData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioStorageTracker", "RefreshData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioStorageTracker.GetStorageUsedTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioStorageTracker::GetStorageUsedTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioStorageTracker", "GetStorageUsedTextWidget");

	Params::UModioStorageTracker_GetStorageUsedTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioTagCounterIcon
// (None)

class UClass* UModioTagCounterIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagCounterIcon");

	return Clss;
}


// ModioTagCounterIcon ModioUICore.Default__ModioTagCounterIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTagCounterIcon* UModioTagCounterIcon::GetDefaultObj()
{
	static class UModioTagCounterIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagCounterIcon*>(UModioTagCounterIcon::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioTagCounterIcon.SynchronizeCounter
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UModioTagCounterIcon::SynchronizeCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagCounterIcon", "SynchronizeCounter");

	Params::UModioTagCounterIcon_SynchronizeCounter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioTagCounterIcon.GetCounterLabelWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioTagCounterIcon::GetCounterLabelWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagCounterIcon", "GetCounterLabelWidget");

	Params::UModioTagCounterIcon_GetCounterLabelWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModTagUI
// (None)

class UClass* UModioModTagUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagUI");

	return Clss;
}


// ModioModTagUI ModioUICore.Default__ModioModTagUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTagUI* UModioModTagUI::GetDefaultObj()
{
	static class UModioModTagUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTagUI*>(UModioModTagUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModTagInfoUI
// (None)

class UClass* UModioModTagInfoUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagInfoUI");

	return Clss;
}


// ModioModTagInfoUI ModioUICore.Default__ModioModTagInfoUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTagInfoUI* UModioModTagInfoUI::GetDefaultObj()
{
	static class UModioModTagInfoUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTagInfoUI*>(UModioModTagInfoUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModTagOptionsUI
// (None)

class UClass* UModioModTagOptionsUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTagOptionsUI");

	return Clss;
}


// ModioModTagOptionsUI ModioUICore.Default__ModioModTagOptionsUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTagOptionsUI* UModioModTagOptionsUI::GetDefaultObj()
{
	static class UModioModTagOptionsUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTagOptionsUI*>(UModioModTagOptionsUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioTokenPackBrowser
// (None)

class UClass* UModioTokenPackBrowser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTokenPackBrowser");

	return Clss;
}


// ModioTokenPackBrowser ModioUICore.Default__ModioTokenPackBrowser
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTokenPackBrowser* UModioTokenPackBrowser::GetDefaultObj()
{
	static class UModioTokenPackBrowser* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTokenPackBrowser*>(UModioTokenPackBrowser::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioTokenPackBrowser.GetTokenTileViewWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUITokenPackListInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUITokenPackListInterface> UModioTokenPackBrowser::GetTokenTileViewWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTokenPackBrowser", "GetTokenTileViewWidget");

	Params::UModioTokenPackBrowser_GetTokenTileViewWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioTokenPackBrowser.GetTitleTextWidget
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IModioUIHasTextWidget>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IModioUIHasTextWidget> UModioTokenPackBrowser::GetTitleTextWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTokenPackBrowser", "GetTitleTextWidget");

	Params::UModioTokenPackBrowser_GetTitleTextWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioTokenPackUI
// (None)

class UClass* UModioTokenPackUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTokenPackUI");

	return Clss;
}


// ModioTokenPackUI ModioUICore.Default__ModioTokenPackUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTokenPackUI* UModioTokenPackUI::GetDefaultObj()
{
	static class UModioTokenPackUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTokenPackUI*>(UModioTokenPackUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioTokenPackUIDetails
// (None)

class UClass* IModioTokenPackUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTokenPackUIDetails");

	return Clss;
}


// ModioTokenPackUIDetails ModioUICore.Default__ModioTokenPackUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioTokenPackUIDetails* IModioTokenPackUIDetails::GetDefaultObj()
{
	static class IModioTokenPackUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioTokenPackUIDetails*>(IModioTokenPackUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioTokenPackUIDetails.GetTokenPackID
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioTokenPackID           ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioTokenPackID IModioTokenPackUIDetails::GetTokenPackID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTokenPackUIDetails", "GetTokenPackID");

	Params::IModioTokenPackUIDetails_GetTokenPackID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioTokenPackUIDetails.GetFullTokenPack
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioTokenPack             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioTokenPack IModioTokenPackUIDetails::GetFullTokenPack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTokenPackUIDetails", "GetFullTokenPack");

	Params::IModioTokenPackUIDetails_GetFullTokenPack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUICommonFunctionLibrary
// (None)

class UClass* UModioUICommonFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUICommonFunctionLibrary");

	return Clss;
}


// ModioUICommonFunctionLibrary ModioUICore.Default__ModioUICommonFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUICommonFunctionLibrary* UModioUICommonFunctionLibrary::GetDefaultObj()
{
	static class UModioUICommonFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUICommonFunctionLibrary*>(UModioUICommonFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUICommonFunctionLibrary.ValidateWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IInterface> TargetWidget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UModioUICommonFunctionLibrary::ValidateWidget(TScriptInterface<class IInterface> TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "ValidateWidget");

	Params::UModioUICommonFunctionLibrary_ValidateWidget_Params Parms{};

	Parms.TargetWidget = TargetWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.MapValueIntoRangeIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FInt32Range>         ValueRanges                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUICommonFunctionLibrary::MapValueIntoRangeIndex(TArray<struct FInt32Range>& ValueRanges, int32 Value, int32* OutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "MapValueIntoRangeIndex");

	Params::UModioUICommonFunctionLibrary_MapValueIntoRangeIndex_Params Parms{};

	Parms.ValueRanges = ValueRanges;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.IsDesignTimeAsExec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUICommonFunctionLibrary::IsDesignTimeAsExec(class UWidget* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "IsDesignTimeAsExec");

	Params::UModioUICommonFunctionLibrary_IsDesignTimeAsExec_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.IsDesignTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUICommonFunctionLibrary::IsDesignTime(class UWidget* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "IsDesignTime");

	Params::UModioUICommonFunctionLibrary_IsDesignTime_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.GetModioText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        StringKey                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioUICommonFunctionLibrary::GetModioText(class FName StringKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "GetModioText");

	Params::UModioUICommonFunctionLibrary_GetModioText_Params Parms{};

	Parms.StringKey = StringKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.GetLocalizedTagValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioModTagLocalizationDataInTagLocalizationData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioUICommonFunctionLibrary::GetLocalizedTagValue(struct FModioModTagLocalizationData& InTagLocalizationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "GetLocalizedTagValue");

	Params::UModioUICommonFunctionLibrary_GetLocalizedTagValue_Params Parms{};

	Parms.InTagLocalizationData = InTagLocalizationData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.GetLocalizedTagCategory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioModTagInfo            InTagInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioUICommonFunctionLibrary::GetLocalizedTagCategory(struct FModioModTagInfo& InTagInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "GetLocalizedTagCategory");

	Params::UModioUICommonFunctionLibrary_GetLocalizedTagCategory_Params Parms{};

	Parms.InTagInfo = InTagInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.FormatTimespan
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimespan                   Timespan                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        YearFormat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        MonthFormat                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        DaysFormat                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        TodayFormat                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioUICommonFunctionLibrary::FormatTimespan(struct FTimespan& Timespan, class FText& YearFormat, class FText& MonthFormat, class FText& DaysFormat, class FText& TodayFormat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "FormatTimespan");

	Params::UModioUICommonFunctionLibrary_FormatTimespan_Params Parms{};

	Parms.Timespan = Timespan;
	Parms.YearFormat = YearFormat;
	Parms.MonthFormat = MonthFormat;
	Parms.DaysFormat = DaysFormat;
	Parms.TodayFormat = TodayFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.FormatNumberWithSIUnit
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        FormatText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioUICommonFunctionLibrary::FormatNumberWithSIUnit(int64 Value, class FText& FormatText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "FormatNumberWithSIUnit");

	Params::UModioUICommonFunctionLibrary_FormatNumberWithSIUnit_Params Parms{};

	Parms.Value = Value;
	Parms.FormatText = FormatText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableUser
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioUser                  InRawUser                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UModioUserUI*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioUserUI* UModioUICommonFunctionLibrary::CreateBindableUser(struct FModioUser& InRawUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableUser");

	Params::UModioUICommonFunctionLibrary_CreateBindableUser_Params Parms{};

	Parms.InRawUser = InRawUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableReportTypeEnumArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UModioEnumEntryUI*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UModioEnumEntryUI*> UModioUICommonFunctionLibrary::CreateBindableReportTypeEnumArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableReportTypeEnumArray");

	Params::UModioUICommonFunctionLibrary_CreateBindableReportTypeEnumArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTagRawValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioModTag                InTag                                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UModioModTagUI*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioModTagUI* UModioUICommonFunctionLibrary::CreateBindableModTagRawValue(struct FModioModTag& InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableModTagRawValue");

	Params::UModioUICommonFunctionLibrary_CreateBindableModTagRawValue_Params Parms{};

	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTagOptions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioModTagOptions         InRawOptions                                                     (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UModioModTagOptionsUI*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioModTagOptionsUI* UModioUICommonFunctionLibrary::CreateBindableModTagOptions(struct FModioModTagOptions& InRawOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableModTagOptions");

	Params::UModioUICommonFunctionLibrary_CreateBindableModTagOptions_Params Parms{};

	Parms.InRawOptions = InRawOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTagInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioModTagInfo            InRawTagInfo                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UModioModTagInfoUI*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioModTagInfoUI* UModioUICommonFunctionLibrary::CreateBindableModTagInfo(struct FModioModTagInfo& InRawTagInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableModTagInfo");

	Params::UModioUICommonFunctionLibrary_CreateBindableModTagInfo_Params Parms{};

	Parms.InRawTagInfo = InRawTagInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTagArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FModioModTag>        InTags                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UModioModTagUI*>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UModioModTagUI*> UModioUICommonFunctionLibrary::CreateBindableModTagArray(TArray<struct FModioModTag>& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableModTagArray");

	Params::UModioUICommonFunctionLibrary_CreateBindableModTagArray_Params Parms{};

	Parms.InTags = InTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioModTagLocalizationDataInTagLocalizationData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UModioModTagUI*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioModTagUI* UModioUICommonFunctionLibrary::CreateBindableModTag(struct FModioModTagLocalizationData& InTagLocalizationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableModTag");

	Params::UModioUICommonFunctionLibrary_CreateBindableModTag_Params Parms{};

	Parms.InTagLocalizationData = InTagLocalizationData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModDependencyArrayFromList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioModDependencyList     InModDependencyList                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UModioModDependencyUI*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UModioModDependencyUI*> UModioUICommonFunctionLibrary::CreateBindableModDependencyArrayFromList(struct FModioModDependencyList& InModDependencyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableModDependencyArrayFromList");

	Params::UModioUICommonFunctionLibrary_CreateBindableModDependencyArrayFromList_Params Parms{};

	Parms.InModDependencyList = InModDependencyList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModDependencyArrayFromArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FModioModDependency> InModDependencyArray                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UModioModDependencyUI*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UModioModDependencyUI*> UModioUICommonFunctionLibrary::CreateBindableModDependencyArrayFromArray(TArray<struct FModioModDependency>& InModDependencyArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableModDependencyArrayFromArray");

	Params::UModioUICommonFunctionLibrary_CreateBindableModDependencyArrayFromArray_Params Parms{};

	Parms.InModDependencyArray = InModDependencyArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableModDependency
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioModDependency         InModDependency                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UModioModDependencyUI*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioModDependencyUI* UModioUICommonFunctionLibrary::CreateBindableModDependency(struct FModioModDependency& InModDependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableModDependency");

	Params::UModioUICommonFunctionLibrary_CreateBindableModDependency_Params Parms{};

	Parms.InModDependency = InModDependency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CreateBindableEnum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// uint8                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        InText                                                           (ConstParm, Parm, NativeAccessSpecifierPublic)
// class UModioEnumEntryUI*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioEnumEntryUI* UModioUICommonFunctionLibrary::CreateBindableEnum(uint8 InValue, class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CreateBindableEnum");

	Params::UModioUICommonFunctionLibrary_CreateBindableEnum_Params Parms{};

	Parms.InValue = InValue;
	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CheckLogoDownloadEventForDataSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 EventModID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          EventLogoSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     DataSource                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          RequestedSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUICommonFunctionLibrary::CheckLogoDownloadEventForDataSource(const struct FModioModID& EventModID, enum class EModioLogoSize EventLogoSize, class UObject* DataSource, enum class EModioLogoSize RequestedSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CheckLogoDownloadEventForDataSource");

	Params::UModioUICommonFunctionLibrary_CheckLogoDownloadEventForDataSource_Params Parms{};

	Parms.EventModID = EventModID;
	Parms.EventLogoSize = EventLogoSize;
	Parms.DataSource = DataSource;
	Parms.RequestedSize = RequestedSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.CheckLogoDownloadEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 EventModID                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          EventLogoSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                 RequestedModID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          RequestedSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUICommonFunctionLibrary::CheckLogoDownloadEvent(const struct FModioModID& EventModID, enum class EModioLogoSize EventLogoSize, const struct FModioModID& RequestedModID, enum class EModioLogoSize RequestedSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "CheckLogoDownloadEvent");

	Params::UModioUICommonFunctionLibrary_CheckLogoDownloadEvent_Params Parms{};

	Parms.EventModID = EventModID;
	Parms.EventLogoSize = EventLogoSize;
	Parms.RequestedModID = RequestedModID;
	Parms.RequestedSize = RequestedSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.AsObjectArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      TargetArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UModioUICommonFunctionLibrary::AsObjectArray(TArray<int32>& TargetArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "AsObjectArray");

	Params::UModioUICommonFunctionLibrary_AsObjectArray_Params Parms{};

	Parms.TargetArray = TargetArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUICommonFunctionLibrary.ApplyTextPropertyOverridesHelper
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateFontInfoOverride      FontPropertiesOverride                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHAlignOverride             TextJustificationOverride                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTextTransformOverride      TextTransformOverride                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUICommonFunctionLibrary::ApplyTextPropertyOverridesHelper(struct FSlateFontInfoOverride& FontPropertiesOverride, struct FHAlignOverride& TextJustificationOverride, struct FTextTransformOverride& TextTransformOverride, class UObject* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommonFunctionLibrary", "ApplyTextPropertyOverridesHelper");

	Params::UModioUICommonFunctionLibrary_ApplyTextPropertyOverridesHelper_Params Parms{};

	Parms.FontPropertiesOverride = FontPropertiesOverride;
	Parms.TextJustificationOverride = TextJustificationOverride;
	Parms.TextTransformOverride = TextTransformOverride;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIComponentStatics
// (None)

class UClass* UModioUIComponentStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIComponentStatics");

	return Clss;
}


// ModioUIComponentStatics ModioUICore.Default__ModioUIComponentStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIComponentStatics* UModioUIComponentStatics::GetDefaultObj()
{
	static class UModioUIComponentStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIComponentStatics*>(UModioUIComponentStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIComponentStatics.GetMetadataForComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EModioUIComponentID     ComponentType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bComponentTypeFound                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioUIComponentMetadata   ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FModioUIComponentMetadata UModioUIComponentStatics::GetMetadataForComponent(enum class EModioUIComponentID ComponentType, bool* bComponentTypeFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIComponentStatics", "GetMetadataForComponent");

	Params::UModioUIComponentStatics_GetMetadataForComponent_Params Parms{};

	Parms.ComponentType = ComponentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bComponentTypeFound != nullptr)
		*bComponentTypeFound = Parms.bComponentTypeFound;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUIComponentStatics.GetAllComponentMetadata
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TMap<enum class EModioUIComponentID, struct FModioUIComponentMetadata>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<enum class EModioUIComponentID, struct FModioUIComponentMetadata> UModioUIComponentStatics::GetAllComponentMetadata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIComponentStatics", "GetAllComponentMetadata");

	Params::UModioUIComponentStatics_GetAllComponentMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUIDisplayFilteredModsCommand
// (None)

class UClass* UModioUIDisplayFilteredModsCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDisplayFilteredModsCommand");

	return Clss;
}


// ModioUIDisplayFilteredModsCommand ModioUICore.Default__ModioUIDisplayFilteredModsCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIDisplayFilteredModsCommand* UModioUIDisplayFilteredModsCommand::GetDefaultObj()
{
	static class UModioUIDisplayFilteredModsCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIDisplayFilteredModsCommand*>(UModioUIDisplayFilteredModsCommand::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIDisplayFilteredModsCommand.SetFilterParams
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioFilterParams          FilterParams                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UModioUIDisplayFilteredModsCommand::SetFilterParams(struct FModioFilterParams& FilterParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDisplayFilteredModsCommand", "SetFilterParams");

	Params::UModioUIDisplayFilteredModsCommand_SetFilterParams_Params Parms{};

	Parms.FilterParams = FilterParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUIDisplayFilteredModsCommand.SetDisplayStringKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InDisplayStringKey                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIDisplayFilteredModsCommand::SetDisplayStringKey(class FName& InDisplayStringKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDisplayFilteredModsCommand", "SetDisplayStringKey");

	Params::UModioUIDisplayFilteredModsCommand_SetDisplayStringKey_Params Parms{};

	Parms.InDisplayStringKey = InDisplayStringKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIManageModSubscriptionCommand
// (None)

class UClass* UModioUIManageModSubscriptionCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIManageModSubscriptionCommand");

	return Clss;
}


// ModioUIManageModSubscriptionCommand ModioUICore.Default__ModioUIManageModSubscriptionCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIManageModSubscriptionCommand* UModioUIManageModSubscriptionCommand::GetDefaultObj()
{
	static class UModioUIManageModSubscriptionCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIManageModSubscriptionCommand*>(UModioUIManageModSubscriptionCommand::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioUIPrioritizeModCommand
// (None)

class UClass* UModioUIPrioritizeModCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIPrioritizeModCommand");

	return Clss;
}


// ModioUIPrioritizeModCommand ModioUICore.Default__ModioUIPrioritizeModCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIPrioritizeModCommand* UModioUIPrioritizeModCommand::GetDefaultObj()
{
	static class UModioUIPrioritizeModCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIPrioritizeModCommand*>(UModioUIPrioritizeModCommand::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioUIPurchaseModCommand
// (None)

class UClass* UModioUIPurchaseModCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIPurchaseModCommand");

	return Clss;
}


// ModioUIPurchaseModCommand ModioUICore.Default__ModioUIPurchaseModCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIPurchaseModCommand* UModioUIPurchaseModCommand::GetDefaultObj()
{
	static class UModioUIPurchaseModCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIPurchaseModCommand*>(UModioUIPurchaseModCommand::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioUIReportModCommand
// (None)

class UClass* UModioUIReportModCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIReportModCommand");

	return Clss;
}


// ModioUIReportModCommand ModioUICore.Default__ModioUIReportModCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIReportModCommand* UModioUIReportModCommand::GetDefaultObj()
{
	static class UModioUIReportModCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIReportModCommand*>(UModioUIReportModCommand::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioUISettings
// (None)

class UClass* UModioUISettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUISettings");

	return Clss;
}


// ModioUISettings ModioUICore.Default__ModioUISettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUISettings* UModioUISettings::GetDefaultObj()
{
	static class UModioUISettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUISettings*>(UModioUISettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioUIDefaultModEnabledStateProvider
// (None)

class UClass* UModioUIDefaultModEnabledStateProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDefaultModEnabledStateProvider");

	return Clss;
}


// ModioUIDefaultModEnabledStateProvider ModioUICore.Default__ModioUIDefaultModEnabledStateProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIDefaultModEnabledStateProvider* UModioUIDefaultModEnabledStateProvider::GetDefaultObj()
{
	static class UModioUIDefaultModEnabledStateProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIDefaultModEnabledStateProvider*>(UModioUIDefaultModEnabledStateProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioUISubsystem
// (None)

class UClass* UModioUISubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUISubsystem");

	return Clss;
}


// ModioUISubsystem ModioUICore.Default__ModioUISubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUISubsystem* UModioUISubsystem::GetDefaultObj()
{
	static class UModioUISubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUISubsystem*>(UModioUISubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUISubsystem.UnsubscribeHandler
// (Final, Native, Protected)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::UnsubscribeHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "UnsubscribeHandler");

	Params::UModioUISubsystem_UnsubscribeHandler_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.UninstallHandler
// (Final, Native, Protected)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::UninstallHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "UninstallHandler");

	Params::UModioUISubsystem_UninstallHandler_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.SubscriptionHandler
// (Final, Native, Protected)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, NativeAccessSpecifierPublic)
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::SubscriptionHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "SubscriptionHandler");

	Params::UModioUISubsystem_SubscriptionHandler_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.SetModRatingStateDataProvider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IModRatingStateProvider>InModRatingStateProvider                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::SetModRatingStateDataProvider(TScriptInterface<class IModRatingStateProvider> InModRatingStateProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "SetModRatingStateDataProvider");

	Params::UModioUISubsystem_SetModRatingStateDataProvider_Params Parms{};

	Parms.InModRatingStateProvider = InModRatingStateProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.SetModEnabledStateDataProvider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IModioUIModEnabledStateProvider>InModEnabledStateDataProvider                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::SetModEnabledStateDataProvider(TScriptInterface<class IModioUIModEnabledStateProvider> InModEnabledStateDataProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "SetModEnabledStateDataProvider");

	Params::UModioUISubsystem_SetModEnabledStateDataProvider_Params Parms{};

	Parms.InModEnabledStateDataProvider = InModEnabledStateDataProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestWalletBalanceRefreshWithHandler
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestWalletBalanceRefreshWithHandler(FDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestWalletBalanceRefreshWithHandler");

	Params::UModioUISubsystem_RequestWalletBalanceRefreshWithHandler_Params Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestWalletBalanceRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioUISubsystem::RequestWalletBalanceRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestWalletBalanceRefresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestUserAvatar
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioUISubsystem::RequestUserAvatar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestUserAvatar");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestSubscriptionForModIDWithHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IncludeDependencies                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestSubscriptionForModIDWithHandler(const struct FModioModID& ID, bool IncludeDependencies, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestSubscriptionForModIDWithHandler");

	Params::UModioUISubsystem_RequestSubscriptionForModIDWithHandler_Params Parms{};

	Parms.ID = ID;
	Parms.IncludeDependencies = IncludeDependencies;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestSubscriptionForModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IncludeDependencies                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestSubscriptionForModID(const struct FModioModID& ID, bool IncludeDependencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestSubscriptionForModID");

	Params::UModioUISubsystem_RequestSubscriptionForModID_Params Parms{};

	Parms.ID = ID;
	Parms.IncludeDependencies = IncludeDependencies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestShowTokenPurchaseUIWithHandler
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioOpenStoreResult   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioOpenStoreResult UModioUISubsystem::RequestShowTokenPurchaseUIWithHandler(FDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestShowTokenPurchaseUIWithHandler");

	Params::UModioUISubsystem_RequestShowTokenPurchaseUIWithHandler_Params Parms{};

	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.RequestShowTokenPurchaseUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EModioOpenStoreResult   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EModioOpenStoreResult UModioUISubsystem::RequestShowTokenPurchaseUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestShowTokenPurchaseUI");

	Params::UModioUISubsystem_RequestShowTokenPurchaseUI_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.RequestShowDialog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EModioUIDialogType      DialogType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     DataSource                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestShowDialog(enum class EModioUIDialogType DialogType, class UObject* DataSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestShowDialog");

	Params::UModioUISubsystem_RequestShowDialog_Params Parms{};

	Parms.DialogType = DialogType;
	Parms.DataSource = DataSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestRemoveSubscriptionForModIDWithHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 DedicatedCallback                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestRemoveSubscriptionForModIDWithHandler(const struct FModioModID& ID, FDelegateProperty_ DedicatedCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestRemoveSubscriptionForModIDWithHandler");

	Params::UModioUISubsystem_RequestRemoveSubscriptionForModIDWithHandler_Params Parms{};

	Parms.ID = ID;
	Parms.DedicatedCallback = DedicatedCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestRemoveSubscriptionForModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestRemoveSubscriptionForModID(const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestRemoveSubscriptionForModID");

	Params::UModioUISubsystem_RequestRemoveSubscriptionForModID_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestRefreshEntitlements
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioUISubsystem::RequestRefreshEntitlements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestRefreshEntitlements");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestPurchaseTokenPack
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioTokenPackID           TokenPackID                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUISubsystem::RequestPurchaseTokenPack(const struct FModioTokenPackID& TokenPackID, FDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestPurchaseTokenPack");

	Params::UModioUISubsystem_RequestPurchaseTokenPack_Params Parms{};

	Parms.TokenPackID = TokenPackID;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.RequestPurchaseForModIDWithHandler
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioUnsigned64            ExpectedPrice                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestPurchaseForModIDWithHandler(const struct FModioModID& ID, const struct FModioUnsigned64& ExpectedPrice, FDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestPurchaseForModIDWithHandler");

	Params::UModioUISubsystem_RequestPurchaseForModIDWithHandler_Params Parms{};

	Parms.ID = ID;
	Parms.ExpectedPrice = ExpectedPrice;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestModInfoForModIDs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModioModID>         IDs                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestModInfoForModIDs(const TArray<struct FModioModID>& IDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestModInfoForModIDs");

	Params::UModioUISubsystem_RequestModInfoForModIDs_Params Parms{};

	Parms.IDs = IDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestModEnabledStateChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewEnabledState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUISubsystem::RequestModEnabledStateChange(const struct FModioModID& ID, bool bNewEnabledState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestModEnabledStateChange");

	Params::UModioUISubsystem_RequestModEnabledStateChange_Params Parms{};

	Parms.ID = ID;
	Parms.bNewEnabledState = bNewEnabledState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.RequestLogoDownloadForModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          LogoSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestLogoDownloadForModID(const struct FModioModID& ID, enum class EModioLogoSize LogoSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestLogoDownloadForModID");

	Params::UModioUISubsystem_RequestLogoDownloadForModID_Params Parms{};

	Parms.ID = ID;
	Parms.LogoSize = LogoSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestListAllTokenPacks
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioUISubsystem::RequestListAllTokenPacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestListAllTokenPacks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestListAllMods
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioFilterParams          Params                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      RequestIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestListAllMods(const struct FModioFilterParams& Params, const class FString& RequestIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestListAllMods");

	Params::UModioUISubsystem_RequestListAllMods_Params Parms{};

	Parms.Params = Params;
	Parms.RequestIdentifier = RequestIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestGalleryImageDownloadForModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioGallerySize       ImageSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestGalleryImageDownloadForModID(const struct FModioModID& ID, int32 Index, enum class EModioGallerySize ImageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestGalleryImageDownloadForModID");

	Params::UModioUISubsystem_RequestGalleryImageDownloadForModID_Params Parms{};

	Parms.ID = ID;
	Parms.Index = Index;
	Parms.ImageSize = ImageSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestEmailAuthenticationWithHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioEmailAuthCode         Code                                                             (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestEmailAuthenticationWithHandler(const struct FModioEmailAuthCode& Code, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestEmailAuthenticationWithHandler");

	Params::UModioUISubsystem_RequestEmailAuthenticationWithHandler_Params Parms{};

	Parms.Code = Code;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.QueryIsModEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUISubsystem::QueryIsModEnabled(const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "QueryIsModEnabled");

	Params::UModioUISubsystem_QueryIsModEnabled_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.QueryConnectivityState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUISubsystem::QueryConnectivityState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "QueryConnectivityState");

	Params::UModioUISubsystem_QueryConnectivityState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.OnModEnabledChanged
// (Final, Native, Protected)
// Parameters:
// int64                              RawModID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewEnabledState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::OnModEnabledChanged(int64 RawModID, bool bNewEnabledState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "OnModEnabledChanged");

	Params::UModioUISubsystem_OnModEnabledChanged_Params Parms{};

	Parms.RawModID = RawModID;
	Parms.bNewEnabledState = bNewEnabledState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.NotifyConnectivityChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewConnectivityState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::NotifyConnectivityChange(bool bNewConnectivityState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "NotifyConnectivityChange");

	Params::UModioUISubsystem_NotifyConnectivityChange_Params Parms{};

	Parms.bNewConnectivityState = bNewConnectivityState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.IsUGCFeatureEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EModioUIFeatureFlags    Feature                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUISubsystem::IsUGCFeatureEnabled(enum class EModioUIFeatureFlags Feature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "IsUGCFeatureEnabled");

	Params::UModioUISubsystem_IsUGCFeatureEnabled_Params Parms{};

	Parms.Feature = Feature;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.GetCurrentDPIScaleValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UModioUISubsystem::GetCurrentDPIScaleValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "GetCurrentDPIScaleValue");

	Params::UModioUISubsystem_GetCurrentDPIScaleValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.EnableModManagement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioErrorCode             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioErrorCode UModioUISubsystem::EnableModManagement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "EnableModManagement");

	Params::UModioUISubsystem_EnableModManagement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.DisableModManagement
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioUISubsystem::DisableModManagement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "DisableModManagement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUIToggleModEnabledCommand
// (None)

class UClass* UModioUIToggleModEnabledCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIToggleModEnabledCommand");

	return Clss;
}


// ModioUIToggleModEnabledCommand ModioUICore.Default__ModioUIToggleModEnabledCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIToggleModEnabledCommand* UModioUIToggleModEnabledCommand::GetDefaultObj()
{
	static class UModioUIToggleModEnabledCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIToggleModEnabledCommand*>(UModioUIToggleModEnabledCommand::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioUIViewModCommand
// (None)

class UClass* UModioUIViewModCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIViewModCommand");

	return Clss;
}


// ModioUIViewModCommand ModioUICore.Default__ModioUIViewModCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIViewModCommand* UModioUIViewModCommand::GetDefaultObj()
{
	static class UModioUIViewModCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIViewModCommand*>(UModioUIViewModCommand::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioUserUI
// (None)

class UClass* UModioUserUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUserUI");

	return Clss;
}


// ModioUserUI ModioUICore.Default__ModioUserUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUserUI* UModioUserUI::GetDefaultObj()
{
	static class UModioUserUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUserUI*>(UModioUserUI::StaticClass()->DefaultObject);

	return Default;
}

}


