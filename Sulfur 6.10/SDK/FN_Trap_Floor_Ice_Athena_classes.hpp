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

// BlueprintGeneratedClass Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C
// 0x0069 (0x0DB1 - 0x0D48)
class ATrap_Floor_Ice_Athena_C : public ABuildingTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D48(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Trigger;                                                  // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX;                                                   // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveFX;                                                 // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Place_Trap_Sound;                                         // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                InactiveEmissiveColor;                                    // 0x0D88(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ActiveEmissiveColor;                                      // 0x0D98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PS_DustPlacement;                                         // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FriendlyTrap;                                             // 0x0DB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Ice_Athena.Trap_Floor_Ice_Athena_C");
		return ptr;
	}


	void SetTeamColor();
	void UserConstructionScript();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void OnInitTeam();
	void ExecuteUbergraph_Trap_Floor_Ice_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
