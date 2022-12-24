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

// Function CUBE_Simple.CUBE_Simple_C.ImpulseVehicle
struct ACUBE_Simple_C_ImpulseVehicle_Params
{
	class AFortAthenaVehicle*                          Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ZMultiplier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.ShouldDie
struct ACUBE_Simple_C_ShouldDie_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.LaunchPlayerAway
struct ACUBE_Simple_C_LaunchPlayerAway_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class APlayerPawn_Athena_C*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForceMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FlashCube;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.UserConstructionScript
struct ACUBE_Simple_C_UserConstructionScript_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.CubeAppearGlow__FinishedFunc
struct ACUBE_Simple_C_CubeAppearGlow__FinishedFunc_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.CubeAppearGlow__UpdateFunc
struct ACUBE_Simple_C_CubeAppearGlow__UpdateFunc_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.RippleGC
struct ACUBE_Simple_C_RippleGC_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.Set Ambient Audio Enabled
struct ACUBE_Simple_C_Set_Ambient_Audio_Enabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.OnDamageServer
struct ACUBE_Simple_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE_Simple.CUBE_Simple_C.OnDamagePlayEffects
struct ACUBE_Simple_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE_Simple.CUBE_Simple_C.ReceiveHit
struct ACUBE_Simple_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.ClearLastLaunchedPlayer
struct ACUBE_Simple_C_ClearLastLaunchedPlayer_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.CubeAppear
struct ACUBE_Simple_C_CubeAppear_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.ReceiveBeginPlay
struct ACUBE_Simple_C_ReceiveBeginPlay_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.OnWorldReady
struct ACUBE_Simple_C_OnWorldReady_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.RegisterDudebroActor
struct ACUBE_Simple_C_RegisterDudebroActor_Params
{
	class ABGA_DudeBro_Area_Effect_C*                  DUDEBRO;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.StartChanneling
struct ACUBE_Simple_C_StartChanneling_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.StopChanneling
struct ACUBE_Simple_C_StopChanneling_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.CheckChargingState
struct ACUBE_Simple_C_CheckChargingState_Params
{
	float                                              CachedTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EventProgress;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.ResetImpulseTimer
struct ACUBE_Simple_C_ResetImpulseTimer_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.ExecuteUbergraph_CUBE_Simple
struct ACUBE_Simple_C_ExecuteUbergraph_CUBE_Simple_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.CubeLeftPosition__DelegateSignature
struct ACUBE_Simple_C_CubeLeftPosition__DelegateSignature_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.CubeReady__DelegateSignature
struct ACUBE_Simple_C_CubeReady__DelegateSignature_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.LandedAtRune__DelegateSignature
struct ACUBE_Simple_C_LandedAtRune__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE_Simple.CUBE_Simple_C.StopRuneGlow__DelegateSignature
struct ACUBE_Simple_C_StopRuneGlow__DelegateSignature_Params
{
};

// Function CUBE_Simple.CUBE_Simple_C.CubeSetupComplete__DelegateSignature
struct ACUBE_Simple_C_CubeSetupComplete__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
