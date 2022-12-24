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

// BlueprintGeneratedClass GA_Athena_RCRocket.GA_Athena_RCRocket_C
// 0x0060 (0x0950 - 0x08F0)
class UGA_Athena_RCRocket_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class AB_PrjPawn_Athena_RCRocket_C*                SpawnedRocket;                                            // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GT_EventWeaponFire;                                       // 0x0908(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GT_EventWeaponFire_RCRocket;                              // 0x0910(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AController*                                 PawnsController;                                          // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0920(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_RCRocket.GA_Athena_RCRocket_C");
		return ptr;
	}


	void Update_Ignore_Move_and_Turn_Input(class AController* InController, bool Ignore);
	void Validate_RC_Pawn(class AB_PrjPawn_Athena_RCRocket_C* RCPawn);
	void Adjust_Location_For_Vehicle(class AFortPlayerPawn* Pawn, const struct FVector& InLocation, struct FVector* OutLocation);
	struct FVector Calculate_Launch_Forward_Adjustment();
	struct FVector Calculate_Launch_Up_Adjustment();
	struct FVector Calculate_Launch_Right_Adjustment();
	void CalculateRocketSpawnLocation(struct FTransform* Transform);
	void GetAthenaPlayerPawn(class AFortPlayerPawnAthena** AsFort_Player_Pawn_Athena);
	void GetAthenaPlayerController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GA_Athena_RCRocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
