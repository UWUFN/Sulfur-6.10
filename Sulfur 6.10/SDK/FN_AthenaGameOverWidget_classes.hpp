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

// WidgetBlueprintGeneratedClass AthenaGameOverWidget.AthenaGameOverWidget_C
// 0x00E8 (0x0420 - 0x0338)
class UAthenaGameOverWidget_C : public UAthenaGameOverDisplay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UEliminatedOverlay_C*                        EliminatedOverlay;                                        // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             GameOverSwitcher;                                         // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           OpenShadowPlayHighlights;                                 // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_0_1;                                             // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USpectatedPlayerSwitcher_C*                  SpectatedPlayerSwitcher;                                  // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWinnerOverlay_C*                            WinnerOverlay;                                            // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         Input_ReturnToLobby;                                      // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_NextTeammate;                                       // 0x0380(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_PreviousTeammate;                                   // 0x0390(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_ReportPlayer;                                       // 0x03A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_ViewMatchStats;                                     // 0x03B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ForceSpectatorSetupForReportingPlayer;                    // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FText                                       KillersName;                                              // 0x03C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DeadAndSpectating;                                        // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         Input_Matchmake;                                          // 0x03E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Input_CancelMatchmaking;                                  // 0x03F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               MatchmakingComplete;                                      // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         Input_FollowSpecialActor;                                 // 0x0410(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaGameOverWidget.AthenaGameOverWidget_C");
		return ptr;
	}


	void Handle_SpectateSpecialActor(bool* Passthrough);
	bool CanFollowSpecialActor();
	void FocusPlayerSwitcher();
	void OnPlayerLost(EEndOfMatchReason LostReason);
	void OnWinningScoreDetermined(int Score);
	void Handle_CancelMatchmaking(bool* Passthrough);
	void Handle_Matchmake(bool* Passthrough);
	void InGameMatchmakingComplete(bool Success);
	void SetViewModel(class UAthenaPlayerViewModel* ViewModel);
	bool CanFollowNextOrPreviousTeammate();
	void SetKillersName(struct FFortPlayerDeathReport* FortPlayerDeathReport);
	void OnPlayerOrTeamWon();
	void Handle_ViewMatchStats(bool* Passthrough);
	void Handle_ReportPlayer(bool* Passthrough);
	void InputSetup();
	void Handle_FollowPreviousTeammate(bool* Passthrough);
	void Handle_FollowNextTeammate(bool* Passthrough);
	void InputRefresh();
	void Handle_ReturnToLobby(bool* Passthrough);
	void HighlightCountChanged(int HighlightCount);
	void OnWinnerAnnounced(const struct FString& Winner);
	void HideExtraStuffForSpectating();
	void OnViewTargetChanged();
	void OnPlaceChanged();
	void OnPawnDied(struct FFortPlayerDeathReport* DeathReport);
	void Construct();
	void On_Kill_Feed_Updated();
	void BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void Destruct();
	void OnActivated();
	void OnToggleFullscreenMap_Bind(bool bFullscreenMapVisible);
	void SpectatorStreamingChanged(bool bSpectatorStreaming);
	void ExecuteUbergraph_AthenaGameOverWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
