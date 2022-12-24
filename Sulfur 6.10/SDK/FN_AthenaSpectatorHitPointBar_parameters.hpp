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

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.InitializeBar
struct UAthenaSpectatorHitPointBar_C_InitializeBar_Params
{
};

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.PreConstruct
struct UAthenaSpectatorHitPointBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.UpdateBars_BP
struct UAthenaSpectatorHitPointBar_C_UpdateBars_BP_Params
{
};

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDBNOChanged_BP
struct UAthenaSpectatorHitPointBar_C_OnDBNOChanged_BP_Params
{
};

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDBNOChanged
struct UAthenaSpectatorHitPointBar_C_OnDBNOChanged_Params
{
	bool*                                              bInIsDBNO;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnCurrentValueChanged
struct UAthenaSpectatorHitPointBar_C_OnCurrentValueChanged_Params
{
	float*                                             InCurrentValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDeltaValueChanged
struct UAthenaSpectatorHitPointBar_C_OnDeltaValueChanged_Params
{
	float*                                             InDeltaValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.ExecuteUbergraph_AthenaSpectatorHitPointBar
struct UAthenaSpectatorHitPointBar_C_ExecuteUbergraph_AthenaSpectatorHitPointBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
