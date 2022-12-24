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

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.IsSinglePlayerVote
struct UVoteResultNotificationWidget_C_IsSinglePlayerVote_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.Initialize
struct UVoteResultNotificationWidget_C_Initialize_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortVoteArbitratorType                            ArbitratorType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               VoteSucceeded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.Construct
struct UVoteResultNotificationWidget_C_Construct_Params
{
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.HandleShowWidgetAnimFinished
struct UVoteResultNotificationWidget_C_HandleShowWidgetAnimFinished_Params
{
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.OnVoteStarted
struct UVoteResultNotificationWidget_C_OnVoteStarted_Params
{
	EFortVoteType*                                     VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortVoteArbitratorType*                           ArbitratorType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               YesVoteCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NoVoteCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.OnVoteEnded
struct UVoteResultNotificationWidget_C_OnVoteEnded_Params
{
	EFortVoteType*                                     VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortVoteArbitratorType*                           ArbitratorType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              VoteSucceeded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.ExecuteUbergraph_VoteResultNotificationWidget
struct UVoteResultNotificationWidget_C_ExecuteUbergraph_VoteResultNotificationWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
