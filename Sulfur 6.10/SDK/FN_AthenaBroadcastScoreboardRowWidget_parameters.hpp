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

// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.Refresh
struct UAthenaBroadcastScoreboardRowWidget_C_Refresh_Params
{
};

// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.OnEntryDataSet
struct UAthenaBroadcastScoreboardRowWidget_C_OnEntryDataSet_Params
{
};

// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.Tick
struct UAthenaBroadcastScoreboardRowWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.BP_OnClicked
struct UAthenaBroadcastScoreboardRowWidget_C_BP_OnClicked_Params
{
};

// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.PreConstruct
struct UAthenaBroadcastScoreboardRowWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.ExecuteUbergraph_AthenaBroadcastScoreboardRowWidget
struct UAthenaBroadcastScoreboardRowWidget_C_ExecuteUbergraph_AthenaBroadcastScoreboardRowWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
