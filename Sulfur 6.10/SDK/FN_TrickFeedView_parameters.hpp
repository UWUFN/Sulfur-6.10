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

// Function TrickFeedView.TrickFeedView_C.FadeOutMusic
struct UTrickFeedView_C_FadeOutMusic_Params
{
};

// Function TrickFeedView.TrickFeedView_C.GetCalloutText
struct UTrickFeedView_C_GetCalloutText_Params
{
	struct FText                                       Callout;                                                  // (Parm, OutParm)
};

// Function TrickFeedView.TrickFeedView_C.HIdeTrickUI
struct UTrickFeedView_C_HIdeTrickUI_Params
{
};

// Function TrickFeedView.TrickFeedView_C.AddTrick
struct UTrickFeedView_C_AddTrick_Params
{
	struct FText*                                      TrickName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TrickFeedView.TrickFeedView_C.UpdateScore
struct UTrickFeedView_C_UpdateScore_Params
{
	class UFortVehicleTrickSet**                       TrickSet;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrickFeedView.TrickFeedView_C.UpdateMultiplier
struct UTrickFeedView_C_UpdateMultiplier_Params
{
	int*                                               Multiplier;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrickFeedView.TrickFeedView_C.SimulateTrick
struct UTrickFeedView_C_SimulateTrick_Params
{
};

// Function TrickFeedView.TrickFeedView_C.PreConstruct
struct UTrickFeedView_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrickFeedView.TrickFeedView_C.CritStyleEvent
struct UTrickFeedView_C_CritStyleEvent_Params
{
	bool                                               isCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrickFeedView.TrickFeedView_C.ToggleCompleteStyle
struct UTrickFeedView_C_ToggleCompleteStyle_Params
{
	bool                                               isComplete;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TrickFeedView.TrickFeedView_C.EventTrickCompliment
struct UTrickFeedView_C_EventTrickCompliment_Params
{
};

// Function TrickFeedView.TrickFeedView_C.UpdateTrickStats
struct UTrickFeedView_C_UpdateTrickStats_Params
{
	struct FText*                                      StatsText;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TrickFeedView.TrickFeedView_C.TrickSequenceStarted
struct UTrickFeedView_C_TrickSequenceStarted_Params
{
};

// Function TrickFeedView.TrickFeedView_C.TrickSequenceFailed
struct UTrickFeedView_C_TrickSequenceFailed_Params
{
};

// Function TrickFeedView.TrickFeedView_C.TrickSequenceComplete
struct UTrickFeedView_C_TrickSequenceComplete_Params
{
};

// Function TrickFeedView.TrickFeedView_C.TrickSequenceCanceled
struct UTrickFeedView_C_TrickSequenceCanceled_Params
{
};

// Function TrickFeedView.TrickFeedView_C.BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTrickFeedView_C_BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TrickFeedView.TrickFeedView_C.BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UTrickFeedView_C_BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function TrickFeedView.TrickFeedView_C.ExecuteUbergraph_TrickFeedView
struct UTrickFeedView_C_ExecuteUbergraph_TrickFeedView_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
