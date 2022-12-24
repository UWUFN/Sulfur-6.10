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

// Function AnimationSharing.AnimationSharingManager.UnregisterActor
struct UAnimationSharingManager_UnregisterActor_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeleton
struct UAnimationSharingManager_RegisterActorWithSkeleton_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeleton*                                   SharingSkeleton;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.RegisterActor
struct UAnimationSharingManager_RegisterActor_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.GetManagerForWorld
struct UAnimationSharingManager_GetManagerForWorld_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationSharingManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.GetManagerForActor
struct UAnimationSharingManager_GetManagerForActor_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationSharingManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingManager.AnimSharingEnabled
struct UAnimationSharingManager_AnimSharingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
struct UAnimationSharingStateProcessor_ProcessActorState_Params
{
	int                                                OutState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OnDemandState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldProcess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
struct UAnimationSharingStateProcessor_GetAnimationStateEnum_Params
{
	class UEnum*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
