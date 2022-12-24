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

// BlueprintGeneratedClass BP_IslandScripting.BP_IslandScripting_C
// 0x0151 (0x0479 - 0x0328)
class ABP_IslandScripting_C : public AFortAlwaysRelevantReplicatedActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USplineComponent*                            Spline;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                _TotalSteps;                                              // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugIslandPosition;                                      // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Lengths;                                                  // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Debug;                                                    // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    IslandPositionUpdate;                                     // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CachedTime;                                               // 0x0370(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        DebugMesh;                                                // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FSoftObjectPath                             EventBindingClass;                                        // 0x0380(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0398(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_IslandScripting.BP_IslandScripting_C.ServerDataClassRef
	class UObject*                                     ServerOnlyDataObject;                                     // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    DataAssetLoaded;                                          // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     EventString;                                              // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      IslandClassRef;                                           // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Athena_RuneSeal_C*>               RuneSeals;                                                // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FString>                             EventStrings;                                             // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LastEventName;                                            // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimespan                                   EventTimeTotal;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     EventBinding1;                                            // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CrackProgress;                                            // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EventRatioComplete;                                       // 0x043C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Growthstage;                                              // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class AActor*                                      DebugAreaEffect;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FString                                     EventBinding2;                                            // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     IslandPosition;                                           // 0x0460(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class ADudeBro_VortexMeshes_C*                     VortexMeshesBP;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               HasSetIslandPosition;                                     // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IslandScripting.BP_IslandScripting_C");
		return ptr;
	}


	void OnRep_IslandPosition();
	float ConvertDebugPosToTime(float InputPin);
	void OnRep_CachedTime();
	void SetupDebug(bool Debug);
	void OnRep_CubeletGrowthstage();
	void OnRep_BeaconActive();
	void SetupCrackProgress();
	struct FVector GetIslandPositionFromTime(float Time);
	void SetupSplineLengthArray();
	void UserConstructionScript();
	void OnLoaded_55D3F973490D118E6671D19F32CF8F64(class UClass* Loaded);
	void OnEventEnded_9931B789480C855772A26B8B418C71A1(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_9931B789480C855772A26B8B418C71A1(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_9931B789480C855772A26B8B418C71A1(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventEnded_8E09FC134C440494335C22A68BF144C5(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_8E09FC134C440494335C22A68BF144C5(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_8E09FC134C440494335C22A68BF144C5(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void BindCalendarEvents();
	void GetIslandPosition();
	void ReceiveBeginPlay();
	void ToggleAreaEffect();
	void SetupRemainingVariables();
	void TrySetIslandLocation();
	void ExecuteUbergraph_BP_IslandScripting(int EntryPoint);
	void DataAssetLoaded__DelegateSignature();
	void IslandPositionUpdate__DelegateSignature(const struct FVector& Position);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
