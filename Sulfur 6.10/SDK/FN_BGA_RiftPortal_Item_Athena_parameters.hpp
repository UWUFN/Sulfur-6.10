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

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.UseRiftQuestUpdate
struct ABGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate_Params
{
	class AController*                                 InController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.CheckForRiftLocUpdate
struct ABGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate_Params
{
	class AController*                                 InController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_PlayerPawn
struct ABGA_RiftPortal_Item_Athena_C_OnRep_PlayerPawn_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_Vehicle
struct ABGA_RiftPortal_Item_Athena_C_OnRep_Vehicle_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_TeleportLocation
struct ABGA_RiftPortal_Item_Athena_C_OnRep_TeleportLocation_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayExpandOrCollapseAudio
struct ABGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio_Params
{
	bool                                               Expand;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.UserConstructionScript
struct ABGA_RiftPortal_Item_Athena_C_UserConstructionScript_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__FinishedFunc
struct ABGA_RiftPortal_Item_Athena_C_Audio_RiftDestroyed__FinishedFunc_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__UpdateFunc
struct ABGA_RiftPortal_Item_Athena_C_Audio_RiftDestroyed__UpdateFunc_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__FinishedFunc
struct ABGA_RiftPortal_Item_Athena_C_VectorScale__FinishedFunc_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__UpdateFunc
struct ABGA_RiftPortal_Item_Athena_C_VectorScale__UpdateFunc_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__FinishedFunc
struct ABGA_RiftPortal_Item_Athena_C_FragmentMovement__FinishedFunc_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__UpdateFunc
struct ABGA_RiftPortal_Item_Athena_C_FragmentMovement__UpdateFunc_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.DestroyRift
struct ABGA_RiftPortal_Item_Athena_C_DestroyRift_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ReceiveBeginPlay
struct ABGA_RiftPortal_Item_Athena_C_ReceiveBeginPlay_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayTeleportFX
struct ABGA_RiftPortal_Item_Athena_C_PlayTeleportFX_Params
{
	struct FVector                                     PlayerLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayCosmeticFX
struct ABGA_RiftPortal_Item_Athena_C_PlayCosmeticFX_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OverlappingOnBeginPlay
struct ABGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleTeleportEvent
struct ABGA_RiftPortal_Item_Athena_C_VehicleTeleportEvent_Params
{
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.NotifyTeleportedVehicle
struct ABGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle_Params
{
	class AFortAthenaVehicle**                         Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlaylistLoaded
struct ABGA_RiftPortal_Item_Athena_C_PlaylistLoaded_Params
{
	struct FName                                       PlaylistName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleInteractionFailed
struct ABGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed_Params
{
	class AFortPlayerPawnAthena*                       FortPlayerPawnAthena;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ExecuteUbergraph_BGA_RiftPortal_Item_Athena
struct ABGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
