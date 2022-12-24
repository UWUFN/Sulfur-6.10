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

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.UserConstructionScript
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_UserConstructionScript_Params
{
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Animate_Ninja_ShadowStance_Dissolve__FinishedFunc_Params
{
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Animate_Ninja_ShadowStance_Dissolve__UpdateFunc_Params
{
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Shadow Stance Dissolve Timeline
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_Shadow_Stance_Dissolve_Timeline_Params
{
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.K2_HandleGameplayCue
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance
struct AGC_Abilities_Activation_Ninja_ShadowStance_C_ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
