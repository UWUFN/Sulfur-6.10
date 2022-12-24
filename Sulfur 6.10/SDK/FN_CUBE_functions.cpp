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

// Function CUBE.CUBE_C.OnRep_DestTurnedOn
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ACUBE_C::OnRep_DestTurnedOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnRep_DestTurnedOn");

	ACUBE_C_OnRep_DestTurnedOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.IsLakeSplash
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACUBE_C::IsLakeSplash()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.IsLakeSplash");

	ACUBE_C_IsLakeSplash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CUBE.CUBE_C.OnRep_GravVolumesSpawned
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ACUBE_C::OnRep_GravVolumesSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnRep_GravVolumesSpawned");

	ACUBE_C_OnRep_GravVolumesSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ImpulseVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaVehicle*      Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ZMultiplier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::ImpulseVehicle(class AFortAthenaVehicle* Vehicle, const struct FVector& Normal, const struct FVector& Location, float ZMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ImpulseVehicle");

	ACUBE_C_ImpulseVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Normal = Normal;
	params.Location = Location;
	params.ZMultiplier = ZMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.SetSpecificTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::SetSpecificTimeOfDay(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.SetSpecificTimeOfDay");

	ACUBE_C_SetSpecificTimeOfDay_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Set Tree MPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AtStartup                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::Set_Tree_MPC(bool AtStartup)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Set Tree MPC");

	ACUBE_C_Set_Tree_MPC_Params params;
	params.AtStartup = AtStartup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnRep_CubeSpawn
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::OnRep_CubeSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnRep_CubeSpawn");

	ACUBE_C_OnRep_CubeSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnRep_PrintingRune
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::OnRep_PrintingRune()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnRep_PrintingRune");

	ACUBE_C_OnRep_PrintingRune_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CalcRuneSteps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACUBE_C::CalcRuneSteps()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CalcRuneSteps");

	ACUBE_C_CalcRuneSteps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.StepsThisRuneIndex
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            RuneDestination                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::StepsThisRuneIndex(int RuneDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.StepsThisRuneIndex");

	ACUBE_C_StepsThisRuneIndex_Params params;
	params.RuneDestination = RuneDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnRep_CubeTurnedOn
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ACUBE_C::OnRep_CubeTurnedOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnRep_CubeTurnedOn");

	ACUBE_C_OnRep_CubeTurnedOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnRep_CubeHidden
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::OnRep_CubeHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnRep_CubeHidden");

	ACUBE_C_OnRep_CubeHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.UnhideAndSetCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnedOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::UnhideAndSetCollision(bool TurnedOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.UnhideAndSetCollision");

	ACUBE_C_UnhideAndSetCollision_Params params;
	params.TurnedOn = TurnedOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CalculateNextMove
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               TimespanTillEnd                (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            RuneDestination                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SecondsTillMove                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::CalculateNextMove(const struct FTimespan& TimespanTillEnd, int RuneDestination, int* NextIndex, float* SecondsTillMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CalculateNextMove");

	ACUBE_C_CalculateNextMove_Params params;
	params.TimespanTillEnd = TimespanTillEnd;
	params.RuneDestination = RuneDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextIndex != nullptr)
		*NextIndex = params.NextIndex;
	if (SecondsTillMove != nullptr)
		*SecondsTillMove = params.SecondsTillMove;
}


// Function CUBE.CUBE_C.TraceCubeShape
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::TraceCubeShape(bool* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.TraceCubeShape");

	ACUBE_C_TraceCubeShape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function CUBE.CUBE_C.OnRep_StartingIndex
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::OnRep_StartingIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnRep_StartingIndex");

	ACUBE_C_OnRep_StartingIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.DoFindDownFace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepToTest                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FaceIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::DoFindDownFace(int StepToTest, int* FaceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.DoFindDownFace");

	ACUBE_C_DoFindDownFace_Params params;
	params.StepToTest = StepToTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FaceIndex != nullptr)
		*FaceIndex = params.FaceIndex;
}


// Function CUBE.CUBE_C.OnRep_PathIndex
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::OnRep_PathIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnRep_PathIndex");

	ACUBE_C_OnRep_PathIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACUBE_C::ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ShouldDie");

	ACUBE_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CUBE.CUBE_C.LaunchPlayerAway
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class APlayerPawn_Athena_C*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ForceMultiplier                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FlashCube                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::LaunchPlayerAway(const struct FVector& HitLocation, const struct FVector& HitNormal, class APlayerPawn_Athena_C* Player, float ForceMultiplier, bool FlashCube)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.LaunchPlayerAway");

	ACUBE_C_LaunchPlayerAway_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.Player = Player;
	params.ForceMultiplier = ForceMultiplier;
	params.FlashCube = FlashCube;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.FindBottomFace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Downward_Face                  (Parm, OutParm, IsPlainOldData)

void ACUBE_C::FindBottomFace(const struct FTransform& Transform, struct FVector* Downward_Face)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.FindBottomFace");

	ACUBE_C_FindBottomFace_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Downward_Face != nullptr)
		*Downward_Face = params.Downward_Face;
}


// Function CUBE.CUBE_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACUBE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.UserConstructionScript");

	ACUBE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.FinalSinkTimeline__FinishedFunc
// (BlueprintEvent)

void ACUBE_C::FinalSinkTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.FinalSinkTimeline__FinishedFunc");

	ACUBE_C_FinalSinkTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.FinalSinkTimeline__UpdateFunc
// (BlueprintEvent)

void ACUBE_C::FinalSinkTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.FinalSinkTimeline__UpdateFunc");

	ACUBE_C_FinalSinkTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.RuneEffect__FinishedFunc
// (BlueprintEvent)

void ACUBE_C::RuneEffect__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.RuneEffect__FinishedFunc");

	ACUBE_C_RuneEffect__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.RuneEffect__UpdateFunc
// (BlueprintEvent)

void ACUBE_C::RuneEffect__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.RuneEffect__UpdateFunc");

	ACUBE_C_RuneEffect__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CubeAppearGlow__FinishedFunc
// (BlueprintEvent)

void ACUBE_C::CubeAppearGlow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CubeAppearGlow__FinishedFunc");

	ACUBE_C_CubeAppearGlow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CubeAppearGlow__UpdateFunc
// (BlueprintEvent)

void ACUBE_C::CubeAppearGlow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CubeAppearGlow__UpdateFunc");

	ACUBE_C_CubeAppearGlow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.LakeTimeline__FinishedFunc
// (BlueprintEvent)

void ACUBE_C::LakeTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.LakeTimeline__FinishedFunc");

	ACUBE_C_LakeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.LakeTimeline__UpdateFunc
// (BlueprintEvent)

void ACUBE_C::LakeTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.LakeTimeline__UpdateFunc");

	ACUBE_C_LakeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.LakeTimeline__DoneSinking__EventFunc
// (BlueprintEvent)

void ACUBE_C::LakeTimeline__DoneSinking__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.LakeTimeline__DoneSinking__EventFunc");

	ACUBE_C_LakeTimeline__DoneSinking__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.LakeTimeline__TurnOn__EventFunc
// (BlueprintEvent)

void ACUBE_C::LakeTimeline__TurnOn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.LakeTimeline__TurnOn__EventFunc");

	ACUBE_C_LakeTimeline__TurnOn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.RollTimeline__FinishedFunc
// (BlueprintEvent)

void ACUBE_C::RollTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.RollTimeline__FinishedFunc");

	ACUBE_C_RollTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.RollTimeline__UpdateFunc
// (BlueprintEvent)

void ACUBE_C::RollTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.RollTimeline__UpdateFunc");

	ACUBE_C_RollTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnEventEnded_16C2560C48CD325DC3C47CA23BEBB2C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnEventEnded_16C2560C48CD325DC3C47CA23BEBB2C9(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnEventEnded_16C2560C48CD325DC3C47CA23BEBB2C9");

	ACUBE_C_OnEventEnded_16C2560C48CD325DC3C47CA23BEBB2C9_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnEventUpdated_16C2560C48CD325DC3C47CA23BEBB2C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnEventUpdated_16C2560C48CD325DC3C47CA23BEBB2C9(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnEventUpdated_16C2560C48CD325DC3C47CA23BEBB2C9");

	ACUBE_C_OnEventUpdated_16C2560C48CD325DC3C47CA23BEBB2C9_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnEventActive_16C2560C48CD325DC3C47CA23BEBB2C9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnEventActive_16C2560C48CD325DC3C47CA23BEBB2C9(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnEventActive_16C2560C48CD325DC3C47CA23BEBB2C9");

	ACUBE_C_OnEventActive_16C2560C48CD325DC3C47CA23BEBB2C9_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnEventEnded_2648B1B24D74D365B5C956ACA1EAECB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnEventEnded_2648B1B24D74D365B5C956ACA1EAECB0(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnEventEnded_2648B1B24D74D365B5C956ACA1EAECB0");

	ACUBE_C_OnEventEnded_2648B1B24D74D365B5C956ACA1EAECB0_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnEventUpdated_2648B1B24D74D365B5C956ACA1EAECB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnEventUpdated_2648B1B24D74D365B5C956ACA1EAECB0(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnEventUpdated_2648B1B24D74D365B5C956ACA1EAECB0");

	ACUBE_C_OnEventUpdated_2648B1B24D74D365B5C956ACA1EAECB0_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnEventActive_2648B1B24D74D365B5C956ACA1EAECB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnEventActive_2648B1B24D74D365B5C956ACA1EAECB0(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnEventActive_2648B1B24D74D365B5C956ACA1EAECB0");

	ACUBE_C_OnEventActive_2648B1B24D74D365B5C956ACA1EAECB0_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnEventEnded_750DF2F749472DA252073089796089C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnEventEnded_750DF2F749472DA252073089796089C8(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnEventEnded_750DF2F749472DA252073089796089C8");

	ACUBE_C_OnEventEnded_750DF2F749472DA252073089796089C8_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnEventUpdated_750DF2F749472DA252073089796089C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnEventUpdated_750DF2F749472DA252073089796089C8(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnEventUpdated_750DF2F749472DA252073089796089C8");

	ACUBE_C_OnEventUpdated_750DF2F749472DA252073089796089C8_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnEventActive_750DF2F749472DA252073089796089C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTimespan               TimeUntilEnd                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan               TimeSinceBegin                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnEventActive_750DF2F749472DA252073089796089C8(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnEventActive_750DF2F749472DA252073089796089C8");

	ACUBE_C_OnEventActive_750DF2F749472DA252073089796089C8_Params params;
	params.EventName = EventName;
	params.TimeUntilEnd = TimeUntilEnd;
	params.TimeSinceBegin = TimeSinceBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACUBE_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ReceiveHit");

	ACUBE_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnDamageServer");

	ACUBE_C_OnDamageServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.PerformStep
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::PerformStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.PerformStep");

	ACUBE_C_PerformStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.1 - DupLastIndex
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::_1___DupLastIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.1 - DupLastIndex");

	ACUBE_C__1___DupLastIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.2- DeleteLastIndex
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::_2__DeleteLastIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.2- DeleteLastIndex");

	ACUBE_C__2__DeleteLastIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.TwoPartTransitionEvent
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::TwoPartTransitionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.TwoPartTransitionEvent");

	ACUBE_C_TwoPartTransitionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.SwapLast2Indicies
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::SwapLast2Indicies()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.SwapLast2Indicies");

	ACUBE_C_SwapLast2Indicies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.3- DuplicateSpecified
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::_3__DuplicateSpecified()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.3- DuplicateSpecified");

	ACUBE_C__3__DuplicateSpecified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.PlayFinalSink
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::PlayFinalSink()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.PlayFinalSink");

	ACUBE_C_PlayFinalSink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.FindDownFaces
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::FindDownFaces()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.FindDownFaces");

	ACUBE_C_FindDownFaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.StartRuneSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StartMidway                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::StartRuneSequence(bool StartMidway)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.StartRuneSequence");

	ACUBE_C_StartRuneSequence_Params params;
	params.StartMidway = StartMidway;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ClearStartingPosition
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::ClearStartingPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ClearStartingPosition");

	ACUBE_C_ClearStartingPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.IncrementIndex
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::IncrementIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.IncrementIndex");

	ACUBE_C_IncrementIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CubeRollFeedback
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::CubeRollFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CubeRollFeedback");

	ACUBE_C_CubeRollFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ImpactLake
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::ImpactLake()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ImpactLake");

	ACUBE_C_ImpactLake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CalcStepsPerRuneIndex
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::CalcStepsPerRuneIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CalcStepsPerRuneIndex");

	ACUBE_C_CalcStepsPerRuneIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Show
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Show");

	ACUBE_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.RippleGC
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::RippleGC(const struct FVector& Location, const struct FVector& Normal, class AActor* Source, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.RippleGC");

	ACUBE_C_RippleGC_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.Source = Source;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ResetRollInit
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::ResetRollInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ResetRollInit");

	ACUBE_C_ResetRollInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.SetRuneGlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::SetRuneGlow(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.SetRuneGlow");

	ACUBE_C_SetRuneGlow_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.SpawnCube
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::SpawnCube()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.SpawnCube");

	ACUBE_C_SpawnCube_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Set Ambient Audio Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::Set_Ambient_Audio_Enabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Set Ambient Audio Enabled");

	ACUBE_C_Set_Ambient_Audio_Enabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Start Roll Audio Part 1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_2_Part_Roll                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::Start_Roll_Audio_Part_1(bool Is_2_Part_Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Start Roll Audio Part 1");

	ACUBE_C_Start_Roll_Audio_Part_1_Params params;
	params.Is_2_Part_Roll = Is_2_Part_Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Start Roll Audio Part 2
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::Start_Roll_Audio_Part_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Start Roll Audio Part 2");

	ACUBE_C_Start_Roll_Audio_Part_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.End Roll Audio
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::End_Roll_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.End Roll Audio");

	ACUBE_C_End_Roll_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Update Roll Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent_Complete               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::Update_Roll_Audio(float Percent_Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Update Roll Audio");

	ACUBE_C_Update_Roll_Audio_Params params;
	params.Percent_Complete = Percent_Complete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CubeSpawnEffect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACUBE_C::CubeSpawnEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CubeSpawnEffect");

	ACUBE_C_CubeSpawnEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.TestForCrushOnHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Trace_Distance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::TestForCrushOnHit(float Trace_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.TestForCrushOnHit");

	ACUBE_C_TestForCrushOnHit_Params params;
	params.Trace_Distance = Trace_Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.OnDamagePlayEffects");

	ACUBE_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CrushPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::CrushPlayer(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CrushPlayer");

	ACUBE_C_CrushPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Set Rune Print Audio Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::Set_Rune_Print_Audio_Enabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Set Rune Print Audio Enabled");

	ACUBE_C_Set_Rune_Print_Audio_Enabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.On Spawn Dust Appear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACUBE_C::On_Spawn_Dust_Appear(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.On Spawn Dust Appear");

	ACUBE_C_On_Spawn_Dust_Appear_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ContinueSetup
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::ContinueSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ContinueSetup");

	ACUBE_C_ContinueSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.LeftRuneLocation
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::LeftRuneLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.LeftRuneLocation");

	ACUBE_C_LeftRuneLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CubeLeftPathPoint
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::CubeLeftPathPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CubeLeftPathPoint");

	ACUBE_C_CubeLeftPathPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Rollforward
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::Rollforward()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Rollforward");

	ACUBE_C_Rollforward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ClearLastLaunchedPlayer
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::ClearLastLaunchedPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ClearLastLaunchedPlayer");

	ACUBE_C_ClearLastLaunchedPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.On Amb Zap Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACUBE_C::On_Amb_Zap_Spawn(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.On Amb Zap Spawn");

	ACUBE_C_On_Amb_Zap_Spawn_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CubeAppear
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::CubeAppear()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CubeAppear");

	ACUBE_C_CubeAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ReplayScrubbed
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::ReplayScrubbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ReplayScrubbed");

	ACUBE_C_ReplayScrubbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.New
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::New(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.New");

	ACUBE_C_New_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.End Roll Audio Lake
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::End_Roll_Audio_Lake()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.End Roll Audio Lake");

	ACUBE_C_End_Roll_Audio_Lake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ReplayScrubSetup
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::ReplayScrubSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ReplayScrubSetup");

	ACUBE_C_ReplayScrubSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Tilted Impact Sound
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::Tilted_Impact_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Tilted Impact Sound");

	ACUBE_C_Tilted_Impact_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.SetupLake
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::SetupLake()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.SetupLake");

	ACUBE_C_SetupLake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Next
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::Next(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Next");

	ACUBE_C_Next_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACUBE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ReceiveBeginPlay");

	ACUBE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.Reset
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.Reset");

	ACUBE_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.TurnOn
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::TurnOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.TurnOn");

	ACUBE_C_TurnOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ResetImpulseTimer
// (BlueprintCallable, BlueprintEvent)

void ACUBE_C::ResetImpulseTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ResetImpulseTimer");

	ACUBE_C_ResetImpulseTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.ExecuteUbergraph_CUBE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::ExecuteUbergraph_CUBE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.ExecuteUbergraph_CUBE");

	ACUBE_C_ExecuteUbergraph_CUBE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CubeLeftPosition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACUBE_C::CubeLeftPosition__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CubeLeftPosition__DelegateSignature");

	ACUBE_C_CubeLeftPosition__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CubeReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACUBE_C::CubeReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CubeReady__DelegateSignature");

	ACUBE_C_CubeReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.LandedAtRune__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::LandedAtRune__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.LandedAtRune__DelegateSignature");

	ACUBE_C_LandedAtRune__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.StopRuneGlow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACUBE_C::StopRuneGlow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.StopRuneGlow__DelegateSignature");

	ACUBE_C_StopRuneGlow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE.CUBE_C.CubeSetupComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_C::CubeSetupComplete__DelegateSignature(int CurrentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE.CUBE_C.CubeSetupComplete__DelegateSignature");

	ACUBE_C_CubeSetupComplete__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
