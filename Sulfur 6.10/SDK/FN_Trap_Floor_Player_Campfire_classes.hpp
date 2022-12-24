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

// BlueprintGeneratedClass Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C
// 0x0098 (0x0DE0 - 0x0D48)
class ATrap_Floor_Player_Campfire_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D48(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Athena_Campfire_Doused;                                 // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Athena_Campfire;                                        // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PlacementSoundLocation;                                   // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ProximityTraceOrigin;                                     // 0x0D70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x0DA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DA1(0x0003) MISSED OFFSET
	int                                                NumTicks;                                                 // 0x0DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTicks;                                                 // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AOE_Radius;                                               // 0x0DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              OverlapObjectTypes;                                       // 0x0DB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     AOE_BoxExtents;                                           // 0x0DC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AOE_FireDamageBoxExtents;                                 // 0x0DCC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CampfireDousedSound;                                      // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C");
		return ptr;
	}


	void InitCampfireEffects();
	void HealTicks();
	void OnRep_IsActive();
	void UserConstructionScript();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void TriggerLaunchEffects(class AFortPlayerPawnAthena* Pawn);
	void ExecuteUbergraph_Trap_Floor_Player_Campfire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
