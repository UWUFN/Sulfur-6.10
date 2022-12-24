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

// WidgetBlueprintGeneratedClass AthenaAerialFeedback.AthenaAerialFeedback_C
// 0x0010 (0x0268 - 0x0258)
class UAthenaAerialFeedback_C : public UAthenaHUDSituationalFeedback_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                CheckGliderTimerHandle;                                   // 0x0260(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaAerialFeedback.AthenaAerialFeedback_C");
		return ptr;
	}


	bool CheckPawnForGliderDeploy();
	void Update();
	void OnLocalPlayerBeginSkydiving_Bind();
	void GamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
	void OnKeybindsChanged_Bind();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void HandleFallingStarted();
	void CheckFallingForGlider();
	void ExecuteUbergraph_AthenaAerialFeedback(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
