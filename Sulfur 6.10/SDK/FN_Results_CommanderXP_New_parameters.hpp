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

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.UpdateDisplayedReward
struct UResults_CommanderXP_New_C_UpdateDisplayedReward_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.GetCurrentLevel
struct UResults_CommanderXP_New_C_GetCurrentLevel_Params
{
	int                                                CurrentLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.GetAccountLevelUpReward
struct UResults_CommanderXP_New_C_GetAccountLevelUpReward_Params
{
	int                                                AccountLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Icon;                                                     // (Parm, OutParm)
	bool                                               ValidIcon;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition*                         ItemDef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Focus
struct UResults_CommanderXP_New_C_Focus_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.PlayAnimationCommon
struct UResults_CommanderXP_New_C_PlayAnimationCommon_Params
{
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.SetSkippingToEnd
struct UResults_CommanderXP_New_C_SetSkippingToEnd_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.SkipToFinalState
struct UResults_CommanderXP_New_C_SkipToFinalState_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.UpdatePointsText
struct UResults_CommanderXP_New_C_UpdatePointsText_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.UpdatePointsForLevel
struct UResults_CommanderXP_New_C_UpdatePointsForLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Initialize
struct UResults_CommanderXP_New_C_Initialize_Params
{
	class UFortUIScoreReport*                          InScoreReport;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UResults_TeamTotalScore_C*                   TeamTotalScore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature
struct UResults_CommanderXP_New_C_BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature_Params
{
	int                                                NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_New_C_BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Intro Sequence
struct UResults_CommanderXP_New_C_Intro_Sequence_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
struct UResults_CommanderXP_New_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_New_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Count Sequence
struct UResults_CommanderXP_New_C_Count_Sequence_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature
struct UResults_CommanderXP_New_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_New_C_BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_New_C_BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.GateSkillPointAnimation1
struct UResults_CommanderXP_New_C_GateSkillPointAnimation1_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.GateSkillPointAnimation2
struct UResults_CommanderXP_New_C_GateSkillPointAnimation2_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.ResetGateSkillPointAnimation2
struct UResults_CommanderXP_New_C_ResetGateSkillPointAnimation2_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.ResetGateSkillPointAnimation1
struct UResults_CommanderXP_New_C_ResetGateSkillPointAnimation1_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Skip To End Sequence
struct UResults_CommanderXP_New_C_Skip_To_End_Sequence_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Skip
struct UResults_CommanderXP_New_C_Skip_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UResults_CommanderXP_New_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_CommanderXP_New_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.ExecuteUbergraph_Results_CommanderXP_New
struct UResults_CommanderXP_New_C_ExecuteUbergraph_Results_CommanderXP_New_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Finished__DelegateSignature
struct UResults_CommanderXP_New_C_Finished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
