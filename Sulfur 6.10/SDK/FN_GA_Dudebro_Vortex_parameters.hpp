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

// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.EventReceived_C064A1B545D792D62509919D8FFE8FBD
struct UGA_DudeBro_Vortex_C_EventReceived_C064A1B545D792D62509919D8FFE8FBD_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.EventReceived_600270C649671D219DB85584BE0265BC
struct UGA_DudeBro_Vortex_C_EventReceived_600270C649671D219DB85584BE0265BC_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.EventReceived_0A7014874570D996FD13889185F02E0A
struct UGA_DudeBro_Vortex_C_EventReceived_0A7014874570D996FD13889185F02E0A_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.K2_ActivateAbility
struct UGA_DudeBro_Vortex_C_K2_ActivateAbility_Params
{
};

// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.K2_OnEndAbility
struct UGA_DudeBro_Vortex_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.PlayerCapsuleHit
struct UGA_DudeBro_Vortex_C_PlayerCapsuleHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.ExecuteUbergraph_GA_DudeBro_Vortex
struct UGA_DudeBro_Vortex_C_ExecuteUbergraph_GA_DudeBro_Vortex_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
