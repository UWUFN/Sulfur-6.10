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

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.TurnOnPillarOfLight
struct ABP_Athena_RuneSeal_C_TurnOnPillarOfLight_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.SetupRuneSeal
struct ABP_Athena_RuneSeal_C_SetupRuneSeal_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.SpawnCubeChargeEffects
struct ABP_Athena_RuneSeal_C_SpawnCubeChargeEffects_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.IsSealFlying
struct ABP_Athena_RuneSeal_C_IsSealFlying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.RemapTime
struct ABP_Athena_RuneSeal_C_RemapTime_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.RepositionChestsOnIsland
struct ABP_Athena_RuneSeal_C_RepositionChestsOnIsland_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_IslandPassed
struct ABP_Athena_RuneSeal_C_OnRep_IslandPassed_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_SealActiveInt
struct ABP_Athena_RuneSeal_C_OnRep_SealActiveInt_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_TestSealActive
struct ABP_Athena_RuneSeal_C_OnRep_TestSealActive_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.AddVentToArray
struct ABP_Athena_RuneSeal_C_AddVentToArray_Params
{
	class ABP_Athena_RuneVent_C*                       NewVent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.SpawnVortex
struct ABP_Athena_RuneSeal_C_SpawnVortex_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.DeactivateVents
struct ABP_Athena_RuneSeal_C_DeactivateVents_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ActivateVents
struct ABP_Athena_RuneSeal_C_ActivateVents_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.CloseSeal
struct ABP_Athena_RuneSeal_C_CloseSeal_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OpenSeal
struct ABP_Athena_RuneSeal_C_OpenSeal_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_SealActive
struct ABP_Athena_RuneSeal_C_OnRep_SealActive_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.UserConstructionScript
struct ABP_Athena_RuneSeal_C_UserConstructionScript_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.GetIslandTime
struct ABP_Athena_RuneSeal_C_GetIslandTime_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ReceiveBeginPlay
struct ABP_Athena_RuneSeal_C_ReceiveBeginPlay_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.HarvestChestLocations
struct ABP_Athena_RuneSeal_C_HarvestChestLocations_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__Seal_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct ABP_Athena_RuneSeal_C_BndEvt__Seal_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__OverlapForSkydiving_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Athena_RuneSeal_C_BndEvt__OverlapForSkydiving_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.DeactivateSeal
struct ABP_Athena_RuneSeal_C_DeactivateSeal_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__RuneCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Athena_RuneSeal_C_BndEvt__RuneCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__RuneCollision_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Athena_RuneSeal_C_BndEvt__RuneCollision_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ActivateSeal
struct ABP_Athena_RuneSeal_C_ActivateSeal_Params
{
};

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ExecuteUbergraph_BP_Athena_RuneSeal
struct ABP_Athena_RuneSeal_C_ExecuteUbergraph_BP_Athena_RuneSeal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
