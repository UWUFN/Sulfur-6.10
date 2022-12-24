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

// BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C
// 0x0038 (0x0C20 - 0x0BE8)
class AAthenaSupplyDropBalloon_C : public AFortAthenaSupplyDropBalloon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE8(0x0008) (Transient, DuplicateTransient)
	class UFortHealthBarComponent*                     FortHealthBar;                                            // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CrateDestroyed;                                           // 0x0BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0BF9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBalloonDestroyed;                                       // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  BalloonPopSound;                                          // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BalloonPopFX;                                             // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ExecuteUbergraph_AthenaSupplyDropBalloon(int EntryPoint);
	void OnBalloonDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
