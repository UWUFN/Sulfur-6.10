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

// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
// 0x0011 (0x0901 - 0x08F0)
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                TC_AbilitiesGenericTriggeredAbilityActivate;              // 0x08F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPlayerHolsterState;                                      // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C");
		return ptr;
	}


	void SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful);
	void TriggeredAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAT_TriggeredAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
