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

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_IslandPosition
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::OnRep_IslandPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnRep_IslandPosition");

	ABP_IslandScripting_C_OnRep_IslandPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.ConvertDebugPosToTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_IslandScripting_C::ConvertDebugPosToTime(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.ConvertDebugPosToTime");

	ABP_IslandScripting_C_ConvertDebugPosToTime_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_CachedTime
// (BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::OnRep_CachedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnRep_CachedTime");

	ABP_IslandScripting_C_OnRep_CachedTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.SetupDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IslandScripting_C::SetupDebug(bool Debug)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.SetupDebug");

	ABP_IslandScripting_C_SetupDebug_Params params;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_CubeletGrowthstage
// (BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::OnRep_CubeletGrowthstage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnRep_CubeletGrowthstage");

	ABP_IslandScripting_C_OnRep_CubeletGrowthstage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_BeaconActive
// (BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::OnRep_BeaconActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnRep_BeaconActive");

	ABP_IslandScripting_C_OnRep_BeaconActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.SetupCrackProgress
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::SetupCrackProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.SetupCrackProgress");

	ABP_IslandScripting_C_SetupCrackProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.GetIslandPositionFromTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_IslandScripting_C::GetIslandPositionFromTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.GetIslandPositionFromTime");

	ABP_IslandScripting_C_GetIslandPositionFromTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_IslandScripting.BP_IslandScripting_C.SetupSplineLengthArray
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::SetupSplineLengthArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.SetupSplineLengthArray");

	ABP_IslandScripting_C_SetupSplineLengthArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.UserConstructionScript");

	ABP_IslandScripting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnLoaded_55D3F973490D118E6671D19F32CF8F64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IslandScripting_C::OnLoaded_55D3F973490D118E6671D19F32CF8F64(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnLoaded_55D3F973490D118E6671D19F32CF8F64");

	ABP_IslandScripting_C_OnLoaded_55D3F973490D118E6671D19F32CF8F64_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_9931B789480C855772A26B8B418C71A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IslandScripting_C::OnEventEnded_9931B789480C855772A26B8B418C71A1(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_9931B789480C855772A26B8B418C71A1");

	ABP_IslandScripting_C_OnEventEnded_9931B789480C855772A26B8B418C71A1_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_9931B789480C855772A26B8B418C71A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IslandScripting_C::OnEventUpdated_9931B789480C855772A26B8B418C71A1(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_9931B789480C855772A26B8B418C71A1");

	ABP_IslandScripting_C_OnEventUpdated_9931B789480C855772A26B8B418C71A1_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_9931B789480C855772A26B8B418C71A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IslandScripting_C::OnEventActive_9931B789480C855772A26B8B418C71A1(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_9931B789480C855772A26B8B418C71A1");

	ABP_IslandScripting_C_OnEventActive_9931B789480C855772A26B8B418C71A1_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IslandScripting_C::OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3");

	ABP_IslandScripting_C_OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IslandScripting_C::OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3");

	ABP_IslandScripting_C_OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IslandScripting_C::OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3");

	ABP_IslandScripting_C_OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_8E09FC134C440494335C22A68BF144C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IslandScripting_C::OnEventEnded_8E09FC134C440494335C22A68BF144C5(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_8E09FC134C440494335C22A68BF144C5");

	ABP_IslandScripting_C_OnEventEnded_8E09FC134C440494335C22A68BF144C5_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_8E09FC134C440494335C22A68BF144C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IslandScripting_C::OnEventUpdated_8E09FC134C440494335C22A68BF144C5(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_8E09FC134C440494335C22A68BF144C5");

	ABP_IslandScripting_C_OnEventUpdated_8E09FC134C440494335C22A68BF144C5_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_8E09FC134C440494335C22A68BF144C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_IslandScripting_C::OnEventActive_8E09FC134C440494335C22A68BF144C5(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_8E09FC134C440494335C22A68BF144C5");

	ABP_IslandScripting_C_OnEventActive_8E09FC134C440494335C22A68BF144C5_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.BindCalendarEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::BindCalendarEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.BindCalendarEvents");

	ABP_IslandScripting_C_BindCalendarEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.GetIslandPosition
// (BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::GetIslandPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.GetIslandPosition");

	ABP_IslandScripting_C_GetIslandPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_IslandScripting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.ReceiveBeginPlay");

	ABP_IslandScripting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.ToggleAreaEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::ToggleAreaEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.ToggleAreaEffect");

	ABP_IslandScripting_C_ToggleAreaEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.SetupRemainingVariables
// (BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::SetupRemainingVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.SetupRemainingVariables");

	ABP_IslandScripting_C_SetupRemainingVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.TrySetIslandLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::TrySetIslandLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.TrySetIslandLocation");

	ABP_IslandScripting_C_TrySetIslandLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.ExecuteUbergraph_BP_IslandScripting
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IslandScripting_C::ExecuteUbergraph_BP_IslandScripting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.ExecuteUbergraph_BP_IslandScripting");

	ABP_IslandScripting_C_ExecuteUbergraph_BP_IslandScripting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.DataAssetLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_IslandScripting_C::DataAssetLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.DataAssetLoaded__DelegateSignature");

	ABP_IslandScripting_C_DataAssetLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IslandScripting.BP_IslandScripting_C.IslandPositionUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_IslandScripting_C::IslandPositionUpdate__DelegateSignature(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IslandScripting.BP_IslandScripting_C.IslandPositionUpdate__DelegateSignature");

	ABP_IslandScripting_C_IslandPositionUpdate__DelegateSignature_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
