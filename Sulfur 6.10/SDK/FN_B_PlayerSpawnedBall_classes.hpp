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

// BlueprintGeneratedClass B_PlayerSpawnedBall.B_PlayerSpawnedBall_C
// 0x0024 (0x082C - 0x0808)
class AB_PlayerSpawnedBall_C : public APhysicsBall_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0808(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ImpactFX_0_1;                                             // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                CueToPlayWhenReused;                                      // 0x0818(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                CueToPlayWhenExpired;                                     // 0x0820(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BounceCount_0_1;                                          // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_PlayerSpawnedBall.B_PlayerSpawnedBall_C");
		return ptr;
	}


	void PlayCueCenteredOnMe(const struct FGameplayTag& GameplayCueToPlay, float Raw_Magnitude);
	void UserConstructionScript();
	void NotifyToyInstanceOfReuse();
	void StartToyFadeOutDueToNewPlacement();
	void InitializeToyInstance(class AFortPlayerController* OwningPC, int NumTimesSummoned);
	void InitializeToyPreviewInFrontend();
	void ExecuteUbergraph_B_PlayerSpawnedBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
