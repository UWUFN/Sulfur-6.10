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

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.OnRep_Printing
struct ABGA_Cube_Area_Effect_C_OnRep_Printing_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.OnRep_EnableRuneAmbientEffect
struct ABGA_Cube_Area_Effect_C_OnRep_EnableRuneAmbientEffect_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.OnRep_RuneIndex
struct ABGA_Cube_Area_Effect_C_OnRep_RuneIndex_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.SetRuneMaterial
struct ABGA_Cube_Area_Effect_C_SetRuneMaterial_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.UserConstructionScript
struct ABGA_Cube_Area_Effect_C_UserConstructionScript_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.TrySpawnGlowEffect
struct ABGA_Cube_Area_Effect_C_TrySpawnGlowEffect_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.BndEvt__Effect Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_Cube_Area_Effect_C_BndEvt__Effect_Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ReceiveActorEndOverlap
struct ABGA_Cube_Area_Effect_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.DisableGlowEffect
struct ABGA_Cube_Area_Effect_C_DisableGlowEffect_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.CubeNoLongerOnTop
struct ABGA_Cube_Area_Effect_C_CubeNoLongerOnTop_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.SpawnVolumeEffect
struct ABGA_Cube_Area_Effect_C_SpawnVolumeEffect_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ReceiveBeginPlay
struct ABGA_Cube_Area_Effect_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ReplayScrubbed
struct ABGA_Cube_Area_Effect_C_ReplayScrubbed_Params
{
};

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ExecuteUbergraph_BGA_Cube_Area_Effect
struct ABGA_Cube_Area_Effect_C_ExecuteUbergraph_BGA_Cube_Area_Effect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
