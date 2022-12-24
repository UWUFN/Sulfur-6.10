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

// Function Athena_PlayerController.Athena_PlayerController_C.IsLocalPlayerFriendsWithSquadMember
struct AAthena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember_Params
{
	class AFortPlayerState**                           SquadMember;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
struct AAthena_PlayerController_C_UserConstructionScript_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
struct AAthena_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
struct AAthena_PlayerController_C_PlayWinEffects_Params
{
	class APawn**                                      FinisherPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWeaponItemDefinition**                  FinishingWeapon;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDeathCause*                                       DeathCause;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay
struct AAthena_PlayerController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music
struct AAthena_PlayerController_C_Start_Victory_Royale_Music_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded
struct AAthena_PlayerController_C_OnMusicPackLoaded_Params
{
	class UAthenaMusicPackItemDefinition*              NewMusicPack;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
struct AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
