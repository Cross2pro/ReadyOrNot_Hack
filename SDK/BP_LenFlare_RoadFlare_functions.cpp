#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C
// (Actor)

class UClass* ABP_LenFlare_RoadFlare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LenFlare_RoadFlare_C");

	return Clss;
}


// BP_LenFlare_RoadFlare_C BP_LenFlare_RoadFlare.Default__BP_LenFlare_RoadFlare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LenFlare_RoadFlare_C* ABP_LenFlare_RoadFlare_C::GetDefaultObj()
{
	static class ABP_LenFlare_RoadFlare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LenFlare_RoadFlare_C*>(ABP_LenFlare_RoadFlare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.InitFlare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_9            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_10           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_11           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_12           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_13           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_14           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_15           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_16           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_17           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_18           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_19           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_20           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_21           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_22           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_23           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_24           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_25           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_26           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_27           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_28           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_29           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_30           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_31           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_32           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_33           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_34           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_35           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_36           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_37           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_38           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_39           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_40           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_41           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_42           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_43           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_44           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_45           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_46           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_47           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_48           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_49           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_50           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_51           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_52           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_53           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_54           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_55           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_56           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_57           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_58           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_59           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_60           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_61           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_62           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_63           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LenFlare_RoadFlare_C::InitFlare(double CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_8, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_9, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_10, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_11, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_12, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_13, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_14, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_15, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_16, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_17, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_18, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_19, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_20, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_21, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_22, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_23, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_24, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_25, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_26, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_27, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_28, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_29, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_30, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_31, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_32, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_33, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_34, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_35, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_36, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_37, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_38, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_39, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_40, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_41, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_42, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_43, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_44, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_45, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_46, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_47, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_48, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_49, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_50, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_51, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_52, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_53, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_54, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_55, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_56, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_57, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_58, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_59, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_60, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_61, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_62, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_63)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "InitFlare");

	Params::ABP_LenFlare_RoadFlare_C_InitFlare_Params Parms{};

	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue_1 = CallFunc_Conv_BoolToDouble_ReturnValue_1;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_7 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_8 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_9 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_9;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_10 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_10;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_11 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_11;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_12 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_12;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_13 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_13;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_14 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_14;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_15 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_15;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_16 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_16;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_17 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_17;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_18 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_18;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_19 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_19;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_20 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_20;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_21 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_21;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_22 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_22;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_23 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_23;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_24 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_24;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_25 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_25;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_26 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_26;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_27 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_27;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_28 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_28;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_29 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_29;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_30 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_30;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_31 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_31;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_32 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_32;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_33 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_33;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_34 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_34;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_35 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_35;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_36 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_36;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_37 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_37;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_38 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_38;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_39 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_39;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_40 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_40;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_41 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_41;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_42 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_42;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_43 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_43;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_44 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_44;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_45 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_45;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_46 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_46;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_47 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_47;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_48 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_48;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_49 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_49;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_50 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_50;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_51 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_51;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_52 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_52;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_53 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_53;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_54 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_54;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_55 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_55;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_56 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_56;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_57 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_57;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_58 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_58;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_59 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_59;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_60 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_60;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_61 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_61;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_62 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_62;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_63 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_63;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMaterialSpriteElement      K2Node_MakeStruct_MaterialSpriteElement                          (NoDestructor)
// TArray<struct FMaterialSpriteElement>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// float                              K2Node_MakeStruct_BaseSizeY_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_BaseSizeX_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LenFlare_RoadFlare_C::UserConstructionScript(const struct FMaterialSpriteElement& K2Node_MakeStruct_MaterialSpriteElement, TArray<struct FMaterialSpriteElement>& K2Node_MakeArray_Array, float K2Node_MakeStruct_BaseSizeY_ImplicitCast, float K2Node_MakeStruct_BaseSizeX_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "UserConstructionScript");

	Params::ABP_LenFlare_RoadFlare_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeStruct_MaterialSpriteElement = K2Node_MakeStruct_MaterialSpriteElement;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_BaseSizeY_ImplicitCast = K2Node_MakeStruct_BaseSizeY_ImplicitCast;
	Parms.K2Node_MakeStruct_BaseSizeX_ImplicitCast = K2Node_MakeStruct_BaseSizeX_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LenFlare_RoadFlare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LenFlare_RoadFlare_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "ReceiveTick");

	Params::ABP_LenFlare_RoadFlare_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ExecuteUbergraph_BP_LenFlare_RoadFlare
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABaseItem*>           CallFunc_GetInventoryItems_ReturnValue                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LenFlare_RoadFlare_C::ExecuteUbergraph_BP_LenFlare_RoadFlare(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_2, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue_2, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_Add_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class ABaseItem*>& CallFunc_GetInventoryItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, double K2Node_VariableSet_DeltaTime_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "ExecuteUbergraph_BP_LenFlare_RoadFlare");

	Params::ABP_LenFlare_RoadFlare_C_ExecuteUbergraph_BP_LenFlare_RoadFlare_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition = CallFunc_ProjectWorldToScreen_ScreenPosition;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue = CallFunc_ProjectWorldToScreen_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue_1 = CallFunc_GetViewportSize_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue_1 = CallFunc_Divide_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetViewportSize_ReturnValue_2 = CallFunc_GetViewportSize_ReturnValue_2;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue_2 = CallFunc_Divide_Vector2DVector2D_ReturnValue_2;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue_1 = CallFunc_Conv_Vector2DToVector_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetInventoryItems_ReturnValue = CallFunc_GetInventoryItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_VariableSet_DeltaTime_ImplicitCast = K2Node_VariableSet_DeltaTime_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


