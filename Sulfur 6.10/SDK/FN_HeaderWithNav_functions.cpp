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

// Function HeaderWithNav.HeaderWithNav_C.SetTextAndUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UHeaderWithNav_C::SetTextAndUpdate(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.SetTextAndUpdate");

	UHeaderWithNav_C_SetTextAndUpdate_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::Update(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.Update");

	UHeaderWithNav_C_Update_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeaderWithNav_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.Construct");

	UHeaderWithNav_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.HandleInputMethodChanged");

	UHeaderWithNav_C_HandleInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeaderWithNav_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UHeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.ExecuteUbergraph_HeaderWithNav
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::ExecuteUbergraph_HeaderWithNav(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.ExecuteUbergraph_HeaderWithNav");

	UHeaderWithNav_C_ExecuteUbergraph_HeaderWithNav_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.BackButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHeaderWithNav_C::BackButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.BackButtonPressed__DelegateSignature");

	UHeaderWithNav_C_BackButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
