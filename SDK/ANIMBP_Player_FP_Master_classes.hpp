#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7268 (0x78E8 - 0x680)
// AnimBlueprintGeneratedClass ANIMBP_Player_FP_Master.ANIMBP_Player_FP_Master_C
class UANIMBP_Player_FP_Master_C : public URoNAnimInstance_PlayerFP
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x688(0xFC)(HasGetValueTypeHash)
	uint8                                        Pad_3C30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x788(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x790(0x8)(None)
	struct FAnimNode_LazySpringBone              AnimGraphNode_LazySpringBone;                      // 0x798(0x248)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_17;                       // 0x9E0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_16;                       // 0xB08(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_15;                       // 0xC30(0x128)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_11;                   // 0xD58(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_14;                       // 0xDD8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0xF00(0x128)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_10;                   // 0x1028(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x10A8(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0x11D0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x11F0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x1318(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x1440(0x128)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_24;                  // 0x1568(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_68;                   // 0x15B0(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0x15F8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x1618(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x1638(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x1760(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x1780(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x17A0(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8;                  // 0x17C0(0xF0)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1;                  // 0x18B0(0x158)(ContainsInstancedReference)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x1A08(0x128)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7;                  // 0x1B30(0xF0)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone_4;                         // 0x1C20(0x118)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x1D38(0x128)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_1;                       // 0x1E60(0x120)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x1F80(0x120)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x20A0(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_67;                   // 0x2190(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x21D8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x2258(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_23;                  // 0x2280(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x22C8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x22F0(0x48)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone_3;                         // 0x2338(0x118)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone_2;                         // 0x2450(0x118)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x2568(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x25B0(0x70)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_19;                    // 0x2620(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x26E8(0xF0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x27D8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x2800(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_66;                   // 0x2828(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_18;                    // 0x2870(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_22;                  // 0x2938(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_65;                   // 0x2980(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x29C8(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x2A10(0x20)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone_1;                         // 0x2A30(0x118)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x2B48(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x2C70(0x128)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x2D98(0x158)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x2EF0(0xF0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x2FE0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x3000(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x3128(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x3148(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x3168(0x80)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x31E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x3210(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x3238(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x3260(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x3288(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_64;                   // 0x32B0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x32F8(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_17;                    // 0x3320(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x33E8(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x3408(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x3430(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_63;                   // 0x3450(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x3498(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_16;                    // 0x34C0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x3588(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x35A8(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x35D0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x35F0(0xC8)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x36B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_62;                   // 0x3700(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_61;                   // 0x3748(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_60;                   // 0x3790(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_59;                   // 0x37D8(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x3820(0x80)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x38A0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_58;                   // 0x38E8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_57;                   // 0x3930(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_56;                   // 0x3978(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_55;                   // 0x39C0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x3A08(0x80)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x3A88(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_54;                   // 0x3AD0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_53;                   // 0x3B18(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_52;                   // 0x3B60(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_51;                   // 0x3BA8(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x3BF0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_50;                   // 0x3C70(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x3CB8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_49;                   // 0x3D00(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_48;                   // 0x3D48(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_47;                   // 0x3D90(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_46;                   // 0x3DD8(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x3E20(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_45;                   // 0x3EA0(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x3EE8(0x128)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_15;                    // 0x4010(0xC8)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone;                           // 0x40D8(0x118)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_14;                    // 0x41F0(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x42B8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x42D8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x42F8(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_21;                  // 0x4318(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x4360(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x4388(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x43B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x43D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x4400(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x4428(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_20;                  // 0x4450(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_19;                  // 0x4498(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_44;                   // 0x44E0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_18;                  // 0x4528(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_43;                   // 0x4570(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0x45B8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_17;                  // 0x4600(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_16;                  // 0x4648(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x4690(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x46D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x4720(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x4768(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_13;                    // 0x47B0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x4878(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_15;                  // 0x48C0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x4908(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x4928(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x4970(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14;                  // 0x49B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x4A00(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x4A48(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x4A90(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x4AD8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x4B20(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x4B68(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x4BB0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x4BF8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x4C40(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x4C88(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x4CD0(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_12;                    // 0x4D18(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x4DE0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x4E28(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x4F18(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x4F60(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_11;                    // 0x4FA8(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x5070(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x50B8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x50D8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x5120(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x5168(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x51B0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x51F8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x5240(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x5288(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x52D0(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_10;                    // 0x5318(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x53E0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x5428(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x5470(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x5560(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_9;                     // 0x55A8(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x5670(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x56B8(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x56D8(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x5700(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x5720(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x57E8(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x5868(0x80)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x58E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x5910(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x5938(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x5960(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x5988(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x59B0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x59D8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x5A00(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_8;                     // 0x5A48(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x5B10(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x5B30(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x5B58(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x5B78(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x5BA0(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_7;                     // 0x5BE8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x5CB0(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x5CD0(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x5CF8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x5D18(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x5DE0(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x5ED0(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x5F18(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x5F60(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x6050(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x6098(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x60C0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x60E8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x6168(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x6190(0x40)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x61D0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x6218(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x6298(0x128)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x63C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x63E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x6410(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x6438(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x6460(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x6488(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x64B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x64D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x6500(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x6528(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x6550(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x6578(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x65A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x65C8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x65F0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x6638(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_6;                     // 0x6680(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x6748(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x6768(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x67B0(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5;                     // 0x67F8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x68C0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x68E0(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0x6928(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x69F0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x6A38(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x6A58(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0x6AA0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x6B68(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x6BB0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x6BD0(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x6C18(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x6CE0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6D28(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x6D48(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x6D90(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x6DD8(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x6E20(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x6EE8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x6F10(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x6F38(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x6F60(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x6FA8(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x6FD0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x6FF0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x7038(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x7080(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x70C8(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x7190(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x71D8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x71F8(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x72C0(0x128)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_1;                             // 0x73E8(0xF8)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x74E0(0xF8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x75D8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x75F8(0x20)(None)
	struct FRotator                              CameraRotationRate;                                // 0x7618(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsAiming;                                         // 0x7630(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFocusedAiming;                                  // 0x7631(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsReloading;                                      // 0x7632(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C84[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AimInterp;                                         // 0x7638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMagCheck;                                       // 0x7640(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       IdlePlayrate;                                      // 0x7648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ProcRecoilTrans;                                   // 0x7650(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ProcRecoilRot;                                     // 0x7668(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               ProcRecoilBuildupTrans;                            // 0x7680(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ProcRecoilBuildupRot;                              // 0x7698(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              NewVar_0;                                          // 0x76B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               StanceAdjustment;                                  // 0x76C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CapsuleRot;                                        // 0x76E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       LazyAlpha;                                         // 0x76F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon*                           BaseMagWeaponRef;                                  // 0x7700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      PlayerCharRef;                                     // 0x7708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaSeconds;                                      // 0x7710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LegsBroken;                                        // 0x7718(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ArmsBroken;                                        // 0x7719(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C8B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AimingLocoStrength;                                // 0x7720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCrouched;                                       // 0x7728(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLowReadyPointUp;                                  // 0x7729(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLowReadyPointDown;                                // 0x772A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C8C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LowReadyPointUpAlpha;                              // 0x7730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LowReadyPointDownAlpha;                            // 0x7738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LeanAlpha;                                         // 0x7740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FreeLookRot;                                       // 0x7748(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       StabilizeMovementAlpha;                            // 0x7760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       QuickLeanAmount;                                   // 0x7768(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSightTweakMode;                                   // 0x7770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsJumping;                                        // 0x7771(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSprinting;                                      // 0x7772(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C92[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       InputUpDown;                                       // 0x7778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOnLadder;                                         // 0x7780(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInteractionActive;                                // 0x7781(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C96[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Hand_IK_Left;                                      // 0x7788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Hand_IK_Right;                                     // 0x7790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasUnderbarrelAttachment;                         // 0x7798(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponUnderbarrelAnimationType   UnderbarrelType;                                   // 0x7799(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMontagePlaying;                                 // 0x779A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsGrenade;                                        // 0x779B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ShakeAmount;                                       // 0x77A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bArrested;                                         // 0x77A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DirBlendTime;                                      // 0x77B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LeftHandSprintHack;                                // 0x77B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftHandWorldVector;                               // 0x77C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LeftHandWorldRotator;                              // 0x77D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       LeftHandWorldAlpha;                                // 0x77F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftHandWorldElbowVector;                          // 0x77F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLeftHandDoorActive;                               // 0x7810(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LeanHeadSocketLocation;                            // 0x7818(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LeanHeadBlendAlpha;                                // 0x7830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeanHeadOffset;                                    // 0x7838(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Acceleration;                                      // 0x7850(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraBobTrans;                                    // 0x7868(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StartMotionWeight;                                 // 0x7880(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StartMotionPlayrate;                               // 0x7888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WeaponBobTrans;                                    // 0x7890(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WeaponBobRot;                                      // 0x78A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       WeaponBobAlpha;                                    // 0x78C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WeaponBobTrigger;                                  // 0x78C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldAllowStopMotion;                            // 0x78C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBuildUpSprint;                                    // 0x78CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SprintBuildupAlpha;                                // 0x78D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHeavyArmor;                                     // 0x78D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     NewVar;                                            // 0x78E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_Player_FP_Master_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetWeaponGripPose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& SeqEval, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_1, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_2, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_3, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_2, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_3, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_4, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_5, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_4, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_9B9B8E4949800E738A8057AACCE80C9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_69820C474C461146AF09CB9F932AF05E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_C647B5124D3BC1F0986B9C89A7735B03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_BlendListByBool_4879E363481B92AAA6CF839D5E266A3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_5AEF6B914F43E424ED0018B8684103C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_LegIK_9D86C6C840152FE2654438B16742DE27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_0F2C7531423F08A2EFF470ADC794D65F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyBone_F35DCF464D06495E8FE348A5A18017AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_EFA2BD3C4A9E750AF8ACB2B567317479();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_28A3B75840D68F5C10D9629C5CC2B314();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_AA9E7F2A4F815A859EDA4EB54FF2042E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_7D8DA8C5404A3D71A0CAB29122FFE87F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_8D9943C443F995450BB1A4ADB22947E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_73515E6144DE43E8470D15B9D749FD68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_5D402DD9475CBC3A24EC7D937900A972();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_A14D48E84437956CB4051C8FF3C56A13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_A71EEE8E46659B8C4056FA85962891F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_B48962E14E382CEA46FE508E07782AD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_9143EAEA4BD1F968CFBF7EAB9A0656B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_DFA306FC4D12BC8396D04D8E0987D5D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_70FFB3C24126F5F67713918CD5C0C103();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_BE818B4C47B04C4553397CBF64EBF3AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_FD913C124B6441D35EDDB88C8D2D96A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_F56BB873499859524D5ED98D41068C89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyBone_610B23954A30336A6E3CDDB99FD92D11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyBone_F0F1AB3B44ABC136370C4483D5742C27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_63C30D0F4D43094113B7EDBADBAB2789();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ApplyAdditive_349790E540F2D5630B1D08B7D25D9559();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_BlendListByBool_2D7ED2E84AB7B607144F55B76B40526B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_FE6372914ED28B1627D3278B3FFEEF94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyCurve_9B510C0E41D85CD8CF724BA95C09025D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyBone_6F5340F8439A8F1CFE90B8BCE2A4A763();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_B4BE951F4756B225FFD9FFA821F3251F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_LazySpringBone_B7A5610C4C7CAA7B481B35B72E2A0FB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_E8EFAFCC48AB6228FED73CB8E1251F31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_3B50CDDA48DA6200013F08A576FF9D32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_F1AA59BF4FDE779173D954B7DF982CC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_F1B7D93A48B44936A93CAA90B098DF43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_F538F67D4C75E34D1FADF4A0AE24DB08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_B134AE8B448556F818FB6D8E24786CAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_4A06EE044B1DC8D3848A778C16C3719C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_4A5B5BD5473A54F969979DB4A678D345();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_DE2EB7F543493547B08EF4AFB039DB86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_A5DBA16D4E86C0EBE4654A94755DB102();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_0E847E114993C3907D893D8597EAF206();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_FB8981C84E946C98EA858E9FAB2D53F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_4A31759445A4D66E6D5D0CB5D6A01BE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ApplyAdditive_8590ECCF4ED3FE9AF3397991B4916D01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_1DB711494CD4B31E24DE41904CB753E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ApplyAdditive_C6A3B600405AD839170095A1153448FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_952A147E44BA78DDCE0E91A0A54942F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_80E8F6704162A23AA1CEDF9BE04AF51C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_325908494E3CEDE65F00AA8BB636BE17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_07B31A5A4200DA9D44A6458EEC745C25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_25CE755A4CFA96F89EBBB4B7219548D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_349A7EC140623FA2900499A027BCF8A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_8E2A61AE418060994D0EFB9219CE6189();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_91D650F7412F908F7C2928B1CD22AC1C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_485F184E4DA3C23C9D945B9D37FFAFC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_3F4B7F614320D28678FE498E88D5196C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_ReloadComplete();
	void AnimNotify_PlayShotgunReloadLoop();
	void AnimNotify_ThrowGrenade();
	void AnimNotify_CanThrowGrenade();
	void CustomEvent();
	void BlueprintInitializeAnimation();
	void AnimNotify_C2Detonate();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_A0DF02414EC8C101274F819C63001171();
	void AnimNotify_FadeIntoBlack();
	void AnimNotify_FadeOutBlack();
	void AnimNotify_EnableNVG();
	void AnimNotify_DisableNVG();
	void AnimNotify_BlackFadeStart();
	void AnimNotify_RamHit();
	void AnimNotify_StartPlayerRoot();
	void AnimNotify_StopPlayerRoot();
	void AnimNotify_DoorjamPlaced();
	void AnimNotify_FinishC2Placement();
	void AnimNotify_EquipDetonator();
	void AnimNotify_StartFullbodyRagdoll();
	void AnimNotify_ToggleRagdoll();
	void AnimNotify_ThrowChemlight();
	void AnimNotify_HideFPMesh();
	void AnimNotify_ShowFPMesh();
	void AnimNotify_EquipLastGun();
	void AnimNotify_ArrestComplete();
	void AnimNotify_DoorKick();
	void AnimNotify_DoorPush();
	void AnimNotify_FreezeAllActions();
	void AnimNotify_UnfreezeAllActions();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_BlendListByBool_F387152840205C87E00A44B651507A1A();
	void AnimNotify_NVGStartToggling();
	void AnimNotify_NVGStopToggling();
	void AnimNotify_DoorKickBreak();
	void AnimNotify_DoorKickFailure();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_436621EA4A0D32FEF38251B53214E60D();
	void AnimNotify_FreeComplete();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_799065574032AAD887AC0F877F3EF280();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_3A88471847B39F1EA325C299C889B0E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_B2BA99304F1EE0200F71EE95C9CA988B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_22339A3E456E716301145AB93C0594F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_BlendListByBool_AB91FAF04E5C1C452147B58AB419D193();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_667B5CE04E4CBD3B28C5CA906EE55A4D();
	void AnimNotify_WeaponBobDisable();
	void AnimNotify_WeaponBobEnable();
	void AnimNotify_AllowStopMotion();
	void AnimNotify_ResetStopMotion();
	void AnimNotify_SprintStarted();
	void AnimNotify_SprintEnded();
	void AnimNotify_FinishShotgunReload();
	void ExecuteUbergraph_ANIMBP_Player_FP_Master(int32 EntryPoint, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_ClampAngle_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_FClamp_ReturnValue_1, const struct FRotator& CallFunc_NegateRotator_ReturnValue, double CallFunc_FClamp_ReturnValue_2, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_4, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_NegateRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_FClamp_ReturnValue_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_7, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, double CallFunc_ClampAngle_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_8, const struct FRotator& CallFunc_NegateRotator_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_9, double CallFunc_Conv_BoolToDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, bool Temp_bool_Variable, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_10, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, double CallFunc_ClampAngle_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_3, const struct FRotator& CallFunc_NegateRotator_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_4, double CallFunc_Abs_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_11, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_SelectFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_5, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_12, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_13, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, float K2Node_Event_DeltaTimeX, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsSprinting_ReturnValue, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_3, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess_4, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_2, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade, bool K2Node_DynamicCast_bSuccess_5, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_3, bool K2Node_DynamicCast_bSuccess_6, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_3, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsMagCheckPlaying_ReturnValue, bool CallFunc_IsDeadOrUnconscious_ReturnValue, bool CallFunc_IsReloading_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_Constant_ReturnValue_2, double CallFunc_FInterpTo_Constant_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_4, bool K2Node_DynamicCast_bSuccess_8, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_5, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_4, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_FInterpTo_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_5, double CallFunc_FInterpTo_ReturnValue_6, double CallFunc_FInterpTo_ReturnValue_7, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_5, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_6, bool K2Node_DynamicCast_bSuccess_10, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_7, bool K2Node_DynamicCast_bSuccess_11, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_8, bool K2Node_DynamicCast_bSuccess_12, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_4, class ADoorRam* K2Node_DynamicCast_AsDoor_Ram, bool K2Node_DynamicCast_bSuccess_13, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_6, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_9, bool K2Node_DynamicCast_bSuccess_14, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_5, class ADoorJam* K2Node_DynamicCast_AsDoor_Jam, bool K2Node_DynamicCast_bSuccess_15, double CallFunc_FInterpTo_ReturnValue_8, bool CallFunc_IsFalling_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_7, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_14, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_10, bool K2Node_DynamicCast_bSuccess_16, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_6, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_15, class AC2Explosive* K2Node_DynamicCast_AsC2Explosive, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_8, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_11, bool K2Node_DynamicCast_bSuccess_18, bool CallFunc_BooleanAND_ReturnValue_4, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_7, class AC2Explosive* K2Node_DynamicCast_AsC2Explosive_1, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_9, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_12, bool K2Node_DynamicCast_bSuccess_20, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_10, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_11, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_13, bool K2Node_DynamicCast_bSuccess_21, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_14, bool K2Node_DynamicCast_bSuccess_22, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_8, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_9, class AChemlight* K2Node_DynamicCast_AsChemlight, bool K2Node_DynamicCast_bSuccess_23, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_12, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_15, bool K2Node_DynamicCast_bSuccess_24, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_13, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_10, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_16, bool K2Node_DynamicCast_bSuccess_25, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_14, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_17, bool K2Node_DynamicCast_bSuccess_26, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_15, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_18, bool K2Node_DynamicCast_bSuccess_27, class ABaseItem* CallFunc_GetInventoryItemOfClass_ReturnValue, class AZipcuffs* K2Node_DynamicCast_AsZipcuffs, bool K2Node_DynamicCast_bSuccess_28, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_16, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_17, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_19, bool K2Node_DynamicCast_bSuccess_29, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_20, bool K2Node_DynamicCast_bSuccess_30, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_16, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_17, bool CallFunc_NotEqual_VectorVector_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_11, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_31, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon_1, bool K2Node_DynamicCast_bSuccess_32, bool CallFunc_IsValid_ReturnValue_3, enum class EWeaponUnderbarrelAnimationType CallFunc_GetUnderbarrelAnimationType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_18, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_21, bool K2Node_DynamicCast_bSuccess_33, bool CallFunc_IsArrested_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_19, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_22, bool K2Node_DynamicCast_bSuccess_34, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_23, bool K2Node_DynamicCast_bSuccess_35, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue_1, class ANightvisionGoggles* K2Node_DynamicCast_AsNightvision_Goggles, bool K2Node_DynamicCast_bSuccess_36, class ANightvisionGoggles* K2Node_DynamicCast_AsNightvision_Goggles_1, bool K2Node_DynamicCast_bSuccess_37, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_20, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_21, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_24, bool K2Node_DynamicCast_bSuccess_38, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_25, bool K2Node_DynamicCast_bSuccess_39, float CallFunc_GetCurveValue_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_22, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_26, bool K2Node_DynamicCast_bSuccess_40, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_5, class AMultitool* K2Node_DynamicCast_AsMultitool, bool K2Node_DynamicCast_bSuccess_41, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_8, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AReadyOrNotGameMode* CallFunc_GetReadyOrNotGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& K2Node_Select_Default, double CallFunc_FInterpTo_ReturnValue_9, double CallFunc_FInterpTo_ReturnValue_10, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, float CallFunc_GetMaxSpeed_ReturnValue, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_6, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_6, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_18, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_7, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_IsAnyMontagePlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_7, double CallFunc_FInterpTo_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_7, double CallFunc_FInterpTo_ReturnValue_12, double CallFunc_FInterpTo_ReturnValue_13, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_4, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_8, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_23, bool CallFunc_Less_DoubleDouble_ReturnValue_3, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_27, bool K2Node_DynamicCast_bSuccess_42, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_24, class AArmor_Heavy_V2_C* K2Node_DynamicCast_AsArmor_Heavy_V2, bool K2Node_DynamicCast_bSuccess_43, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_28, bool K2Node_DynamicCast_bSuccess_44, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_25, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_29, bool K2Node_DynamicCast_bSuccess_45, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_13, class AShotgun* K2Node_DynamicCast_AsShotgun_1, bool K2Node_DynamicCast_bSuccess_46, float K2Node_StructMemberSet___FloatProperty_52_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_51_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_12_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_15_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_14_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_13_ImplicitCast, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_56_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_59_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_58_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float K2Node_StructMemberSet___FloatProperty_7_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_8_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_9_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_6_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_2, float K2Node_StructMemberSet___FloatProperty_19_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_20_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_21_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_18_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_3, float K2Node_StructMemberSet___FloatProperty_25_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_26_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_27_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_24_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_50_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_0_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast_1, float CallFunc_MakeRotator_Roll_ImplicitCast_1, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_2, float K2Node_StructMemberSet_Alpha_ImplicitCast_3, float K2Node_StructMemberSet___FloatProperty_49_ImplicitCast, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast_2, float CallFunc_MakeRotator_Roll_ImplicitCast_2, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_4, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_4, float K2Node_StructMemberSet_Alpha_ImplicitCast_5, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_5, float K2Node_StructMemberSet___FloatProperty_47_ImplicitCast, double K2Node_VariableSet_DeltaSeconds_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_3, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_4, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_5, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_6, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_7, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_8, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_9, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_10, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_11, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double K2Node_VariableSet_Hand_IK_Left_ImplicitCast, double K2Node_VariableSet_Hand_IK_Right_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_3, double K2Node_VariableSet_ShakeAmount_ImplicitCast, double K2Node_VariableSet_LeftHandSprintHack_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_6, double CallFunc_Less_DoubleDouble_A_ImplicitCast_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast_3, double K2Node_VariableSet_InputUpDown_ImplicitCast);
};

}


