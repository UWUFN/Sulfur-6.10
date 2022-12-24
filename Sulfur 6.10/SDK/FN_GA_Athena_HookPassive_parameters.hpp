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

// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.OnRep_AmmoReserves
struct UGA_Athena_HookPassive_C_OnRep_AmmoReserves_Params
{
};

// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_ActivateAbility
struct UGA_Athena_HookPassive_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_OnEndAbility
struct UGA_Athena_HookPassive_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.ExecuteUbergraph_GA_Athena_HookPassive
struct UGA_Athena_HookPassive_C_ExecuteUbergraph_GA_Athena_HookPassive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
