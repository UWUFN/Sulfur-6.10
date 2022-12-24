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

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetTeamNumbersVisible
struct UAthenaEventMatchScoreboardScreen_C_SetTeamNumbersVisible_Params
{
	bool*                                              InVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetEventScoreVisible
struct UAthenaEventMatchScoreboardScreen_C_SetEventScoreVisible_Params
{
	bool*                                              InVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.ExecuteUbergraph_AthenaEventMatchScoreboardScreen
struct UAthenaEventMatchScoreboardScreen_C_ExecuteUbergraph_AthenaEventMatchScoreboardScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
