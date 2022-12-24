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

// BlueprintGeneratedClass B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C
// 0x0050 (0x0420 - 0x03D0)
class AB_AthenaPlayerMarker_WithCustomization_C : public AB_AthenaMapMarkerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      TopperClass;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortMapMarkerTopperActor*                   TopperInstance;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	struct FTransform                                  TopperTransform;                                          // 0x03F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37(class UClass* Loaded);
	void OnSetupMarker(struct FPlayerMarkerData* MarkerData);
	void OnMarkerHidden();
	void UpdateTopper();
	void OnMarkerPlaced();
	void ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
