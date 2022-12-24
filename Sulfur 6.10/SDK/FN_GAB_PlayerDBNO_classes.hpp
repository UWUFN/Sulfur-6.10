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

// BlueprintGeneratedClass GAB_PlayerDBNO.GAB_PlayerDBNO_C
// 0x0160 (0x0A50 - 0x08F0)
class UGAB_PlayerDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                DeathMontage;                                             // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DeathHitDirection;                                        // 0x0900(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	struct FHitResult                                  DeathHitResult;                                           // 0x0910(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // 0x0998(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayStatusAfflicted;                                  // 0x09B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_DBNOSpeed;                                             // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 DBNOSpeedHandle;                                          // 0x09E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              F_FailsafeDBNOSpeed;                                      // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09EC(0x0004) MISSED OFFSET
	TMap<struct FGameplayTag, struct FName>            MAP_DBNOSpeedRowNames;                                    // 0x09F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       N_DBNOSpeedRowName;                                       // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HolsterId;                                                // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_PlayerDBNO.GAB_PlayerDBNO_C");
		return ptr;
	}


	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData);
	void Completed_F61877974D2CED083195EF8A8CDA60C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_F61877974D2CED083195EF8A8CDA60C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_F61877974D2CED083195EF8A8CDA60C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GAB_PlayerDBNO(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
