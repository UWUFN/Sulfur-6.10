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

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.GetLaunchVector
struct ABP_Athena_RuneVent_C_GetLaunchVector_Params
{
	class AActor*                                      ActorToLaunch;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaunchVector;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.DoLaunchEffects
struct ABP_Athena_RuneVent_C_DoLaunchEffects_Params
{
	class AActor*                                      GCTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.OnRep_ForceActive
struct ABP_Athena_RuneVent_C_OnRep_ForceActive_Params
{
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.SetActiveEffects
struct ABP_Athena_RuneVent_C_SetActiveEffects_Params
{
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.OnRep_VentIsActive
struct ABP_Athena_RuneVent_C_OnRep_VentIsActive_Params
{
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.UserConstructionScript
struct ABP_Athena_RuneVent_C_UserConstructionScript_Params
{
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.ReceiveBeginPlay
struct ABP_Athena_RuneVent_C_ReceiveBeginPlay_Params
{
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Athena_RuneVent_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.OnWorldReady
struct ABP_Athena_RuneVent_C_OnWorldReady_Params
{
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.TimeReady
struct ABP_Athena_RuneVent_C_TimeReady_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.ReplicateGC
struct ABP_Athena_RuneVent_C_ReplicateGC_Params
{
	class AActor*                                      PlayerTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.RetryRootMotionPlayer
struct ABP_Athena_RuneVent_C_RetryRootMotionPlayer_Params
{
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.TryLaunchPlayer
struct ABP_Athena_RuneVent_C_TryLaunchPlayer_Params
{
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.TryLaunchVehicle
struct ABP_Athena_RuneVent_C_TryLaunchVehicle_Params
{
};

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.ExecuteUbergraph_BP_Athena_RuneVent
struct ABP_Athena_RuneVent_C_ExecuteUbergraph_BP_Athena_RuneVent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
