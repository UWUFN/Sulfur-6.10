#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FortniteUI.EFortHitPointModificationReason
enum class EFortHitPointModificationReason : uint8_t
{
	Invalid                        = 0,
	InitalSet                      = 1,
	AutoRegen                      = 2,
	ItemRegen                      = 3,
	DamageOverTime                 = 4,
	DamageReceived                 = 5,
	EFortHitPointModificationReason_MAX = 6
};


// Enum FortniteUI.EFortBuildingInteraction
enum class EFortBuildingInteraction : uint8_t
{
	None                           = 0,
	Build                          = 1,
	Repair                         = 2,
	Upgrade                        = 3,
	Edit                           = 4,
	BeingModified                  = 5,
	ConfirmEdit                    = 6,
	Creative                       = 7,
	EFortBuildingInteraction_MAX   = 8
};


// Enum FortniteUI.EFortBuildingHealthDisplayRule
enum class EFortBuildingHealthDisplayRule : uint8_t
{
	Never                          = 0,
	Allowed                        = 1,
	Always                         = 2,
	EFortBuildingHealthDisplayRule_MAX = 3
};


// Enum FortniteUI.EFortAnimSpeed
enum class EFortAnimSpeed : uint8_t
{
	Instant                        = 0,
	Fast                           = 1,
	Normal                         = 2,
	EFortAnimSpeed_MAX             = 3
};


// Enum FortniteUI.EFortStoreState
enum class EFortStoreState : uint8_t
{
	Error                          = 0,
	Closed                         = 1,
	CardPackStore                  = 2,
	CurrencyStore                  = 3,
	WebPayment                     = 4,
	PurchaseOpen                   = 5,
	PackOpen                       = 6,
	CardEnter                      = 7,
	CardBackReveal                 = 8,
	CardFlip                       = 9,
	CardFrontReveal                = 10,
	CardExit                       = 11,
	SummaryAdd                     = 12,
	PackDestroy                    = 13,
	Summary                        = 14,
	PresentChoice                  = 15,
	ChoiceMade                     = 16,
	MAX_None                       = 17,
	EFortStoreState_MAX            = 18
};


// Enum FortniteUI.EFortUIState
enum class EFortUIState : uint8_t
{
	Invalid                        = 0,
	Login                          = 1,
	JoinServer                     = 2,
	SubgameSelect                  = 3,
	FrontEnd                       = 4,
	PvE_PostGame                   = 5,
	PvP_PostGame                   = 6,
	InGame                         = 7,
	Cinematic                      = 8,
	Athena                         = 9,
	AthenaSpectator                = 10,
	Replay                         = 11,
	AthenaReplay                   = 12,
	MAX                            = 13
};


// Enum FortniteUI.EInputPriority
enum class EInputPriority : uint8_t
{
	Normal                         = 0,
	Menu                           = 1,
	Chat                           = 2,
	Modal                          = 3,
	Confirmation                   = 4,
	Error                          = 5,
	HUD                            = 6,
	EInputPriority_MAX             = 7
};


// Enum FortniteUI.EFortItemCardSize
enum class EFortItemCardSize : uint8_t
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	XXL                            = 6,
	EFortItemCardSize_MAX          = 7
};


// Enum FortniteUI.EFortCollectionBookPopupButtonType
enum class EFortCollectionBookPopupButtonType : uint8_t
{
	SelectItem                     = 0,
	Preview                        = 1,
	Purchase                       = 2,
	Unslot                         = 3,
	Back                           = 4,
	EFortCollectionBookPopupButtonType_MAX = 5
};


// Enum FortniteUI.ECollectionBookSectionNavTarget
enum class ECollectionBookSectionNavTarget : uint8_t
{
	SlotSelect                     = 0,
	SlotPicker                     = 1,
	ECollectionBookSectionNavTarget_MAX = 2
};


// Enum FortniteUI.EFortFrontEndFeatureStateReason
enum class EFortFrontEndFeatureStateReason : uint8_t
{
	Default                        = 0,
	NoHeroes                       = 1,
	Tutorial                       = 2,
	BROnly                         = 3,
	NoPlayerController             = 4,
	UnexpectedFeature              = 5,
	Invalid                        = 6,
	EFortFrontEndFeatureStateReason_MAX = 7
};


// Enum FortniteUI.EFortFrontEndFeatureState
enum class EFortFrontEndFeatureState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortFrontEndFeatureState_MAX  = 4
};


// Enum FortniteUI.EFortFrontEndFeature
enum class EFortFrontEndFeature : uint8_t
{
	ShowHomeBase                   = 0,
	ShowHeroList                   = 1,
	ShowVault                      = 2,
	ShowStore                      = 3,
	PlayZone                       = 4,
	ShowDailyRewards               = 5,
	ShowHeroSelect                 = 6,
	RecruitHero                    = 7,
	ShowHomeBaseOverview           = 8,
	MAX_None                       = 9,
	EFortFrontEndFeature_MAX       = 10
};


// Enum FortniteUI.EFortHomebaseNodePurchaseRestrictionReason
enum class EFortHomebaseNodePurchaseRestrictionReason : uint8_t
{
	PrerequisitesNotMet            = 0,
	QuestsNotComplete              = 1,
	CanNotAffordCosts              = 2,
	VaultIsOverflown               = 3,
	EFortHomebaseNodePurchaseRestrictionReason_MAX = 4
};


// Enum FortniteUI.EFortUIFeatureStateReason
enum class EFortUIFeatureStateReason : uint8_t
{
	Default                        = 0,
	Tutorial                       = 1,
	ContentInstall                 = 2,
	AccountRestrictions            = 3,
	Platform                       = 4,
	SeasonOrEventNotActive         = 5,
	NoPlayerController             = 6,
	UnexpectedFeature              = 7,
	Invalid                        = 8,
	EFortUIFeatureStateReason_MAX  = 9
};


// Enum FortniteUI.EFortUIFeatureState
enum class EFortUIFeatureState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortUIFeatureState_MAX        = 4
};


// Enum FortniteUI.EFortUIFeature
enum class EFortUIFeature : uint8_t
{
	ShowHome                       = 0,
	ShowPlay                       = 1,
	ShowCommand                    = 2,
	ShowHeros                      = 3,
	ShowSquads                     = 4,
	ShowArmory                     = 5,
	ShowLocker                     = 6,
	ShowSkillTree                  = 7,
	ShowStore                      = 8,
	ShowQuests                     = 9,
	ShowMainStore                  = 10,
	ShowContextHelpMenu            = 11,
	ShowCampaign                   = 12,
	ShowActiveBoost                = 13,
	ShowJournal                    = 14,
	ShowPartyBar                   = 15,
	ShowChatWindow                 = 16,
	ShowFriendsMenu                = 17,
	ShowObjectives                 = 18,
	ShowRatingIconsInTopbar        = 19,
	ShowAntiAddictionMessage       = 20,
	ShowMinorShutdownMessage       = 21,
	ShowHealthWarningScreen        = 22,
	ShowSimplifiedHUD              = 23,
	LargeHeaderFooterButtons       = 24,
	ShowAthenaFavoriting           = 25,
	ShowAthenaItemRandomization    = 26,
	ShowAthenaChallenges           = 27,
	ShowBattlePass                 = 28,
	ShowBattlePassFAQ              = 29,
	ShowReplays                    = 30,
	ShowProfileStatsUI             = 31,
	ShowAthenaItemShop             = 32,
	ShowShowdown                   = 33,
	ShowAccountBoosts              = 34,
	ShowCustomerSupport            = 35,
	ShowGlobalChat                 = 36,
	ShowEULA                       = 37,
	ShowEndOfZoneCinematic         = 38,
	ShowOnboardingCinematics       = 39,
	ShowFounderBannerIcons         = 40,
	ShowCurrentRegionInLobby       = 41,
	EnableFoundersDailyRewards     = 42,
	EnableTwitchIntegration        = 43,
	EnableMatchmakingRegionSetting = 44,
	EnableLanguageSetting          = 45,
	EnableFriendCodeSetting        = 46,
	EnableEarlyAccessLoadingScreenBanner = 47,
	EnableAlterationModifications  = 48,
	EnableSchematicRarityUpgrade   = 49,
	EnableMissionActivationVote    = 50,
	EnableLtmRetrieveTheData       = 51,
	Max_None                       = 52,
	EFortUIFeature_MAX             = 53
};


// Enum FortniteUI.EFlagStatus
enum class EFlagStatus : uint8_t
{
	FlagPresent                    = 0,
	FlagNotPresent                 = 1,
	EFlagStatus_MAX                = 2
};


// Enum FortniteUI.EFortInputMode
enum class EFortInputMode : uint8_t
{
	Frontend                       = 0,
	InGame                         = 1,
	InGameCursor                   = 2,
	EFortInputMode_MAX             = 3
};


// Enum FortniteUI.EFortUrlType
enum class EFortUrlType : uint8_t
{
	NormalWebLink                  = 0,
	AccountCreationLink            = 1,
	HelpLink                       = 2,
	EULALink                       = 3,
	EFortUrlType_MAX               = 4
};


// Enum FortniteUI.EFortComparisonType
enum class EFortComparisonType : uint8_t
{
	None                           = 0,
	HigherValue                    = 1,
	LowerValue                     = 2,
	Upgrade                        = 3,
	EFortComparisonType_MAX        = 4
};


// Enum FortniteUI.EFortClampState
enum class EFortClampState : uint8_t
{
	NoClamp                        = 0,
	MinClamp                       = 1,
	MaxClamp                       = 2,
	EFortClampState_MAX            = 3
};


// Enum FortniteUI.EFortBuffState
enum class EFortBuffState : uint8_t
{
	NoChange                       = 0,
	Better                         = 1,
	Worse                          = 2,
	EFortBuffState_MAX             = 3
};


// Enum FortniteUI.EFortStatValueDisplayType
enum class EFortStatValueDisplayType : uint8_t
{
	BasicPaired                    = 0,
	BasicSingle                    = 1,
	Unique                         = 2,
	ElementalFire                  = 3,
	ElementalIce                   = 4,
	ElementalElectric              = 5,
	EFortStatValueDisplayType_MAX  = 6
};


