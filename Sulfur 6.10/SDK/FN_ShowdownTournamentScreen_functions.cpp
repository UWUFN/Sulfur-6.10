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

// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.SetTournamentToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UShowdownTournamentScreen_C::SetTournamentToRepresent(const struct FString& TournamentId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.SetTournamentToRepresent");

	UShowdownTournamentScreen_C_SetTournamentToRepresent_Params params;
	params.TournamentId = TournamentId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.Handle_Back
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentScreen_C::Handle_Back(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.Handle_Back");

	UShowdownTournamentScreen_C_Handle_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownTournamentScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.Construct");

	UShowdownTournamentScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UShowdownTournamentScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.OnActivated");

	UShowdownTournamentScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature
// (BlueprintEvent)

void UShowdownTournamentScreen_C::BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature");

	UShowdownTournamentScreen_C_BndEvt__ShowdownTournamentDetails_K2Node_ComponentBoundEvent_0_BackActionSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.ExecuteUbergraph_ShowdownTournamentScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentScreen_C::ExecuteUbergraph_ShowdownTournamentScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentScreen.ShowdownTournamentScreen_C.ExecuteUbergraph_ShowdownTournamentScreen");

	UShowdownTournamentScreen_C_ExecuteUbergraph_ShowdownTournamentScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
