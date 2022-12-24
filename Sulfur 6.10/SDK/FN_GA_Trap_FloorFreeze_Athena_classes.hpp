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

// BlueprintGeneratedClass GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C
// 0x0050 (0x0970 - 0x0920)
class UGA_Trap_FloorFreeze_Athena_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	struct FFortTargetFilter                           TargetFilter;                                             // 0x0928(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C");
		return ptr;
	}


	void Cancelled_4882FEAA4B32D70FE53C06A619E266D1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_4882FEAA4B32D70FE53C06A619E266D1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void GA_LifeTimer();
	void ExecuteUbergraph_GA_Trap_FloorFreeze_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
