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

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ReduceChannelingFX
struct ABGA_DudeBro_Area_Effect_C_ReduceChannelingFX_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.GetSocketClosestToTarget
struct ABGA_DudeBro_Area_Effect_C_GetSocketClosestToTarget_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtDirection;                                          // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ToyExit
struct ABGA_DudeBro_Area_Effect_C_ToyExit_Params
{
	class APhysicsBall_Master_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ToyEnter
struct ABGA_DudeBro_Area_Effect_C_ToyEnter_Params
{
	class APhysicsBall_Master_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ProjExit
struct ABGA_DudeBro_Area_Effect_C_ProjExit_Params
{
	class AFortProjectileBase*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ProjEnter
struct ABGA_DudeBro_Area_Effect_C_ProjEnter_Params
{
	class AFortProjectileBase*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.OnRep_EnableSafeZone
struct ABGA_DudeBro_Area_Effect_C_OnRep_EnableSafeZone_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.IsIslandAtRune
struct ABGA_DudeBro_Area_Effect_C_IsIslandAtRune_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.OnRep_GroundLocation
struct ABGA_DudeBro_Area_Effect_C_OnRep_GroundLocation_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.SetVortexBaseVisibilitiesFX
struct ABGA_DudeBro_Area_Effect_C_SetVortexBaseVisibilitiesFX_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ImpulseAndSetSkydiveUpperDownward
struct ABGA_DudeBro_Area_Effect_C_ImpulseAndSetSkydiveUpperDownward_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ImpulseAndSetSkydiveLower
struct ABGA_DudeBro_Area_Effect_C_ImpulseAndSetSkydiveLower_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ImpulseAndSetSkydiveUpper
struct ABGA_DudeBro_Area_Effect_C_ImpulseAndSetSkydiveUpper_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.UserConstructionScript
struct ABGA_DudeBro_Area_Effect_C_UserConstructionScript_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.Timeline_0__FinishedFunc
struct ABGA_DudeBro_Area_Effect_C_Timeline_0__FinishedFunc_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.Timeline_0__UpdateFunc
struct ABGA_DudeBro_Area_Effect_C_Timeline_0__UpdateFunc_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeRetaliatingTimeline__FinishedFunc
struct ABGA_DudeBro_Area_Effect_C_CubeRetaliatingTimeline__FinishedFunc_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeRetaliatingTimeline__UpdateFunc
struct ABGA_DudeBro_Area_Effect_C_CubeRetaliatingTimeline__UpdateFunc_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ReceiveBeginPlay
struct ABGA_DudeBro_Area_Effect_C_ReceiveBeginPlay_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BeginChanneling
struct ABGA_DudeBro_Area_Effect_C_BeginChanneling_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.NoChanneling
struct ABGA_DudeBro_Area_Effect_C_NoChanneling_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.Trace
struct ABGA_DudeBro_Area_Effect_C_Trace_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ToggleBaseVisibility
struct ABGA_DudeBro_Area_Effect_C_ToggleBaseVisibility_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.On Channeling Zap Audio
struct ABGA_DudeBro_Area_Effect_C_On_Channeling_Zap_Audio_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_DudeBro_Area_Effect_C_BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABGA_DudeBro_Area_Effect_C_BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_DudeBro_Area_Effect_C_BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABGA_DudeBro_Area_Effect_C_BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeBounceFX
struct ABGA_DudeBro_Area_Effect_C_CubeBounceFX_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeRetaliationTelegraph
struct ABGA_DudeBro_Area_Effect_C_CubeRetaliationTelegraph_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ZapPlayer
struct ABGA_DudeBro_Area_Effect_C_ZapPlayer_Params
{
	class AFortPlayerPawn*                             InstigatingPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.TraceDownward
struct ABGA_DudeBro_Area_Effect_C_TraceDownward_Params
{
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ZapVehicle
struct ABGA_DudeBro_Area_Effect_C_ZapVehicle_Params
{
	class AFortAthenaVehicle*                          Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.SpawnGC
struct ABGA_DudeBro_Area_Effect_C_SpawnGC_Params
{
	class AActor*                                      GCTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.setupEffects
struct ABGA_DudeBro_Area_Effect_C_setupEffects_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.SetupGroundLocation
struct ABGA_DudeBro_Area_Effect_C_SetupGroundLocation_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ExecuteUbergraph_BGA_DudeBro_Area_Effect
struct ABGA_DudeBro_Area_Effect_C_ExecuteUbergraph_BGA_DudeBro_Area_Effect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
