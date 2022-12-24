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

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.SetTrajectorySpline
struct ABP_Thrower_Trajectory_C_SetTrajectorySpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.UserConstructionScript
struct ABP_Thrower_Trajectory_C_UserConstructionScript_Params
{
};

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.SetTrajectoryFromNative
struct ABP_Thrower_Trajectory_C_SetTrajectoryFromNative_Params
{
	TArray<struct FVector>*                            SplinePoints;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>*                            SplineTangents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.BndEvt__Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_Thrower_Trajectory_C_BndEvt__Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.Change Material
struct ABP_Thrower_Trajectory_C_Change_Material_Params
{
};

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.ReceiveBeginPlay
struct ABP_Thrower_Trajectory_C_ReceiveBeginPlay_Params
{
};

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Thrower_Trajectory_C_BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Thrower_Trajectory_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.Decal Timer
struct ABP_Thrower_Trajectory_C_Decal_Timer_Params
{
};

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.ExecuteUbergraph_BP_Thrower_Trajectory
struct ABP_Thrower_Trajectory_C_ExecuteUbergraph_BP_Thrower_Trajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
