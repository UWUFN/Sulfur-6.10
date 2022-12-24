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

// BlueprintGeneratedClass STW_PlayerCameraModeTargetingShotgun.STW_PlayerCameraModeTargetingShotgun_C
// 0x0000 (0x0C20 - 0x0C20)
class USTW_PlayerCameraModeTargetingShotgun_C : public UAthena_PlayerCameraModeTargetingShotgun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass STW_PlayerCameraModeTargetingShotgun.STW_PlayerCameraModeTargetingShotgun_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
