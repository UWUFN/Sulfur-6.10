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

// BlueprintGeneratedClass GA_Athena_Slurp.GA_Athena_Slurp_C
// 0x0030 (0x0920 - 0x08F0)
class UGA_Athena_Slurp_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                IncreCheck;                                               // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTicks;                                                 // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0908(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TickRate;                                                 // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDuration;                                          // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                ShieldPotionGameplayCue;                                  // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Slurp.GA_Athena_Slurp_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ApplyHealthOrShield();
	void ExecuteUbergraph_GA_Athena_Slurp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
