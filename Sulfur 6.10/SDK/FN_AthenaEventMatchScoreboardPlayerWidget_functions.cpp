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

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.UpdateStatusText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchScoreboardPlayerWidget_C::UpdateStatusText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.UpdateStatusText");

	UAthenaEventMatchScoreboardPlayerWidget_C_UpdateStatusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetRowBordersVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::SetRowBordersVisibility(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetRowBordersVisibility");

	UAthenaEventMatchScoreboardPlayerWidget_C_SetRowBordersVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.PreConstruct");

	UAthenaEventMatchScoreboardPlayerWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ClearTextWidgets
// (BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchScoreboardPlayerWidget_C::ClearTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ClearTextWidgets");

	UAthenaEventMatchScoreboardPlayerWidget_C_ClearTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamNumberChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InTeamNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnTeamNumberChanged(class UAthenaRemotePlayerViewData** InPlayerData, int* InTeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamNumberChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnTeamNumberChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InTeamNumber = InTeamNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamColorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InTeamColor                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnTeamColorChanged(class UAthenaRemotePlayerViewData** InPlayerData, struct FLinearColor* InTeamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamColorChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnTeamColorChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InTeamColor = InTeamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                InPlayerName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnPlayerNameChanged(class UAthenaRemotePlayerViewData** InPlayerData, struct FString* InPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerNameChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnPlayerNameChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InPlayerName = InPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsDead                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnDeadStateChanged(class UAthenaRemotePlayerViewData** InPlayerData, bool* bIsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDeadStateChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnDeadStateChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.bIsDead = bIsDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsDBNO                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnDBNOStateChanged(class UAthenaRemotePlayerViewData** InPlayerData, bool* bIsDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDBNOStateChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnDBNOStateChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.bIsDBNO = bIsDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnBeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsBeingRevived                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnBeingRevivedStateChanged(class UAthenaRemotePlayerViewData** InPlayerData, bool* bIsBeingRevived)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnBeingRevivedStateChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnBeingRevivedStateChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.bIsBeingRevived = bIsBeingRevived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnKillScoreChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InKillScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnKillScoreChanged(class UAthenaRemotePlayerViewData** InPlayerData, int* InKillScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnKillScoreChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnKillScoreChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InKillScore = InKillScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDisconnectedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsDisconnected                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnDisconnectedChanged(class UAthenaRemotePlayerViewData** InPlayerData, bool* bIsDisconnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDisconnectedChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnDisconnectedChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.bIsDisconnected = bIsDisconnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDistanceToStormChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InDistanceToStorm              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnDistanceToStormChanged(class UAthenaRemotePlayerViewData** InPlayerData, int* InDistanceToStorm)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDistanceToStormChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnDistanceToStormChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InDistanceToStorm = InDistanceToStorm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlaceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InPlace                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnPlaceChanged(class UAthenaRemotePlayerViewData** InPlayerData, int* InPlace)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlaceChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnPlaceChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InPlace = InPlace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerDataChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnPlayerDataChanged(class UAthenaRemotePlayerViewData** InPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerDataChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnPlayerDataChanged_Params params;
	params.InPlayerData = InPlayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnEventScoreChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InScore                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::OnEventScoreChanged(class UAthenaRemotePlayerViewData** InPlayerData, int* InScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnEventScoreChanged");

	UAthenaEventMatchScoreboardPlayerWidget_C_OnEventScoreChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InScore = InScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetEventScoreVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          InVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::SetEventScoreVisible(bool* InVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetEventScoreVisible");

	UAthenaEventMatchScoreboardPlayerWidget_C_SetEventScoreVisible_Params params;
	params.InVisible = InVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetTeamNumberVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          InVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::SetTeamNumberVisible(bool* InVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetTeamNumberVisible");

	UAthenaEventMatchScoreboardPlayerWidget_C_SetTeamNumberVisible_Params params;
	params.InVisible = InVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetUsingAlternateRowStyle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bUseAlternateStyle             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::SetUsingAlternateRowStyle(bool* bUseAlternateStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetUsingAlternateRowStyle");

	UAthenaEventMatchScoreboardPlayerWidget_C_SetUsingAlternateRowStyle_Params params;
	params.bUseAlternateStyle = bUseAlternateStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchScoreboardPlayerWidget_C::ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget");

	UAthenaEventMatchScoreboardPlayerWidget_C_ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
