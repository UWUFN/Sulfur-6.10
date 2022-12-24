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

// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.K2_CanActivateAbility
struct UGA_Athena_Rift_Item_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.Completed_1B4C20DD4792D45069FE6C8D47581114
struct UGA_Athena_Rift_Item_C_Completed_1B4C20DD4792D45069FE6C8D47581114_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.Cancelled_1B4C20DD4792D45069FE6C8D47581114
struct UGA_Athena_Rift_Item_C_Cancelled_1B4C20DD4792D45069FE6C8D47581114_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.Triggered_1B4C20DD4792D45069FE6C8D47581114
struct UGA_Athena_Rift_Item_C_Triggered_1B4C20DD4792D45069FE6C8D47581114_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.K2_ActivateAbility
struct UGA_Athena_Rift_Item_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.K2_OnEndAbility
struct UGA_Athena_Rift_Item_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.ExecuteUbergraph_GA_Athena_Rift_Item
struct UGA_Athena_Rift_Item_C_ExecuteUbergraph_GA_Athena_Rift_Item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
