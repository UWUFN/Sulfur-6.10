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

// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// 0x00C0 (0x25C0 - 0x2500)
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2500(0x0008) (Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>                  Default_Weapon_Materials;                                 // 0x2508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBackpackMaterials;                                    // 0x2518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHatMaterials;                                         // 0x2528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHeadMaterials;                                        // 0x2538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBodyMaterials;                                        // 0x2548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnCharmMaterials;                                       // 0x2558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnFaceMaterials;                                        // 0x2568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnLegsMaterials;                                        // 0x2578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnTorsoMaterials;                                       // 0x2588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                       PlayerPostProcessFX;                                      // 0x2598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshes;                                           // 0x25A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            PawnMaterials_ALL;                                        // 0x25B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
