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

// Function WinnerOverlay_v2.WinnerOverlay_v2_C.PreConstruct
struct UWinnerOverlay_v2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WinnerOverlay_v2.WinnerOverlay_v2_C.Construct
struct UWinnerOverlay_v2_C_Construct_Params
{
};

// Function WinnerOverlay_v2.WinnerOverlay_v2_C.PlayVictoryAnim
struct UWinnerOverlay_v2_C_PlayVictoryAnim_Params
{
	EAthenaVictoryUIType                               GameType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WinnerOverlay_v2.WinnerOverlay_v2_C.ExecuteUbergraph_WinnerOverlay_v2
struct UWinnerOverlay_v2_C_ExecuteUbergraph_WinnerOverlay_v2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
