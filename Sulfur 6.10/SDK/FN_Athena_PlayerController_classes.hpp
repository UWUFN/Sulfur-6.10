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

// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// 0x0028 (0x2608 - 0x25E0)
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x25E0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             ListenerOverride;                                         // 0x25E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleAudio;                                       // 0x25F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleMusic;                                       // 0x25F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  VictoryRoyaleMenuMusicAsset;                              // 0x2600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C");
		return ptr;
	}


	bool IsLocalPlayerFriendsWithSquadMember(class AFortPlayerState** SquadMember);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayWinEffects(class APawn** FinisherPawn, class UFortWeaponItemDefinition** FinishingWeapon, EDeathCause* DeathCause);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Start_Victory_Royale_Music();
	void OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void ExecuteUbergraph_Athena_PlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