// Enum FortniteUI.EFortItemCooldownType
enum class EFortItemCooldownType : uint8_t
{
	None                           = 0,
	AmmoRegeneration               = 1,
	ItemActivation                 = 2,
	WeaponReloading                = 3,
	Death                          = 4,
	AthenaWeaponFireCooldown       = 5,
	EFortItemCooldownType_MAX      = 6
};


// Enum FortniteUI.EFortTutorialGlowType
enum class EFortTutorialGlowType : uint8_t
{
	None                           = 0,
	Look                           = 1,
	Click                          = 2,
	EFortTutorialGlowType_MAX      = 3
};


// Enum FortniteUI.EFortBangSize
enum class EFortBangSize : uint8_t
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	EFortBangSize_MAX              = 6
};


// Enum FortniteUI.EViewerNavigationDirection
enum class EViewerNavigationDirection : uint8_t
{
	Previous                       = 0,
	Next                           = 1,
	EViewerNavigationDirection_MAX = 2
};


// Enum FortniteUI.EGridSortKind
enum class EGridSortKind : uint8_t
{
	None                           = 0,
	ByNumber                       = 1,
	ByString                       = 2,
	ByNumberThenString             = 3,
	ByStringThenNumber             = 4,
	EGridSortKind_MAX              = 5
};


// Enum FortniteUI.ESquadSlotSortType
enum class ESquadSlotSortType : uint8_t
{
	ByRating                       = 0,
	ByLevel                        = 1,
	ByRarity                       = 2,
	ByBonus                        = 3,
	ByMatch                        = 4,
	ESquadSlotSortType_MAX         = 5
};


// Enum FortniteUI.EFortChallengeBundleInfoLockedReasonCode
enum class EFortChallengeBundleInfoLockedReasonCode : uint8_t
{
	Unlocked                       = 0,
	NoKnownUnlockMethod            = 1,
	PurchaseTheBattlePass          = 2,
	ReachSpecificTier              = 3,
	TimeLeftBeforeUnlock           = 4,
	EFortChallengeBundleInfoLockedReasonCode_MAX = 5
};


// Enum FortniteUI.EEquippedWeaponDisplay
enum class EEquippedWeaponDisplay : uint8_t
{
	None                           = 0,
	Resource                       = 1,
	Magazine                       = 2,
	Utility                        = 3,
	EEquippedWeaponDisplay_MAX     = 4
};


// Enum FortniteUI.EAthenaEventMatchInfoSortMethod
enum class EAthenaEventMatchInfoSortMethod : uint8_t
{
	Place                          = 0,
	Eliminations                   = 1,
	Score                          = 2,
	Count                          = 3,
	EAthenaEventMatchInfoSortMethod_MAX = 4
};


// Enum FortniteUI.EAthenaPlayerActionAlert
enum class EAthenaPlayerActionAlert : uint8_t
{
	PlayerDown                     = 0,
	PlayerKill                     = 1,
	EnteredStorm                   = 2,
	EAthenaPlayerActionAlert_MAX   = 3
};


// Enum FortniteUI.EFortAthenaPlaylist
enum class EFortAthenaPlaylist : uint8_t
{
	AthenaSolo                     = 0,
	AthenaDuo                      = 1,
	AthenaSquad                    = 2,
	EFortAthenaPlaylist_MAX        = 3
};


// Enum FortniteUI.EHealthBarType
enum class EHealthBarType : uint8_t
{
	Health                         = 0,
	Shield                         = 1,
	Stamina                        = 2,
	EHealthBarType_MAX             = 3
};


// Enum FortniteUI.ERespawnUIState
enum class ERespawnUIState : uint8_t
{
	Hidden                         = 0,
	ShowRespawnEnabled             = 1,
	ShowRespawnDisabled            = 2,
	ERespawnUIState_MAX            = 3
};


// Enum FortniteUI.EAthenaSpectatorHitPointBarType
enum class EAthenaSpectatorHitPointBarType : uint8_t
{
	Health                         = 0,
	Shield                         = 1,
	EAthenaSpectatorHitPointBarType_MAX = 2
};


// Enum FortniteUI.EAthenaSpectatorNameplateDistanceState
enum class EAthenaSpectatorNameplateDistanceState : uint8_t
{
	Near                           = 0,
	MidDistance                    = 1,
	FurtherThanMaxDistance         = 2,
	EAthenaSpectatorNameplateDistanceState_MAX = 3
};


// Enum FortniteUI.EScoreboardSortMethod
enum class EScoreboardSortMethod : uint8_t
{
	Team                           = 0,
	Name                           = 1,
	Kills                          = 2,
	State                          = 3,
	Count                          = 4,
	EScoreboardSortMethod_MAX      = 5
};


// Enum FortniteUI.EBacchusHUDStateType
enum class EBacchusHUDStateType : uint8_t
{
	DoNothing                      = 0,
	Hide                           = 1,
	Show                           = 2,
	EBacchusHUDStateType_MAX       = 3
};


// Enum FortniteUI.EComboSlotType
enum class EComboSlotType : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Combo                          = 2,
	COUNT                          = 3,
	EComboSlotType_MAX             = 4
};


// Enum FortniteUI.EBacchusSignalQuality
enum class EBacchusSignalQuality : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EBacchusSignalQuality_MAX      = 4
};


// Enum FortniteUI.EAthenaNewsStyle
enum class EAthenaNewsStyle : uint8_t
{
	None                           = 0,
	SpecialEvent                   = 1,
	EAthenaNewsStyle_MAX           = 2
};


// Enum FortniteUI.ESubGameFilter
enum class ESubGameFilter : uint8_t
{
	All                            = 0,
	SaveTheWorld                   = 1,
	BattleRoyale                   = 2,
	ESubGameFilter_MAX             = 3
};


// Enum FortniteUI.EDiscoCaptureUIState
enum class EDiscoCaptureUIState : uint8_t
{
	None                           = 0,
	Hidden                         = 1,
	Dance                          = 2,
	Capturing                      = 3,
	Contested                      = 4,
	EDiscoCaptureUIState_MAX       = 5
};


// Enum FortniteUI.EDiscoScoreProgressTypes
enum class EDiscoScoreProgressTypes : uint8_t
{
	None                           = 0,
	ProgressSoundMild              = 1,
	ProgressSoundMedium            = 2,
	ProgressSoundStrong            = 3,
	CountdownSoundNormal           = 4,
	CountdownSoundStrong           = 5,
	EDiscoScoreProgressTypes_MAX   = 6
};


// Enum FortniteUI.EDiscoCaptureProgressState
enum class EDiscoCaptureProgressState : uint8_t
{
	None                           = 0,
	AllyProgress                   = 1,
	EnemyProgress                  = 2,
	EDiscoCaptureProgressState_MAX = 3
};


// Enum FortniteUI.EDiscoCaptureIconState
enum class EDiscoCaptureIconState : uint8_t
{
	None                           = 0,
	Hidden                         = 1,
	Neutral                        = 2,
	AllyCaptured                   = 3,
	EnemyCaptured                  = 4,
	EDiscoCaptureIconState_MAX     = 5
};


// Enum FortniteUI.EPlayerReportingStep
enum class EPlayerReportingStep : uint8_t
{
	ReportingPlayer                = 0,
	ReportingReason                = 1,
	AdditionalInfo                 = 2,
	EPlayerReportingStep_MAX       = 3
};


// Enum FortniteUI.EFortAlterationOptionType
enum class EFortAlterationOptionType : uint8_t
{
	Upgrade                        = 0,
	Replacement                    = 1,
	Max_NONE                       = 2,
	EFortAlterationOptionType_MAX  = 3
};


// Enum FortniteUI.EFortAlterationWidgetState
enum class EFortAlterationWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortAlterationWidgetState_MAX = 3
};


// Enum FortniteUI.ECollectionBookRewardStatus
enum class ECollectionBookRewardStatus : uint8_t
{
	Unknown                        = 0,
	Available                      = 1,
	Claimed                        = 2,
	ECollectionBookRewardStatus_MAX = 3
};


// Enum FortniteUI.ECollectionBookPrimaryNavTarget
enum class ECollectionBookPrimaryNavTarget : uint8_t
{
	Overview                       = 0,
	SectionTileView                = 1,
	ECollectionBookPrimaryNavTarget_MAX = 2
};


// Enum FortniteUI.EFortDefenderSlotType
enum class EFortDefenderSlotType : uint8_t
{
	Invalid                        = 0,
	Defender                       = 1,
	Weapon                         = 2,
	EFortDefenderSlotType_MAX      = 3
};


// Enum FortniteUI.EDynamicEntryPatternDirection
enum class EDynamicEntryPatternDirection : uint8_t
{
	FirstToLast                    = 0,
	LastToFirst                    = 1,
	EDynamicEntryPatternDirection_MAX = 2
};


// Enum FortniteUI.EFortExpeditionListSort
enum class EFortExpeditionListSort : uint8_t
{
	ByRating                       = 0,
	ByDuration                     = 1,
	ByName                         = 2,
	EFortExpeditionListSort_MAX    = 3
};


// Enum FortniteUI.EShareButtonType
enum class EShareButtonType : uint8_t
{
	IOS                            = 0,
	Android                        = 1,
	Generic                        = 2,
	EShareButtonType_MAX           = 3
};


// Enum FortniteUI.EFrontEndRewardType
enum class EFrontEndRewardType : uint8_t
{
	Mission                        = 0,
	Quest                          = 1,
	EpicNewQuest                   = 2,
	Expedition                     = 3,
	CollectionBook                 = 4,
	MissionAlert                   = 5,
	DifficultyIncrease             = 6,
	GiftBox                        = 7,
	ItemCache                      = 8,
	EFrontEndRewardType_MAX        = 9
};


// Enum FortniteUI.EFortUIGameFeedbackType
enum class EFortUIGameFeedbackType : uint8_t
{
	Bug                            = 0,
	Comment                        = 1,
	Player                         = 2,
	EFortUIGameFeedbackType_MAX    = 3
};


// Enum FortniteUI.ESelectionState
enum class ESelectionState : uint8_t
{
	Unselected                     = 0,
	Selected                       = 1,
	CannotGift                     = 2,
	ESelectionState_MAX            = 3
};


