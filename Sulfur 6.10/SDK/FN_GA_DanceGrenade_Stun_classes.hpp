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

// BlueprintGeneratedClass GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C
// 0x0028 (0x0918 - 0x08F0)
class UGA_DanceGrenade_Stun_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle                 EffectHandle;                                             // 0x08F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                AnimMontage;                                              // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseSharedAnim;                                      // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0909(0x0007) MISSED OFFSET
	struct FName                                       DanceGrenadeHolsterId;                                    // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C");
		return ptr;
	}


	void InvalidHandle_93D7E1854196ECDA2F2306926AC3D608(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_93D7E1854196ECDA2F2306926AC3D608(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GA_DanceGrenade_Stun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
