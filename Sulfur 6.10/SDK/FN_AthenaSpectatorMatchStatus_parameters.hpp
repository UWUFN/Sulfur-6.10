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

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.Construct
struct UAthenaSpectatorMatchStatus_C_Construct_Params
{
};

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateMatchTimeText
struct UAthenaSpectatorMatchStatus_C_UpdateMatchTimeText_Params
{
	struct FText*                                      MatchTimeText;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateStormPhaseText
struct UAthenaSpectatorMatchStatus_C_UpdateStormPhaseText_Params
{
	struct FText*                                      SafeZonePhaseTxt;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdatePlayerLocationText
struct UAthenaSpectatorMatchStatus_C_UpdatePlayerLocationText_Params
{
	struct FText*                                      NewLocation;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.ExecuteUbergraph_AthenaSpectatorMatchStatus
struct UAthenaSpectatorMatchStatus_C_ExecuteUbergraph_AthenaSpectatorMatchStatus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
