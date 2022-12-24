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

// BlueprintGeneratedClass B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C
// 0x0054 (0x101C - 0x0FC8)
class AB_Shotgun_Break_Athena_C : public AB_Shotgun_Standard_Athena_C
{
public:
	bool                                               Debug;                                                    // 0x0FC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0FC9(0x0003) MISSED OFFSET
	float                                              FXTraceYawFullAngle;                                      // 0x0FCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXTracePitchFullAngle;                                    // 0x0FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndOfCenterFXTrace;                                       // 0x0FD4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             AllFXTraceEndPoints;                                      // 0x0FE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     CurrentFXTraceEnd;                                        // 0x0FF0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentFXTraceWasHit;                                     // 0x0FFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0FFD(0x0003) MISSED OFFSET
	TArray<struct FVector>                             AllFXTracerSpawnPoints;                                   // 0x1000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SpawnTracersInsteadOfDummyImpactFX;                       // 0x1010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1011(0x0003) MISSED OFFSET
	float                                              MysteriousRangeBufferForTracers;                          // 0x1014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeLong;                                                // 0x1018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
