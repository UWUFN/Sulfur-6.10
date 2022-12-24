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

// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
// 0x00C8 (0x0600 - 0x0538)
class ASafeZoneIndicator_C : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (Transient, DuplicateTransient)
	float                                              Pre_Damage_Audio_Ramp_Intensity_05A077AD4FED08F2426E5CA16BD41D7C;// 0x0540(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Pre_Damage_Audio_Ramp__Direction_05A077AD4FED08F2426E5CA16BD41D7C;// 0x0544(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0545(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Pre_Damage_Audio_Ramp;                                    // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C;// 0x0550(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C;// 0x0554(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StormFadeTimeline;                                        // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeSafeZoneVisuals_LERP_E671C79642CD40ABC82D55BF6EBA9626;// 0x0560(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeSafeZoneVisuals__Direction_E671C79642CD40ABC82D55BF6EBA9626;// 0x0564(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeSafeZoneVisuals;                                      // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ShieldBoundaryAudio;                                      // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ShieldBoundaryLoopSound;                                  // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocalPlayerOutside;                                      // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	float                                              AudioCrossfade;                                           // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioPitchMod;                                            // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class USoundBase*                                  HoldingLoopSound;                                         // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HoldingAudio;                                             // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AAthena_GameState_C*                         GameState;                                                // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldingStartTime;                                         // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class USoundBase*                                  HoldingLoopTickSound;                                     // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HoldingTickAudio;                                         // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SafeZoneMID;                                              // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioLowPassValue;                                        // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioStormFade;                                           // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HugeMovementFade;                                         // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextSafeZoneSweepSpeed;                                   // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                MegaStormDamageTimer;                                     // 0x05D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MegastormAudioDuration;                                   // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MegastormAudioIntensity;                                  // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMegastormAudioActive;                                    // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x05E9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSafeZoneStateChangeDispatcher;                          // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C");
		return ptr;
	}


	void GetAthenaGameState(class AAthena_GameState_C** AthenaGS);
	void UpdateAudioComponentLocations();
	void HandleInsideOutsideMix();
	void InitClosestPointAudio();
	void UserConstructionScript();
	void FadeSafeZoneVisuals__FinishedFunc();
	void FadeSafeZoneVisuals__UpdateFunc();
	void StormFadeTimeline__FinishedFunc();
	void StormFadeTimeline__UpdateFunc();
	void Pre_Damage_Audio_Ramp__FinishedFunc();
	void Pre_Damage_Audio_Ramp__UpdateFunc();
	void OnSafeZoneStateChange(EFortSafeZoneState* NewState, bool* bInitial);
	void ReceiveBeginPlay();
	void Apply_Lowpass_to_Audio();
	void ResetSafeZoneScale();
	void stormy(float NewParam);
	void ReceiveDestroyed();
	void OnBeginStartingStateEffectsEvent();
	void ReceiveTick(float* DeltaSeconds);
	void Megastorm_Pre_Damage_Tell();
	void Start_Megastorm_Audio();
	void ExecuteUbergraph_SafeZoneIndicator(int EntryPoint);
	void OnSafeZoneStateChangeDispatcher__DelegateSignature(EFortSafeZoneState SafeZoneState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
