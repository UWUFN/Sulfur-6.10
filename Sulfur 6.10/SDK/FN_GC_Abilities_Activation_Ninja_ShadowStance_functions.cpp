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

// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Abilities_Activation_Ninja_ShadowStance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.UserConstructionScript");

	AGC_Abilities_Activation_Ninja_ShadowStance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
// (BlueprintEvent)

void AGC_Abilities_Activation_Ninja_ShadowStance_C::Animate_Ninja_ShadowStance_Dissolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Animate Ninja ShadowStance Dissolve__FinishedFunc");

	AGC_Abilities_Activation_Ninja_ShadowStance_C_Animate_Ninja_ShadowStance_Dissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
// (BlueprintEvent)

void AGC_Abilities_Activation_Ninja_ShadowStance_C::Animate_Ninja_ShadowStance_Dissolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Animate Ninja ShadowStance Dissolve__UpdateFunc");

	AGC_Abilities_Activation_Ninja_ShadowStance_C_Animate_Ninja_ShadowStance_Dissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Shadow Stance Dissolve Timeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Abilities_Activation_Ninja_ShadowStance_C::Shadow_Stance_Dissolve_Timeline(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.Shadow Stance Dissolve Timeline");

	AGC_Abilities_Activation_Ninja_ShadowStance_C_Shadow_Stance_Dissolve_Timeline_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Abilities_Activation_Ninja_ShadowStance_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.K2_HandleGameplayCue");

	AGC_Abilities_Activation_Ninja_ShadowStance_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Abilities_Activation_Ninja_ShadowStance_C::ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance");

	AGC_Abilities_Activation_Ninja_ShadowStance_C_ExecuteUbergraph_GC_Abilities_Activation_Ninja_ShadowStance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
