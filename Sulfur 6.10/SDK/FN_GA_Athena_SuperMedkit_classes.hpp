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

// BlueprintGeneratedClass GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C
// 0x0098 (0x0988 - 0x08F0)
class UGA_Athena_SuperMedkit_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	struct FFortGameplayAbilityMontageInfo             AnimMontageInfo;                                          // 0x08F8(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    SpawnHeading;                                             // 0x0958(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Projectile;                                               // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HealingAmount;                                            // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDuration;                                          // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SuperMedkitHolster;                                       // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void Completed_0F34DCEB464B8A7334EFDAA07F2E1036(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0F34DCEB464B8A7334EFDAA07F2E1036(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GA_Athena_SuperMedkit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
