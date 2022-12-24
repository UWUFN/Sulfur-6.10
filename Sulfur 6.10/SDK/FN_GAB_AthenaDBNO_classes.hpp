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

// BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C
// 0x0100 (0x09F0 - 0x08F0)
class UGAB_AthenaDBNO_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                DeathMontage;                                             // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DeathHitDirection;                                        // 0x0900(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	struct FHitResult                                  DeathHitResult;                                           // 0x0910(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // 0x0998(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayStatusAfflicted;                                  // 0x09B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                DeathMontageSkydive;                                      // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 DBNOBleedGEHandle;                                        // 0x09E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       HolsterId;                                                // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C");
		return ptr;
	}


	void GetInitialHealAmount(float* Health);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData);
	void OnCancelled_F0F6785443BD2E74F5591884CB19F35F();
	void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F();
	void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F();
	void OnCompleted_F0F6785443BD2E74F5591884CB19F35F();
	void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6();
	void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6();
	void OnFinish_4C169D40441E45B462D83CBBA67F6E45();
	void K2_OnEndAbility(bool* bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_AthenaDBNO(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
