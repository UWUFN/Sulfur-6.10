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

// BlueprintGeneratedClass B_PrjPawn_Athena_RCRocket.B_PrjPawn_Athena_RCRocket_C
// 0x0151 (0x2751 - 0x2600)
class AB_PrjPawn_Athena_RCRocket_C : public AFortRemoteControlledPawnAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2600(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Jet_Launch;                                               // 0x2608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               RideBox;                                                  // 0x2610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               HitBox;                                                   // 0x2618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMissileMesh;                                      // 0x2620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BlinkingLight;                                            // 0x2628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LoadMissile;                                              // 0x2630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Jet;                                                      // 0x2638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MissileInAirBankingAudio;                                 // 0x2640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MissileInAirAudio;                                        // 0x2648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ScaleUpRocket_ScaleRocket_AE4726BD4835EF8E9D886681DC468461;// 0x2650(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleUpRocket__Direction_AE4726BD4835EF8E9D886681DC468461;// 0x265C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x265D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleUpRocket;                                            // 0x2660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDetached;                                                // 0x2668(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTransformed;                                             // 0x2669(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x266A(0x0006) MISSED OFFSET
	class USoundBase*                                  ExplosionSound;                                           // 0x2670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionPS;                                              // 0x2678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TransformationPS;                                         // 0x2680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TransformationSound;                                      // 0x2688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tick_Delta;                                               // 0x2690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentVector;                                            // 0x2694(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousVector;                                           // 0x26A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LevelOutRotation;                                         // 0x26AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Rate;                                                // 0x26B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BankingAudioVolume;                                       // 0x26B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BankingAudioPitch;                                        // 0x26B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAudioModulator;                                       // 0x26BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAudioModulatorMax;                                    // 0x26C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x26C4(0x0004) MISSED OFFSET
	struct FName                                       LeftWing;                                                 // 0x26C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightWing;                                                // 0x26D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TopWing;                                                  // 0x26D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BottomWing;                                               // 0x26E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AB_RCRocket_Launcher_Athena_C*               MissileLauncher;                                          // 0x26E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SwapToIdleAnim;                                           // 0x26F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ControllerAnim;                                           // 0x26F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x2700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeMeshSwap;                                      // 0x2704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFuelAmount;                                            // 0x2708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x270C(0x0004) MISSED OFFSET
	struct FTimerHandle                                FuelTimer;                                                // 0x2710(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  MissileInAirSound;                                        // 0x2718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MissileLowFuelSound;                                      // 0x2720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             Missile_LowFuelWarning;                                   // 0x2728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ControllerRocketFX;                                       // 0x2730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ScreenSoundComponent;                                     // 0x2738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DelayToggleRC_Vis;                                        // 0x2740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2744(0x0004) MISSED OFFSET
	class UParticleSystem*                             HologramRocket;                                           // 0x2748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPlayedFuelWarningSound;                               // 0x2750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_PrjPawn_Athena_RCRocket.B_PrjPawn_Athena_RCRocket_C");
		return ptr;
	}


	void FuelLevelVisuals();
	void OnRep_bDetached();
	void UserConstructionScript();
	void ScaleUpRocket__FinishedFunc();
	void ScaleUpRocket__UpdateFunc();
	void OnNotifyEnd_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnNotifyBegin_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnInterrupted_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnBlendOut_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnCompleted_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnNotifyEnd_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnNotifyBegin_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnInterrupted_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnBlendOut_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnCompleted_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void ReceiveUnpossessed(class AController** OldController);
	void OnTriggeredHealthThreshold(float* PreviousTriggeredHealthThreshold, float* CurrentTriggeredHealthThreshold);
	void ReceiveTick(float* DeltaSeconds);
	void OnDoKill();
	void Multicast_HandleOnKill();
	void SetPreviousVector();
	void LevelOutMissile();
	void Handle_Movement_Audio();
	void ResetWeapon();
	void StartFuelTimer();
	void OnClientSetupRemoteControlPawn();
	void BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_PrjPawn_Athena_RCRocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
