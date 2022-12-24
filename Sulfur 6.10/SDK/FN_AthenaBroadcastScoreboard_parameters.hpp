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

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.UpdateListUI
struct UAthenaBroadcastScoreboard_C_UpdateListUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByState
struct UAthenaBroadcastScoreboard_C_SortByState_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByName
struct UAthenaBroadcastScoreboard_C_SortByName_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByTeam
struct UAthenaBroadcastScoreboard_C_SortByTeam_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByKills
struct UAthenaBroadcastScoreboard_C_SortByKills_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetArrowStates
struct UAthenaBroadcastScoreboard_C_SetArrowStates_Params
{
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetButtonStates
struct UAthenaBroadcastScoreboard_C_SetButtonStates_Params
{
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.IsMapWidgetLocationVisible
struct UAthenaBroadcastScoreboard_C_IsMapWidgetLocationVisible_Params
{
	struct FVector2D*                                  MapWidgetLocation;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.Construct
struct UAthenaBroadcastScoreboard_C_Construct_Params
{
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaBroadcastScoreboard_C_BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaBroadcastScoreboard_C_BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaBroadcastScoreboard_C_BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UAthenaBroadcastScoreboard_C_BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetSortMethod
struct UAthenaBroadcastScoreboard_C_SetSortMethod_Params
{
	EScoreboardSortMethod*                             InSortMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetFocus
struct UAthenaBroadcastScoreboard_C_ResetFocus_Params
{
};

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ExecuteUbergraph_AthenaBroadcastScoreboard
struct UAthenaBroadcastScoreboard_C_ExecuteUbergraph_AthenaBroadcastScoreboard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
