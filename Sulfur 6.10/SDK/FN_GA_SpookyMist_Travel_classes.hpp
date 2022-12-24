#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_SpookyMist_Travel.GA_SpookyMist_Travel_C
// 0x010C (0x09FC - 0x08F0)
class UGA_SpookyMist_Travel_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class AFortPawn*                                   Target;                                                   // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // 0x0908(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TravelToLocation;                                         // 0x0914(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TravelTime;                                               // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RestoreGrav;                                              // 0x0928(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Traveling_;                                               // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0931(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MovementStrength;                                         // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class UAnimMontage*                                DashAnimation;                                            // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DashSoundCue;                                             // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cooldown;                                                 // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class UClass*                                      GC_Burst;                                                 // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              DashCooldown;                                             // 0x0970(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DashStrength;                                             // 0x0990(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DashDuration;                                             // 0x09B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                CheckIfColliding;                                         // 0x09D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                IsPlayerTraveling_;                                       // 0x09D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsOnCooldown;                                             // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	class AActor*                                      OverlappingActor;                                         // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                OverlappingActors;                                        // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GC_Wobble;                                                // 0x09F4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_SpookyMist_Travel.GA_SpookyMist_Travel_C");
		return ptr;
	}


	void PlayerCapsuleSizes(float* Radius, float* HalfHeight);
	void SetDashStartEndAndDirection(struct FVector* StartPoint, struct FVector* EndPoint, struct FVector* Direction);
	void HandlePawnDetachRC();
	void OnFinish_7DCB8EEB464593BB57421A868DAD3B3E();
	void Completed_BA1318F5441CE862ADFAB5BA78450BAF(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_BA1318F5441CE862ADFAB5BA78450BAF(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_BA1318F5441CE862ADFAB5BA78450BAF(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_76DD035A4216DFB29C5E0DB3261B6CD8(const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void K2_OnEndAbility(bool* bWasCancelled);
	void CheckIfStillColliding();
	void CheckIfTraveling();
	void On_DBNO();
	void DestroyIfOverlapping();
	void ExecuteUbergraph_GA_SpookyMist_Travel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
