#include "framework.h"
#include <iostream>
#include "minhook/minhook.h"
#include "Inventory.hpp"
#include "Abilities.hpp"
#pragma comment(lib, "minhook/minhook.lib")

void* (*ProcessEvent)(void*, void*, void*);
UNetDriver* (*CreateNetDriver)(UEngine*, UWorld*, FName);
static inline bool (*InitHost)(AOnlineBeaconHost*);
static inline void (*SetWorld)(UNetDriver*, UWorld*);
static inline void (*InitListen)(UNetDriver*, void*, FURL, bool, FString&);
void (*SetReplicationDriver)(UNetDriver*, UReplicationDriver*);
char (*LoadMap)(UGameEngine*, void*, FURL, void*, void*);
static inline void (*ServerReplicateActors)(UReplicationGraph* RepGraph);
static void (*MarkArrayDirty)(FFastArraySerializer*);

inline bool bTraveled = false;
inline bool bPlayButton = false;
inline bool bListening = false;

template <typename T>
inline T* GetDefaultObject()
{
	return T::StaticClass()->CreateDefaultObject<T>();
}

template <typename T>
inline T* NewObject(UObject* Outer, UClass* ObjClass = T::StaticClass())
{
	return (T*)GetDefaultObject<UGameplayStatics>()->STATIC_SpawnObject(ObjClass, Outer);
}

template <typename T>
inline T* SpawnActor(FVector Loc = {}, FRotator Rot = {}, UClass* ActorClass = T::StaticClass())
{
	FQuat Quat;
	FTransform Transform;

	auto DEG_TO_RAD = 3.14159 / 180;
	auto DIVIDE_BY_2 = DEG_TO_RAD / 2;

	auto SP = sin(Rot.Pitch * DIVIDE_BY_2);
	auto CP = cos(Rot.Pitch * DIVIDE_BY_2);

	auto SY = sin(Rot.Yaw * DIVIDE_BY_2);
	auto CY = cos(Rot.Yaw * DIVIDE_BY_2);

	auto SR = sin(Rot.Roll * DIVIDE_BY_2);
	auto CR = cos(Rot.Roll * DIVIDE_BY_2);

	Quat.X = CR * SP * SY - SR * CP * CY;
	Quat.Y = -CR * SP * CY - SR * CP * SY;
	Quat.Z = CR * CP * SY - SR * SP * CY;
	Quat.W = CR * CP * CY + SR * SP * SY;

	Transform.Rotation = Quat;
	Transform.Scale3D = FVector{ 1,1,1 };
	Transform.Translation = Loc;

	auto Actor = GetDefaultObject<UGameplayStatics>()->STATIC_BeginSpawningActorFromClass(Globals::GetWorld(), ActorClass, Transform, false, nullptr);
	GetDefaultObject<UGameplayStatics>()->STATIC_FinishSpawningActor(Actor, Transform);
	return (T*)Actor;
}

static void Listen()
{

	auto BaseAddr = (uintptr_t)GetModuleHandleA(0);
	auto Beacon = SpawnActor<AOnlineBeaconHost>();
	Beacon->ListenPort = 6969;
	InitHost(Beacon);

	Beacon->NetDriverName = FName(282);
	Beacon->NetDriver->NetDriverName = FName(282);
	Beacon->NetDriver->World = Globals::GetWorld();

	FURL Url;
	Url.Port = 7777;

	FString Error;

	InitListen((UIpNetDriver*)Beacon->NetDriver, Globals::GetWorld(), Url, false, Error);

	Globals::GetWorld()->NetDriver = Beacon->NetDriver;
	SetWorld(Beacon->NetDriver, Globals::GetWorld());

	Globals::GetWorld()->LevelCollections[0].NetDriver = Beacon->NetDriver;
	Globals::GetWorld()->LevelCollections[1].NetDriver = Beacon->NetDriver;

	if (!Beacon->NetDriver->ReplicationDriver)
	{
		static auto SetReplicationDriver = reinterpret_cast<void(*)(UNetDriver*, UReplicationDriver*)>(BaseAddr + 0x2707D20);
		SetReplicationDriver(Beacon->NetDriver, NewObject<UFortReplicationGraph>(Beacon->NetDriver));
	}

	ServerReplicateActors = decltype(ServerReplicateActors)(Beacon->NetDriver->ReplicationDriver->Vtable[0x56]);
}

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
		((AFortPlayerController*)Object)->AcknowledgedPawn = *(APawn**)Params;
	}

	if (FuncName.contains("ReadyToEndMatch"))
	{
		if (bListening)
			bListening = false;
	}

	if (FuncName.contains("ServerExecuteInventoryItem"))
	{
		auto PlayerController = (AFortPlayerControllerAthena*)Object;
		auto& ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;

		auto GuidToFind = *(FGuid*)Params;

		for (int i = 0; i < ItemInstances.Num(); i++)
		{
			auto ItemInstance = ItemInstances[i];

			if (ItemInstance->ItemEntry.ItemGuid.A == GuidToFind.A && ItemInstance->ItemEntry.ItemGuid.B == GuidToFind.B && ItemInstance->ItemEntry.ItemGuid.C == GuidToFind.C &&
				ItemInstance->ItemEntry.ItemGuid.D == GuidToFind.D)
			{
				((AFortPlayerPawnAthena*)PlayerController->Pawn)->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemInstance->ItemEntry.ItemDefinition, ItemInstance->ItemEntry.ItemGuid);
			}
		}

	}

	if (FuncName.contains("ReadyToStartMatch"))
	{
		if (!bListening)
		{
			bListening = true;

			Listen();

			auto GameState = (AFortGameStateAthena*)Globals::GetWorld()->GameState;

			GameState->bGameModeWillSkipAircraft = true;
			GameState->AircraftStartTime = 99999.0f;
			GameState->WarmupCountdownEndTime = 99999.0f;

			GameState->GamePhase = EAthenaGamePhase::Warmup;
			GameState->OnRep_GamePhase(EAthenaGamePhase::None);

			auto Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");

			if (!Playlist)
			{
				printf("[+] Unable find playlist!\n");
				return ProcessEvent(Object, Function, Params);
			}

			GameState->CurrentPlaylistId = Playlist->PlaylistId;
			GameState->OnRep_CurrentPlaylistId();

			GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GameState->CurrentPlaylistInfo.MarkArrayDirty();
			GameState->OnRep_CurrentPlaylistInfo();

			GameState->PlayersLeft = 0;
			GameState->OnRep_PlayersLeft();
		}
	}

	return ProcessEvent(Object, Function, Params);
}

