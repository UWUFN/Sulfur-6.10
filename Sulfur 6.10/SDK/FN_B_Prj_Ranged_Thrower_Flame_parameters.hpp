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

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.UserConstructionScript
struct AB_Prj_Ranged_Thrower_Flame_C_UserConstructionScript_Params
{
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.Timeline_0__FinishedFunc
struct AB_Prj_Ranged_Thrower_Flame_C_Timeline_0__FinishedFunc_Params
{
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.Timeline_0__UpdateFunc
struct AB_Prj_Ranged_Thrower_Flame_C_Timeline_0__UpdateFunc_Params
{
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveTick
struct AB_Prj_Ranged_Thrower_Flame_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveDestroyed
struct AB_Prj_Ranged_Thrower_Flame_C_ReceiveDestroyed_Params
{
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.CustomEvent_1_2
struct AB_Prj_Ranged_Thrower_Flame_C_CustomEvent_1_2_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.OnExploded
struct AB_Prj_Ranged_Thrower_Flame_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveHit
struct AB_Prj_Ranged_Thrower_Flame_C_ReceiveHit_Params
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

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.CustomEvent
struct AB_Prj_Ranged_Thrower_Flame_C_CustomEvent_Params
{
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.BndEvt__DestroyRadius_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct AB_Prj_Ranged_Thrower_Flame_C_BndEvt__DestroyRadius_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveBeginPlay
struct AB_Prj_Ranged_Thrower_Flame_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.OnStop
struct AB_Prj_Ranged_Thrower_Flame_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.OnBounce
struct AB_Prj_Ranged_Thrower_Flame_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ExecuteUbergraph_B_Prj_Ranged_Thrower_Flame
struct AB_Prj_Ranged_Thrower_Flame_C_ExecuteUbergraph_B_Prj_Ranged_Thrower_Flame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
