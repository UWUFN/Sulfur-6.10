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

// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.PlayCueCenteredOnMe
struct AB_PlayerSpawnedBall_C_PlayCueCenteredOnMe_Params
{
	struct FGameplayTag                                GameplayCueToPlay;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Raw_Magnitude;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.UserConstructionScript
struct AB_PlayerSpawnedBall_C_UserConstructionScript_Params
{
};

// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.NotifyToyInstanceOfReuse
struct AB_PlayerSpawnedBall_C_NotifyToyInstanceOfReuse_Params
{
};

// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.StartToyFadeOutDueToNewPlacement
struct AB_PlayerSpawnedBall_C_StartToyFadeOutDueToNewPlacement_Params
{
};

// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyInstance
struct AB_PlayerSpawnedBall_C_InitializeToyInstance_Params
{
	class AFortPlayerController*                       OwningPC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumTimesSummoned;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyPreviewInFrontend
struct AB_PlayerSpawnedBall_C_InitializeToyPreviewInFrontend_Params
{
};

// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.ExecuteUbergraph_B_PlayerSpawnedBall
struct AB_PlayerSpawnedBall_C_ExecuteUbergraph_B_PlayerSpawnedBall_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
