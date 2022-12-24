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

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateKeybindWidget
struct UVoteUpdateNotificationWidget_C_UpdateKeybindWidget_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UnbindEvents
struct UVoteUpdateNotificationWidget_C_UnbindEvents_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.BindEvents
struct UVoteUpdateNotificationWidget_C_BindEvents_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteTimer
struct UVoteUpdateNotificationWidget_C_UpdateVoteTimer_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ClearVoteTimer
struct UVoteUpdateNotificationWidget_C_ClearVoteTimer_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetupVoteTimer
struct UVoteUpdateNotificationWidget_C_SetupVoteTimer_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetupText
struct UVoteUpdateNotificationWidget_C_SetupText_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteAction
struct UVoteUpdateNotificationWidget_C_UpdateVoteAction_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteCounts
struct UVoteUpdateNotificationWidget_C_UpdateVoteCounts_Params
{
	int                                                YesVoteCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NoVoteCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteUpdated
struct UVoteUpdateNotificationWidget_C_OnVoteUpdated_Params
{
	EFortVoteType*                                     VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               YesVoteCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NoVoteCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteStarted
struct UVoteUpdateNotificationWidget_C_OnVoteStarted_Params
{
	EFortVoteType*                                     VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortVoteArbitratorType*                           ArbitratorType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               YesVoteCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NoVoteCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteEnded
struct UVoteUpdateNotificationWidget_C_OnVoteEnded_Params
{
	EFortVoteType*                                     VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortVoteArbitratorType*                           ArbitratorType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              VoteSucceeded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Construct
struct UVoteUpdateNotificationWidget_C_Construct_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
struct UVoteUpdateNotificationWidget_C_BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Destruct
struct UVoteUpdateNotificationWidget_C_Destruct_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.HandleOnOpenVoteDialog
struct UVoteUpdateNotificationWidget_C_HandleOnOpenVoteDialog_Params
{
};

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ExecuteUbergraph_VoteUpdateNotificationWidget
struct UVoteUpdateNotificationWidget_C_ExecuteUbergraph_VoteUpdateNotificationWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