// Enum FortniteUI.ENameStatus
enum class ENameStatus : uint8_t
{
	Valid                          = 0,
	TooShort                       = 1,
	TooLong                        = 2,
	ContainsInvalidCharacter       = 3,
	ENameStatus_MAX                = 4
};


// Enum FortniteUI.EFortSupportPerkWidgetState
enum class EFortSupportPerkWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortSupportPerkWidgetState_MAX = 3
};


// Enum FortniteUI.ECenterPopupMessageStateEnum
enum class ECenterPopupMessageStateEnum : uint8_t
{
	NotVisible                     = 0,
	WaitingForMatchDelayCountDown  = 1,
	WaitingForOutpostOwner         = 2,
	WaitingForPlayers              = 3,
	ECenterPopupMessageStateEnum_MAX = 4
};


// Enum FortniteUI.EBuildingFocusType
enum class EBuildingFocusType : uint8_t
{
	Contextual                     = 0,
	Interactable                   = 1,
	Normal                         = 2,
	Count                          = 3,
	EBuildingFocusType_MAX         = 4
};


// Enum FortniteUI.EConversionControlKeyRequest
enum class EConversionControlKeyRequest : uint8_t
{
	AllKeys                        = 0,
	NonConsumableKeys              = 1,
	ConsumableKeys                 = 2,
	EConversionControlKeyRequest_MAX = 3
};


// Enum FortniteUI.EItemRecyclingWarning
enum class EItemRecyclingWarning : uint8_t
{
	HighLevel                      = 0,
	HighRarity                     = 1,
	HighTier                       = 2,
	CanSlotInCollectionBook        = 3,
	EItemRecyclingWarning_MAX      = 4
};


// Enum FortniteUI.EItemDisassembleRestrictionReason
enum class EItemDisassembleRestrictionReason : uint8_t
{
	InnatelyCannotDisassemble      = 0,
	ItemWasGifted                  = 1,
	EItemDisassembleRestrictionReason_MAX = 2
};


// Enum FortniteUI.EItemRecyclingRestrictionReason
enum class EItemRecyclingRestrictionReason : uint8_t
{
	InnatelyUnrecyclable           = 0,
	IsSlottedGroundOperative       = 1,
	MissingCatalyst                = 2,
	ItemOutOnExpedition            = 3,
	InUseByCrafting                = 4,
	EItemRecyclingRestrictionReason_MAX = 5
};


// Enum FortniteUI.EVaultItemLimitStatus
enum class EVaultItemLimitStatus : uint8_t
{
	WellBelowCapacity              = 0,
	NearCapacity                   = 1,
	AtCapacity                     = 2,
	OverCapacity                   = 3,
	EVaultItemLimitStatus_MAX      = 4
};


// Enum FortniteUI.EFortItemCountStyle
enum class EFortItemCountStyle : uint8_t
{
	StackCount                     = 0,
	OverrideCount                  = 1,
	StackCountOverOverride         = 2,
	EFortItemCountStyle_MAX        = 3
};


// Enum FortniteUI.EFortItemInspectionMode
enum class EFortItemInspectionMode : uint8_t
{
	Overview                       = 0,
	Details                        = 1,
	View                           = 2,
	Evolution                      = 3,
	Upgrade                        = 4,
	UpgradeRarity                  = 5,
	EFortItemInspectionMode_MAX    = 6
};


// Enum FortniteUI.EFortItemManagementMode
enum class EFortItemManagementMode : uint8_t
{
	Details                        = 0,
	Comparison                     = 1,
	Mulch                          = 2,
	EFortItemManagementMode_MAX    = 3
};


// Enum FortniteUI.EFortKeybindForcedHoldStatus
enum class EFortKeybindForcedHoldStatus : uint8_t
{
	NoForcedHold                   = 0,
	ForcedHold                     = 1,
	NeverShowHold                  = 2,
	EFortKeybindForcedHoldStatus_MAX = 3
};


// Enum FortniteUI.EFortLegacySlateWidget
enum class EFortLegacySlateWidget : uint8_t
{
	None                           = 0,
	Minimap                        = 1,
	DefaultObjective               = 2,
	MAX                            = 3
};


// Enum FortniteUI.EFortMaterialProgressBarSectionOverflowBehavior
enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8_t
{
	PreserveValues                 = 0,
	ReverseCollapse                = 1,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSectionColorNumber
enum class EFortMaterialProgressBarSectionColorNumber : uint8_t
{
	Color1                         = 0,
	Color2                         = 1,
	EFortMaterialProgressBarSectionColorNumber_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSection
enum class EFortMaterialProgressBarSection : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Negative                       = 3,
	MAX_PROGRESS_BAR_SECTIONS      = 4,
	EFortMaterialProgressBarSection_MAX = 5
};


// Enum FortniteUI.EFortMissionActivationWidgetState
enum class EFortMissionActivationWidgetState : uint8_t
{
	Default                        = 0,
	StartObjective                 = 1,
	IncreaseDifficulty             = 2,
	Invalid                        = 3,
	EFortMissionActivationWidgetState_MAX = 4
};


// Enum FortniteUI.EFortFortMobileShareButtonOS
enum class EFortFortMobileShareButtonOS : uint8_t
{
	Android                        = 0,
	iOS                            = 1,
	EFortFortMobileShareButtonOS_MAX = 2
};


// Enum FortniteUI.EModalContainerSlot
enum class EModalContainerSlot : uint8_t
{
	Top                            = 0,
	Middle                         = 1,
	Bottom                         = 2,
	Background                     = 3,
	Max                            = 4
};


// Enum FortniteUI.EFortMtxStoreOfferType
enum class EFortMtxStoreOfferType : uint8_t
{
	FoundersPack                   = 0,
	CurrencyPack                   = 1,
	Max_None                       = 2,
	EFortMtxStoreOfferType_MAX     = 3
};


// Enum FortniteUI.EFortNodePrerequisiteConnector
enum class EFortNodePrerequisiteConnector : uint8_t
{
	ANDConnector                   = 0,
	ORConnector                    = 1,
	EFortNodePrerequisiteConnector_MAX = 2
};


// Enum FortniteUI.ESettingTab
enum class ESettingTab : uint8_t
{
	None                           = 0,
	Video                          = 1,
	Game                           = 2,
	Brightness                     = 3,
	Audio                          = 4,
	Accessibility                  = 5,
	Input                          = 6,
	Controller                     = 7,
	Account                        = 8,
	CreativeWorld                  = 9,
	CreativePlayer                 = 10,
	ESettingTab_MAX                = 11
};


// Enum FortniteUI.ESettingType
enum class ESettingType : uint8_t
{
	None                           = 0,
	Header                         = 1,
	WindowMode                     = 2,
	DisplayResolution              = 3,
	FrameRateLimit                 = 4,
	VideoQuality                   = 5,
	ThreeDResolution               = 6,
	ViewDistance                   = 7,
	Shadows                        = 8,
	AntiAliasing                   = 9,
	Textures                       = 10,
	Effects                        = 11,
	PostProcessing                 = 12,
	VSync                          = 13,
	MotionBlur                     = 14,
	ShowGrass                      = 15,
	MobileFPSType                  = 16,
	ShowFPS                        = 17,
	AllowLowPower                  = 18,
	AllowVideoPlayback             = 19,
	RegionHeader                   = 20,
	Language                       = 21,
	Region                         = 22,
	MouseSensitivityYaw            = 23,
	MouseSensitivityPitch          = 24,
	TouchDragSensitivity           = 25,
	ControllerLookSensitivityYaw   = 26,
	ControllerLookSensitivityPitch = 27,
	MouseTargetingMultiplier       = 28,
	MouseScopedMultiplier          = 29,
	GamepadTargetingMultiplier     = 30,
	GamepadScopedMultiplier        = 31,
	GamepadBuildingMultiplier      = 32,
	TouchDragTargetingSensitivity  = 33,
	TouchDragScopedSensitivity     = 34,
	TouchVerticalSensitivity       = 35,
	InvertPitch                    = 36,
	InvertYaw                      = 37,
	InvertPitchForMotion           = 38,
	InvertYawForMotion             = 39,
	GyroEnabled                    = 40,
	GyroYawAxis                    = 41,
	GyroSensitivity                = 42,
	GyroTargetingSensitivity       = 43,
	GyroScopedSensitivity          = 44,
	GyroHarvestingToolSensitivity  = 45,
	SafeZone                       = 46,
	StreamerMode                   = 47,
	HiddenMatchmakingDelay         = 48,
	HUDScale                       = 49,
	ShowViewerCount                = 50,
	FirstPersonCamera              = 51,
	PeripheralLighting             = 52,
	ShowGlobalChat                 = 53,
	ConsoleUnlockedFPS             = 54,
	ToggleSprint                   = 55,
	SprintByDefault                = 56,
	SprintCancelsReload            = 57,
	TapInteract                    = 58,
	ToggleTargeting                = 59,
	AutoEquipBetterItems           = 60,
	EquipFirstBuildingPieceWhenSwappingQuickbars = 61,
	EquipFirstBuildingPieceWhenSwappingQuickbarsAthena = 62,
	AimAssist                      = 63,
	EditModeAimAssist              = 64,
	TurboBuild                     = 65,
	AutoChangeMaterial             = 66,
	GamepadAutoRun                 = 67,
	CrossplayPreference            = 68,
	UseTapToShoot                  = 69,
	AutoOpenDoors                  = 70,
	AutoPickupWeapons              = 71,
	AutoPickupWeaponsConsolePC     = 72,
	AutoSortConsumablesToRight     = 73,
	EnableTryBuildOnFocus          = 74,
	EditButtonHoldTime             = 75,
	ShowHeadAccessories            = 76,
	ShowBackpack                   = 77,
	ForceFeedback                  = 78,
	ReplayRecording                = 79,
	ReplayRecordingLargeTeams      = 80,
	UsePowerSavingMode             = 81,
	ShadowPlayHighlights           = 82,
	GammaValue                     = 83,
	MusicVolume                    = 84,
	SoundFXVolume                  = 85,
	DialogVolume                   = 86,
	VoiceChatVolume                = 87,
	CinematicsVolume               = 88,
	Subtitles                      = 89,
	Quality                        = 90,
	VoiceChat                      = 91,
	PushToTalk                     = 92,
	ProximityVoiceChat             = 93,
	VoiceChatInputDevice           = 94,
	VoiceChatOutputDevice          = 95,
	AllowBackgroundAudio           = 96,
	ColorBlindMode                 = 97,
	ColorBlindStrength             = 98,
	IgnoreGamepadInput             = 99,
	VisualizeSoundEffects          = 100,
	VisualizeSoundEffectsHeader    = 101,
	CreativeFriendlyFire           = 102,
	CreativeSpawnItem              = 103,
	CreativeStartingInventory      = 104,
	CreativeHopRockDuration        = 105,
	CreativeSaveLoadout            = 106,
	CreativeLoadLoadout            = 107,
	ESettingType_MAX               = 108
};


// Enum FortniteUI.EFortPerksWidgetState
enum class EFortPerksWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortPerksWidgetState_MAX      = 3
};


