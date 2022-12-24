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

// Function TrickFeedView.TrickFeedView_C.FadeOutMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UTrickFeedView_C::FadeOutMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.FadeOutMusic");

	UTrickFeedView_C_FadeOutMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.GetCalloutText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Callout                        (Parm, OutParm)

void UTrickFeedView_C::GetCalloutText(struct FText* Callout)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.GetCalloutText");

	UTrickFeedView_C_GetCalloutText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Callout != nullptr)
		*Callout = params.Callout;
}


// Function TrickFeedView.TrickFeedView_C.HIdeTrickUI
// (BlueprintCallable, BlueprintEvent)

void UTrickFeedView_C::HIdeTrickUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.HIdeTrickUI");

	UTrickFeedView_C_HIdeTrickUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.AddTrick
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  TrickName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTrickFeedView_C::AddTrick(struct FText* TrickName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.AddTrick");

	UTrickFeedView_C_AddTrick_Params params;
	params.TrickName = TrickName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.UpdateScore
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortVehicleTrickSet**   TrickSet                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TotalScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrickFeedView_C::UpdateScore(class UFortVehicleTrickSet** TrickSet, int* TotalScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.UpdateScore");

	UTrickFeedView_C_UpdateScore_Params params;
	params.TrickSet = TrickSet;
	params.TotalScore = TotalScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.UpdateMultiplier
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Multiplier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrickFeedView_C::UpdateMultiplier(int* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.UpdateMultiplier");

	UTrickFeedView_C_UpdateMultiplier_Params params;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.SimulateTrick
// (BlueprintCallable, BlueprintEvent)

void UTrickFeedView_C::SimulateTrick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.SimulateTrick");

	UTrickFeedView_C_SimulateTrick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrickFeedView_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.PreConstruct");

	UTrickFeedView_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.CritStyleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrickFeedView_C::CritStyleEvent(bool isCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.CritStyleEvent");

	UTrickFeedView_C_CritStyleEvent_Params params;
	params.isCritical = isCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.ToggleCompleteStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isComplete                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrickFeedView_C::ToggleCompleteStyle(bool isComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.ToggleCompleteStyle");

	UTrickFeedView_C_ToggleCompleteStyle_Params params;
	params.isComplete = isComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.EventTrickCompliment
// (BlueprintCallable, BlueprintEvent)

void UTrickFeedView_C::EventTrickCompliment()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.EventTrickCompliment");

	UTrickFeedView_C_EventTrickCompliment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.UpdateTrickStats
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  StatsText                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTrickFeedView_C::UpdateTrickStats(struct FText* StatsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.UpdateTrickStats");

	UTrickFeedView_C_UpdateTrickStats_Params params;
	params.StatsText = StatsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.TrickSequenceStarted
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTrickFeedView_C::TrickSequenceStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.TrickSequenceStarted");

	UTrickFeedView_C_TrickSequenceStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.TrickSequenceFailed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTrickFeedView_C::TrickSequenceFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.TrickSequenceFailed");

	UTrickFeedView_C_TrickSequenceFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.TrickSequenceComplete
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTrickFeedView_C::TrickSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.TrickSequenceComplete");

	UTrickFeedView_C_TrickSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.TrickSequenceCanceled
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTrickFeedView_C::TrickSequenceCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.TrickSequenceCanceled");

	UTrickFeedView_C_TrickSequenceCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTrickFeedView_C::BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTrickFeedView_C_BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UTrickFeedView_C::BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UTrickFeedView_C_BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrickFeedView.TrickFeedView_C.ExecuteUbergraph_TrickFeedView
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrickFeedView_C::ExecuteUbergraph_TrickFeedView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickFeedView.TrickFeedView_C.ExecuteUbergraph_TrickFeedView");

	UTrickFeedView_C_ExecuteUbergraph_TrickFeedView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
