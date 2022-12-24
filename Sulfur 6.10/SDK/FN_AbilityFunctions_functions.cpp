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

// Function AbilityFunctions.AbilityFunctions_C.GetAngleBetweenTwoVectors
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 VectorA                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 VectorB                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle__Degrees_                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetAngleBetweenTwoVectors(const struct FVector& VectorA, const struct FVector& VectorB, class UObject* __WorldContext, float* Angle__Degrees_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetAngleBetweenTwoVectors");

	UAbilityFunctions_C_GetAngleBetweenTwoVectors_Params params;
	params.VectorA = VectorA;
	params.VectorB = VectorB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle__Degrees_ != nullptr)
		*Angle__Degrees_ = params.Angle__Degrees_;
}


// Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainerSpec
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortGameplayEffectContainerSpec GE_Container_Spec              (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Target_Selection_List_Index    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          At_Level                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetRangeFromGameplayEffectContainerSpec(const struct FFortGameplayEffectContainerSpec& GE_Container_Spec, int Target_Selection_List_Index, float At_Level, class UObject* __WorldContext, float* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainerSpec");

	UAbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec_Params params;
	params.GE_Container_Spec = GE_Container_Spec;
	params.Target_Selection_List_Index = Target_Selection_List_Index;
	params.At_Level = At_Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function AbilityFunctions.AbilityFunctions_C.GetProjectedTeleportLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MovementDistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetProjectedTeleportLocation(class AActor* Actor, float MovementDistance, class UObject* __WorldContext, struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetProjectedTeleportLocation");

	UAbilityFunctions_C_GetProjectedTeleportLocation_Params params;
	params.Actor = Actor;
	params.MovementDistance = MovementDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function AbilityFunctions.AbilityFunctions_C.ShouldSwordHitsHealRespondToEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityFunctions_C::STATIC_ShouldSwordHitsHealRespondToEvent(const struct FGameplayEventData& Payload, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.ShouldSwordHitsHealRespondToEvent");

	UAbilityFunctions_C_ShouldSwordHitsHealRespondToEvent_Params params;
	params.Payload = Payload;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AbilityFunctions.AbilityFunctions_C.ShouldHammerHitsHealRespondToEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityFunctions_C::STATIC_ShouldHammerHitsHealRespondToEvent(const struct FGameplayEventData& Payload, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.ShouldHammerHitsHealRespondToEvent");

	UAbilityFunctions_C_ShouldHammerHitsHealRespondToEvent_Params params;
	params.Payload = Payload;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InRange                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutTile                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_ConvertRangeToTiles(float InRange, class UObject* __WorldContext, float* OutTile)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles");

	UAbilityFunctions_C_ConvertRangeToTiles_Params params;
	params.InRange = InRange;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTile != nullptr)
		*OutTile = params.OutTile;
}


// Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class AActor*>          ArrayToSet                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_SetArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* ArrayToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors");

	UAbilityFunctions_C_SetArrayOfHitActors_Params params;
	params.TargetData = TargetData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayToSet != nullptr)
		*ArrayToSet = params.ArrayToSet;
}


// Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          HitActors                      (Parm, OutParm, ZeroConstructor)

void UAbilityFunctions_C::STATIC_DoNOTUse_BuildArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* HitActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors");

	UAbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors_Params params;
	params.TargetData = TargetData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitActors != nullptr)
		*HitActors = params.HitActors;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
