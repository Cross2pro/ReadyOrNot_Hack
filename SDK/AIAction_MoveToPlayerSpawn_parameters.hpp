#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.OnCreate_Blueprint
struct UAIAction_MoveToPlayerSpawn_C_OnCreate_Blueprint_Params
{
public:
	class ACyberneticController*                 Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.ExecuteUbergraph_AIAction_MoveToPlayerSpawn
struct UAIAction_MoveToPlayerSpawn_C_ExecuteUbergraph_AIAction_MoveToPlayerSpawn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBaseCombatActivity*                   CallFunc_GetCombatActivity_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACyberneticController*                 K2Node_Event_Controller;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMoveToPlayerSpawn*                    CallFunc_SpawnObject_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBaseCombatActivity*                   CallFunc_GetCombatActivity_ReturnValue_1;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBaseCombatActivity*                   CallFunc_GetCombatActivity_ReturnValue_2;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBaseCombatMoveActivity*               CallFunc_GetCombatMoveActivity_ReturnValue;        // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


