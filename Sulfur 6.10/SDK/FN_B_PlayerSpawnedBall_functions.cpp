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

// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.PlayCueCenteredOnMe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayCueToPlay              (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Raw_Magnitude                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlayerSpawnedBall_C::PlayCueCenteredOnMe(const struct FGameplayTag& GameplayCueToPlay, float Raw_Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.PlayCueCenteredOnMe");

	AB_PlayerSpawnedBall_C_PlayCueCenteredOnMe_Params params;
	params.GameplayCueToPlay = GameplayCueToPlay;
	params.Raw_Magnitude = Raw_Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_PlayerSpawnedBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.UserConstructionScript");

	AB_PlayerSpawnedBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.NotifyToyInstanceOfReuse
// (Event, Public, BlueprintEvent)

void AB_PlayerSpawnedBall_C::NotifyToyInstanceOfReuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.NotifyToyInstanceOfReuse");

	AB_PlayerSpawnedBall_C_NotifyToyInstanceOfReuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.StartToyFadeOutDueToNewPlacement
// (Event, Public, BlueprintEvent)

void AB_PlayerSpawnedBall_C::StartToyFadeOutDueToNewPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.StartToyFadeOutDueToNewPlacement");

	AB_PlayerSpawnedBall_C_StartToyFadeOutDueToNewPlacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyInstance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   OwningPC                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumTimesSummoned               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlayerSpawnedBall_C::InitializeToyInstance(class AFortPlayerController* OwningPC, int NumTimesSummoned)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyInstance");

	AB_PlayerSpawnedBall_C_InitializeToyInstance_Params params;
	params.OwningPC = OwningPC;
	params.NumTimesSummoned = NumTimesSummoned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyPreviewInFrontend
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_PlayerSpawnedBall_C::InitializeToyPreviewInFrontend()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyPreviewInFrontend");

	AB_PlayerSpawnedBall_C_InitializeToyPreviewInFrontend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.ExecuteUbergraph_B_PlayerSpawnedBall
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlayerSpawnedBall_C::ExecuteUbergraph_B_PlayerSpawnedBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.ExecuteUbergraph_B_PlayerSpawnedBall");

	AB_PlayerSpawnedBall_C_ExecuteUbergraph_B_PlayerSpawnedBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
