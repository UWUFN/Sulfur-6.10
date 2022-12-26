#pragma once
#include "framework.h"

template <typename T>
inline T* Cast(void* ToCast)
{
	return (T*)ToCast;
}

template <typename T>
inline T* SpawnActor3(FVector Loc = {}, FRotator Rot = {}, UClass* ActorClass = T::StaticClass())
{
	if (!Memory::FindPattern("E8 ? ? ? ? 84 C0 75 CE", true, 1) && ActorClass->GetFullName().contains("Glider"))
	{
		return nullptr;
	}
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

class Inventory
{
public:
	static UFortWorldItem* FindItemFromDefinition(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDef)
	{
		for (int i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			auto ItemInstance = PlayerController->WorldInventory->Inventory.ItemInstances[i];

			if (ItemInstance->ItemEntry.ItemDefinition == ItemDef)
			{
				return ItemInstance;
			}
		}

		return nullptr;
	}

	static FFortItemEntry* FindEntryFromDefinition(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDef)
	{
		for (int i = 0; i < PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
		{
			auto Entry = &PlayerController->WorldInventory->Inventory.ReplicatedEntries[i];

			if (Entry->ItemDefinition == ItemDef)
			{
				return Entry;
			}
		}

		return nullptr;
	}
	static UFortWorldItem* FindItemFromGuid(AFortPlayerController* PlayerController, FGuid Guid)
	{
		for (int i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			auto ItemInstance = PlayerController->WorldInventory->Inventory.ItemInstances[i];

			if (ItemInstance->ItemEntry.ItemGuid == Guid)
			{
				return ItemInstance;
			}
		}

		return nullptr;
	}

	static FFortItemEntry* FindEntryFromGuid(AFortPlayerController* PlayerController, FGuid Guid)
	{
		for (int i = 0; i < PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
		{
			auto Entry = &PlayerController->WorldInventory->Inventory.ReplicatedEntries[i];

			if (Entry->ItemGuid == Guid)
			{
				return Entry;
			}
		}

		return nullptr;
	}
	static UFortWorldItem* CreateItem(UFortItemDefinition* ItemDef, int Count)
	{
		return Cast<UFortWorldItem>(ItemDef->CreateTemporaryItemInstanceBP(Count, 1));
	}

	static FGuid AddItem(AFortPlayerController* PlayerController, UFortWorldItem* Item)
	{
		PlayerController->WorldInventory->Inventory.ItemInstances.Add(Item);
		PlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(Item->ItemEntry);

		return Item->ItemEntry.ItemGuid;
	}

	static FGuid AddItem(AFortPlayerController* PlayerController, UFortWorldItem* Item, EFortQuickBars QuickBarIndex, int Slot)
	{
		FGuid Guid = AddItem(PlayerController, Item);
		PlayerController->QuickBars->ServerAddItemInternal(Guid, QuickBarIndex, Slot);

		return Guid;
	}

	static FGuid AddItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDef, int Count)
	{
		UFortWorldItem* Item = FindItemFromDefinition(PlayerController, ItemDef);

		if (Item != nullptr)
		{
			if ((Item->ItemEntry.Count + Count) > ItemDef->MaxStackSize)
				return Item->ItemEntry.ItemGuid;

			Item->ItemEntry.Count += Count;
			PlayerController->WorldInventory->Inventory.MarkItemDirty(Item->ItemEntry);

			auto Entry = FindEntryFromDefinition(PlayerController, ItemDef);
			Entry->Count += Count;
			PlayerController->WorldInventory->Inventory.MarkItemDirty(*Entry);

			return Entry->ItemGuid;
		}

		Item = CreateItem(ItemDef, Count);
		AddItem(PlayerController, Item);

		return Item->ItemEntry.ItemGuid;
	}

	static FGuid AddItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDef, int Count, EFortQuickBars QuickBarIndex, int Slot)
	{
		auto Guid = AddItem(PlayerController, ItemDef, Count);
		PlayerController->QuickBars->ServerAddItemInternal(Guid, QuickBarIndex, Slot);

		return Guid;
	}

	static void DropAllLootInInventory(AFortPlayerController* PlayerController)
	{

	}

	static void Setup(AFortPlayerController* PlayerController)
	{
		if (!PlayerController->QuickBars)
			PlayerController->QuickBars = SpawnActor3<AFortQuickBars>();

		PlayerController->QuickBars->SetOwner(PlayerController);

		static auto PickaxeDef = UObject::FindObject<UFortItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
		static auto WallDef = UObject::FindObject<UFortItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall");
		static auto FloorDef = UObject::FindObject<UFortItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor");
		static auto StairDef = UObject::FindObject<UFortItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W");
		static auto RoofDef = UObject::FindObject<UFortItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS");
		static auto EditTool = UObject::FindObject<UFortItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");
		static auto Medium = UObject::FindObject<UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");

		AddItem(PlayerController, EditTool, 0, EFortQuickBars::Primary, 1);
		AddItem(PlayerController, PickaxeDef, 1, EFortQuickBars::Primary, 0);
		AddItem(PlayerController, WallDef, 1, EFortQuickBars::Secondary, 0);
		AddItem(PlayerController, FloorDef, 1, EFortQuickBars::Secondary, 1);
		AddItem(PlayerController, StairDef, 1, EFortQuickBars::Secondary, 2);
		AddItem(PlayerController, RoofDef, 1, EFortQuickBars::Secondary, 3);
		AddItem(PlayerController, Medium, 300, EFortQuickBars::Secondary, 0);
	}

	static void Update(AFortPlayerController* PlayerController)
	{
		// PlayerController->WorldInventory->Inventory.MarkArrayDirty();

		PlayerController->HandleWorldInventoryLocalUpdate();
		PlayerController->WorldInventory->bRequiresLocalUpdate = true;
		PlayerController->QuickBars->ForceNetUpdate();
		PlayerController->WorldInventory->HandleInventoryLocalUpdate();
		PlayerController->ForceUpdateQuickbar(EFortQuickBars::Primary);
		PlayerController->ForceUpdateQuickbar(EFortQuickBars::Secondary);
		PlayerController->QuickBars->OnRep_PrimaryQuickBar();
		PlayerController->QuickBars->OnRep_SecondaryQuickBar();
		PlayerController->WorldInventory->Inventory.MarkArrayDirty();
	}
};