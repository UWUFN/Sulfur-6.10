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

// BlueprintGeneratedClass Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C
// 0x0050 (0x0D98 - 0x0D48)
class ATrap_Floor_Player_Jump_Pad_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D48(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    JumpParticleEffect;                                       // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    JumpMaterial;                                             // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void ExecuteUbergraph_Trap_Floor_Player_Jump_Pad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
