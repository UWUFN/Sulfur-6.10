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

// BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C
// 0x04A1 (0x2591 - 0x20F0)
class AEnemyPawn_Parent_C : public AEnemyPawn_Parent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x20F0(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           WeaponCapsuleCollision;                                   // 0x20F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Elemental_Layer_Audio_Loop;                               // 0x2100(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeMiniBossLightOutTL_Fade_2CE2533F4858E8E5F1A8D39F9CE6D9F4;// 0x2108(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeMiniBossLightOutTL__Direction_2CE2533F4858E8E5F1A8D39F9CE6D9F4;// 0x210C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x210D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeMiniBossLightOutTL;                                   // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_ColorFadeOutTrack_999FBE184F147A4FE3025AB553DBFA9C;// 0x2118(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_FadeInTrack_999FBE184F147A4FE3025AB553DBFA9C;// 0x211C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Enemy_Spawn_Out_TL__Direction_999FBE184F147A4FE3025AB553DBFA9C;// 0x2120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2121(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Enemy_Spawn_Out_TL;                                       // 0x2128(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EnemySpawnInTL_MiniBossFadeLight_5C7376B04DFAE1465B97F1BB1B873D88;// 0x2130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpawnInTL_ColorFadeOutTrack_5C7376B04DFAE1465B97F1BB1B873D88;// 0x2134(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpawnInTL_FadeInTrack_5C7376B04DFAE1465B97F1BB1B873D88;// 0x2138(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EnemySpawnInTL__Direction_5C7376B04DFAE1465B97F1BB1B873D88;// 0x213C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x213D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EnemySpawnInTL;                                           // 0x2140(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Death_Effects;                                            // 0x2148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             HQ_Death_Particle_System;                                 // 0x2150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathFX_SpawnRateScale;                                   // 0x2158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HQ_DeathFX_MaxDistance;                                   // 0x215C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LQ_Death_Particle_System;                                 // 0x2160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderHeight;                                // 0x2168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderRadius;                                // 0x216C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_SpawnRateScale;                                // 0x2170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2174(0x0004) MISSED OFFSET
	struct FName                                       LQ_PS_Socket_Attach;                                      // 0x2178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Death_Socket;                                             // 0x2180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePOCScaleAndMaterials;                                  // 0x2188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POCShouldOverrideMaterial;                                // 0x2189(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POCShouldOverrideMaterialValues;                          // 0x218A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x218B(0x0005) MISSED OFFSET
	class UMaterialInterface*                          POCOverrideMaterial;                                      // 0x2190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                POCMaterialHairColor;                                     // 0x2198(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                POCMaterialSkinColor;                                     // 0x21A8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                POCMaterialPantColor;                                     // 0x21B8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                POCMaterialShirtColor;                                    // 0x21C8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x21D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PseudoRandomNetworkedFloat;                               // 0x21E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRandomColorVariation;                                  // 0x21E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x21E5(0x0003) MISSED OFFSET
	TArray<struct FLinearColor>                        MaleHuskHairColors;                                       // 0x21E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskSkinColors;                                       // 0x21F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskPantColors;                                       // 0x2208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskShirtColors;                                      // 0x2218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 HieghtDistributionCurve;                                  // 0x2228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomizeMeshScale;                                       // 0x2230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xF];                                       // 0x2231(0x000F) MISSED OFFSET
	struct FTransform                                  SpawnParticlesTransform;                                  // 0x2240(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Pumpkin_Head_MID;                                         // 0x2270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpawnParticles;                                           // 0x2278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterElementalParticles;                              // 0x2280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AllowHeadshot;                                            // 0x2288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2289(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_RangedWeapon;                                          // 0x2290(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    HeadshotParticleSystemComp;                               // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                Additive_Hit_React_Montage;                               // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Death_Normal_Sound;                                       // 0x22C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Elemental_Audio_Layer_Sound;                              // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpecialEventHalloweenPumpkinHead;                         // 0x22D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x22D1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_NPCCharacterTypeHuskBasic;                             // 0x22D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SpecialEventHalloweenPumpkinHead;                      // 0x22F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PumpkinHeadPercentage;                                    // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x231C(0x0004) MISSED OFFSET
	class UClass*                                      GE_SpecialEvent_Halloween_PumpkinHead;                    // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PumpkinHeadRotation;                                      // 0x2328(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PumpkinHeadScale;                                         // 0x2334(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PumpkinHeadOffset;                                        // 0x2340(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x234C(0x0004) MISSED OFFSET
	struct FName                                       Headshot_FX_Socket;                                       // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SleepParticleSystemComp;                                  // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Husk_Sleeping_Sound;                                      // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HuskSleepSound;                                           // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WakeUpParticleSystemComp;                                 // 0x2370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              AwokenMaxDistance;                                        // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x237C(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      AwokenSkeletalMesh;                                       // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AwokenSkelMeshMID;                                        // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwokenFadeInTime;                                         // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwokenFadeOutTime;                                        // 0x2394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwokenDuration;                                           // 0x2398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sleeping;                                                 // 0x239C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x239D(0x0003) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              BuildingHitFXSkeletalMeshes;                              // 0x23A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                BuildingHitFXStaticMeshes;                                // 0x23B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              BuildingHitSkeletalMeshes;                                // 0x23C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                BuildingHitStaticMeshes;                                  // 0x23D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BuildingHitFadeInTime;                                    // 0x23E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuildingHitFadeOutTime;                                   // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuildingHitDuration;                                      // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x23EC(0x0004) MISSED OFFSET
	struct FTimerHandle                                DestroyBuildingHitFXTimer;                                // 0x23F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasGlowColorsAssigned;                                    // 0x23F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnInTimelineCompletedSuccessfully;                     // 0x23F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x23FA(0x0006) MISSED OFFSET
	struct FTimerHandle                                CharacterSpawnInSafetyCheckHandle;                        // 0x2400(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_MID;                                             // 0x2408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     FrozenHuskMeshScale;                                      // 0x2418(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               SpawnFrozenHuskMesh;                                      // 0x2424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2425(0x0003) MISSED OFFSET
	class UParticleSystem*                             CharacterAmbientParticlesTemplate;                        // 0x2428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterAmbientParticles;                                // 0x2430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateCharacterMesh;                                   // 0x2438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DuplicateCharacterMID;                                    // 0x2440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BoneRefPosePosition;                                      // 0x2448(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MiniBossSizeScale;                                        // 0x2454(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        MiniBossLight;                                            // 0x2460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MinibossPSComponent;                                      // 0x2468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MiniBossLightIntensity;                                   // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterParticlesMaxDrawDistance;                        // 0x2474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slow_Shackle_Scale;                                       // 0x2478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x247C(0x0004) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   Original_Phys_Material;                                   // 0x2480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            Elemental_FXs;                                            // 0x2490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsMiniBoss;                                               // 0x24A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x24A1(0x0003) MISSED OFFSET
	struct FVector                                     SizeScale_FireElemental;                                  // 0x24A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SizeScale_FireElemental_Head;                             // 0x24B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x24BC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DeathFX_MID_Index0;                                       // 0x24C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Death_FX_MID_Index_1;                                     // 0x24C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_Use_Strands;                                      // 0x24D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x24D1(0x0003) MISSED OFFSET
	struct FLinearColor                                DeathFX_EmissiveHot;                                      // 0x24D4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Death_FX_Emissive_Soft_Color;                             // 0x24E4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_Change_Emissive;                                  // 0x24F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_Customize_Visuals;                                // 0x24F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x24F6(0x0002) MISSED OFFSET
	struct FLinearColor                                Ice_HandL;                                                // 0x24F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Ice_HandR;                                                // 0x2508(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Ice_HandL_Name;                                           // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Ice_HandR_Name;                                           // 0x2520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ice_SpawnRateScale;                                       // 0x2528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_ElecFresExp;                                    // 0x252C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_SizeScale;                                      // 0x2530(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_WPOScale;                                       // 0x253C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_WPOBias;                                        // 0x2548(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_SpawnScaleRate;                                 // 0x2554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Previous_MID_AuxObjs;                                     // 0x2558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             Auxillary_Objects;                                        // 0x2568(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Restoring_Array_Index;                                    // 0x2578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x257C(0x0004) MISSED OFFSET
	TArray<class UObject*>                             Duplicate_Auxillary_Objects;                              // 0x2580(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Should_Use_Aux_Elemental_Particles;                       // 0x2590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C");
		return ptr;
	}


	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
	void RegisterBuildingHitStaticMesh(class UStaticMeshComponent* Mesh);
	void RegisterBuildingHitSkeletalMesh(class USkeletalMeshComponent* Mesh);
	void ApplyBuildingHitEffectToStaticMesh(class UStaticMeshComponent* Mesh, class UStaticMeshComponent* EffectMesh);
	void ApplyBuildingHitEffectToSkeletalMesh(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* EffectMesh);
	void DynamicMaterialArraySetup(TArray<class UMaterialInstanceDynamic*> Array_to_Store, class UMaterialInterface* New_Material, class UPrimitiveComponent* Mesh_to_Assign_New_Material, TArray<class UMaterialInterface*>* Array_to_Check);
	void DeleteDuplicateCharacterElements();
	void RestorePreviousPhysMaterialOnCharacterMesh(float Delay_in_Seconds);
	void SetMinibossLightHiddenInGame(bool Hidden);
	void SpawnMinibossLight();
	void SetScalarParameterOnAllCharacterMIDsByMap(TMap<struct FName, float> Map);
	void SetVectorParameterOnAllCharacterMIDsByMap(TMap<struct FName, struct FLinearColor> Map);
	void TransformHitLocationWorldSpaceToPreskinnedLocalSpace(struct FVector* PreskinnedLS);
	void SetElementalParticlesHiddenInGame(bool Hidden);
	void SetDuplicateCharacterMeshHiddenInGame(bool Hidden);
	void CreateDuplicateCharacterElements(class UMaterialInterface* Material_to_Apply);
	void SpecialEventHalloweenPumpkinHeadHusk(bool ApplyPumpkinHeadMesh, bool DebugApplicationOrRemoval_);
	void RestorePreviousMaterialOnCharacterElements(float Delay_in_Seconds);
	void CharacterSpawnInSafetyCheck();
	void SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, TArray<struct FParticleSysParam>* InstanceParameters, class UParticleSystemComponent** PSComponentReference);
	void OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override);
	void DestroyAwokenSkeletalMesh();
	void OverrideMaterialAndCopyParametersOnCharacterElements(class UMaterialInterface* New_Material_To_Apply);
	void PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage);
	void SetActiveElementalParticles(bool Active, bool Reset);
	void SetScalarParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, float Scalar_Value);
	void SetVectorParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, const struct FVector& Vector_Value);
	void PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color);
	void StopDeathFX();
	void EnemyDeathVisuals(bool* HQ);
	void UserConstructionScript();
	void FadeMiniBossLightOutTL__FinishedFunc();
	void FadeMiniBossLightOutTL__UpdateFunc();
	void Enemy_Spawn_Out_TL__FinishedFunc();
	void Enemy_Spawn_Out_TL__UpdateFunc();
	void EnemySpawnInTL__FinishedFunc();
	void EnemySpawnInTL__UpdateFunc();
	void EnemySpawnInTL__Spawn__EventFunc();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BeginDeathFX();
	void ManualDespawnEnemy(const struct FVector& RiftLocationWS);
	void ManualEnemySpawnIn(const struct FVector& RiftLocationWS);
	void FadeMiniBossLightOut();
	void SpawnInSafetyCheck();
	void PostSpawnIn();
	void DespawnEnemy(const struct FVector& RiftLocationWS);
	void DebugEnemySpawnIn();
	void OnFinishedEncounterSpawn();
	void OnStartedEncounterSpawn();
	void PawnUniqueIDSet();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void AdditiveHitReactDelay();
	void OnBeginSleepEffects();
	void OnEndSleepEffects();
	void RestorePreviousMaterialDelayCompleted();
	void RestorePreviousMaterialDelay(float Delay_Amount);
	void OnCheatUpdateSpecialEventGE(bool* bShouldUseSpecialEventGE);
	void DestroyBuildingHitEffect();
	void OnBuildingHitPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, struct FGameplayEffectContextHandle* EffectContext, bool* bPlayerPlaced);
	void ExecuteUbergraph_EnemyPawn_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
