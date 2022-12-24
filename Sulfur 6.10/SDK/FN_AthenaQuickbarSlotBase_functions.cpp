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

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.SwitchToNative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseNative                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSlotBase_C::SwitchToNative(bool UseNative)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.SwitchToNative");

	UAthenaQuickbarSlotBase_C_SwitchToNative_Params params;
	params.UseNative = UseNative;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.InitializeInvalidation
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSlotBase_C::InitializeInvalidation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.InitializeInvalidation");

	UAthenaQuickbarSlotBase_C_InitializeInvalidation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.UpdateItemBoxSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSlotBase_C::UpdateItemBoxSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.UpdateItemBoxSize");

	UAthenaQuickbarSlotBase_C_UpdateItemBoxSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.OnCooldownStopped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSlotBase_C::OnCooldownStopped(EFortItemCooldownType CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.OnCooldownStopped");

	UAthenaQuickbarSlotBase_C_OnCooldownStopped_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.OnCooldownStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSlotBase_C::OnCooldownStarted(EFortItemCooldownType CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.OnCooldownStarted");

	UAthenaQuickbarSlotBase_C_OnCooldownStarted_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.InitializeCooldowns
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSlotBase_C::InitializeCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.InitializeCooldowns");

	UAthenaQuickbarSlotBase_C_InitializeCooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMaximizeStarted
// (BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSlotBase_C::HandleMaximizeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMaximizeStarted");

	UAthenaQuickbarSlotBase_C_HandleMaximizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMinimizeFinished
// (BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSlotBase_C::HandleMinimizeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMinimizeFinished");

	UAthenaQuickbarSlotBase_C_HandleMinimizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMaximizeFinished
// (BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSlotBase_C::HandleMaximizeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMaximizeFinished");

	UAthenaQuickbarSlotBase_C_HandleMaximizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMinimizeStarted
// (BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarSlotBase_C::HandleMinimizeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMinimizeStarted");

	UAthenaQuickbarSlotBase_C_HandleMinimizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickbarSlotBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.Construct");

	UAthenaQuickbarSlotBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSlotBase_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.PreConstruct");

	UAthenaQuickbarSlotBase_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.SetAnimatedBoxScaleFactor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimatedBoxScaleFactor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSlotBase_C::SetAnimatedBoxScaleFactor(float AnimatedBoxScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.SetAnimatedBoxScaleFactor");

	UAthenaQuickbarSlotBase_C_SetAnimatedBoxScaleFactor_Params params;
	params.AnimatedBoxScaleFactor = AnimatedBoxScaleFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.MaximizeSlot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldSkipAnimation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSlotBase_C::MaximizeSlot(bool* bShouldSkipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.MaximizeSlot");

	UAthenaQuickbarSlotBase_C_MaximizeSlot_Params params;
	params.bShouldSkipAnimation = bShouldSkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.MinimizeSlot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldSkipAnimation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSlotBase_C::MinimizeSlot(bool* bShouldSkipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.MinimizeSlot");

	UAthenaQuickbarSlotBase_C_MinimizeSlot_Params params;
	params.bShouldSkipAnimation = bShouldSkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.SetSlotSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSlotBase_C::SetSlotSelected(bool* bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.SetSlotSelected");

	UAthenaQuickbarSlotBase_C_SetSlotSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.ExecuteUbergraph_AthenaQuickbarSlotBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarSlotBase_C::ExecuteUbergraph_AthenaQuickbarSlotBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.ExecuteUbergraph_AthenaQuickbarSlotBase");

	UAthenaQuickbarSlotBase_C_ExecuteUbergraph_AthenaQuickbarSlotBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
