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

// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
// 0x0158 (0x04E0 - 0x0388)
class UAthenaLobby_C : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UAthenaMatchmakingPlay_C*                    AthenaMatchmakingPlay;                                    // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBuildWatermark_C*                           BuildWatermark;                                           // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USocialImportButton_C*                       Button_SocialImport;                                      // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ButtonGamepadSelect;                                      // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDailyQuestsPanel_C*                         DailyQuestsPanel;                                         // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               DefaultLobbyDetails;                                      // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UEmergencyNoticeWidget_C*                    EmergencyNoticeWidget;                                    // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFriendLinkButton_C*                         FriendLinkButton;                                         // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                       LobbyDetailsModeSwitcher;                                 // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMatchmakingRegionAndPool_C*                 MatchmakingRegion;                                        // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UPlayerEmblemAndXp_C*                        PlayerEmblemAndXp;                                        // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaLobbyPlayerPanel_C*                   PlayerPanel;                                              // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaFrontEndRadialPicker_C*               RadialPicker;                                             // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ShadowPlayHighlights;                                     // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UShowdownLobbyPanel_C*                       ShowdownLobbyDetails;                                     // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFancyToastWidget_C*                         StoreToastWidget;                                         // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         InputCancel;                                              // 0x0410(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SwitcherDetailsActiveIndex;                               // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	TArray<struct FFortTeamMemberInfo>                 TeamMembersInfo;                                          // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                HoveredPlayerIndex;                                       // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         InputScroll;                                              // 0x0440(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SelectedPlayerIndex;                                      // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	TArray<int>                                        NavigationOrderToPlayerIndex;                             // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                         InputNews;                                                // 0x0468(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         InputCustomMatchmaking;                                   // 0x0478(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAthenaNewsModal_C*                          NewsModal;                                                // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAthenaHeadlessReminder_C*                   HeadlessReminder;                                         // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPartyFinder_C*                              SpawnedPartyFinder;                                       // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDpadUpKeyIsDown;                                         // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         InputEmote;                                               // 0x04A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UStoreToastRequest*                          StoreToastRequest;                                        // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TryShowToast;                                             // 0x04C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                HoveredPlayerIndex_0_1;                                   // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         InputAction_InspectChallenges;                            // 0x04D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C");
		return ptr;
	}


	void ConfigureGenericLinkButton();
	void OnKeybindsChanged();
	void CloseEmotePicker();
	void ShowPicker(EFortPickerMode Mode, int InitialOption, bool IgnoreFirstAccept);
	void HandleOnPlayerLeaveUpdatePlayerPanel(int PlayerIndex);
	void RefreshAllPlayerHeroes();
	void OnInputEmote(bool* Passthrough);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void OnPartyFinderClosed(class UCommonActivatablePanel* ActivatablePanel);
	void StartAthenaLobbyMusic();
	void HighlightsCountChanged(int NewParam);
	void ShowModalNews();
	void OnInputNews(bool* bPassThrough);
	void IsLocalPlayer(int PlayerIndex, bool* IsLocalPlayer);
	void OnSelect(int PlayerIndex);
	void CanNavigatePlayers(bool* bCanNavigatePlayers);
	void SetHoveredPlayer(int PlayerIndex);
	void HoverNextPlayer();
	void HoverPreviousPlayer();
	void ShouldAddPlay(bool* bShouldAdd);
	void InitializeInput();
	void OnLobbyPlayerPadUnhovered(int PlayerIndex);
	void OnLobbyPlayerPadHovered(int PlayerIndex);
	void OnLobbyPlayerGadgetsClicked(int PlayerIndex);
	void OnLobbyEmptyPlayerClicked(int PlayerIndex);
	void OnLobbyDisconnected();
	void RefreshLaunch();
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void ShouldAddScroll(bool* bShouldAdd);
	void ShouldAddCancel(bool* bShouldAdd);
	void RefreshInput();
	void OnInputAbandon(bool* bCommited);
	void InitializeContextEvents(bool Register);
	void Focus();
	void OnInputCancel(bool* bCommited);
	void RefreshPlayerHeroes(int UpdatedPlayerIndex);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnTeamMemberRemoved(int EmptySlot);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void Refresh(int UpdatedPlayerIndex);
	void Initialize();
	void DialogResult_156754AE468EF93DCA2009A412591BA7(EFortDialogResult Result, const struct FName& ResultName);
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void OnEndCursorOverPlayer(int* PlayerIndex);
	void OnNavigationLeft();
	void OnNavigationRight();
	void BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPlayerClicked(int* PlayerIndex);
	void OnBeginCursorOverPlayer(int* PlayerIndex);
	void BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature();
	void Event_Abandon();
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void NewsPanelClosed(class UCommonActivatablePanel* Panel);
	void Construct();
	void OnActivated();
	void OnNavigationUp();
	void Destruct();
	void ShowDailyNews();
	void AcceptPartySuggestion();
	void tester();
	void ShowMobileAutoFireScreen();
	void OnDeactivated();
	void DisplayStoreUpdated(class UStoreToastRequest** StoreUpdatedRequest);
	void AttemptToShowToast();
	void TryToastAgainNextFrame();
	void ClosePlayerPanel();
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void BndEvt__AthenaMatchmakingPlay_K2Node_ComponentBoundEvent_1_OnPlaylistChanged__DelegateSignature(const struct FPlaylistFrontEndData& Playlist_Data, const struct FText& Playlist_CMS_Override_Name, EFortLobbyType Lobby_Type);
	void ExecuteUbergraph_AthenaLobby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
