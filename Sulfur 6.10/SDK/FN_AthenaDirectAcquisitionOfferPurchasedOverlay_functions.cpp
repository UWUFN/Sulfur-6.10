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

// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.PopScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::PopScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.PopScreen");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_PopScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.HandleBack");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.UpdateFromOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::UpdateFromOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.UpdateFromOffer");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_UpdateFromOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::OnOfferSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnOfferSet");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.OnActivated");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Construct");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.BndEvt__Purchased!_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::BndEvt__Purchased!_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.BndEvt__Purchased!_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_BndEvt__Purchased!_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionOfferPurchasedOverlay_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay");

	UAthenaDirectAcquisitionOfferPurchasedOverlay_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
