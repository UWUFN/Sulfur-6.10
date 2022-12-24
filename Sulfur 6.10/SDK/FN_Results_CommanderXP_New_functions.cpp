// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Results_CommanderXP_New.Results_CommanderXP_New_C.UpdateDisplayedReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::UpdateDisplayedReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.UpdateDisplayedReward");

	UResults_CommanderXP_New_C_UpdateDisplayedReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.GetCurrentLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentLevel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXP_New_C::GetCurrentLevel(int* CurrentLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.GetCurrentLevel");

	UResults_CommanderXP_New_C_GetCurrentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentLevel != nullptr)
		*CurrentLevel = params.CurrentLevel;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.GetAccountLevelUpReward
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AccountLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Icon                           (Parm, OutParm)
// bool                           ValidIcon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UFortItemDefinition*     ItemDef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXP_New_C::GetAccountLevelUpReward(int AccountLevel, struct FSlateBrush* Icon, bool* ValidIcon, class UFortItemDefinition** ItemDef, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.GetAccountLevelUpReward");

	UResults_CommanderXP_New_C_GetAccountLevelUpReward_Params params;
	params.AccountLevel = AccountLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (ValidIcon != nullptr)
		*ValidIcon = params.ValidIcon;
	if (ItemDef != nullptr)
		*ItemDef = params.ItemDef;
	if (Quantity != nullptr)
		*Quantity = params.Quantity;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.Focus");

	UResults_CommanderXP_New_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.PlayAnimationCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_CommanderXP_New_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.PlayAnimationCommon");

	UResults_CommanderXP_New_C_PlayAnimationCommon_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::SetSkippingToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.SetSkippingToEnd");

	UResults_CommanderXP_New_C_SetSkippingToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::SkipToFinalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.SkipToFinalState");

	UResults_CommanderXP_New_C_SkipToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.UpdatePointsText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::UpdatePointsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.UpdatePointsText");

	UResults_CommanderXP_New_C_UpdatePointsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.UpdatePointsForLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXP_New_C::UpdatePointsForLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.UpdatePointsForLevel");

	UResults_CommanderXP_New_C_UpdatePointsForLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*      InScoreReport                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UResults_TeamTotalScore_C* TeamTotalScore                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_CommanderXP_New_C::Initialize(class UFortUIScoreReport* InScoreReport, class UResults_TeamTotalScore_C* TeamTotalScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.Initialize");

	UResults_CommanderXP_New_C_Initialize_Params params;
	params.InScoreReport = InScoreReport;
	params.TeamTotalScore = TeamTotalScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXP_New_C::BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature");

	UResults_CommanderXP_New_C_BndEvt__Results_CommanderXPBar_K2Node_ComponentBoundEvent_1_LeveledUp__DelegateSignature_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_New_C::BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_New_C_BndEvt__Anim_SkillPointIncrementIntro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::Intro_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.Intro Sequence");

	UResults_CommanderXP_New_C_Intro_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_New_C::BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature");

	UResults_CommanderXP_New_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_New_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_New_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Count Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::Count_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.Count Sequence");

	UResults_CommanderXP_New_C_Count_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_New_C::BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature");

	UResults_CommanderXP_New_C_BndEvt__ResultsXPBar_K2Node_ComponentBoundEvent_3_CountFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_New_C::BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_New_C_BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_5_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_New_C::BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_New_C_BndEvt__Anim_SkillPointIncrement2_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.GateSkillPointAnimation1
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::GateSkillPointAnimation1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.GateSkillPointAnimation1");

	UResults_CommanderXP_New_C_GateSkillPointAnimation1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.GateSkillPointAnimation2
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::GateSkillPointAnimation2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.GateSkillPointAnimation2");

	UResults_CommanderXP_New_C_GateSkillPointAnimation2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.ResetGateSkillPointAnimation2
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::ResetGateSkillPointAnimation2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.ResetGateSkillPointAnimation2");

	UResults_CommanderXP_New_C_ResetGateSkillPointAnimation2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.ResetGateSkillPointAnimation1
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::ResetGateSkillPointAnimation1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.ResetGateSkillPointAnimation1");

	UResults_CommanderXP_New_C_ResetGateSkillPointAnimation1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Skip To End Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::Skip_To_End_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.Skip To End Sequence");

	UResults_CommanderXP_New_C_Skip_To_End_Sequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Skip
// (BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::Skip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.Skip");

	UResults_CommanderXP_New_C_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResults_CommanderXP_New_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UResults_CommanderXP_New_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_CommanderXP_New_C::BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UResults_CommanderXP_New_C_BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.ExecuteUbergraph_Results_CommanderXP_New
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResults_CommanderXP_New_C::ExecuteUbergraph_Results_CommanderXP_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.ExecuteUbergraph_Results_CommanderXP_New");

	UResults_CommanderXP_New_C_ExecuteUbergraph_Results_CommanderXP_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_CommanderXP_New.Results_CommanderXP_New_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResults_CommanderXP_New_C::Finished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_CommanderXP_New.Results_CommanderXP_New_C.Finished__DelegateSignature");

	UResults_CommanderXP_New_C_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
