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

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewStatUpdate1Pulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchStatusText_C* TargetWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SkipTextUpdate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchStatusScreen_C::NewStatUpdate1Pulse(class UAthenaEventMatchStatusText_C* TargetWidget, const struct FText& InText, bool SkipTextUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewStatUpdate1Pulse");

	UAthenaEventMatchStatusScreen_C_NewStatUpdate1Pulse_Params params;
	params.TargetWidget = TargetWidget;
	params.InText = InText;
	params.SkipTextUpdate = SkipTextUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewStatUpdate3Pulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchStatusText_C* TargetWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           SkipTextUpdate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchStatusScreen_C::NewStatUpdate3Pulse(class UAthenaEventMatchStatusText_C* TargetWidget, const struct FText& InText, bool SkipTextUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewStatUpdate3Pulse");

	UAthenaEventMatchStatusScreen_C_NewStatUpdate3Pulse_Params params;
	params.TargetWidget = TargetWidget;
	params.InText = InText;
	params.SkipTextUpdate = SkipTextUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewTopScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchStatusText_C* TargetWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaEventMatchStatusScreen_C::NewTopScore(class UAthenaEventMatchStatusText_C* TargetWidget, const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewTopScore");

	UAthenaEventMatchStatusScreen_C_NewTopScore_Params params;
	params.TargetWidget = TargetWidget;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewTopPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMatchStatusTextPlayer_C* TargetWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaEventMatchStatusScreen_C::NewTopPlayer(class UAthenaMatchStatusTextPlayer_C* TargetWidget, const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewTopPlayer");

	UAthenaEventMatchStatusScreen_C_NewTopPlayer_Params params;
	params.TargetWidget = TargetWidget;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMatchTimeText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  MatchTimeText                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateMatchTimeText(struct FText* MatchTimeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMatchTimeText");

	UAthenaEventMatchStatusScreen_C_UpdateMatchTimeText_Params params;
	params.MatchTimeText = MatchTimeText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateCircleRadiusText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  CircleRadiusText               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateCircleRadiusText(struct FText* CircleRadiusText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateCircleRadiusText");

	UAthenaEventMatchStatusScreen_C_UpdateCircleRadiusText_Params params;
	params.CircleRadiusText = CircleRadiusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMostKillsText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  MostKillsText                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateMostKillsText(struct FText* MostKillsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMostKillsText");

	UAthenaEventMatchStatusScreen_C_UpdateMostKillsText_Params params;
	params.MostKillsText = MostKillsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateFastestKillText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  FastestKillText                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  FastestKillTime                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateFastestKillText(struct FText* FastestKillText, struct FText* FastestKillTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateFastestKillText");

	UAthenaEventMatchStatusScreen_C_UpdateFastestKillText_Params params;
	params.FastestKillText = FastestKillText;
	params.FastestKillTime = FastestKillTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaEventMatchStatusScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.Construct");

	UAthenaEventMatchStatusScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateSupplyDropsLootedText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  SupplyDropsLootedText          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateSupplyDropsLootedText(struct FText* SupplyDropsLootedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateSupplyDropsLootedText");

	UAthenaEventMatchStatusScreen_C_UpdateSupplyDropsLootedText_Params params;
	params.SupplyDropsLootedText = SupplyDropsLootedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateShotsFiredText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ShotsFiredText                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateShotsFiredText(struct FText* ShotsFiredText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateShotsFiredText");

	UAthenaEventMatchStatusScreen_C_UpdateShotsFiredText_Params params;
	params.ShotsFiredText = ShotsFiredText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePiecesDestroyedText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  PiecesDestroyedText            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdatePiecesDestroyedText(struct FText* PiecesDestroyedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePiecesDestroyedText");

	UAthenaEventMatchStatusScreen_C_UpdatePiecesDestroyedText_Params params;
	params.PiecesDestroyedText = PiecesDestroyedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePiecesBuiltText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  PiecesBuiltText                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdatePiecesBuiltText(struct FText* PiecesBuiltText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePiecesBuiltText");

	UAthenaEventMatchStatusScreen_C_UpdatePiecesBuiltText_Params params;
	params.PiecesBuiltText = PiecesBuiltText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateLongestEliminationText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  LongestEliminationText         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateLongestEliminationText(struct FText* LongestEliminationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateLongestEliminationText");

	UAthenaEventMatchStatusScreen_C_UpdateLongestEliminationText_Params params;
	params.LongestEliminationText = LongestEliminationText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageTakenText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  DamageTakenText                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateDamageTakenText(struct FText* DamageTakenText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageTakenText");

	UAthenaEventMatchStatusScreen_C_UpdateDamageTakenText_Params params;
	params.DamageTakenText = DamageTakenText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageHealedText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  DamageHealedText               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateDamageHealedText(struct FText* DamageHealedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageHealedText");

	UAthenaEventMatchStatusScreen_C_UpdateDamageHealedText_Params params;
	params.DamageHealedText = DamageHealedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageInflictedText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  DamageInflictedText            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateDamageInflictedText(struct FText* DamageInflictedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageInflictedText");

	UAthenaEventMatchStatusScreen_C_UpdateDamageInflictedText_Params params;
	params.DamageInflictedText = DamageInflictedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateChestsLootedText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ChestsLootedText               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateChestsLootedText(struct FText* ChestsLootedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateChestsLootedText");

	UAthenaEventMatchStatusScreen_C_UpdateChestsLootedText_Params params;
	params.ChestsLootedText = ChestsLootedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMostKillsScore
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  MostKillsScore                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateMostKillsScore(struct FText* MostKillsScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMostKillsScore");

	UAthenaEventMatchStatusScreen_C_UpdateMostKillsScore_Params params;
	params.MostKillsScore = MostKillsScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateLongestEliminationScore
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  LongestEliminationScore        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateLongestEliminationScore(struct FText* LongestEliminationScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateLongestEliminationScore");

	UAthenaEventMatchStatusScreen_C_UpdateLongestEliminationScore_Params params;
	params.LongestEliminationScore = LongestEliminationScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseTimeText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  GamePhaseTimeText              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateGamePhaseTimeText(struct FText* GamePhaseTimeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseTimeText");

	UAthenaEventMatchStatusScreen_C_UpdateGamePhaseTimeText_Params params;
	params.GamePhaseTimeText = GamePhaseTimeText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseTimeTitleText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  GamePhaseTimeTitleText         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateGamePhaseTimeTitleText(struct FText* GamePhaseTimeTitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseTimeTitleText");

	UAthenaEventMatchStatusScreen_C_UpdateGamePhaseTimeTitleText_Params params;
	params.GamePhaseTimeTitleText = GamePhaseTimeTitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePlayersRemainingText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  PlayersRemainingText           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdatePlayersRemainingText(struct FText* PlayersRemainingText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePlayersRemainingText");

	UAthenaEventMatchStatusScreen_C_UpdatePlayersRemainingText_Params params;
	params.PlayersRemainingText = PlayersRemainingText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateTimeSinceLastKillText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  TimeSinceLastKillText          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateTimeSinceLastKillText(struct FText* TimeSinceLastKillText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateTimeSinceLastKillText");

	UAthenaEventMatchStatusScreen_C_UpdateTimeSinceLastKillText_Params params;
	params.TimeSinceLastKillText = TimeSinceLastKillText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  GamePhaseText                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaEventMatchStatusScreen_C::UpdateGamePhaseText(struct FText* GamePhaseText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseText");

	UAthenaEventMatchStatusScreen_C_UpdateGamePhaseText_Params params;
	params.GamePhaseText = GamePhaseText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.OnPlayerDeadStateChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInIsDead                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchStatusScreen_C::OnPlayerDeadStateChanged_BP(class UAthenaRemotePlayerViewData** InPlayerData, bool* bInIsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.OnPlayerDeadStateChanged_BP");

	UAthenaEventMatchStatusScreen_C_OnPlayerDeadStateChanged_BP_Params params;
	params.InPlayerData = InPlayerData;
	params.bInIsDead = bInIsDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.ExecuteUbergraph_AthenaEventMatchStatusScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchStatusScreen_C::ExecuteUbergraph_AthenaEventMatchStatusScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.ExecuteUbergraph_AthenaEventMatchStatusScreen");

	UAthenaEventMatchStatusScreen_C_ExecuteUbergraph_AthenaEventMatchStatusScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