// Enum FortniteUI.ESaveProfileForBanners
enum class ESaveProfileForBanners : uint8_t
{
	SaveTheWorld                   = 0,
	BattleRoyale                   = 1,
	ESaveProfileForBanners_MAX     = 2
};


// Enum FortniteUI.EItemRefundability
enum class EItemRefundability : uint8_t
{
	NotRefundable                  = 0,
	Refundable                     = 1,
	AlreadyRefunded                = 2,
	EItemRefundability_MAX         = 3
};


// Enum FortniteUI.EPurchaseReturnStep
enum class EPurchaseReturnStep : uint8_t
{
	ItemSelection                  = 0,
	ReasonSelection                = 1,
	FinalSubmission                = 2,
	EPurchaseReturnStep_MAX        = 3
};


// Enum FortniteUI.EQuestMapScreenMode
enum class EQuestMapScreenMode : uint8_t
{
	MainCampaign                   = 0,
	Event                          = 1,
	EQuestMapScreenMode_MAX        = 2
};


// Enum FortniteUI.ERedeemCodeFailureReason
enum class ERedeemCodeFailureReason : uint8_t
{
	InvalidCode                    = 0,
	CodeAlreadyUsed                = 1,
	AlreadyHasAccess               = 2,
	FailedToGetItem                = 3,
	Unknown                        = 4,
	ERedeemCodeFailureReason_MAX   = 5
};


// Enum FortniteUI.EFortRewardItemType
enum class EFortRewardItemType : uint8_t
{
	RewardedBadges                 = 0,
	MissedBadges                   = 1,
	RewardedItems                  = 2,
	RewardedAccountItems           = 3,
	EFortRewardItemType_MAX        = 4
};


// Enum FortniteUI.EFortShowdownPinState
enum class EFortShowdownPinState : uint8_t
{
	None                           = 0,
	Locked                         = 1,
	Unlocked                       = 2,
	EFortShowdownPinState_MAX      = 3
};


// Enum FortniteUI.EFortShowdownEventState
enum class EFortShowdownEventState : uint8_t
{
	Unknown                        = 0,
	FutureTBD                      = 1,
	FutureScheduled                = 2,
	FutureNext                     = 3,
	LiveParticipating              = 4,
	LiveNotParticipating           = 5,
	CompletedParticipated          = 6,
	CompletedNotPartipated         = 7,
	EFortShowdownEventState_MAX    = 8
};


// Enum FortniteUI.EFortShowdownMatchType
enum class EFortShowdownMatchType : uint8_t
{
	Unknown                        = 0,
	Solo                           = 1,
	Duos                           = 2,
	Squads                         = 3,
	EFortShowdownMatchType_MAX     = 4
};


// Enum FortniteUI.EFortDateTimeStyle
enum class EFortDateTimeStyle : uint8_t
{
	Default                        = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	Full                           = 4,
	EFortDateTimeStyle_MAX         = 5
};


// Enum FortniteUI.ESkillTreePageType
enum class ESkillTreePageType : uint8_t
{
	Basic                          = 0,
	Research                       = 1,
	Event                          = 2,
	ESkillTreePageType_MAX         = 3
};


// Enum FortniteUI.ESocialImportPanelType
enum class ESocialImportPanelType : uint8_t
{
	Athena                         = 0,
	SaveTheWorld                   = 1,
	ESocialImportPanelType_MAX     = 2
};


// Enum FortniteUI.EFortSquadSlottingRestrictionReason
enum class EFortSquadSlottingRestrictionReason : uint8_t
{
	ItemIsInInventoryOverflow      = 0,
	MandatorySlotWouldBeEmptied    = 1,
	ItemIsOnActiveExpedition       = 2,
	HeroRequiresMissingGameplayTag = 3,
	EFortSquadSlottingRestrictionReason_MAX = 4
};


// Enum FortniteUI.EPauseType
enum class EPauseType : uint8_t
{
	NoPause                        = 0,
	Rare                           = 1,
	New                            = 2,
	NewAndRare                     = 3,
	EPauseType_MAX                 = 4
};


// Enum FortniteUI.ECardPackPurchaseError
enum class ECardPackPurchaseError : uint8_t
{
	PendingServerConfirmation      = 0,
	CannotAffordItem               = 1,
	NoneLeft                       = 2,
	PurchaseAlreadyPending         = 3,
	NoConnection                   = 4,
	ECardPackPurchaseError_MAX     = 5
};


// Enum FortniteUI.EFortStoreTransition
enum class EFortStoreTransition : uint8_t
{
	X                              = 0,
	EFortStoreTransition_MAX       = 1
};


// Enum FortniteUI.EFortUISurvivorSquadMatchType
enum class EFortUISurvivorSquadMatchType : uint8_t
{
	Multi                          = 0,
	Single                         = 1,
	Summary                        = 2,
	Max_None                       = 3,
	EFortUISurvivorSquadMatchType_MAX = 4
};


// Enum FortniteUI.ETouchState
enum class ETouchState : uint8_t
{
	None                           = 0,
	WaitingForStart                = 1,
	Started                        = 2,
	Active                         = 3,
	COUNT                          = 4,
	ETouchState_MAX                = 5
};


// Enum FortniteUI.EFortControlType
enum class EFortControlType : uint8_t
{
	None                           = 0,
	CameraAndMovement              = 1,
	Picking                        = 2,
	COUNT                          = 3,
	EFortControlType_MAX           = 4
};


// Enum FortniteUI.EFortTouchControlRegion
enum class EFortTouchControlRegion : uint8_t
{
	MovePlayer                     = 0,
	RotateCamera                   = 1,
	NoRegion                       = 2,
	COUNT                          = 3,
	EFortTouchControlRegion_MAX    = 4
};


// Enum FortniteUI.EFortReturnToFrontendBehavior
enum class EFortReturnToFrontendBehavior : uint8_t
{
	NotSpecified                   = 0,
	HomeScreen                     = 1,
	MapScreen                      = 2,
	MapScreenWithAutoLaunch        = 3,
	MapScreenWithMinimalAutoLaunch = 4,
	EFortReturnToFrontendBehavior_MAX = 5
};


// Enum FortniteUI.EFortUINavigationOp
enum class EFortUINavigationOp : uint8_t
{
	PopContentStack                = 0,
	FeatureSwitch                  = 1,
	NavigateToSkillTree            = 2,
	NavigateToSquadSlot            = 3,
	NavigateToQuest                = 4,
	NavigateToItemManagement       = 5,
	NavigateToExpeditions          = 6,
	NavigateToCollectionBook       = 7,
	None                           = 8,
	EFortUINavigationOp_MAX        = 9
};


// Enum FortniteUI.EFortLoginAccountType
enum class EFortLoginAccountType : uint8_t
{
	None                           = 0,
	EpicAccount                    = 1,
	Facebook                       = 2,
	Google                         = 3,
	PSN                            = 4,
	XBLive                         = 5,
	Erebus                         = 6,
	EFortLoginAccountType_MAX      = 7
};


// Enum FortniteUI.EPlayerReportReasons
enum class EPlayerReportReasons : uint8_t
{
	None                           = 0,
	Communication                  = 1,
	Offensive                      = 2,
	AFK                            = 3,
	IgnoringObjective              = 4,
	Harassment                     = 5,
	Exploiting                     = 6,
	TradeScam                      = 7,
	EPlayerReportReasons_MAX       = 8
};


// Enum FortniteUI.EFortSocialPanelTab
enum class EFortSocialPanelTab : uint8_t
{
	PartyInvitations               = 0,
	Friends                        = 1,
	RecentPlayers                  = 2,
	Max                            = 3
};


// Enum FortniteUI.EFortSocialPanelType
enum class EFortSocialPanelType : uint8_t
{
	Join                           = 0,
	Invite                         = 1,
	Max                            = 2
};


// Enum FortniteUI.EModalContainerSize
enum class EModalContainerSize : uint8_t
{
	ExtraSmall                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Max                            = 4
};


// Enum FortniteUI.ENotificationType
enum class ENotificationType : uint8_t
{
	Basic                          = 0,
	Friends                        = 1,
	ENotificationType_MAX          = 2
};


// Enum FortniteUI.ENotificationResult
enum class ENotificationResult : uint8_t
{
	Confirmed                      = 0,
	Declined                       = 1,
	Unknown                        = 2,
	ENotificationResult_MAX        = 3
};


// Enum FortniteUI.EFortInventoryContext
enum class EFortInventoryContext : uint8_t
{
	Game                           = 0,
	Lobby                          = 1,
	FrontEnd                       = 2,
	Pickup                         = 3,
	EFortInventoryContext_MAX      = 4
};


// Enum FortniteUI.EFortToastType
enum class EFortToastType : uint8_t
{
	Default                        = 0,
	Subdued                        = 1,
	Impactful                      = 2,
	EFortToastType_MAX             = 3
};


// Enum FortniteUI.EUpgradeInfoImageSize
enum class EUpgradeInfoImageSize : uint8_t
{
	Small                          = 0,
	Large                          = 1,
	EUpgradeInfoImageSize_MAX      = 2
};


// Enum FortniteUI.EHeistExitCraftIconState
enum class EHeistExitCraftIconState : uint8_t
{
	None                           = 0,
	Incoming                       = 1,
	Spawned                        = 2,
	Exited                         = 3,
	EHeistExitCraftIconState_MAX   = 4
};


