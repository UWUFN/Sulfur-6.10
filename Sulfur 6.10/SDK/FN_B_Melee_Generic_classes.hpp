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

// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
// 0x00E8 (0x0C48 - 0x0B60)
class AB_Melee_Generic_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B60(0x0008) (Transient, DuplicateTransient)
	bool                                               Has_Idle_Effect;                                          // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B69(0x0007) MISSED OFFSET
	class UParticleSystem*                             Idle_Effect;                                              // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Effects_Color_Level;                                      // 0x0B78(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Swing_Effect;                                         // 0x0B84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B85(0x0003) MISSED OFFSET
	class UParticleSystem*                             Swing_Effect;                                             // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Effect_Color_Override;                                // 0x0B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B91(0x0003) MISSED OFFSET
	struct FLinearColor                                Main_Effects_Color_Lv;                                    // 0x0B94(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lv2_wpn;                                                  // 0x0BA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lv3_Wpn;                                                  // 0x0BA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0BA6(0x0002) MISSED OFFSET
	struct FLinearColor                                Main_Effects_Color2_Lv;                                   // 0x0BA8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrail_PSC;                                            // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MeleeHeavy_PSC;                                           // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             MeleeHeavy_ParticleSystem;                                // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDestroyEffect;                                         // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0BE1(0x0007) MISSED OFFSET
	struct FName                                       IdleFXAttachSocket;                                       // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFXComponent;                                          // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             AnimTrailsParticles;                                      // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FirstSocketName;                                          // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Second_Socket_Name;                                       // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseAnimTrails;                                            // 0x0C14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0C15(0x0003) MISSED OFFSET
	struct FName                                       SwingFXSocket;                                            // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        PokeAnimations;                                           // 0x0C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    WeaponMID;                                                // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  MeleeHeavy_Sound;                                         // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C");
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void SetWpnRarity();
	void UserConstructionScript();
	void OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded);
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void FootStepLeft();
	void FootStepRight();
	void ReceiveBeginPlay();
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void PlayRClickImpacts();
	void OnPlayImpactFX(struct FHitResult* HitResult, TEnumAsByte<EPhysicalSurface>* ImpactPhysicalSurface, class UParticleSystemComponent** SpawnedPSC);
	void OnEquippedWeaponDestory();
	void OnWeaponAttached();
	void OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance);
	void OnWeaponVisibilityChanged(bool* bVisible);
	void OnWeaponDetached();
	void ExecuteUbergraph_B_Melee_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
