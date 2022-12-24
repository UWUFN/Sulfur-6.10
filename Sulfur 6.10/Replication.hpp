#pragma once
#include "framework.h"

struct FNetworkObjectInfo
{
	AActor* Actor;
	double NextUpdateTime;
	double LastNetReplicateTime;
	float OptimalNetUpdateDelta;
	float LastNetUpdateTime;
	uint32_t bPendingNetUpdate : 1;
	uint32_t bForceRelevantNextUpdate : 1;
};

namespace Replication
{
	UChannel* (*CreateChannel)(UNetConnection* a1, FName& a2, unsigned int a3, int a4);
	__int64(*SetChannelActor)(UActorChannel*, AActor*);
	void(*CallPreReplication)(AActor*, UNetDriver*);
	bool(*ReplicateActor)(UActorChannel*);
	static void (*SendClientAdjustment)(APlayerController*);
	static void* (*AddNetworkActor)(UWorld* World, AActor* Actor);

	std::vector<FNetworkObjectInfo*> PrivateObjectList;

	int PrepConnections(UNetDriver* NetDriver)
	{
		int ReadyConnections = 0;

		for (int ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
		{
			UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];
			if (!Connection) continue;

			AActor* OwningActor = Connection->OwningActor;

			if (OwningActor)
			{
				ReadyConnections++;
				AActor* DesiredViewTarget = OwningActor;

				if (Connection->PlayerController)
				{
					if (AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
					{
						DesiredViewTarget = ViewTarget;
					}
				}

				Connection->ViewTarget = DesiredViewTarget;

				for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ++ChildIdx)
				{
					UNetConnection* ChildConnection = Connection->Children[ChildIdx];
					if (ChildConnection && ChildConnection->PlayerController && ChildConnection->ViewTarget)
					{
						ChildConnection->ViewTarget = DesiredViewTarget;
					}
				}
			}
			else
			{
				Connection->ViewTarget = nullptr;

				for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ++ChildIdx)
				{
					UNetConnection* ChildConnection = Connection->Children[ChildIdx];
					if (ChildConnection && ChildConnection->PlayerController && ChildConnection->ViewTarget)
					{
						ChildConnection->ViewTarget = nullptr;
					}
				}
			}
		}

