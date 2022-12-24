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

// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetTeamNumbersVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          InVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardScreen_C::SetTeamNumbersVisible(bool* InVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetTeamNumbersVisible");

	UAthenaEventMatchScoreboardScreen_C_SetTeamNumbersVisible_Params params;
	params.InVisible = InVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetEventScoreVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          InVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardScreen_C::SetEventScoreVisible(bool* InVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.SetEventScoreVisible");

	UAthenaEventMatchScoreboardScreen_C_SetEventScoreVisible_Params params;
	params.InVisible = InVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.ExecuteUbergraph_AthenaEventMatchScoreboardScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardScreen_C::ExecuteUbergraph_AthenaEventMatchScoreboardScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardScreen.AthenaEventMatchScoreboardScreen_C.ExecuteUbergraph_AthenaEventMatchScoreboardScreen");

	UAthenaEventMatchScoreboardScreen_C_ExecuteUbergraph_AthenaEventMatchScoreboardScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
