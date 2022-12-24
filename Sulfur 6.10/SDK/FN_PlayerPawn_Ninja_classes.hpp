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

// BlueprintGeneratedClass PlayerPawn_Ninja.PlayerPawn_Ninja_C
// 0x0110 (0x2668 - 0x2558)
class APlayerPawn_Ninja_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2558(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            DragonSlashImpact;                                        // 0x2560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          MI_ShadowStanceDissolve;                                  // 0x2568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TestMacros;                                               // 0x2570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DimMakActive;                                             // 0x2571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Shadow_Stance_Active;                                     // 0x2572(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x2573(0x0005) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceDissolveArray;                            // 0x2578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          MI_Shadow_Stance_Translucent_Shader;                      // 0x2588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Body;                    // 0x2590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Head;                    // 0x25A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ShadowStanceVisibility;                                   // 0x25B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x25B4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MI_Shadow_Stance_Translucent_Shader_Enemy_View;           // 0x25B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Shadow_Stance_Material;                                   // 0x25C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DragonSlashActive;                                        // 0x25C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponsShadowStanceReversed;                              // 0x25C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x25CA(0x0006) MISSED OFFSET
	class UClass*                                      GE_AssassinationStacks;                                   // 0x25D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SplineVolumeTrail_v1b_C*                 TOTD_SplineBP;                                            // 0x25D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    NinjaStarTrail;                                           // 0x25E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               NinjaStarsPiercing;                                       // 0x25E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x25E9(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Hat;                     // 0x25F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Face;                    // 0x2600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Charm;                   // 0x2610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MID_ShadowStanceTranslucentArray_Backpack;                // 0x2620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            MasterMIDShadowStanceTranslucentArray;                    // 0x2630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              Master_Shadow_Stance_Component_Array;                     // 0x2640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     SK_DragonSlashSword;                                      // 0x2650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_EnableMantisLeap;                                      // 0x2658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     SK_ThrowingStars;                                         // 0x2660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Ninja.PlayerPawn_Ninja_C");
		return ptr;
	}


	void SetupShadowMeshAssetsAndMaterials(TEnumAsByte<EFortCustomPartType> PartType, class USkeletalMeshComponent** Shadow_Mesh_Component, TArray<class UMaterialInterface*>* Character_Body_Part_MID_Array, TArray<class UMaterialInstanceDynamic*>* Empty_Translucent_Shadow_Stance_Output_MID_Array, bool* Set);
	void CreateAndAttachDuplicateEffectSkeletalMeshes(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array);
	void UserConstructionScript();
	void OnWeaponEquipped(class AFortWeapon** NewWeapon, class AFortWeapon** PrevWeapon);
	void DragonSlashActivatedOrDeactivated(bool Active_);
	void ReceiveBeginPlay();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void SetMenuScreenClassName();
	void NinjaStarTrails_On();
	void NinjaStarTrails_Off();
	void SetPiercingForFX(bool NewPierceValue);
	void OnLanded(struct FHitResult* Hit);
	void StopEmittingNewSplines();
	void OnTeleportedClient();
	void TailOfDragonEnd();
	void TailOfDragonStart(float AoeCloudTimeToLive, float MontageLength);
	void ExecuteUbergraph_PlayerPawn_Ninja(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