static inline void (*TickFlush)(UNetDriver*);
static inline void TickFlushHook(UNetDriver* NetDriver)
{
	if (NetDriver->ReplicationDriver)
	{
		ServerReplicateActors((UReplicationGraph*)NetDriver->ReplicationDriver);
	}

	return TickFlush(NetDriver);
}

char KickPlayerHook(__int64, __int64, __int64)
{
	return 0;
}
inline FVector GetPlayerStartLocation()
{
	TArray<AActor*> PlayerStarts;
	GetDefaultObject<UGameplayStatics>()->STATIC_GetAllActorsOfClass(Globals::GetWorld(), APlayerStart::StaticClass(), &PlayerStarts);
	return PlayerStarts.Num() > 0 ? PlayerStarts[rand() % PlayerStarts.Num()]->K2_GetActorLocation() : FVector{ 1250, 1818, 3284 };
}


class Core
{
public:
	static inline bool bIsInProgress = false;

	static inline UFortEngine* FortEngine;
	static inline UClass* PawnClass;

public:
	static inline void Init()
	{
		FortEngine = UObject::FindObject<UFortEngine>("FortEngine_");
		PawnClass = APlayerPawn_Athena_C::StaticClass();
	}
};

static inline void (*SetClientLoginState)(UNetConnection*, uint8_t);
static inline void SetClientLoginStateHook(UNetConnection* NetConnection, uint8_t State)
{
	if (State == 3)
	{
		static bool bSpawnedFloorLoot = false;

		if (!bSpawnedFloorLoot)
		{
			bSpawnedFloorLoot = true;
		}

		auto PlayerController = (AFortPlayerControllerAthena*)NetConnection->PlayerController;

		if (!PlayerController)
			return;

		auto Pawn = SpawnActor<APlayerPawn_Athena_C>(GetPlayerStartLocation(), { 0,0,0 }, Core::PawnClass);

		if (!Pawn)
			return;

		Pawn->bCanBeDamaged = false;
		PlayerController->Possess(Pawn);

		auto PlayerState = (AFortPlayerStateAthena*)(PlayerController->PlayerState);

		PlayerState->CharacterParts.Parts[0] = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
		PlayerState->CharacterParts.Parts[1] = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01");
		PlayerState->OnRep_CharacterParts();

		Inventory::Setup(PlayerController);
		Inventory::Update(PlayerController);

		PlayerController->bHasServerFinishedLoading = true;
		PlayerController->OnRep_bHasServerFinishedLoading();
		Abilities::ApplyAbilities(Pawn);

		PlayerController->OverriddenBackpackSize = 5;

		PlayerState->OnRep_SquadId();

		PlayerState->bHasFinishedLoading = true;
		PlayerState->bHasStartedPlaying = true;
		PlayerState->OnRep_bHasStartedPlaying();
	}

	return SetClientLoginState(NetConnection, State);
}

void __fastcall GetPlayerViewPointDetour(APlayerController* pc, FVector* a2, FRotator* a3)
{
	AActor* TheViewTarget = pc->GetViewTarget();

	if (TheViewTarget)
	{
		if (a2)
			*a2 = TheViewTarget->K2_GetActorLocation();
		if (a3)
			*a3 = TheViewTarget->K2_GetActorRotation();

		return;
	}
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
	auto GetPlayerViewpointAddress = Memory::FindPattern("48 89 5C 24 ? 48 89 74 24 ? 55 41 56 41 57 48 8B EC 48 83 EC 40 48 8B F2 48 C7 45 ? ? ? ? ? 48 8B 55 38 4D 8B F0 48 8B D9 45 33 FF E8 ? ? ? ? 84");

	auto BaseAddr = (uintptr_t)GetModuleHandleA(0);

	UObject::GObjects = decltype(UObject::GObjects)(ObjectsAddress);
	FNameToString = decltype(FNameToString)(ToStringAddress);
	FreeMemory = decltype(FreeMemory)(FreeAddress);
	InitListen = decltype(InitListen)(BaseAddr + 0x40C9D0);
	InitHost = decltype(InitHost)(Memory::FindPattern("48 8B C4 48 81 EC ? ? ? ? 48 89 58 18 4C 8D 05 ? ? ? ?"));
	SetWorld = decltype(SetWorld)(BaseAddr + 0x27080E0);
	SetReplicationDriver = decltype(SetReplicationDriver)(BaseAddr + 0x2707D20);

	Globals::GEngine = UObject::FindObject<UFortEngine>("FortEngine_", false);

	Core::Init();
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

	MH_CreateHook((void*)GetPlayerViewpointAddress, GetPlayerViewPointDetour, nullptr);
	MH_EnableHook((void*)GetPlayerViewpointAddress);

	printf("[+] hooked all the shit. click play\n");
	//Start();
}

INT32 EntryPoint(void*, ULONG dwReason, void*)
{
	if (dwReason == 1)
		CreateThreadEasy(Main);

	return TRUE;
}