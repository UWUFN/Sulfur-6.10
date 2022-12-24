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

// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// 0x0039 (0x0361 - 0x0328)
class AFort_Entry_Music_Controller_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Enter_Lobby_Loop;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MenuMusic_B;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MenuMusic_A;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             LoginMusic;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class USoundBase*                                  CurrentMusic;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Lobby_Music_Activate;                                  // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void Change_Music(class USoundBase* New_Music);
	void ListenToMusicPacks();
	void OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void MakeNextMusicPackStartFromBeginning();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
