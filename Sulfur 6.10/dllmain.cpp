#include "framework.h"
#include <iostream>
#include "Replication.hpp"
#include "minhook/minhook.h"
#pragma comment(lib, "minhook/minhook.lib")

void* (*ProcessEvent)(void*, void*, void*);
UNetDriver* (*CreateNetDriver)(UEngine*, UWorld*, FName);
char (*InitListen)(UIpNetDriver*, void* Notify, FURL&, char, FString&);
void (*SetWorld)(UNetDriver*, UWorld*);
void (*TickFlush)(UNetDriver*);
void (*ServerReplicateActors)(UReplicationGraph*);
void (*SetReplicationDriver)(UNetDriver*, UReplicationDriver*);
char (*LoadMap)(UGameEngine*, void*, FURL, void*, void*);
static void* (*SetClientLoginState)(UNetConnection* Connection, int a2);

inline bool bTraveled = false;
inline bool bPlayButton = false;
inline bool bListening = false;

void* ProcessEventHook(UObject* Object, UFunction* Function, void* Params)
{
	if (!Object || !Function)
		return ProcessEvent(Object, Function, Params);

	auto FuncName = Function->GetName();

	if (FuncName.contains("BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature"))
	{
		Globals::GetPlayerController()->SwitchLevel(L"Athena_Terrain?game=/Game/Athena/Athena_GameMode.Athena_GameMode_C?listen");
		bTraveled = true;
		bPlayButton = true;
	}

	if (FuncName.contains("ServerAcknowledgePossession"))
	{
		((AFortPlayerController*)Object)->AcknowledgedPawn = *(APlayerPawn_Athena_C**)Params;
	}

	if (FuncName.contains("ReadyToEndMatch"))
	{
		if (bListening)
			bListening = false;
	}

	/*if (FuncName.contains("ServerPlayEmoteItem"))
	{
		static bool bFirst = true;

		if (bFirst)
		{
			bFirst = false;
			srand(time(0));
		}

		static auto DefaultAbility = UObject::FindObject<UGameplayAbility>("GAB_Emote_Generic_C GAB_Emote_Generic.Default__GAB_Emote_Generic_C");
		unsigned int* (*GiveAbilityAndActivateOnce)(UAbilitySystemComponent * ASC, int* outHandle, FGameplayAbilitySpec Spec) = decltype(GiveAbilityAndActivateOnce)(__int64(GetModuleHandleW(0)) + 0x613b00);
		int OutHandle = 0;
		FGameplayAbilitySpec Spec = FGameplayAbilitySpec(-1, -1, -1, rand(), DefaultAbility, 1, -1, *(UObject**)Params);
		GiveAbilityAndActivateOnce(((AFortPawn*)((AFortPlayerController*)Object)->Pawn)->AbilitySystemComponent, &OutHandle, Spec);
	}*/

	if (FuncName.contains("ReadyToStartMatch"))
	{
		if (!bListening)
		{
			bListening = true;

			if (Globals::GEngine->GameViewport->World && !Globals::GEngine->GameViewport->World->NetDriver)
			{
				auto URL = FURL();
				URL.Port = 7777;

				FString Error;
				auto NetDriver = (UIpNetDriver*)CreateNetDriver(Globals::GEngine, Globals::GEngine->GameViewport->World, NAME_GameNetDriver);
				InitListen(NetDriver, Globals::GEngine->GameViewport->World, URL, false, Error);
				SetWorld(NetDriver, Globals::GEngine->GameViewport->World);
				//Globals::GEngine->GameViewport->World->LevelCollections[0].NetDriver = NetDriver;
				Globals::GEngine->GameViewport->World->LevelCollections[1].NetDriver = NetDriver;
				Globals::GEngine->GameViewport->World->NetDriver = NetDriver;
				NetDriver->MaxClientRate = NetDriver->MaxInternetClientRate;

				auto GameState = (AFortGameStateAthena*)Globals::GetWorld()->GameState;

				GameState->bGameModeWillSkipAircraft = true;
				GameState->AircraftStartTime = 99999.0f;
				GameState->WarmupCountdownEndTime = 99999.0f;

				GameState->GamePhase = EAthenaGamePhase::Aircraft;
				GameState->OnRep_GamePhase(EAthenaGamePhase::None);

				auto Playlist = UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
				if (!Playlist) return ProcessEvent(Object, Function, Params);

				GameState->CurrentPlaylistId = Playlist->PlaylistId;
				GameState->OnRep_CurrentPlaylistId();

				GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
				GameState->OnRep_CurrentPlaylistInfo();

				GameState->CurrentPlaylistInfo.BasePlaylist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");
				GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;

				GameState->PlayersLeft = 0;

				GameState->OnRep_PlayersLeft();

				auto authGameMode = reinterpret_cast<AFortGameModeAthena*>(Globals::GetWorld()->AuthorityGameMode);

				auto stateF = reinterpret_cast<UKismetStringLibrary*>(UKismetStringLibrary::StaticClass())->STATIC_Conv_StringToName(L"InProgress");
				authGameMode->MatchState = stateF;
				authGameMode->K2_OnSetMatchState(stateF);

			}
		}
	}

	return ProcessEvent(Object, Function, Params);
}

