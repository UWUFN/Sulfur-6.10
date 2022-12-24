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

// Function EventScoreBigStat.EventScoreBigStat_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventScoreBigStat_C::SetData(const struct FText& Label, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventScoreBigStat.EventScoreBigStat_C.SetData");

	UEventScoreBigStat_C_SetData_Params params;
	params.Label = Label;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventScoreBigStat.EventScoreBigStat_C.SetGoalScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GoalScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventScoreBigStat_C::SetGoalScore(int GoalScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventScoreBigStat.EventScoreBigStat_C.SetGoalScore");

	UEventScoreBigStat_C_SetGoalScore_Params params;
	params.GoalScore = GoalScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventScoreBigStat.EventScoreBigStat_C.ExecuteUbergraph_EventScoreBigStat
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventScoreBigStat_C::ExecuteUbergraph_EventScoreBigStat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventScoreBigStat.EventScoreBigStat_C.ExecuteUbergraph_EventScoreBigStat");

	UEventScoreBigStat_C_ExecuteUbergraph_EventScoreBigStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
