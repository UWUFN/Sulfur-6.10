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

// Function ShowdownScreen.ShowdownScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UShowdownScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.OnActivated");

	UShowdownScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.Construct");

	UShowdownScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.ShowTournamentDetails
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                SelectedTournament             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UShowdownScreen_C::ShowTournamentDetails(struct FString* SelectedTournament)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.ShowTournamentDetails");

	UShowdownScreen_C_ShowTournamentDetails_Params params;
	params.SelectedTournament = SelectedTournament;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.PreConstruct");

	UShowdownScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownScreen_C::BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownScreen_C::BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature");

	UShowdownScreen_C_BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UShowdownScreen_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature");

	UShowdownScreen_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UShowdownScreen_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature");

	UShowdownScreen_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::OnInputModeChanged(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.OnInputModeChanged");

	UShowdownScreen_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.ExecuteUbergraph_ShowdownScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::ExecuteUbergraph_ShowdownScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.ExecuteUbergraph_ShowdownScreen");

	UShowdownScreen_C_ExecuteUbergraph_ShowdownScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
