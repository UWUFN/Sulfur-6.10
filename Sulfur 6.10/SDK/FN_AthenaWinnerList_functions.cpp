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

// Function AthenaWinnerList.AthenaWinnerList_C.OnRep_isWinner
// (BlueprintCallable, BlueprintEvent)

void UAthenaWinnerList_C::OnRep_isWinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWinnerList.AthenaWinnerList_C.OnRep_isWinner");

	UAthenaWinnerList_C_OnRep_isWinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWinnerList.AthenaWinnerList_C.OnWinnersAnnounced
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAthenaWinnerInfo*      WinnerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaWinnerList_C::OnWinnersAnnounced(struct FAthenaWinnerInfo* WinnerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWinnerList.AthenaWinnerList_C.OnWinnersAnnounced");

	UAthenaWinnerList_C_OnWinnersAnnounced_Params params;
	params.WinnerInfo = WinnerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWinnerList.AthenaWinnerList_C.UpdateWinnerList
// (BlueprintCallable, BlueprintEvent)

void UAthenaWinnerList_C::UpdateWinnerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWinnerList.AthenaWinnerList_C.UpdateWinnerList");

	UAthenaWinnerList_C_UpdateWinnerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaWinnerList.AthenaWinnerList_C.ExecuteUbergraph_AthenaWinnerList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaWinnerList_C::ExecuteUbergraph_AthenaWinnerList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaWinnerList.AthenaWinnerList_C.ExecuteUbergraph_AthenaWinnerList");

	UAthenaWinnerList_C_ExecuteUbergraph_AthenaWinnerList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
