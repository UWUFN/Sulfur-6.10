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

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.Completed_3F4229A2402812AB9F486AB1B9767783
struct UGA_Athena_SlurpJuice_Trigger_C_Completed_3F4229A2402812AB9F486AB1B9767783_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.Cancelled_3F4229A2402812AB9F486AB1B9767783
struct UGA_Athena_SlurpJuice_Trigger_C_Cancelled_3F4229A2402812AB9F486AB1B9767783_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.Triggered_3F4229A2402812AB9F486AB1B9767783
struct UGA_Athena_SlurpJuice_Trigger_C_Triggered_3F4229A2402812AB9F486AB1B9767783_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.K2_ActivateAbility
struct UGA_Athena_SlurpJuice_Trigger_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.K2_OnEndAbility
struct UGA_Athena_SlurpJuice_Trigger_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C.ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger
struct UGA_Athena_SlurpJuice_Trigger_C_ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
