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

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.SetTeamColor
struct ATrap_Floor_Ice_Athena_C_SetTeamColor_Params
{
};

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.UserConstructionScript
struct ATrap_Floor_Ice_Athena_C_UserConstructionScript_Params
{
};

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.OnReloadEnd
struct ATrap_Floor_Ice_Athena_C_OnReloadEnd_Params
{
};

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.OnPlaced
struct ATrap_Floor_Ice_Athena_C_OnPlaced_Params
{
};

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.OnFinishedBuilding
struct ATrap_Floor_Ice_Athena_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_Ice_Athena_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.OnOutOfDurability
struct ATrap_Floor_Ice_Athena_C_OnOutOfDurability_Params
{
};

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.OnWorldReady
struct ATrap_Floor_Ice_Athena_C_OnWorldReady_Params
{
};

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.OnInitTeam
struct ATrap_Floor_Ice_Athena_C_OnInitTeam_Params
{
};

// Function Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C.ExecuteUbergraph_Trap_Floor_Ice_Athena
struct ATrap_Floor_Ice_Athena_C_ExecuteUbergraph_Trap_Floor_Ice_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
