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

// Function CUBE_Simple.CUBE_Simple_C.ImpulseVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaVehicle*      Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ZMultiplier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_Simple_C::ImpulseVehicle(class AFortAthenaVehicle* Vehicle, const struct FVector& Normal, const struct FVector& Location, float ZMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.ImpulseVehicle");

	ACUBE_Simple_C_ImpulseVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Normal = Normal;
	params.Location = Location;
	params.ZMultiplier = ZMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACUBE_Simple_C::ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.ShouldDie");

	ACUBE_Simple_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CUBE_Simple.CUBE_Simple_C.LaunchPlayerAway
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class APlayerPawn_Athena_C*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ForceMultiplier                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FlashCube                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_Simple_C::LaunchPlayerAway(const struct FVector& HitLocation, const struct FVector& HitNormal, class APlayerPawn_Athena_C* Player, float ForceMultiplier, bool FlashCube)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.LaunchPlayerAway");

	ACUBE_Simple_C_LaunchPlayerAway_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.Player = Player;
	params.ForceMultiplier = ForceMultiplier;
	params.FlashCube = FlashCube;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACUBE_Simple_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.UserConstructionScript");

	ACUBE_Simple_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.CubeAppearGlow__FinishedFunc
// (BlueprintEvent)

void ACUBE_Simple_C::CubeAppearGlow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.CubeAppearGlow__FinishedFunc");

	ACUBE_Simple_C_CubeAppearGlow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.CubeAppearGlow__UpdateFunc
// (BlueprintEvent)

void ACUBE_Simple_C::CubeAppearGlow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.CubeAppearGlow__UpdateFunc");

	ACUBE_Simple_C_CubeAppearGlow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.RippleGC
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_Simple_C::RippleGC(const struct FVector& Location, const struct FVector& Normal, class AActor* Source, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.RippleGC");

	ACUBE_Simple_C_RippleGC_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.Source = Source;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.Set Ambient Audio Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_Simple_C::Set_Ambient_Audio_Enabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.Set Ambient Audio Enabled");

	ACUBE_Simple_C_Set_Ambient_Audio_Enabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_Simple_C::OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.OnDamageServer");

	ACUBE_Simple_C_OnDamageServer_Params params;
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


// Function CUBE_Simple.CUBE_Simple_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACUBE_Simple_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.OnDamagePlayEffects");

	ACUBE_Simple_C_OnDamagePlayEffects_Params params;
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


// Function CUBE_Simple.CUBE_Simple_C.ReceiveHit
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

void ACUBE_Simple_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.ReceiveHit");

	ACUBE_Simple_C_ReceiveHit_Params params;
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


// Function CUBE_Simple.CUBE_Simple_C.ClearLastLaunchedPlayer
// (BlueprintCallable, BlueprintEvent)

void ACUBE_Simple_C::ClearLastLaunchedPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.ClearLastLaunchedPlayer");

	ACUBE_Simple_C_ClearLastLaunchedPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.CubeAppear
// (BlueprintCallable, BlueprintEvent)

void ACUBE_Simple_C::CubeAppear()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.CubeAppear");

	ACUBE_Simple_C_CubeAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACUBE_Simple_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.ReceiveBeginPlay");

	ACUBE_Simple_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ACUBE_Simple_C::OnWorldReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.OnWorldReady");

	ACUBE_Simple_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.RegisterDudebroActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABGA_DudeBro_Area_Effect_C* DUDEBRO                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_Simple_C::RegisterDudebroActor(class ABGA_DudeBro_Area_Effect_C* DUDEBRO)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.RegisterDudebroActor");

	ACUBE_Simple_C_RegisterDudebroActor_Params params;
	params.DUDEBRO = DUDEBRO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.StartChanneling
// (BlueprintCallable, BlueprintEvent)

void ACUBE_Simple_C::StartChanneling()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.StartChanneling");

	ACUBE_Simple_C_StartChanneling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.StopChanneling
// (BlueprintCallable, BlueprintEvent)

void ACUBE_Simple_C::StopChanneling()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.StopChanneling");

	ACUBE_Simple_C_StopChanneling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.CheckChargingState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CachedTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EventProgress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_Simple_C::CheckChargingState(float CachedTime, float EventProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.CheckChargingState");

	ACUBE_Simple_C_CheckChargingState_Params params;
	params.CachedTime = CachedTime;
	params.EventProgress = EventProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.ResetImpulseTimer
// (BlueprintCallable, BlueprintEvent)

void ACUBE_Simple_C::ResetImpulseTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.ResetImpulseTimer");

	ACUBE_Simple_C_ResetImpulseTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.ExecuteUbergraph_CUBE_Simple
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_Simple_C::ExecuteUbergraph_CUBE_Simple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.ExecuteUbergraph_CUBE_Simple");

	ACUBE_Simple_C_ExecuteUbergraph_CUBE_Simple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.CubeLeftPosition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACUBE_Simple_C::CubeLeftPosition__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.CubeLeftPosition__DelegateSignature");

	ACUBE_Simple_C_CubeLeftPosition__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.CubeReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACUBE_Simple_C::CubeReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.CubeReady__DelegateSignature");

	ACUBE_Simple_C_CubeReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.LandedAtRune__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_Simple_C::LandedAtRune__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.LandedAtRune__DelegateSignature");

	ACUBE_Simple_C_LandedAtRune__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.StopRuneGlow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACUBE_Simple_C::StopRuneGlow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.StopRuneGlow__DelegateSignature");

	ACUBE_Simple_C_StopRuneGlow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CUBE_Simple.CUBE_Simple_C.CubeSetupComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACUBE_Simple_C::CubeSetupComplete__DelegateSignature(int CurrentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CUBE_Simple.CUBE_Simple_C.CubeSetupComplete__DelegateSignature");

	ACUBE_Simple_C_CubeSetupComplete__DelegateSignature_Params params;
	params.CurrentIndex = CurrentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
