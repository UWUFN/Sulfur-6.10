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

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Reset Intro
// (Public, BlueprintCallable, BlueprintEvent)

void UFeatureUnlockScreen_C::Reset_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.Reset Intro");

	UFeatureUnlockScreen_C_Reset_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFeatureUnlockScreen_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.HandleBack");

	UFeatureUnlockScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFeatureUnlockScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.Construct");

	UFeatureUnlockScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeatureUnlockScreen_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature");

	UFeatureUnlockScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UFeatureUnlockScreen_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnBeginIntro");

	UFeatureUnlockScreen_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFeatureUnlockScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.Destruct");

	UFeatureUnlockScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.ExecuteUbergraph_FeatureUnlockScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeatureUnlockScreen_C::ExecuteUbergraph_FeatureUnlockScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.ExecuteUbergraph_FeatureUnlockScreen");

	UFeatureUnlockScreen_C_ExecuteUbergraph_FeatureUnlockScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
