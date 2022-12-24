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

// BlueprintGeneratedClass GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C
// 0x0028 (0x0918 - 0x08F0)
class UGA_Athena_SlurpJuice_Trigger_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	float                                              TriggerDuration;                                          // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                ShieldPotionGameplayCue;                                  // 0x0908(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SlurpJuiceHolster;                                        // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_SlurpJuice_Trigger.GA_Athena_SlurpJuice_Trigger_C");
		return ptr;
	}


	void Completed_3F4229A2402812AB9F486AB1B9767783(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3F4229A2402812AB9F486AB1B9767783(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3F4229A2402812AB9F486AB1B9767783(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GA_Athena_SlurpJuice_Trigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
