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

// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
// 0x0040 (0x0930 - 0x08F0)
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PostTriggerCancelDelay;                                   // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideReticle;                                              // 0x0904(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0905(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       ReticleHUDElementTags;                                    // 0x0908(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       MontageOverrideSection;                                   // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C");
		return ptr;
	}


	void SetReticleVisibility(bool ShouldHide);
	void GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, TEnumAsByte<EFortCustomBodyType> BodyType, TEnumAsByte<EFortCustomGender> Gender);
	void GetBodyTypeAndGender(TEnumAsByte<EFortCustomBodyType>* BodyType, TEnumAsByte<EFortCustomGender>* Gender);
	void K2_OnEndAbility(bool* bWasCancelled);
	void Completed_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded);
	void K2_ActivateAbility();
	void OnMontageStartedPlaying();
	void PlayInitialEmoteMontage();
	void ExecuteUbergraph_GAB_Emote_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
