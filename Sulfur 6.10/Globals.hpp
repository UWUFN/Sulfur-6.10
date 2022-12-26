#pragma once
#include "SDK.hpp"
#include <vector>

using namespace SDK;

namespace Globals
{
    UGameEngine* GEngine;
    APlayerPawn_Athena_C* Pawn;

    bool bSwitched = false;
    bool bInit = false;

    static inline AAthena_PlayerController_C* GetPlayerController()
    {
        return static_cast<AAthena_PlayerController_C*>(Globals::GEngine->GameInstance->LocalPlayers[0]->PlayerController);
    }

    static inline UWorld* GetWorld()
    {
        return Globals::GEngine->GameViewport->World;
    }

    template <typename T>
    static T* FindObjectFast(std::string ObjectName, UClass* ObjectClass = UObject::StaticClass())
    {
        auto OrigInName = std::wstring(ObjectName.begin(), ObjectName.end()).c_str();

        auto StaticFindObject = (T * (*)(UClass*, UObject * Package, const wchar_t* OrigInName, bool ExactClass))((uintptr_t)GetModuleHandleA(0) + 0x13DE630);
        return StaticFindObject(ObjectClass, nullptr, OrigInName, false);
    }
}

static std::vector<std::string> Split(std::string s, std::string delimiter)
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::string token;
    std::vector<std::string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}


//static inline Start()
//{
//    printf("[+] SWITCHING LEVEL!\n");
//    Globals::GetPlayerController()->SwitchLevel(L"Athena_Terrain?game=/Game/Athena/Athena_GameMode.Athena_GameMode_C");
//}