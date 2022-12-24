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

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.CheckPawnForGliderDeploy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaAerialFeedback_C::CheckPawnForGliderDeploy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.CheckPawnForGliderDeploy");

	UAthenaAerialFeedback_C_CheckPawnForGliderDeploy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaAerialFeedback_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.Update");

	UAthenaAerialFeedback_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.OnLocalPlayerBeginSkydiving_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaAerialFeedback_C::OnLocalPlayerBeginSkydiving_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.OnLocalPlayerBeginSkydiving_Bind");

	UAthenaAerialFeedback_C_OnLocalPlayerBeginSkydiving_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.GamePhaseStepChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep           GamePhaseStep                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAerialFeedback_C::GamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.GamePhaseStepChanged");

	UAthenaAerialFeedback_C_GamePhaseStepChanged_Params params;
	params.GamePhaseStep = GamePhaseStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.OnKeybindsChanged_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaAerialFeedback_C::OnKeybindsChanged_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.OnKeybindsChanged_Bind");

	UAthenaAerialFeedback_C_OnKeybindsChanged_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaAerialFeedback_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.Construct");

	UAthenaAerialFeedback_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAerialFeedback_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.Tick");

	UAthenaAerialFeedback_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.HandleFallingStarted
// (BlueprintCallable, BlueprintEvent)

void UAthenaAerialFeedback_C::HandleFallingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.HandleFallingStarted");

	UAthenaAerialFeedback_C_HandleFallingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.CheckFallingForGlider
// (BlueprintCallable, BlueprintEvent)

void UAthenaAerialFeedback_C::CheckFallingForGlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.CheckFallingForGlider");

	UAthenaAerialFeedback_C_CheckFallingForGlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.ExecuteUbergraph_AthenaAerialFeedback
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAerialFeedback_C::ExecuteUbergraph_AthenaAerialFeedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.ExecuteUbergraph_AthenaAerialFeedback");

	UAthenaAerialFeedback_C_ExecuteUbergraph_AthenaAerialFeedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
