#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EColorCorrectRegionsType : uint8
{
	Sphere                         = 0,
	Box                            = 1,
	Cylinder                       = 2,
	Cone                           = 3,
	MAX                            = 4,
};

enum class EColorCorrectWindowType : uint8
{
	Square                         = 0,
	Circle                         = 1,
	MAX                            = 2,
};

enum class EColorCorrectRegionTemperatureType : uint8
{
	LegacyTemperature              = 0,
	WhiteBalance                   = 1,
	ColorTemperature               = 2,
	MAX                            = 3,
};

enum class EColorCorrectRegionStencilType : uint8
{
	ExcludeStencil                 = 0,
	IncludeStencil                 = 1,
	MAX                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


