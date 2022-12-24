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

// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.ToggleRespawnState
struct UAthenaRespawnIndicator_C_ToggleRespawnState_Params
{
	bool                                               canRespawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.SetVisibilty
struct UAthenaRespawnIndicator_C_SetVisibilty_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.PreConstruct
struct UAthenaRespawnIndicator_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.OnUpdateRespawnState
struct UAthenaRespawnIndicator_C_OnUpdateRespawnState_Params
{
	bool*                                              bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.ExecuteUbergraph_AthenaRespawnIndicator
struct UAthenaRespawnIndicator_C_ExecuteUbergraph_AthenaRespawnIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
