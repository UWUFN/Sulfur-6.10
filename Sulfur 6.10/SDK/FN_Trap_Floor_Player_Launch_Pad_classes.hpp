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

// BlueprintGeneratedClass Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C
// 0x0050 (0x0DF8 - 0x0DA8)
class ATrap_Floor_Player_Launch_Pad_C : public AFortLauncherAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DA8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Athena_LaunchPad_temp;                                  // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PlacementSoundLocation;                                   // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Athena_Launchpad_Collision;                             // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void TriggerLaunchEffects(class AFortPlayerPawnAthena** Pawn);
	void ExecuteUbergraph_Trap_Floor_Player_Launch_Pad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
