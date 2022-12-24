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

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapPingTimeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::MapPingTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapPingTimeOut");

	UAthenaTeamMemberInfo_C_MapPingTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    AthenaGameState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::Mapping(class AFortGameStateAthena* AthenaGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Mapping");

	UAthenaTeamMemberInfo_C_Mapping_Params params;
	params.AthenaGameState = AthenaGameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdateUniqueID()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID");

	UAthenaTeamMemberInfo_C_UpdateUniqueID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInDisconnected                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetPlayerDisconnected(bool bInDisconnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected");

	UAthenaTeamMemberInfo_C_SetPlayerDisconnected_Params params;
	params.bInDisconnected = bInDisconnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetTalking(bool NewTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking");

	UAthenaTeamMemberInfo_C_SetTalking_Params params;
	params.NewTalking = NewTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdateMicIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon");

	UAthenaTeamMemberInfo_C_UpdateMicIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewMuted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetMuted(bool NewMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted");

	UAthenaTeamMemberInfo_C_SetMuted_Params params;
	params.NewMuted = NewMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reviving                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving");

	UAthenaTeamMemberInfo_C_SetReviving_Params params;
	params.Reviving = Reviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DBNO                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO");

	UAthenaTeamMemberInfo_C_SetDBNO_Params params;
	params.DBNO = DBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dead                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDead(bool Dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead");

	UAthenaTeamMemberInfo_C_SetDead_Params params;
	params.Dead = Dead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetShield(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield");

	UAthenaTeamMemberInfo_C_SetShield_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetHealth(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth");

	UAthenaTeamMemberInfo_C_SetHealth_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct");

	UAthenaTeamMemberInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.TalkingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTalking                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::TalkingStateChanged(class AFortPlayerStateAthena** PS, bool* bTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.TalkingStateChanged");

	UAthenaTeamMemberInfo_C_TalkingStateChanged_Params params;
	params.PS = PS;
	params.bTalking = bTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDBNO                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::DBNOStateChanged(class AFortPlayerStateAthena** PS, bool* bDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DBNOStateChanged");

	UAthenaTeamMemberInfo_C_DBNOStateChanged_Params params;
	params.PS = PS;
	params.bDBNO = bDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReviving                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::BeingRevivedStateChanged(class AFortPlayerStateAthena** PS, bool* bReviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BeingRevivedStateChanged");

	UAthenaTeamMemberInfo_C_BeingRevivedStateChanged_Params params;
	params.PS = PS;
	params.bReviving = bReviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaTeamMemberInfo_C::PlayerNameChanged(class AFortPlayerStateAthena** PS, struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerNameChanged");

	UAthenaTeamMemberInfo_C_PlayerNameChanged_Params params;
	params.PS = PS;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.HitPointsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HealthPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ShieldPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::HitPointsChanged(class AFortPlayerStateAthena** PS, float* HealthPercent, float* ShieldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.HitPointsChanged");

	UAthenaTeamMemberInfo_C_HitPointsChanged_Params params;
	params.PS = PS;
	params.HealthPercent = HealthPercent;
	params.ShieldPercent = ShieldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MutedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Muted                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::MutedStateChanged(class AFortPlayerStateAthena** PS, bool* Muted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MutedStateChanged");

	UAthenaTeamMemberInfo_C_MutedStateChanged_Params params;
	params.PS = PS;
	params.Muted = Muted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DeadStateChanged               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::DeadStateChanged(class AFortPlayerStateAthena** PS, bool* DeadStateChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DeadStateChanged");

	UAthenaTeamMemberInfo_C_DeadStateChanged_Params params;
	params.PS = PS;
	params.DeadStateChanged = DeadStateChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisconnectedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Disconnected                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::DisconnectedStateChanged(class AFortPlayerStateAthena** PS, bool* Disconnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisconnectedStateChanged");

	UAthenaTeamMemberInfo_C_DisconnectedStateChanged_Params params;
	params.PS = PS;
	params.Disconnected = Disconnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerPlatformChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                CurrentPlatform                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaTeamMemberInfo_C::PlayerPlatformChanged(class AFortPlayerStateAthena** PS, struct FString* CurrentPlatform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerPlatformChanged");

	UAthenaTeamMemberInfo_C_PlayerPlatformChanged_Params params;
	params.PS = PS;
	params.CurrentPlatform = CurrentPlatform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnPlayerStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** InPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::OnPlayerStateChanged(class AFortPlayerStateAthena** InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnPlayerStateChanged");

	UAthenaTeamMemberInfo_C_OnPlayerStateChanged_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnGameModeIconChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** PS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             NewGameModeIcon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::OnGameModeIconChange(class AFortPlayerStateAthena** PS, class UTexture2D** NewGameModeIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnGameModeIconChange");

	UAthenaTeamMemberInfo_C_OnGameModeIconChange_Params params;
	params.PS = PS;
	params.NewGameModeIcon = NewGameModeIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo");

	UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
