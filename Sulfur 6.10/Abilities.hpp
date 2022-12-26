#pragma once
#include "framework.h"

namespace Abilities
{
    inline FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent* _this, FGameplayAbilitySpecHandle* outHandle, FGameplayAbilitySpec inSpec);
    inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent* _this, FGameplayAbilitySpecHandle Handle, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* /* FOnGameplayAbilityEnded::FDelegate* */ OnGameplayAbilityEndedDelegate, FGameplayEventData* TriggerEventData);
    inline void (*MarkAbilitySpecDirty)(UAbilitySystemComponent* _this, FGameplayAbilitySpec& Spec);

    static auto GrantGameplayAbility(APlayerPawn_Athena_C* TargetPawn, UClass* GameplayAbilityClass)
    {
        auto AbilitySystemComponent = TargetPawn->AbilitySystemComponent;

        if (!AbilitySystemComponent)
            return;

        auto GenerateNewSpec = [&]() -> FGameplayAbilitySpec
        {
            FGameplayAbilitySpecHandle Handle{ rand() };

            FGameplayAbilitySpec Spec{ -1, -1, -1, Handle, (UGameplayAbility*)GameplayAbilityClass->CreateDefaultObject(), 1, -1, nullptr, 0, false, false, false };

            return Spec;
        };

        auto Spec = GenerateNewSpec();

        for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
        {
            auto& CurrentSpec = AbilitySystemComponent->ActivatableAbilities.Items[i];

            if (CurrentSpec.Ability == Spec.Ability)
                return;
        }

        auto Handle = GiveAbility(AbilitySystemComponent, &Spec.Handle, Spec);
    }

    inline auto ApplyAbilities(APawn* _Pawn) // TODO: Check if the player already has the ability.
    {
        auto Pawn = (APlayerPawn_Athena_C*)_Pawn;
        static auto SprintAbility = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Sprint");
        static auto ReloadAbility = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Reload");
        static auto RangedWeaponAbility = UObject::FindClass("Class FortniteGame.FortGameplayAbility_RangedWeapon");
        static auto JumpAbility = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Jump");
        static auto DeathAbility = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C");
        static auto InteractUseAbility = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C");
        static auto InteractSearchAbility = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C");
        static auto EmoteAbility = UObject::FindClass("BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C");
        static auto TrapAbilitySet = UObject::FindObject<UFortAbilitySet>("FortAbilitySet GAS_TrapGeneric.GAS_TrapGeneric");

        GrantGameplayAbility(Pawn, SprintAbility);
        GrantGameplayAbility(Pawn, ReloadAbility);
        GrantGameplayAbility(Pawn, RangedWeaponAbility);
        GrantGameplayAbility(Pawn, JumpAbility);
        GrantGameplayAbility(Pawn, DeathAbility);
        GrantGameplayAbility(Pawn, InteractUseAbility);
        GrantGameplayAbility(Pawn, InteractSearchAbility);
        GrantGameplayAbility(Pawn, EmoteAbility);
    }
}