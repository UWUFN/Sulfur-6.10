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

// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboardRowWidget_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.Refresh");

	UAthenaBroadcastScoreboardRowWidget_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.OnEntryDataSet
// (Event, Protected, BlueprintEvent)

void UAthenaBroadcastScoreboardRowWidget_C::OnEntryDataSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.OnEntryDataSet");

	UAthenaBroadcastScoreboardRowWidget_C_OnEntryDataSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboardRowWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.Tick");

	UAthenaBroadcastScoreboardRowWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UAthenaBroadcastScoreboardRowWidget_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.BP_OnClicked");

	UAthenaBroadcastScoreboardRowWidget_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboardRowWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.PreConstruct");

	UAthenaBroadcastScoreboardRowWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.ExecuteUbergraph_AthenaBroadcastScoreboardRowWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboardRowWidget_C::ExecuteUbergraph_AthenaBroadcastScoreboardRowWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardRowWidget.AthenaBroadcastScoreboardRowWidget_C.ExecuteUbergraph_AthenaBroadcastScoreboardRowWidget");

	UAthenaBroadcastScoreboardRowWidget_C_ExecuteUbergraph_AthenaBroadcastScoreboardRowWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
