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

// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// 0x01D8 (0x0FC8 - 0x0DF0)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DF0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Reload_Empty_;                                            // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Shells_empty_;                                            // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ScopeMesh1P;                                              // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Muzzle_Empty_;                                            // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642;// 0x0E18(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642;// 0x0E1C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E1D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          AnimateScopePostProcess;                                  // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             MuzzleParticleSystem;                                     // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDestroyEffect;                                         // 0x0E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Reload_Particles;                                     // 0x0E41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0E42(0x0006) MISSED OFFSET
	class UParticleSystem*                             Reload_ParticleSystem;                                    // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastPlayFXTime;                                           // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinPlayFXTime;                                            // 0x0E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnFire_;                                         // 0x0E58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnReload_;                                       // 0x0E59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnPump_;                                         // 0x0E5A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0E5B(0x0005) MISSED OFFSET
	class UParticleSystem*                             ShellsParticleSystemTemplate;                             // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReloadSocketName;                                         // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AFortAIPawn*>                         Array_Of_Active_Enemy_AI;                                 // 0x0E70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FWeightedBlendable>                  ScopePostProcessMaterial;                                 // 0x0E80(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Scope___Render_Enemies_To_Custom_Depth_Buffer;            // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0E91(0x0007) MISSED OFFSET
	struct FName                                       Shells_Socket_Name;                                       // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<En_ShellTypes_01>                      ShellTypeSelect;                                          // 0x0EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0EA1(0x0003) MISSED OFFSET
	float                                              Shells_Spawn_Rate_Scale;                                  // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShellsRotationRate;                                       // 0x0EA8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Velocity;                                          // 0x0EB4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Gravity;                                           // 0x0EC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Shells_Lifetime;                                          // 0x0ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Size;                                              // 0x0ED0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Shells_Time_Dilation;                                     // 0x0EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Target_Scope_Vignette_Blur_Screen_Percentage;             // 0x0EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scope_Camera_Offset_Amount;                               // 0x0EE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SmallShells;                                              // 0x0EE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MediumShells;                                             // 0x0EE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LargeShells;                                              // 0x0EEA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShotgunShells;                                            // 0x0EEB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnergyShells;                                             // 0x0EEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0EED(0x0003) MISSED OFFSET
	float                                              Inherit_Parent_Velocity;                                  // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cylindrical_Radius;                                       // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cylindrical_Height;                                       // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugShellsSocket_;                                       // 0x0EFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_2_Post_Processes_For_the_Scope;                       // 0x0EFD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0EFE(0x0002) MISSED OFFSET
	class USoundBase*                                  Sound_ScopeZoomIn;                                        // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ScopeZoomOut;                                       // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       ReticleHUDElementTags;                                    // 0x0F18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Is_Wind_Enabled;                                          // 0x0F38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0F39(0x0007) MISSED OFFSET
	class UParticleSystem*                             MuzzleWindParticleSystem;                                 // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleParticleSystem1P;                                   // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldHideReticleAfterDelay;                              // 0x0F50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0F51(0x0007) MISSED OFFSET
	class UPostProcessComponent*                       DownScopePostProcessSpawned;                              // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       DownScopePostProcessSpawned2;                             // 0x0F60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleWindParticleSpawned;                                // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                StencilBufferValue;                                       // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0F74(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_PitchOffset;                                        // 0x0F78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ScopedInLoop;                                       // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ScopeZoomInComp;                                          // 0x0F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ScopedInLoopComp;                                         // 0x0F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ScopeZoomOutComp;                                         // 0x0F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Alteration_Ambient_PS_Max_Draw_Distance;                  // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Muzzle_PS_Max_Draw_Distance;                              // 0x0FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Beam_PS_Max_Draw_Distance;                                // 0x0FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Reload_PS_Max_Draw_Distance;                              // 0x0FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shells_PS_Max_Draw_Distance;                              // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0FB4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    onAimDownSightsChanged;                                   // 0x0FB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C");
		return ptr;
	}


	void StopScopedAudio();
	void StartScopedAudio();
	void SetPostProcessParams(float InputPin);
	void SetActiveAlterationIdleParticles(bool Active);
	void ShowReticle();
	void HideReticle();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX();
	void ActivateReloadSmokeFX();
	void ActivateShellsFX(bool Bool);
	void DeactivateShellsFX();
	void SetupShellFX();
	void UpdateShellEmittersFX();
	void Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection);
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void SetWpnRarity();
	void AddRandomScale();
	void UserConstructionScript();
	void AnimateScopePostProcess__FinishedFunc();
	void AnimateScopePostProcess__UpdateFunc();
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded);
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void OnStopWeaponFireFX();
	void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState>* ReloadStage);
	void OnSetTargeting(bool* bNewIsTargeting);
	void K2_OnUnEquip();
	void InitializeScopeVariables();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue);
	void OnWeaponAttached();
	void OnInitAlteration(class UFortAlterationItemDefinition** NewAlteration);
	void OnInitCosmeticAlterations(struct FFortCosmeticModification* CosmeticMod, class UMaterialInstanceDynamic** DynamicMaterialInstance);
	void ShellsON__onPump_();
	void OnEquippedWeaponDestory();
	void SetWeaponPierceThrough(bool Enable, int TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit);
	void ReceiveBeginPlay();
	void OnWeaponVisibilityChanged(bool* bVisible);
	void HideWeaponMesh();
	void ShowWeaponMesh();
	void HideWeapon();
	void ShowWeapon();
	void ReverseScopePP();
	void ResetDoonceScopeSound();
	void UnhideThirdPersonStuff();
	void PlayScopePP();
	void HideFirstPersonStuff();
	void AbortScopeFX();
	void HideThirdPersonStuff();
	void UnhideFirstPersonStuffPart2(int Which_Call);
	void UnhideFirstPersonStuffPart1();
	void ForceScopeFX();
	void SetupScopePostProcess();
	void BindFireRateChange();
	void PitchUpOnRateOfFireChange(float NewRateOfFire);
	void ShellEjectionFixOn();
	void Bind_on_Effects_Quality();
	void ShellEjectionOff();
	void ForceScopeBackImmediatly();
	void ExecuteUbergraph_B_Ranged_Generic(int EntryPoint);
	void onAimDownSightsChanged__DelegateSignature(bool AimDownsights);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
