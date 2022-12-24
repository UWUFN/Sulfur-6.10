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

// Function CubeOverlapActor.CubeOverlapActor_C.GetSocketClosestToTarget
struct ACubeOverlapActor_C_GetSocketClosestToTarget_Params
{
	class AActor*                                      TargetPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtDirection;                                          // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function CubeOverlapActor.CubeOverlapActor_C.UserConstructionScript
struct ACubeOverlapActor_C_UserConstructionScript_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.CubeRetaliationGlow__FinishedFunc
struct ACubeOverlapActor_C_CubeRetaliationGlow__FinishedFunc_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.CubeRetaliationGlow__UpdateFunc
struct ACubeOverlapActor_C_CubeRetaliationGlow__UpdateFunc_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.CubeBounceFlash__FinishedFunc
struct ACubeOverlapActor_C_CubeBounceFlash__FinishedFunc_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.CubeBounceFlash__UpdateFunc
struct ACubeOverlapActor_C_CubeBounceFlash__UpdateFunc_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.ZapPlayer
struct ACubeOverlapActor_C_ZapPlayer_Params
{
	class AFortPlayerPawn*                             InstigatingPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CubeOverlapActor.CubeOverlapActor_C.SpawnGC
struct ACubeOverlapActor_C_SpawnGC_Params
{
	class AActor*                                      GCTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CubeOverlapActor.CubeOverlapActor_C.CubeRetaliationTelegraph
struct ACubeOverlapActor_C_CubeRetaliationTelegraph_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.CubeBounceFX
struct ACubeOverlapActor_C_CubeBounceFX_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CubeOverlapActor.CubeOverlapActor_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ACubeOverlapActor_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CubeOverlapActor.CubeOverlapActor_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ACubeOverlapActor_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CubeOverlapActor.CubeOverlapActor_C.TraceDownward
struct ACubeOverlapActor_C_TraceDownward_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.ReceiveBeginPlay
struct ACubeOverlapActor_C_ReceiveBeginPlay_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.CubeRuneWub
struct ACubeOverlapActor_C_CubeRuneWub_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.ZapVehicle
struct ACubeOverlapActor_C_ZapVehicle_Params
{
	class AFortAthenaVehicle*                          Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CubeOverlapActor.CubeOverlapActor_C.ReceiveDestroyed
struct ACubeOverlapActor_C_ReceiveDestroyed_Params
{
};

// Function CubeOverlapActor.CubeOverlapActor_C.ExecuteUbergraph_CubeOverlapActor
struct ACubeOverlapActor_C_ExecuteUbergraph_CubeOverlapActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
