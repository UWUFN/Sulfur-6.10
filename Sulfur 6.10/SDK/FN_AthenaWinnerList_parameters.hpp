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

// Function AthenaWinnerList.AthenaWinnerList_C.OnRep_isWinner
struct UAthenaWinnerList_C_OnRep_isWinner_Params
{
};

// Function AthenaWinnerList.AthenaWinnerList_C.OnWinnersAnnounced
struct UAthenaWinnerList_C_OnWinnersAnnounced_Params
{
	struct FAthenaWinnerInfo*                          WinnerInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaWinnerList.AthenaWinnerList_C.UpdateWinnerList
struct UAthenaWinnerList_C_UpdateWinnerList_Params
{
};

// Function AthenaWinnerList.AthenaWinnerList_C.ExecuteUbergraph_AthenaWinnerList
struct UAthenaWinnerList_C_ExecuteUbergraph_AthenaWinnerList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