// Enum FortniteUI.EHeistBlingIconState
enum class EHeistBlingIconState : uint8_t
{
	None                           = 0,
	SupplyDrop                     = 1,
	PickupItem                     = 2,
	CarriedEnemy                   = 3,
	CarriedAlly                    = 4,
	EHeistBlingIconState_MAX       = 5
};


// Enum FortniteUI.EHeistExitCraftUIState
enum class EHeistExitCraftUIState : uint8_t
{
	None                           = 0,
	OnTheWay                       = 1,
	Incoming                       = 2,
	Arrived                        = 3,
	EHeistExitCraftUIState_MAX     = 4
};


// Enum FortniteUI.EMatchmakingInputSource
enum class EMatchmakingInputSource : uint8_t
{
	Local                          = 0,
	Remote                         = 1,
	Pool                           = 2,
	EMatchmakingInputSource_MAX    = 3
};


// Enum FortniteUI.EMinigameCaptureObjectiveIconState
enum class EMinigameCaptureObjectiveIconState : uint8_t
{
	NotCaptured                    = 0,
	Captured                       = 1,
	EMinigameCaptureObjectiveIconState_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FortniteUI.FortChallengeBundleInfoLockedReason
// 0x0010
struct FFortChallengeBundleInfoLockedReason
{
	EFortChallengeBundleInfoLockedReasonCode           ReasonCode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                RequiredTier;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   UnlockTimespanAfterStart;                                 // 0x0008(0x0008)
};

// ScriptStruct FortniteUI.FortHUDState
// 0x0013
struct FFortHUDState
{
	bool                                               bInBuildMode;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInCombatMode;                                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInEditMode;                                              // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsParachuteOpen;                                         // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFreeFalling;                                           // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInLockedBus;                                             // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInUnlockedBus;                                           // 0x0006(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnTargeting;                                             // 0x0007(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnUsingScopeTargeting;                                   // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnCanTarget;                                             // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnCanUseScopeTargeting;                                  // 0x000A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnCanUseSecondaryAbility;                                // 0x000B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanOpenChute;                                            // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouching;                                               // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDBNO;                                                    // 0x000E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsControllingRCPawn;                                     // 0x000F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInVehicle;                                             // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDrivingVehicle;                                        // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSwapSeats;                                            // 0x0012(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.ContentPushState
// 0x0003
struct FContentPushState
{
	bool                                               bHideHeader;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideFooter;                                              // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChatWidget;                                          // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaWinnerInfo
// 0x0020
struct FAthenaWinnerInfo
{
	struct FString                                     BigNameWinnerName;                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             WinnerNames;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortTabButtonLabelInfo
// 0x00A0
struct FFortTabButtonLabelInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 IconBrush;                                                // 0x0018(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct FortniteUI.LeaderboardFilter
// 0x0018
struct FLeaderboardFilter
{
	class UDataTable*                                  LeaderboardDisplayData;                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaPlaylistLeaderboardData
// 0x0050
struct FAthenaPlaylistLeaderboardData
{
	struct FName                                       StatId;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       StatDisplayName;                                          // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       TabDisplayName;                                           // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     BaseGameplayTag;                                          // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsGlobal;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUIStatStyle
// 0x00C0
struct FFortUIStatStyle
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       HighestText;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Icon;                                                     // 0x0030(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	ECommonNumericType                                 NumericType;                                              // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              MinimalNotableValue;                                      // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.StatGroupData
// 0x00B0
struct FStatGroupData
{
	struct FText                                       GroupName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Group;                                                    // 0x0018(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Value;                                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChartValue;                                               // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ChartOrigionalValue;                                      // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaReplayBrowserMatchStats
// 0x0028
struct FAthenaReplayBrowserMatchStats
{
	int                                                Hits;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Headshots;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Revives;                                                  // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageTaken;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamagePlayers;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageStructures;                                         // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ChestsOpened;                                             // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Distance;                                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaterialsGathered;                                        // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaterialsUsed;                                            // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaReplayBrowserRowData
// 0x0090
struct FAthenaReplayBrowserRowData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   Date;                                                     // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly)
	int                                                Version;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Mode;                                                     // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              Length;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumPlayers;                                               // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Views;                                                    // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Accuracy;                                                 // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOld;                                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FAthenaReplayBrowserMatchStats              MatchStats;                                               // 0x0050(0x0028) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsSaved;                                                 // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCorrupt;                                               // 0x0079(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFeatured;                                              // 0x007A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x007B(0x0015) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaTeamCountSlotData
// 0x0038
struct FAthenaTeamCountSlotData
{
	struct FText                                       TeamNameText;                                             // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TeamCountText;                                            // 0x0018(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsMyTeam;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.BackgroundColors
// 0x0030
struct FBackgroundColors
{
	struct FLinearColor                                Color_0_1;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                Color_1_2;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                GridColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaBossHealthData
// 0x0030
struct FAthenaBossHealthData
{
	bool                                               bVisible;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowShields;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                Health;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HealthMax;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Shields;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShieldsMax;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.ShowdownLatestTournamentData
// 0x0050
struct FShowdownLatestTournamentData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaNews
// 0x0028
struct FAthenaNews
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaNewsEntry
// 0x0048
struct FAthenaNewsEntry
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaLatestPlaylistData
// 0x0080
struct FAthenaLatestPlaylistData
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct FortniteUI.DiscoCaptureUIData
// 0x0040
struct FDiscoCaptureUIData
{
	EDiscoCaptureUIState                               CurrDisplayState;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AAthenaCapturePoint*                         CapturePoint;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawnAthena*                       CurrPawn;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CurrMID;                                                  // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FillAmount;                                               // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.DiscoCaptureIconData
// 0x0010
struct FDiscoCaptureIconData
{
	EDiscoCaptureIconState                             CurrIconState;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDiscoCaptureProgressState                         CurrProgressState;                                        // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              CurrCapturePercent;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AAthenaCapturePoint*                         CapturePoint;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.DiscoTeamScoreData
// 0x0020
struct FDiscoTeamScoreData
{
	struct FText                                       CurrScoreText;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrScorePercent;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrScore;                                                // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct FortniteUI.PlatformOverrides
// 0x0038
struct FPlatformOverrides
{
	bool                                               DisplayOnPlatform;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       PlatformDisplayText;                                      // 0x0008(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       PlatformHoverText;                                        // 0x0020(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.SliderSettings
// 0x001C
struct FSliderSettings
{
	int                                                MinIntegralDigits;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxIntegralDigits;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinFractionalDigits;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxFractionalDigits;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSensitivityValue;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSensitivityValue;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.SettingData
// 0x0198
struct FSettingData
{
	ESettingType                                       SettingType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      SettingWidgetType;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0010(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       HoverText;                                                // 0x0028(0x0018) (Edit, DisableEditOnInstance)
	struct FPlatformOverrides                          PlatformPCOverrides;                                      // 0x0040(0x0038) (Edit, DisableEditOnInstance)
	struct FPlatformOverrides                          PlatformXboxOverrides;                                    // 0x0078(0x0038) (Edit, DisableEditOnInstance)
	struct FPlatformOverrides                          PlatformPS4Overrides;                                     // 0x00B0(0x0038) (Edit, DisableEditOnInstance)
	struct FPlatformOverrides                          PlatformSwitchOverrides;                                  // 0x00E8(0x0038) (Edit, DisableEditOnInstance)
	struct FPlatformOverrides                          PlatformMobileOverrides;                                  // 0x0120(0x0038) (Edit, DisableEditOnInstance)
	TArray<ESubGame>                                   HiddenModes;                                              // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSliderSettings                             SliderSettings;                                           // 0x0168(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FCurveTableRowHandle                        Curve;                                                    // 0x0188(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.AthenaPlaylistEntry
// 0x0058
struct FAthenaPlaylistEntry
{
	struct FString                                     PlaylistName;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Violator;                                                 // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Image;                                                    // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EFortMatchmakingTileStyle                          SpecialBorderId;                                          // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRevealAnimation;                                     // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortDisplayAttribute
// 0x0070
struct FFortDisplayAttribute
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (BlueprintVisible)
	struct FText                                       Label;                                                    // 0x0020(0x0018) (BlueprintVisible)
	struct FText                                       Value;                                                    // 0x0038(0x0018) (BlueprintVisible)
	struct FText                                       HoverText;                                                // 0x0050(0x0018) (BlueprintVisible)
	float                                              NumericValue;                                             // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortStatValueDisplayType                          DisplayType;                                              // 0x006C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortBuffState                                     BuffState;                                                // 0x006D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortClampState                                    ClampState;                                               // 0x006E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortComparisonType                                ComparisonType;                                           // 0x006F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortStateStyle
// 0x0350
struct FFortStateStyle
{
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0000(0x0330) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                PrimaryColor;                                             // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                SecondaryColor;                                           // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSwipeDetector
// 0x0070
struct FFortSwipeDetector
{
	struct FVector2D                                   SwipeThreshold;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteUI.OptionsReleaseInfo
// 0x0008
struct FOptionsReleaseInfo
{
	ESettingType                                       SettingType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ReleaseVersion;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.RarityArray
// 0x0010
struct FRarityArray
{
	TArray<class UFortItemDefinition*>                 Items;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortDailyRewardsItemData
// 0x0010
struct FFortDailyRewardsItemData
{
	class UFortItem*                                   RewardItem;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RewardDay;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsCurrentReward;                                          // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsClaimed;                                                // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortDailyRewardsScheduleData
// 0x0098
struct FFortDailyRewardsScheduleData
{
	struct FText                                       ScheduleTitle;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ScheduleDescription;                                      // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ScheduleItemDescription;                                  // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ScheduleEpicItemDescription;                              // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                WeekOffset;                                               // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RewardsGiven;                                             // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RewardsAllowed;                                           // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FFortDailyRewardsItemData>           CalendarItems;                                            // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FFortDailyRewardsItemData>           HighValueItems;                                           // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               ClaimedToday;                                             // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortDailyRewardsData
// 0x0018
struct FFortDailyRewardsData
{
	int                                                CurrentLoginDays;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanClaim;                                                // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FFortDailyRewardsScheduleData>       Schedules;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortItemFilterDefinition
// 0x0060
struct FFortItemFilterDefinition
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemSorterDefinition
// 0x0050
struct FFortItemSorterDefinition
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMtxGradient
// 0x0020
struct FFortMtxGradient
{
	struct FLinearColor                                Start;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                Stop;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortMtxDetailsAttribute
// 0x0030
struct FFortMtxDetailsAttribute
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortErrorInfo
// 0x0070
struct FFortErrorInfo
{
	struct FText                                       Operation;                                                // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ErrorMessage;                                             // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     ErrorCode;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EFortErrorSeverity                                 ErrorSeverity;                                            // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FText                                       ContinueButtonText;                                       // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.ExpeditionTabInfo
// 0x00A8
struct FExpeditionTabInfo
{
	struct FName                                       TabNameID;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // 0x0008(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
// 0x0018
struct FFortFrontEndFeatureStruct
{
	EFortFrontEndFeatureState                          CurrentState;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EFortFrontEndFeatureState                          ForcedState;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	EFortFrontEndFeatureStateReason                    ForcedStateReason;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeDelegate;                                           // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct FortniteUI.UnlockableVariantPreviewInfo
// 0x0028
struct FUnlockableVariantPreviewInfo
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SetNumber;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SetCount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       UnlockCondition;                                          // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct FortniteUI.FortMissionRewardInfo
// 0x00B0
struct FFortMissionRewardInfo
{
	struct FSlateBrush                                 Icon;                                                     // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0088(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UFortItem*                                   Item;                                                     // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMissionAlertReward;                                    // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMissionDetails
// 0x0168
struct FFortMissionDetails
{
	EFortTheaterMapTileType                            TileType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       TheaterDisplayName;                                       // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       MissionName;                                              // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       MissionDescription;                                       // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsGroupContent;                                          // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UFortMissionGenerator*                       MissionDefinition;                                        // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       ZoneName;                                                 // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ZoneDescription;                                          // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       RegionThemeName;                                          // 0x0090(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortMissionDetails.RegionThemeIcon
	struct FText                                       DifficultyName;                                           // 0x00D0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFortMissionRewardInfo>              MissionRewards;                                           // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTimespan                                   AvailableTime;                                            // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly)
	int                                                RequiredBaseRating;                                       // 0x0100(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RecommendedBaseRating;                                    // 0x0104(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ContentDifficultyLevel;                                   // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ContentAccountLevel;                                      // 0x010C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LootLevel;                                                // 0x0110(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideConningText;                                     // 0x0114(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	struct FText                                       ConningOverrideText;                                      // 0x0118(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     TheaterUniqueId;                                          // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UFortCloudSaveItemDefinition*                AssociatedCloudSaveItemDefinition;                        // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;                                        // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FText>                               Objectives;                                               // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortActionBeingUnbound
// 0x0010
struct FFortActionBeingUnbound
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InputIndex;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.GiftingErrorText
// 0x0038
struct FGiftingErrorText
{
	EOfferPurchaseError                                GiftingError;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       ErrorTitle;                                               // 0x0008(0x0018) (Edit)
	struct FText                                       ErrorDesc;                                                // 0x0020(0x0018) (Edit)
};

// ScriptStruct FortniteUI.FortUIFeatureStruct
// 0x0018
struct FFortUIFeatureStruct
{
	EFortUIFeatureState                                CurrentState;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                ForcedState;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	EFortUIFeatureStateReason                          ForcedStateReason;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeDelegate;                                           // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct FortniteUI.FortBackendVersion
// 0x0098
struct FFortBackendVersion
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     App;                                                      // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ModuleName;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Branch;                                                   // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BuildDate;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ServerDate;                                               // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Build;                                                    // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Changelist;                                               // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OverridePropertiesVersion;                                // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortLastMissionInfo
// 0x0048
struct FFortLastMissionInfo
{
	struct FText                                       TheaterName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       MissionName;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Difficulty;                                               // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.HeroUIData
// 0x0020
struct FHeroUIData
{
	class UFortHero*                                   Hero;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelected;                                              // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                XPRequirementForCurrentLevel;                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                XPRequirementForNextLevel;                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RequiredXPToLevelUp;                                      // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMaxHeroLevel;                                          // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortAttributeModifierDisplayData
// 0x00A8
struct FFortAttributeModifierDisplayData
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (BlueprintVisible, BlueprintReadOnly)
	float                                              Value;                                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayModOp>                        ModifierType;                                             // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x0028(0x0040) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0068(0x0040) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortKillerVisualInfo
// 0x00A0
struct FFortKillerVisualInfo
{
	struct FSlateBrush                                 KillerBrush;                                              // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       KillerName;                                               // 0x0088(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortFocusedBuildingInfo
// 0x0050
struct FFortFocusedBuildingInfo
{
	bool                                               bIsInteractable;                                          // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBePlayerEdited;                                       // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     IndicatorRelativeLocation;                                // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	EFortBuildingHealthDisplayRule                     HealthDisplayRule;                                        // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MaxHealth;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAnyTrapAttached;                                       // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTrapAttachedFacingPlayer;                              // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPreviewTrapAttached;                                   // 0x001A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              AttachedTrapMaxDurability;                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentLevel;                                             // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortBuildingInteraction                           InteractionType;                                          // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                InteractionCost;                                          // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeBonus;                                             // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     BuildingMaterial;                                         // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHostile;                                               // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FText                                       ContextualText;                                           // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemDelta
// 0x0010
struct FFortItemDelta
{
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BaseAmount;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaAmount;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortBasicMissionInfo
// 0x0388
struct FFortBasicMissionInfo
{
	struct FText                                       MissionName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FFortMultiSizeBrush                         MissionIcons;                                             // 0x0018(0x0330) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       TheaterName;                                              // 0x0348(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DifficultyName;                                           // 0x0360(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UMediaSource*                                EndOfMissionMediaSource;                                  // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEndOfMissionVideo;                                   // 0x0380(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGroupContent;                                          // 0x0381(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemListFilter
// 0x0018
struct FFortItemListFilter
{
	struct FString                                     SearchText;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EFortInventoryFilter                               FilterType;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInStorageVault;                                          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeVaultOverflow;                                    // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUIPerk
// 0x0098
struct FFortUIPerk
{
	struct FFortSpecializationSlot                     SpecializationSlot;                                       // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly)
	class UFortHero*                                   Hero;                                                     // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortSupportBonusType                              SupportBonusType;                                         // 0x0091(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTierPerk;                                              // 0x0092(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUpgrade;                                               // 0x0093(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEvolution;                                             // 0x0094(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEvolutionBranch;                                       // 0x0095(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
// 0x0008 (0x00A8 - 0x00A0)
struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemEntryPreviewData
// 0x0008
struct FFortItemEntryPreviewData
{
	int                                                Quantity;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortItemInspectionMode                            InspectMode;                                              // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortReceivedItemLootInfo
// 0x0028
struct FFortReceivedItemLootInfo
{
	class UFortItemDefinition*                         ItemDef;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     TemplateId;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UFortItem*                                   GeneratedItemInstance;                                    // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.MeasuredText
// 0x0028
struct FMeasuredText
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionStyle
// 0x0040
struct FFortMaterialProgressBarSectionStyle
{
	bool                                               bGradientBar;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       BarParamName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BarColorOneParamName;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BarColorTwoParamName;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BarColorOne;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BarColorTwo;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionInfo
// 0x0048
struct FFortMaterialProgressBarSectionInfo
{
	struct FFortMaterialProgressBarSectionStyle        SectionStyle;                                             // 0x0000(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Percent;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortModalContainerSizeEntry
// 0x001C
struct FFortModalContainerSizeEntry
{
	float                                              AbsoluteWidth;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TopPercent;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MiddlePercent;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BottomPercent;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalPadding;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalPadding;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ContentPadding;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortNodeStyleData
// 0x0668 (0x0670 - 0x0008)
struct FFortNodeStyleData : public FTableRowBase
{
	struct FFortMultiSizeBrush                         ActiveBrush;                                              // 0x0008(0x0330) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortMultiSizeBrush                         InactiveBrush;                                            // 0x0338(0x0330) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UMediaSource*                                PreviewMediaSource;                                       // 0x0668(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortUINodePrerequisite
// 0x06B0
struct FFortUINodePrerequisite
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FFortNodeStyleData                          Style;                                                    // 0x0018(0x0670) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsNodePage;                                              // 0x0688(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0689(0x0003) MISSED OFFSET
	int                                                MinRequiredNodesInPage;                                   // 0x068C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OwnedNodesInPage;                                         // 0x0690(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0694(0x0004) MISSED OFFSET
	struct FText                                       NodeType;                                                 // 0x0698(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.OptionsTabData
// 0x0010
struct FOptionsTabData
{
	TArray<struct FSettingData>                        SettingDatas;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortUIPerkTier
// 0x0020
struct FFortUIPerkTier
{
	class UFortHeroSpecialization*                     HeroSpecialization;                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Tier;                                                     // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UFortHero*                                   CurrentHero;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUpgrade;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEvolution;                                             // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.RadialOptionData
// 0x00C8
struct FRadialOptionData
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 Brush;                                                    // 0x0018(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.RadialOptionData.SoftIcon
};

// ScriptStruct FortniteUI.ItemDefOptionData
// 0x0008 (0x00D0 - 0x00C8)
struct FItemDefOptionData : public FRadialOptionData
{
	class UObject*                                     ItemDef;                                                  // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FortniteUI.SquadQuickChatOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FSquadQuickChatOptionData : public FRadialOptionData
{
	struct FAthenaQuickChatActiveEntry                 ChatEntry;                                                // 0x00C8(0x0014) (Edit, DisableEditOnInstance)
	bool                                               bEnabled;                                                 // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPickerTemporaryWheel
// 0x0030
struct FFortPickerTemporaryWheel
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	TArray<class UFortItemDefinition*>                 Items;                                                    // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.BuildingCategoryOptionData
// 0x0008 (0x00D0 - 0x00C8)
struct FBuildingCategoryOptionData : public FRadialOptionData
{
	TEnumAsByte<EFortBuildingType>                     BuildingType;                                             // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.BuildingOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FBuildingOptionData : public FRadialOptionData
{
	struct FString                                     ClassSuffix;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               ClassMirrored;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ItemCategoryOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FItemCategoryOptionData : public FRadialOptionData
{
	struct FString                                     TemplatePrefix;                                           // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EBuildingAttachmentType>               BuildingAttachmentType;                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ChatOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FChatOptionData : public FRadialOptionData
{
	struct FText                                       ChatText;                                                 // 0x00C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.MapNoteOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FMapNoteOptionData : public FRadialOptionData
{
	struct FText                                       MapNoteText;                                              // 0x00C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.EmoteOptionData
// 0x0008 (0x00D0 - 0x00C8)
struct FEmoteOptionData : public FRadialOptionData
{
	struct FName                                       EmoteCommand;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FortniteUI.PlatformSupportDesc
// 0x0020
struct FPlatformSupportDesc
{
	struct FText                                       DisableDesc;                                              // 0x0000(0x0018) (Edit)
	EFortLoginAccountType                              AccountType;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortTournamentDisplayInfo
// 0x0168 (0x0170 - 0x0008)
struct FFortTournamentDisplayInfo : public FTableRowBase
{
	struct FText                                       TitleLine1;                                               // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       TitleLine2;                                               // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ScheduleInfo;                                             // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       FlavorDescription;                                        // 0x0050(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DetailsDescription;                                       // 0x0068(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ShortFormatTitle;                                         // 0x0080(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       LongFormatTitle;                                          // 0x0098(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                PinScoreRequirement;                                      // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FText                                       PinEarnedText;                                            // 0x00B8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                BaseColor;                                                // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                PrimaryColor;                                             // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                SecondaryColor;                                           // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                HighlightColor;                                           // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                TitleColor;                                               // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundLeftColor;                                      // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundRightColor;                                     // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundTextColor;                                      // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                PosterFadeColor;                                          // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.ShowdownTournamentEntry
// 0x0178
struct FShowdownTournamentEntry
{
	struct FString                                     TournamentDisplayId;                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TitleLine1;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TitleLine2;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ScheduleInfo;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PosterFrontImage;                                         // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PosterBackImage;                                          // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FlavorDescription;                                        // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DetailsDescription;                                       // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ShortFormatTitle;                                         // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LongFormatTitle;                                          // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PinScoreRequirement;                                      // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FString                                     PinEarnedText;                                            // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BaseColor;                                                // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PrimaryColor;                                             // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SecondaryColor;                                           // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HighlightColor;                                           // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TitleColor;                                               // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ShadowColor;                                              // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BackgroundLeftColor;                                      // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BackgroundRightColor;                                     // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BackgroundTextColor;                                      // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PosterFadeColor;                                          // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PlaylistTileImage;                                        // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoadingScreenImage;                                       // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortShowdownScoringRuleInfo
// 0x0010 (0x0018 - 0x0008)
struct FFortShowdownScoringRuleInfo : public FTableRowBase
{
	struct FName                                       DisplayInfoId;                                            // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PointValue;                                               // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ScoreRequirement;                                         // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortShowdownEventBestResultsSummary
// 0x0014
struct FFortShowdownEventBestResultsSummary
{
	int                                                TotalScore;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MatchesPlayed;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumVictoryRoyales;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlacementPoints;                                          // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EliminationPoints;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSkillTreeNodeDisplayData
// 0x0338
struct FFortSkillTreeNodeDisplayData
{
	struct FFortMultiSizeBrush                         Icon;                                                     // 0x0000(0x0330) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UMediaSource*                                PreviewVideoMediaSource;                                  // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.PotentialSpectatorTarget
// 0x0010
struct FPotentialSpectatorTarget
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AFortPlayerStateAthena>       PlayerState;                                              // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCurrentViewTarget;                                       // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortLandingPageDefenderSummaryInfo
// 0x0030
struct FFortLandingPageDefenderSummaryInfo
{
	struct FName                                       SquadId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       TheaterDisplayName;                                       // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     TheaterUniqueId;                                          // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortAttributeModifierAccumulation
// 0x0030
struct FFortAttributeModifierAccumulation
{
	struct FGameplayTag                                GameplayTag;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayAttribute                          Attribute;                                                // 0x0008(0x0020) (BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Magnitude;                                                // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.SquadSlotSortTypes
// 0x0010
struct FSquadSlotSortTypes
{
	TArray<ESquadSlotSortType>                         SortTypes;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.CardPackOffer
// 0x0090
struct FCardPackOffer
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                MtxPrice;                                                 // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECatalogSaleType>                      SaleType;                                                 // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FText                                       SaleText;                                                 // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                Price;                                                    // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RegularPrice;                                             // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFortAccountItemDefinition*                  CurrencyType;                                             // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                QuantityRemaining;                                        // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTimedOffer;                                              // 0x0064(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	struct FFortCatalogMeta                            OfferMetaData;                                            // 0x0068(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.Card
// 0x0018
struct FCard
{
	int                                                QuantityReceived;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UFortItem*                                   Item;                                                     // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPauseType                                         PauseType;                                                // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.OpenedCardPack
// 0x0010
struct FOpenedCardPack
{
	class UFortCardPackItemDefinition*                 CardPackDefinition;                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DisplayLevel;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSurvivorSquadSlottingFeedbackData
// 0x00B0
struct FFortSurvivorSquadSlottingFeedbackData
{
	bool                                               HadLeaderMatch;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasLeaderMatch;                                           // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TMap<struct FGameplayTag, int>                     PreviousSetBonusCounts;                                   // 0x0008(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FGameplayTag, int>                     CurrentSetBonusCounts;                                    // 0x0058(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PreviousPersonalityMatchCount;                            // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPersonalityMatchCount;                             // 0x00AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonSummaryStats
// 0x0070
struct FFortSurvivorSquadSelectorButtonSummaryStats
{
	struct FName                                       SquadId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          FortAttribute;                                            // 0x0008(0x0020) (BlueprintVisible, BlueprintReadOnly)
	float                                              FortAttributeValue;                                       // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FGameplayAttribute                          FortTeamAttribute;                                        // 0x0030(0x0020) (BlueprintVisible, BlueprintReadOnly)
	float                                              TeamFortAttributeValue;                                   // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SquadPowerValue;                                          // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       FortAttributeName;                                        // 0x0058(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonPersonalityMatches
// 0x0340
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{
	int                                                NumPersonalityMatches;                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalNonLeaderSquadMembers;                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HavePersonalityIcons;                                     // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         PersonalityIcons;                                         // 0x0010(0x0330) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortUISurvivorSquadStatMatch
// 0x0370
struct FFortUISurvivorSquadStatMatch
{
	struct FFortMultiSizeBrush                         Icons;                                                    // 0x0000(0x0330) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       MagnitudeText;                                            // 0x0330(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       AttributeDisplayName;                                     // 0x0348(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                NumMembersMeetingCriteria;                                // 0x0360(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumMembersRequired;                                       // 0x0364(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortUISurvivorSquadMatchType                      MatchType;                                                // 0x0368(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortBuffState                                     PreviewEffect;                                            // 0x0369(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x036A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortTabListRegistrationInfo
// 0x00C8
struct FFortTabListRegistrationInfo
{
	struct FName                                       TabNameID;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowedInZone;                                           // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // 0x0010(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      TabButtonType;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TabContentType;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     CreatedTabContentWidget;                                  // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortSkillTreeCanvasStyle
// 0x0034
struct FFortSkillTreeCanvasStyle
{
	float                                              ConnectorThickness;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ConnectorOwnedColor;                                      // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ConnectorPurchasableColor;                                // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ConnectorNonPurchasableColor;                             // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
// 0x0050
struct FFortItemCard_PowerRatingBlock_Configuration
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FMargin                                     CustomRatingInternalPadding;                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   CustomRatingIconSize;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_Configuration.CustomRatingTextStyle
	struct FVector2D                                   ComparisonIndicatorSize;                                  // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration
// 0x0160 (0x01B0 - 0x0050)
struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
	struct FSlateBrush                                 PersonnelPowerRatingIconBrush;                            // 0x0050(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration.PersonnelPowerRatingTextStyle
	struct FSlateBrush                                 SchematicPowerRatingIconBrush;                            // 0x0100(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0188(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration.SchematicPowerRatingTextStyle
};

// ScriptStruct FortniteUI.FortItemCard_NameplateBorder_Configuration
// 0x0098
struct FFortItemCard_NameplateBorder_Configuration
{
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // 0x0010(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
// 0x0008
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration
{
	struct FVector2D                                   IconConstraints;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
// 0x0014
struct FFortItemCard_DetailAreaBorder_Configuration
{
	float                                              MinimumHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_TierMeter_Configuration
// 0x000C
struct FFortItemCard_TierMeter_Configuration
{
	struct FVector2D                                   PipSize;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              InterPipPadding;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
// 0x0350
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x01B0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x01C8(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0260(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration.ItemNameTextStyle
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x029C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x02A4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x02AC(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              RarityNameTextLeftPadding;                                // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x02C4(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration.RarityNameTextStyle
	float                                              ClassIconImageLeftPadding;                                // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ClassIconSize;                                            // 0x02F4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PaddingBetweenClassIconAndName;                           // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0300(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration.ClassNameTextStyle
	float                                              TierMeterLeftPadding;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x032C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     IconSlotOverNameplatePadding;                             // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   IconSlotOverNameplateSize;                                // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration
// 0x00B0 (0x0100 - 0x0050)
struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
	struct FSlateBrush                                 PowerRatingIconBrush;                                     // 0x0050(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration.PowerRatingTextStyle
};

// ScriptStruct FortniteUI.FortItemCard_StackCountBlock_Configuration
// 0x0030
struct FFortItemCard_StackCountBlock_Configuration
{
	bool                                               bShowShorthandStackCount;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_StackCountBlock_Configuration.TextStyle
};

// ScriptStruct FortniteUI.FortItemCard_DurabilityMeter_Configuration
// 0x0014
struct FFortItemCard_DurabilityMeter_Configuration
{
	float                                              MeterThickness;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MeterPadding;                                             // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
// 0x01B0
struct FFortItemCard_XL_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0128(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondTraitSize;                                          // 0x0174(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x017C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x018C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0198(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_XL_TransformKey_Configuration
// 0x0048
struct FFortItemCard_XL_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_LevelMeter_Configuration
// 0x0014
struct FFortItemCard_LevelMeter_Configuration
{
	float                                              MeterThickness;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     MeterPadding;                                             // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
// 0x02C8
struct FFortItemCard_L_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x01B0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x01C8(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ClassIconSize;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x027C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x0284(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x028C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x02A0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x02B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_L_ItemInstance_Configuration
// 0x01B0
struct FFortItemCard_L_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0128(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondTraitSize;                                          // 0x0174(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x017C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x018C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0198(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_L_TransformKey_Configuration
// 0x0048
struct FFortItemCard_L_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
// 0x02C8
struct FFortItemCard_M_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x01B0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x01C8(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ClassIconSize;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x027C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x0284(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x028C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x02A0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x02B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_M_ItemInstance_Configuration
// 0x01B0
struct FFortItemCard_M_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0128(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondTraitSize;                                          // 0x0174(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x017C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x018C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0198(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_M_TransformKey_Configuration
// 0x0048
struct FFortItemCard_M_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
// 0x02C8
struct FFortItemCard_S_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x01B0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x01C8(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ClassIconSize;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PaddingBetweenIconSlots;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x027C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x0284(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x028C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x02A0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TierMeterLeftPadding;                                     // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x02B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_S_ItemInstance_Configuration
// 0x01A0
struct FFortItemCard_S_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0128(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     TierMeterPadding;                                         // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0180(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x018C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortItemCard_S_TransformKey_Configuration
// 0x0048
struct FFortItemCard_S_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
// 0x0034
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0018(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   AvailableUpgradeIconSize;                                 // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
// 0x0188
struct FFortItemCard_XS_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0140(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0170(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_XS_TransformKey_Configuration
// 0x0048
struct FFortItemCard_XS_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortItemCard_XXS_ItemInstance_Configuration
// 0x0030
struct FFortItemCard_XXS_ItemInstance_Configuration
{
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.PlatformPrefixIcon
// 0x0018
struct FPlatformPrefixIcon
{
	struct FString                                     Platform;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  PrefixIcon;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FortniteUI.PlatformPrefixIconList
// 0x0010
struct FPlatformPrefixIconList
{
	TArray<struct FPlatformPrefixIcon>                 PlatformPrefixIcons;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.UINavigationData
// 0x0030
struct FUINavigationData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UObject*                                     ObjectData;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       IdData;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                IntData;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.UINavigationEntry
// 0x0050
struct FUINavigationEntry
{
	struct FUINavigationData                           Data;                                                     // 0x0000(0x0030)
	struct FScriptDelegate                             NavigateToDelegate;                                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             NavigateFromDelegate;                                     // 0x0040(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct FortniteUI.FortUINavigationOperation
// 0x0038
struct FFortUINavigationOperation
{
	EFortUINavigationOp                                Operation;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       SquadId;                                                  // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadSlotIndex;                                           // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       PageId;                                                   // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       NodeID;                                                   // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortUIFeature                                     Feature;                                                  // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortFrontendInventoryFilter                       ItemManagementFilter;                                     // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUINavigationRequest
// 0x0010
struct FFortUINavigationRequest
{
	TArray<struct FFortUINavigationOperation>          Operations;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.FortUIXpInfo
// 0x002C
struct FFortUIXpInfo
{
	int                                                InitialLevel;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InitialDisplayXp;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFortExperienceDelta                        ChangeInXp;                                               // 0x0008(0x0024) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortVideoInfo
// 0x0020
struct FFortVideoInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PreviewImage;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                VideoSource;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULocalizedOverlays*                          SubtitleOverlays;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.HeistExitCraftIconData
// 0x0010
struct FHeistExitCraftIconData
{
	int                                                IconIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHeistExitCraftIconState                           IconState;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHeistExitCraftIconState                           PrevIconState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                SecondsUntilIncoming;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeamHasBling;                                            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.HeistBlingIconData
// 0x0008
struct FHeistBlingIconData
{
	int                                                IconIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHeistBlingIconState                               IconState;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHeistBlingIconState                               PrevIconState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.MinigameCaptureIconData
// 0x0008
struct FMinigameCaptureIconData
{
	int                                                IconIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMinigameCaptureObjectiveIconState                 IconState;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMinigameCaptureObjectiveIconState                 PrevIconState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortToastDisplayInfo
// 0x0060
struct FFortToastDisplayInfo
{
	struct FText                                       Header;                                                   // 0x0000(0x0018) (BlueprintVisible)
	struct FText                                       Body;                                                     // 0x0018(0x0018) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortToastDisplayInfo.Image
	EFortToastType                                     Type;                                                     // 0x0058(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.StoreCallout
// 0x0078
struct FStoreCallout
{
	struct FFortToastDisplayInfo                       ToastDisplayInfo;                                         // 0x0000(0x0060) (BlueprintVisible)
	struct FText                                       ItemName;                                                 // 0x0060(0x0018)
};

// ScriptStruct FortniteUI.GridSortKey
// 0x0018
struct FGridSortKey
{
	float                                              Number;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     String;                                                   // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
// 0x0008 (0x00A8 - 0x00A0)
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FortniteUI.AthenaLeaderboardData
// 0x0018 (0x0020 - 0x0008)
struct FAthenaLeaderboardData : public FTableRowBase
{
	EFortAthenaPlaylist                                Playlist;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FAthenaPlaylistLeaderboardData>      Stats;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.CharacterRanges
// 0x0030
struct FCharacterRanges
{
	TArray<int>                                        Ranges;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        SinglePoints;                                             // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        ExcludedPoints;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct FortniteUI.ConsumedCriteriaData
// 0x0018
struct FConsumedCriteriaData
{
	float                                              PowerMod;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               CriteriaNames;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct FortniteUI.AttributeRequirement
// 0x0020
struct FAttributeRequirement
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                Level;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRequirementsMet;                                         // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.BuildingRequirements
// 0x0028
struct FBuildingRequirements
{
	int                                                RequiredAccountLevel;                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAccountLevel;                                      // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttributeRequirement>               AttributeRequirements;                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RequiredPower;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPower;                                             // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RequiredManufacturing;                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentManufacturing;                                     // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.HeroStat
// 0x0020
struct FHeroStat
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              Value;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCategory;                                              // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.EmptyHeroSlot
// 0x0010
struct FEmptyHeroSlot
{
	class UFortHeroType*                               Type;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumAvailable;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasMale;                                                 // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasFemale;                                               // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortHeroNamesData
// 0x0030 (0x0038 - 0x0008)
struct FFortHeroNamesData : public FTableRowBase
{
	struct FString                                     FirstName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     NickName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LastName;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FortniteUI.ItemDefinitionChangedStruct
// 0x0010
struct FItemDefinitionChangedStruct
{
	struct FScriptMulticastDelegate                    ChangeDelegate;                                           // 0x0000(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct FortniteUI.NodeTypeData
// 0x0010 (0x0018 - 0x0008)
struct FNodeTypeData : public FTableRowBase
{
	EFortHomebaseNodeDisplayType                       NodeType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UClass*                                      UIClass;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.FortCanvasProperties
// 0x0070
struct FFortCanvasProperties
{
	struct FMargin                                     Reserves;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bMouseAutoPan;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ActiveAreaPercent;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxZoom;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinZoom;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ZoomIncrement;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConnectorThickness;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ConnectorOwnedColor;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ConnectorPurchasableColor;                                // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ConnectorNonPurchasableColor;                             // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ConnectorTowardsSelectedColor;                            // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BackgroundMaterial;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.SquadChatOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FSquadChatOptionData : public FRadialOptionData
{
	struct FText                                       ChatText;                                                 // 0x00C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct FortniteUI.FortRichTextStyleData
// 0x01E8 (0x01F0 - 0x0008)
struct FFortRichTextStyleData : public FTableRowBase
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0008(0x01E0) (Edit)
	bool                                               bHyperlinkStyle;                                          // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortShowdownScoringRuleDisplayInfo
// 0x0040 (0x0048 - 0x0008)
struct FFortShowdownScoringRuleDisplayInfo : public FTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortShowdownScoringRuleDisplayInfo.Icon
};

// ScriptStruct FortniteUI.TouchMove
// 0x000C
struct FTouchMove
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemTransformFilterTabLabelInfo
// 0x00C0
struct FFortItemTransformFilterTabLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFortTabButtonLabelInfo                     TabButtonLabelInfo;                                       // 0x0008(0x00A0) (Edit, BlueprintVisible)
	TArray<EFortInventoryFilter>                       ItemFilters;                                              // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EFortItemType                                      ItemType;                                                 // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUITutorialData
// 0x0060 (0x0068 - 0x0008)
struct FFortUITutorialData : public FTableRowBase
{
	struct FName                                       TutorialWidgetName;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortUITutorialData.PreviewImage
};

// ScriptStruct FortniteUI.FortHealthyGamingData
// 0x0088 (0x0090 - 0x0008)
struct FFortHealthyGamingData : public FTableRowBase
{
	float                                              HealthWarningToastInterval;                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       HealthWarningToastDescriptionFormat;                      // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       HealthWarningScreenText;                                  // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       GameplayRestrictionText;                                  // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              GameplayRestrictionWarningTimeOffset;                     // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FText                                       AntiAddictionTotalDescriptionFormat;                      // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUsePlayerTimeLimitSystem;                                // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0079(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortHealthyGamingData.RatingIcons
};

// ScriptStruct FortniteUI.FortSquadIconData
// 0x0330 (0x0338 - 0x0008)
struct FFortSquadIconData : public FTableRowBase
{
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0008(0x0330) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FortniteUI.FortDisplayModifier
// 0x0038
struct FFortDisplayModifier
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (BlueprintVisible)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (BlueprintVisible)
	EFortStatValueDisplayType                          DisplayType;                                              // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortBuffState                                     BuffState;                                                // 0x0031(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.HomebaseNodeDisplayData
// 0x0070 (0x0078 - 0x0008)
struct FHomebaseNodeDisplayData : public FTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.HomebaseNodeDisplayData.LargePreviewImage
	unsigned char                                      UnknownData01[0x28];                                      // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.HomebaseNodeDisplayData.SmallPreviewImage
	class UMediaSource*                                PreviewVideoMediaSource;                                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FortniteUI.PanZoomFingerState
// 0x0010
struct FPanZoomFingerState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
