#pragma once
#include "framework.h"

namespace Abilities
{
    FGameplayAbilitySpecHandle(*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle* outHandle, FGameplayAbilitySpec);

    static void GrantGameplayAbility(APlayerPawn_Athena_C* TargetPawn, UClass* GameplayAbilityClass)
    {
        auto AbilitySystemComponent = TargetPawn->AbilitySystemComponent;

        if (!AbilitySystemComponent)
            return;

        auto GenerateNewSpec = [&]() -> FGameplayAbilitySpec
        {
            FGameplayAbilitySpecHandle Handle{ rand() };

            FGameplayAbilitySpec Spec{ -1, -1, -1, Handle, GameplayAbilityClass->CreateDefaultObject<UGameplayAbility>(), 1, -1, nullptr, 0, false, false, false };

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

    void GrantGameplayAbilities(APlayerPawn_Athena_C* InPawn)
    {
        static auto AbilitySet = UObject::FindObject<UFortAbilitySet>("FortAbilitySet GAS_DefaultPlayer.GAS_DefaultPlayer");

        for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
        {
            auto Ability = AbilitySet->GameplayAbilities[i];

            Abilities::GrantGameplayAbility(InPawn, Ability);
        }

        static auto ShootingAbility = UObject::FindObject<UClass>("BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C");
        if (ShootingAbility)
        {
            Abilities::GrantGameplayAbility(InPawn, ShootingAbility);
        }
    }
}