static void TickFlushHook(UNetDriver* NetDriver)
{
	if (NetDriver->ClientConnections.Num() != 0 && NetDriver->ClientConnections[0]->InternalAck == false)
	{
		Replication::Tick(NetDriver);
	}

	TickFlush(NetDriver);
}

char KickPlayerHook(__int64, __int64, __int64) 
{
	return 0;
}

static void* SetClientLoginStateHook(UNetConnection* Connection, int a2)
{
	if (a2 == 3)
	{
		auto PlayerController = (AFortPlayerControllerAthena*)Connection->PlayerController;
		AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

		auto Pawn = Globals::GetWorld()->SpawnActor<APlayerPawn_Athena_C>(PlayerController->K2_GetActorLocation(), {});
		Pawn->SetOwner(PlayerController);
		
		Connection->CurrentNetSpeed = 30000;

		PlayerController->Possess(Pawn);

		PlayerController->bHasClientFinishedLoading = true;
		PlayerController->bHasServerFinishedLoading = true;
		PlayerController->OnRep_bHasServerFinishedLoading();

		PlayerState->bHasFinishedLoading = true;
		PlayerState->bHasStartedPlaying = true;
		PlayerState->OnRep_bHasStartedPlaying();

		auto QuickBars = Globals::GetWorld()->SpawnActor<AFortQuickBars>({ -280, 400, 3000 }, {});
		QuickBars->SetOwner(PlayerController);
		PlayerController->QuickBars = QuickBars;

		PlayerState->CharacterParts.Parts[0] = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
		PlayerState->CharacterParts.Parts[1] = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01");
		PlayerState->OnRep_CharacterParts();

		Pawn->bReplicates = true;
		Pawn->bReplicateMovement = true;
		Pawn->OnRep_ReplicateMovement();
		Pawn->OnRep_ReplicatedMovement();
		Pawn->OnRep_ReplicatedBasedMovement();
		Pawn->SetMaxHealth(100);
		Pawn->SetMaxShield(100);
		Pawn->SetHealth(100);
		Pawn->NetUpdateFrequency *= 2;


		auto spawnhere = FVector({ 1250, 1818, 3284 });
		Pawn->K2_SetActorLocation(spawnhere, false, true, nullptr);
	}

	return SetClientLoginState(Connection, a2);
}

void Main()
{
	AllocConsole();
	FILE* Ptr;
	freopen_s(&Ptr, "CONOUT$", "w", stdout);

	printf("[+] initializing jaysen's sulfur 6.10.\n");


	auto ObjectsAddress = Memory::FindPattern("48 8B 05 ?? ?? ?? ?? 48 8B 0C C8 48 8D 04 D1 EB 03 49 8B C6 8B 40 08 C1 E8 1D A8 01 0F 85 D8", true, 3);
	auto ToStringAddress = Memory::FindPattern("48 89 5C 24 ? 57 48 83 EC 30 83 79 04 00 48 8B DA 48 8B F9");
	auto FreeAddress = Memory::FindPattern("48 85 C9 74 2E 53 48 83 EC 20 48 8B D9");

	auto BaseAddr = (uintptr_t)GetModuleHandleA(0);

	UObject::GObjects = decltype(UObject::GObjects)(ObjectsAddress);
	FNameToString = decltype(FNameToString)(ToStringAddress);
	FreeMemory = decltype(FreeMemory)(FreeAddress);
	CreateNetDriver = decltype(CreateNetDriver)(BaseAddr + 0x2975F20);
	InitListen = decltype(InitListen)(BaseAddr + 0x40C9D0);
	SetWorld = decltype(SetWorld)(BaseAddr + 0x27080E0);
	SetReplicationDriver = decltype(SetReplicationDriver)(BaseAddr + 0x2707D20);

	Globals::GEngine = UObject::FindObject<UFortEngine>("FortEngine_", false);

	auto vtable = *reinterpret_cast<void***>(static_cast<void*>(Globals::GEngine));

	MH_Initialize();
	MH_CreateHook(vtable[64], ProcessEventHook, (void**)&ProcessEvent);
	MH_EnableHook(vtable[64]);
	MH_CreateHook((void*)(BaseAddr + 0x2709580), TickFlushHook, (void**)&TickFlush);
	MH_EnableHook((void*)(BaseAddr + 0x2709580));
	MH_CreateHook((void*)(BaseAddr + 0x25C98B0), KickPlayerHook, nullptr);
	MH_EnableHook((void*)(BaseAddr + 0x25C98B0));
	MH_CreateHook((void*)(BaseAddr + 0x2706E30), SetClientLoginStateHook, (void**)&SetClientLoginState);
	MH_EnableHook((void*)(BaseAddr + 0x2706E30));

	Replication::Initialize();

	MH_CreateHook((void*)(BaseAddr + 0x29D5290), Replication::AddNetworkActorHook, (void**)&Replication::AddNetworkActor);
	MH_EnableHook((void*)(BaseAddr + 0x29D5290));

	printf("[+] hooked all the shit. click play\n");
	//Start();
}
INT32 EntryPoint(void*, ULONG dwReason, void*)
{
    if (dwReason == 1)
        CreateThreadEasy(Main);

    return TRUE;
}

