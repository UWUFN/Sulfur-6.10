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

// BlueprintGeneratedClass GA_Athena_Rift_Item.GA_Athena_Rift_Item_C
// 0x0020 (0x0910 - 0x08F0)
class UGA_Athena_Rift_Item_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDuration;                                          // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0904(0x0004) MISSED OFFSET
	struct FName                                       RiftItemHolster;                                          // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Rift_Item.GA_Athena_Rift_Item_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void Completed_1B4C20DD4792D45069FE6C8D47581114(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_1B4C20DD4792D45069FE6C8D47581114(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_1B4C20DD4792D45069FE6C8D47581114(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GA_Athena_Rift_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
