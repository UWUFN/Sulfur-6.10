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

// Function SpectatedPlayerItem.SpectatedPlayerItem_C.OnClicked
// (Public, BlueprintCallable, BlueprintEvent)

void USpectatedPlayerItem_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatedPlayerItem.SpectatedPlayerItem_C.OnClicked");

	USpectatedPlayerItem_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatedPlayerItem.SpectatedPlayerItem_C.SetPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPotentialSpectatorTarget SpectatorInfo                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USpectatedPlayerItem_C::SetPlayer(struct FPotentialSpectatorTarget* SpectatorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatedPlayerItem.SpectatedPlayerItem_C.SetPlayer");

	USpectatedPlayerItem_C_SetPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpectatorInfo != nullptr)
		*SpectatorInfo = params.SpectatorInfo;
}


// Function SpectatedPlayerItem.SpectatedPlayerItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatedPlayerItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatedPlayerItem.SpectatedPlayerItem_C.PreConstruct");

	USpectatedPlayerItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatedPlayerItem.SpectatedPlayerItem_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USpectatedPlayerItem_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatedPlayerItem.SpectatedPlayerItem_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	USpectatedPlayerItem_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatedPlayerItem.SpectatedPlayerItem_C.ExecuteUbergraph_SpectatedPlayerItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatedPlayerItem_C::ExecuteUbergraph_SpectatedPlayerItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatedPlayerItem.SpectatedPlayerItem_C.ExecuteUbergraph_SpectatedPlayerItem");

	USpectatedPlayerItem_C_ExecuteUbergraph_SpectatedPlayerItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
