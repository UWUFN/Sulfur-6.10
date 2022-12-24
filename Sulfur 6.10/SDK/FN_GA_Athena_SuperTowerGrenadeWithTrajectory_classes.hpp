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

// BlueprintGeneratedClass GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C
// 0x0034 (0x0B98 - 0x0B64)
class UGA_Athena_SuperTowerGrenadeWithTrajectory_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B64(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B68(0x0008) (Transient, DuplicateTransient)
	class ABP_ProjectileTrajectory_C*                  ProjectileTrajectoryRed;                                  // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrajectoryIndicatorRedClass;                              // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStat;                                            // 0x0B80(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortQuestItemDefinition*                    QuestItemUsePortafort;                                    // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C");
		return ptr;
	}


	void SetupDummyProjectileRed();
	void K2_ActivateAbility();
	void CleanupTrajectoryDisplay();
	void Server_SpawnProjectile(struct FVector* Location, struct FRotator* Direction);
	void UpdateTrajectorySpline();
	void ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
