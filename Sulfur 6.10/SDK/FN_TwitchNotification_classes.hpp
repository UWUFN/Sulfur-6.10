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

// BlueprintGeneratedClass TwitchNotification.TwitchNotification_C
// 0x0000 (0x00D0 - 0x00D0)
class UTwitchNotification_C : public UFortUIFriendNotification
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TwitchNotification.TwitchNotification_C");
		return ptr;
	}


	class UTexture2D* GetImageOverride();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
