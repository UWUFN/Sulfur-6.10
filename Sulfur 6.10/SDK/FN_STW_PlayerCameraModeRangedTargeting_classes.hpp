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

// BlueprintGeneratedClass STW_PlayerCameraModeRangedTargeting.STW_PlayerCameraModeRangedTargeting_C
// 0x0000 (0x0C20 - 0x0C20)
class USTW_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeRangedTargeting_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass STW_PlayerCameraModeRangedTargeting.STW_PlayerCameraModeRangedTargeting_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
