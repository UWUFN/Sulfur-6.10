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

// Function AthenaSpectatorTeamStatus.AthenaSpectatorTeamStatus_C.UpdatePlayerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* NewSource                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorTeamStatus_C::UpdatePlayerData(class UAthenaRemotePlayerViewData* NewSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorTeamStatus.AthenaSpectatorTeamStatus_C.UpdatePlayerData");

	UAthenaSpectatorTeamStatus_C_UpdatePlayerData_Params params;
	params.NewSource = NewSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorTeamStatus.AthenaSpectatorTeamStatus_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorTeamStatus_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorTeamStatus.AthenaSpectatorTeamStatus_C.NewEventDispatcher_0__DelegateSignature");

	UAthenaSpectatorTeamStatus_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