		return ReadyConnections;
	}

	UActorChannel* FindChannel(AActor* Actor, UNetConnection* Connection)
	{
		for (int i = 0; i < Connection->OpenChannels.Num(); i++)
		{
			auto Channel = Connection->OpenChannels[i];

			if (Channel && Channel->Class)
			{
				if (Channel->Class == UActorChannel::StaticClass())
				{
					if (((UActorChannel*)Channel)->Actor == Actor)
						return ((UActorChannel*)Channel);
				}
			}
		}

		return NULL;
	}

	UNetConnection* GetOwningConnection(AActor* Actor)
	{
		for (auto Owner = Actor; Actor; Actor = Actor->GetOwner())
		{
			if (Actor->IsA(APlayerController::StaticClass()))
			{
				return ((APlayerController*)Actor)->NetConnection;
			}
		}
	}

	std::vector<FNetworkObjectInfo*>& GetNetworkObjectList()
	{
		return PrivateObjectList;
	}

	void BuildConsiderList(UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList, float ServerTickTime)
	{
		auto TimeSeconds = ((UGameplayStatics*)UGameplayStatics::StaticClass())->STATIC_GetTimeSeconds(NetDriver->World);

		for (auto ActorInfo : GetNetworkObjectList())
		{
			auto Actor = ActorInfo->Actor;

			if (!Actor)
			{
				continue;
			}

			if (Actor->bActorIsBeingDestroyed)
			{
				continue;
			}

			if (Actor->RemoteRole == ENetRole::ROLE_None)
			{
				continue;
			}

			if (Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup)
			{
				continue;
			}

			if (!Actor->bReplicates)
			{
				continue;
			}

			if (ActorInfo->LastNetReplicateTime == 0)
			{
				ActorInfo->LastNetReplicateTime = TimeSeconds;
				ActorInfo->OptimalNetUpdateDelta = 1.0f / Actor->NetUpdateFrequency;
			}

			const float ScaleDownStartTime = 2.0f;
			const float ScaleDownTimeRange = 5.0f;

			const float LastReplicateDelta = TimeSeconds - ActorInfo->LastNetReplicateTime;

			if (LastReplicateDelta > ScaleDownStartTime)
			{
				if (Actor->MinNetUpdateFrequency == 0.0f)
				{
					Actor->MinNetUpdateFrequency = 2.0f;
				}

				const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;									  // Don't go faster than NetUpdateFrequency
				const float MaxOptimalDelta = ((UKismetMathLibrary*)UKismetMathLibrary::StaticClass())->STATIC_Max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta); // Don't go slower than MinNetUpdateFrequency (or NetUpdateFrequency if it's slower)

				const float Alpha = ((UKismetMathLibrary*)UKismetMathLibrary::StaticClass())->STATIC_Clamp((LastReplicateDelta - ScaleDownStartTime) / ScaleDownTimeRange, 0.0f, 1.0f);
				ActorInfo->OptimalNetUpdateDelta = ((UKismetMathLibrary*)UKismetMathLibrary::StaticClass())->STATIC_Lerp(MinOptimalDelta, MaxOptimalDelta, Alpha);
			}

			if (!ActorInfo->bPendingNetUpdate)
			{
				const float NextUpdateDelta = 1.0f / Actor->NetUpdateFrequency;
				ActorInfo->NextUpdateTime = TimeSeconds + ((UKismetMathLibrary*)UKismetMathLibrary::StaticClass())->STATIC_RandomFloat() * ServerTickTime + NextUpdateDelta;

				ActorInfo->LastNetUpdateTime = NetDriver->Time;
			}

			ActorInfo->bPendingNetUpdate = false;

			if (Actor->Name.ComparisonIndex != 0)
			{
				CallPreReplication(Actor, NetDriver);
				OutConsiderList.push_back(ActorInfo);
			}
		}
	}


	void Tick(UNetDriver* NetDriver)
	{
		++* (DWORD*)(__int64(NetDriver) + 1080);
			
		auto NumClientsToTick = PrepConnections(NetDriver);

		if (NumClientsToTick == 0)
			return;

		bool bCPUSaturated = false;
		float ServerTickTime = (*(float(__fastcall**)(__int64, __int64, __int64))(*(__int64*)Globals::GEngine + 632))(__int64(Globals::GEngine), 0, 0);
		if (ServerTickTime == 0.f)
		{
			ServerTickTime = ((UGameplayStatics*)UGameplayStatics::StaticClass())->STATIC_GetWorldDeltaSeconds(Globals::GetWorld());
		}
		else
		{
			ServerTickTime = 1.f / ServerTickTime;
			bCPUSaturated = ((UGameplayStatics*)UGameplayStatics::StaticClass())->STATIC_GetWorldDeltaSeconds(Globals::GetWorld()) > 1.2f * ServerTickTime;
		}

		std::vector<FNetworkObjectInfo*> ConsiderList = std::vector<FNetworkObjectInfo*>();
		BuildConsiderList(NetDriver, ConsiderList, ServerTickTime);

		for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			auto Connection = NetDriver->ClientConnections[i];

			if (!Connection->ViewTarget)
				continue;

			for (auto ActorInfo : ConsiderList)
			{
				auto Actor = ActorInfo->Actor;

				if (Actor->IsA(APlayerController::StaticClass()) && Actor != Connection->PlayerController)
					continue;

				auto Channel = FindChannel(Actor, Connection);

				if (!Channel)
				{
					FName ActorName = NAME_Actor;
					Channel = (UActorChannel*)(CreateChannel(Connection, ActorName, (1 << 1), -1));

					if (Channel) {
						SetChannelActor(Channel, Actor);
					}
				}

				if (Channel)
				{
					if (ReplicateActor(Channel))
					{
						const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
						const float MaxOptimalDelta = ((UKismetMathLibrary*)UKismetMathLibrary::StaticClass())->STATIC_Max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
						const float DeltaBetweenReplications = (((UGameplayStatics*)UGameplayStatics::StaticClass())->STATIC_GetTimeSeconds(Globals::GetWorld()) - ActorInfo->LastNetReplicateTime);

						ActorInfo->OptimalNetUpdateDelta = ((UKismetMathLibrary*)UKismetMathLibrary::StaticClass())->STATIC_Clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);
						ActorInfo->LastNetReplicateTime = ((UGameplayStatics*)UGameplayStatics::StaticClass())->STATIC_GetTimeSeconds(Globals::GetWorld());
					}
				}
			}
		}

		ConsiderList.empty();
		ConsiderList.clear();
	}

	static void* AddNetworkActorHook(UWorld* World, AActor* Actor)
	{
		if (Actor)
		{
			auto ActorInfo = new FNetworkObjectInfo();
			ActorInfo->Actor = Actor;
			GetNetworkObjectList().push_back(ActorInfo);
		}

		return AddNetworkActor(World, Actor);
	}

	static void Initialize()
	{
		auto BaseAddr = (uintptr_t)GetModuleHandle(0);
		CallPreReplication = decltype(CallPreReplication)(BaseAddr + 0x2389310);
		ReplicateActor = decltype(ReplicateActor)(BaseAddr + 0x25616F0);
		CreateChannel = decltype(CreateChannel)(BaseAddr + 0x26EDF50);
		SetChannelActor = decltype(SetChannelActor)(BaseAddr + 0x2566090);
		//SendClientAdjustment = decltype(SendClientAdjustment)(BaseAddr + 0x2459F90);

	}
}