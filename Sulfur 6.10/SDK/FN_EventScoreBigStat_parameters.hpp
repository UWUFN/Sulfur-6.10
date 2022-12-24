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

// Function EventScoreBigStat.EventScoreBigStat_C.SetData
struct UEventScoreBigStat_C_SetData_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventScoreBigStat.EventScoreBigStat_C.SetGoalScore
struct UEventScoreBigStat_C_SetGoalScore_Params
{
	int                                                GoalScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventScoreBigStat.EventScoreBigStat_C.ExecuteUbergraph_EventScoreBigStat
struct UEventScoreBigStat_C_ExecuteUbergraph_EventScoreBigStat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
