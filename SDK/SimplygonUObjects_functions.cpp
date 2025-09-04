#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SimplygonUObjects.SimplygonStandinPipeline
// (None)

class UClass* USimplygonStandinPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonStandinPipeline");

	return Clss;
}


// SimplygonStandinPipeline SimplygonUObjects.Default__SimplygonStandinPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonStandinPipeline* USimplygonStandinPipeline::GetDefaultObj()
{
	static class USimplygonStandinPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonStandinPipeline*>(USimplygonStandinPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.StandinNearPipeline
// (None)

class UClass* UStandinNearPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StandinNearPipeline");

	return Clss;
}


// StandinNearPipeline SimplygonUObjects.Default__StandinNearPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UStandinNearPipeline* UStandinNearPipeline::GetDefaultObj()
{
	static class UStandinNearPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UStandinNearPipeline*>(UStandinNearPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.StandinFarPipeline
// (None)

class UClass* UStandinFarPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StandinFarPipeline");

	return Clss;
}


// StandinFarPipeline SimplygonUObjects.Default__StandinFarPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UStandinFarPipeline* UStandinFarPipeline::GetDefaultObj()
{
	static class UStandinFarPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UStandinFarPipeline*>(UStandinFarPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.BillboardCloudPipeline
// (None)

class UClass* UBillboardCloudPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BillboardCloudPipeline");

	return Clss;
}


// BillboardCloudPipeline SimplygonUObjects.Default__BillboardCloudPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UBillboardCloudPipeline* UBillboardCloudPipeline::GetDefaultObj()
{
	static class UBillboardCloudPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UBillboardCloudPipeline*>(UBillboardCloudPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonPipeline
// (None)

class UClass* USimplygonPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonPipeline");

	return Clss;
}


// SimplygonPipeline SimplygonUObjects.Default__SimplygonPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonPipeline* USimplygonPipeline::GetDefaultObj()
{
	static class USimplygonPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonPipeline*>(USimplygonPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.FlipbookPipeline
// (None)

class UClass* UFlipbookPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlipbookPipeline");

	return Clss;
}


// FlipbookPipeline SimplygonUObjects.Default__FlipbookPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UFlipbookPipeline* UFlipbookPipeline::GetDefaultObj()
{
	static class UFlipbookPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlipbookPipeline*>(UFlipbookPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.BillboardCloudVegetationPipeline
// (None)

class UClass* UBillboardCloudVegetationPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BillboardCloudVegetationPipeline");

	return Clss;
}


// BillboardCloudVegetationPipeline SimplygonUObjects.Default__BillboardCloudVegetationPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UBillboardCloudVegetationPipeline* UBillboardCloudVegetationPipeline::GetDefaultObj()
{
	static class UBillboardCloudVegetationPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UBillboardCloudVegetationPipeline*>(UBillboardCloudVegetationPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.RemeshingPipeline
// (None)

class UClass* URemeshingPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemeshingPipeline");

	return Clss;
}


// RemeshingPipeline SimplygonUObjects.Default__RemeshingPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class URemeshingPipeline* URemeshingPipeline::GetDefaultObj()
{
	static class URemeshingPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<URemeshingPipeline*>(URemeshingPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.HighDensityMeshReductionPipeline
// (None)

class UClass* UHighDensityMeshReductionPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighDensityMeshReductionPipeline");

	return Clss;
}


// HighDensityMeshReductionPipeline SimplygonUObjects.Default__HighDensityMeshReductionPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighDensityMeshReductionPipeline* UHighDensityMeshReductionPipeline::GetDefaultObj()
{
	static class UHighDensityMeshReductionPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighDensityMeshReductionPipeline*>(UHighDensityMeshReductionPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonMaterialCaster
// (None)

class UClass* USimplygonMaterialCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonMaterialCaster");

	return Clss;
}


// SimplygonMaterialCaster SimplygonUObjects.Default__SimplygonMaterialCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonMaterialCaster* USimplygonMaterialCaster::GetDefaultObj()
{
	static class USimplygonMaterialCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonMaterialCaster*>(USimplygonMaterialCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonColorCaster
// (None)

class UClass* USimplygonColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonColorCaster");

	return Clss;
}


// SimplygonColorCaster SimplygonUObjects.Default__SimplygonColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonColorCaster* USimplygonColorCaster::GetDefaultObj()
{
	static class USimplygonColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonColorCaster*>(USimplygonColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.BaseColorCaster
// (None)

class UClass* UBaseColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseColorCaster");

	return Clss;
}


// BaseColorCaster SimplygonUObjects.Default__BaseColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseColorCaster* UBaseColorCaster::GetDefaultObj()
{
	static class UBaseColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseColorCaster*>(UBaseColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.MetallicCaster
// (None)

class UClass* UMetallicCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetallicCaster");

	return Clss;
}


// MetallicCaster SimplygonUObjects.Default__MetallicCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetallicCaster* UMetallicCaster::GetDefaultObj()
{
	static class UMetallicCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetallicCaster*>(UMetallicCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SpecularCaster
// (None)

class UClass* USpecularCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecularCaster");

	return Clss;
}


// SpecularCaster SimplygonUObjects.Default__SpecularCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecularCaster* USpecularCaster::GetDefaultObj()
{
	static class USpecularCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecularCaster*>(USpecularCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.RoughnessCaster
// (None)

class UClass* URoughnessCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RoughnessCaster");

	return Clss;
}


// RoughnessCaster SimplygonUObjects.Default__RoughnessCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class URoughnessCaster* URoughnessCaster::GetDefaultObj()
{
	static class URoughnessCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<URoughnessCaster*>(URoughnessCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonNormalCaster
// (None)

class UClass* USimplygonNormalCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonNormalCaster");

	return Clss;
}


// SimplygonNormalCaster SimplygonUObjects.Default__SimplygonNormalCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonNormalCaster* USimplygonNormalCaster::GetDefaultObj()
{
	static class USimplygonNormalCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonNormalCaster*>(USimplygonNormalCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.NormalCaster
// (None)

class UClass* UNormalCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NormalCaster");

	return Clss;
}


// NormalCaster SimplygonUObjects.Default__NormalCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UNormalCaster* UNormalCaster::GetDefaultObj()
{
	static class UNormalCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UNormalCaster*>(UNormalCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonOpacityCaster
// (None)

class UClass* USimplygonOpacityCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonOpacityCaster");

	return Clss;
}


// SimplygonOpacityCaster SimplygonUObjects.Default__SimplygonOpacityCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonOpacityCaster* USimplygonOpacityCaster::GetDefaultObj()
{
	static class USimplygonOpacityCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonOpacityCaster*>(USimplygonOpacityCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.OpacityCaster
// (None)

class UClass* UOpacityCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpacityCaster");

	return Clss;
}


// OpacityCaster SimplygonUObjects.Default__OpacityCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpacityCaster* UOpacityCaster::GetDefaultObj()
{
	static class UOpacityCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpacityCaster*>(UOpacityCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.EmissiveCaster
// (None)

class UClass* UEmissiveCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissiveCaster");

	return Clss;
}


// EmissiveCaster SimplygonUObjects.Default__EmissiveCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmissiveCaster* UEmissiveCaster::GetDefaultObj()
{
	static class UEmissiveCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissiveCaster*>(UEmissiveCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.OpacityMaskCaster
// (None)

class UClass* UOpacityMaskCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpacityMaskCaster");

	return Clss;
}


// OpacityMaskCaster SimplygonUObjects.Default__OpacityMaskCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpacityMaskCaster* UOpacityMaskCaster::GetDefaultObj()
{
	static class UOpacityMaskCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpacityMaskCaster*>(UOpacityMaskCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.AmbientOcclusionMaskCaster
// (None)

class UClass* UAmbientOcclusionMaskCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientOcclusionMaskCaster");

	return Clss;
}


// AmbientOcclusionMaskCaster SimplygonUObjects.Default__AmbientOcclusionMaskCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbientOcclusionMaskCaster* UAmbientOcclusionMaskCaster::GetDefaultObj()
{
	static class UAmbientOcclusionMaskCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientOcclusionMaskCaster*>(UAmbientOcclusionMaskCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonVertexColorCaster
// (None)

class UClass* USimplygonVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonVertexColorCaster");

	return Clss;
}


// SimplygonVertexColorCaster SimplygonUObjects.Default__SimplygonVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonVertexColorCaster* USimplygonVertexColorCaster::GetDefaultObj()
{
	static class USimplygonVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonVertexColorCaster*>(USimplygonVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.BaseColorVertexColorCaster
// (None)

class UClass* UBaseColorVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseColorVertexColorCaster");

	return Clss;
}


// BaseColorVertexColorCaster SimplygonUObjects.Default__BaseColorVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseColorVertexColorCaster* UBaseColorVertexColorCaster::GetDefaultObj()
{
	static class UBaseColorVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseColorVertexColorCaster*>(UBaseColorVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.MetallicVertexColorCaster
// (None)

class UClass* UMetallicVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetallicVertexColorCaster");

	return Clss;
}


// MetallicVertexColorCaster SimplygonUObjects.Default__MetallicVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UMetallicVertexColorCaster* UMetallicVertexColorCaster::GetDefaultObj()
{
	static class UMetallicVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetallicVertexColorCaster*>(UMetallicVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SpecularVertexColorCaster
// (None)

class UClass* USpecularVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecularVertexColorCaster");

	return Clss;
}


// SpecularVertexColorCaster SimplygonUObjects.Default__SpecularVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecularVertexColorCaster* USpecularVertexColorCaster::GetDefaultObj()
{
	static class USpecularVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecularVertexColorCaster*>(USpecularVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.RoughnessVertexColorCaster
// (None)

class UClass* URoughnessVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RoughnessVertexColorCaster");

	return Clss;
}


// RoughnessVertexColorCaster SimplygonUObjects.Default__RoughnessVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class URoughnessVertexColorCaster* URoughnessVertexColorCaster::GetDefaultObj()
{
	static class URoughnessVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<URoughnessVertexColorCaster*>(URoughnessVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.NormalVertexColorCaster
// (None)

class UClass* UNormalVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NormalVertexColorCaster");

	return Clss;
}


// NormalVertexColorCaster SimplygonUObjects.Default__NormalVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UNormalVertexColorCaster* UNormalVertexColorCaster::GetDefaultObj()
{
	static class UNormalVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UNormalVertexColorCaster*>(UNormalVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.OpacityVertexColorCaster
// (None)

class UClass* UOpacityVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpacityVertexColorCaster");

	return Clss;
}


// OpacityVertexColorCaster SimplygonUObjects.Default__OpacityVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpacityVertexColorCaster* UOpacityVertexColorCaster::GetDefaultObj()
{
	static class UOpacityVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpacityVertexColorCaster*>(UOpacityVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.EmissiveVertexColorCaster
// (None)

class UClass* UEmissiveVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissiveVertexColorCaster");

	return Clss;
}


// EmissiveVertexColorCaster SimplygonUObjects.Default__EmissiveVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmissiveVertexColorCaster* UEmissiveVertexColorCaster::GetDefaultObj()
{
	static class UEmissiveVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissiveVertexColorCaster*>(UEmissiveVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.OpacityMaskVertexColorCaster
// (None)

class UClass* UOpacityMaskVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpacityMaskVertexColorCaster");

	return Clss;
}


// OpacityMaskVertexColorCaster SimplygonUObjects.Default__OpacityMaskVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpacityMaskVertexColorCaster* UOpacityMaskVertexColorCaster::GetDefaultObj()
{
	static class UOpacityMaskVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpacityMaskVertexColorCaster*>(UOpacityMaskVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.AmbientOcclusionVertexColorCaster
// (None)

class UClass* UAmbientOcclusionVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientOcclusionVertexColorCaster");

	return Clss;
}


// AmbientOcclusionVertexColorCaster SimplygonUObjects.Default__AmbientOcclusionVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbientOcclusionVertexColorCaster* UAmbientOcclusionVertexColorCaster::GetDefaultObj()
{
	static class UAmbientOcclusionVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientOcclusionVertexColorCaster*>(UAmbientOcclusionVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SubSurfaceVertexColorCaster
// (None)

class UClass* USubSurfaceVertexColorCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubSurfaceVertexColorCaster");

	return Clss;
}


// SubSurfaceVertexColorCaster SimplygonUObjects.Default__SubSurfaceVertexColorCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USubSurfaceVertexColorCaster* USubSurfaceVertexColorCaster::GetDefaultObj()
{
	static class USubSurfaceVertexColorCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USubSurfaceVertexColorCaster*>(USubSurfaceVertexColorCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.ReductionPipeline
// (None)

class UClass* UReductionPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReductionPipeline");

	return Clss;
}


// ReductionPipeline SimplygonUObjects.Default__ReductionPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UReductionPipeline* UReductionPipeline::GetDefaultObj()
{
	static class UReductionPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UReductionPipeline*>(UReductionPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.AggregationPipeline
// (None)

class UClass* UAggregationPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AggregationPipeline");

	return Clss;
}


// AggregationPipeline SimplygonUObjects.Default__AggregationPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UAggregationPipeline* UAggregationPipeline::GetDefaultObj()
{
	static class UAggregationPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UAggregationPipeline*>(UAggregationPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonDisplacementCaster
// (None)

class UClass* USimplygonDisplacementCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonDisplacementCaster");

	return Clss;
}


// SimplygonDisplacementCaster SimplygonUObjects.Default__SimplygonDisplacementCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonDisplacementCaster* USimplygonDisplacementCaster::GetDefaultObj()
{
	static class USimplygonDisplacementCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonDisplacementCaster*>(USimplygonDisplacementCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
// (None)

class UClass* USimplygonAmbientOcclusionCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonAmbientOcclusionCaster");

	return Clss;
}


// SimplygonAmbientOcclusionCaster SimplygonUObjects.Default__SimplygonAmbientOcclusionCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonAmbientOcclusionCaster* USimplygonAmbientOcclusionCaster::GetDefaultObj()
{
	static class USimplygonAmbientOcclusionCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonAmbientOcclusionCaster*>(USimplygonAmbientOcclusionCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonGeometryDataCaster
// (None)

class UClass* USimplygonGeometryDataCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonGeometryDataCaster");

	return Clss;
}


// SimplygonGeometryDataCaster SimplygonUObjects.Default__SimplygonGeometryDataCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonGeometryDataCaster* USimplygonGeometryDataCaster::GetDefaultObj()
{
	static class USimplygonGeometryDataCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonGeometryDataCaster*>(USimplygonGeometryDataCaster::StaticClass()->DefaultObject);

	return Default;
}


// Class SimplygonUObjects.SimplygonComputeCaster
// (None)

class UClass* USimplygonComputeCaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplygonComputeCaster");

	return Clss;
}


// SimplygonComputeCaster SimplygonUObjects.Default__SimplygonComputeCaster
// (Public, ClassDefaultObject, ArchetypeObject)

class USimplygonComputeCaster* USimplygonComputeCaster::GetDefaultObj()
{
	static class USimplygonComputeCaster* Default = nullptr;

	if (!Default)
		Default = static_cast<USimplygonComputeCaster*>(USimplygonComputeCaster::StaticClass()->DefaultObject);

	return Default;
}

}


