#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ImmediatePhysics.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// 0x0478 (0x0560 - 0x00E8)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x00F0(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x00FC(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0108(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x0114(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0120(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x012C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWorldGeometry;                                     // 0x012D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x012E(0x0002) MISSED OFFSET
	ESimulationSpace                                   SimulationSpace;                                          // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x012E(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FBoneReference                              BaseBoneRef;                                              // 0x0138(0x0010) (Edit)
	bool                                               bOverrideWorldGravity;                                    // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	float                                              CachedBoundsScale;                                        // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTransferBoneVelocities;                                  // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFreezeIncomingPoseOnStart;                               // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bComponentSpaceSimulation;                                // 0x0152(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData04[0x40D];                                     // 0x0153(0x040D) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
