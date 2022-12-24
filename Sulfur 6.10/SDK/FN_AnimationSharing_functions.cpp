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

// Function AnimationSharing.AnimationSharingManager.UnregisterActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimationSharingManager::UnregisterActor(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.UnregisterActor");

	UAnimationSharingManager_UnregisterActor_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeleton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class USkeleton*               SharingSkeleton                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimationSharingManager::RegisterActorWithSkeleton(class AActor* InActor, class USkeleton* SharingSkeleton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeleton");

	UAnimationSharingManager_RegisterActorWithSkeleton_Params params;
	params.InActor = InActor;
	params.SharingSkeleton = SharingSkeleton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationSharing.AnimationSharingManager.RegisterActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimationSharingManager::RegisterActor(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActor");

	UAnimationSharingManager_RegisterActor_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationSharing.AnimationSharingManager.GetManagerForWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationSharingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationSharingManager* UAnimationSharingManager::STATIC_GetManagerForWorld(class UWorld* InWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetManagerForWorld");

	UAnimationSharingManager_GetManagerForWorld_Params params;
	params.InWorld = InWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.GetManagerForActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimationSharingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationSharingManager* UAnimationSharingManager::STATIC_GetManagerForActor(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetManagerForActor");

	UAnimationSharingManager_GetManagerForActor_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.AnimSharingEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationSharingManager::STATIC_AnimSharingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimSharingEnabled");

	UAnimationSharingManager_AnimSharingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentState                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OnDemandState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldProcess                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimationSharingStateProcessor::ProcessActorState(class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, int* OutState, bool* bShouldProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");

	UAnimationSharingStateProcessor_ProcessActorState_Params params;
	params.InActor = InActor;
	params.CurrentState = CurrentState;
	params.OnDemandState = OnDemandState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
	if (bShouldProcess != nullptr)
		*bShouldProcess = params.bShouldProcess;
}


// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UEnum*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");

	UAnimationSharingStateProcessor_GetAnimationStateEnum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
