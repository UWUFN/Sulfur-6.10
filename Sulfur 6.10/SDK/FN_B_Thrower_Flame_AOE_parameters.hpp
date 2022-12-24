#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.GetRotation
struct AB_Thrower_Flame_AOE_C_GetRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.UserConstructionScript
struct AB_Thrower_Flame_AOE_C_UserConstructionScript_Params
{
};

// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.ReceiveBeginPlay
struct AB_Thrower_Flame_AOE_C_ReceiveBeginPlay_Params
{
};

// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.ReceiveDestroyed
struct AB_Thrower_Flame_AOE_C_ReceiveDestroyed_Params
{
};

// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Thrower_Flame_AOE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.ExecuteUbergraph_B_Thrower_Flame_AOE
struct AB_Thrower_Flame_AOE_C_ExecuteUbergraph_B_Thrower_Flame_AOE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
