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

// BlueprintGeneratedClass GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C
// 0x00E1 (0x09D1 - 0x08F0)
class UGA_SpookyMist_PassiveSetup_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class APlayerPawn_Athena_C*                        PlayerPawn;                                               // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 LoopingGC;                                                // 0x0900(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GC_TrailFX;                                               // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GC_Looping;                                               // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 MoveSpeedBuff;                                            // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              AbilityDuration;                                          // 0x0920(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DamageShouldEndAbility;                                   // 0x0940(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_MoveSpeed;                                             // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ExitRecovery;                                             // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       AllowInteractTags;                                        // 0x0970(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       NoInteractTags;                                           // 0x0990(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ShouldAllowInteract;                                      // 0x09B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ForcedExit;                                               // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C");
		return ptr;
	}


	void UnBlockAbilityTags();
	void SetBlockAbilityTags();
	void EventReceived_3CB208084D361EC6BA9A619CA44CFB21(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void WhenDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void On_DBNO();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GA_SpookyMist_PassiveSetup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
