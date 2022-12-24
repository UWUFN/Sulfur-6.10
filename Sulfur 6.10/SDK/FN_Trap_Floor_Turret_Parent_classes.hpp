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

// BlueprintGeneratedClass Trap_Floor_Turret_Parent.Trap_Floor_Turret_Parent_C
// 0x0028 (0x0E38 - 0x0E10)
class ATrap_Floor_Turret_Parent_C : public ABuildingTrapFloor_Turret
{
public:
	class UStaticMeshComponent*                        TurretBase;                                               // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_Collision;                                            // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FirePoint;                                                // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ExplosionBuildUP_Flashes;                                 // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SK_Playset_Turret;                                        // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Turret_Parent.Trap_Floor_Turret_Parent_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
