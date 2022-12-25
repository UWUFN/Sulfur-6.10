#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
template<typename Fn>
inline Fn GetVFunction(const void *instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

class UObject;

struct FUObjectItem
{
	UObject* Object;
	DWORD Flags;
	DWORD ClusterIndex;
	DWORD SerialNumber;
	DWORD SerialNumber2;
};

struct TUObjectArrayNew
{
	FUObjectItem* Objects[9];
};

struct GlobalObjectsArray
{
	TUObjectArrayNew* ObjectArray;
	BYTE _padding_0[0xC];
	DWORD ObjectCount;

	inline void NumChunks(int* start, int* end)
	{
		int cStart = 0, cEnd = 0;

		if (!cEnd)
		{
			while (1)
			{
				if (ObjectArray->Objects[cStart] == 0)
				{
					cStart++;
				}
				else
				{
					break;
				}
			}

			cEnd = cStart;
			while (1)
			{
				if (ObjectArray->Objects[cEnd] == 0)
				{
					break;
				}
				else
				{
					cEnd++;
				}
			}
		}

		*start = cStart;
		*end = cEnd;
	}

	inline int32_t Num()
	{
		return ObjectCount;
	}

	inline UObject* GetByIndex(int32_t Index)
	{
		int cStart = 0, cEnd = 0;
		int chunkIndex = 0, chunkSize = 0xFFFF, chunkPos;
		FUObjectItem* Object;

		NumChunks(&cStart, &cEnd);

		chunkIndex = Index / chunkSize;
		if (chunkSize * chunkIndex != 0 &&
			chunkSize * chunkIndex == Index)
		{
			chunkIndex--;
		}

		chunkPos = cStart + chunkIndex;
		if (chunkPos < cEnd)
		{
			Object = ObjectArray->Objects[chunkPos] + (Index - chunkSize * chunkIndex);

			if (!Object) { return NULL; }

			return Object->Object;
		}

		return nullptr;
	}
};

template<class T>
struct TArray
{
	friend struct FString;

public:
	inline TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	inline int Num() const
	{
		return Count;
	};

	inline T& operator[](int i)
	{
		return Data[i];
	};

	inline const T& operator[](int i) const
	{
		return Data[i];
	};

	inline bool IsValidIndex(int i) const
	{
		return i < Num();
	}

	inline void Add(T InputData)
	{
		Data = (T*)realloc(Data, sizeof(T) * (Count + 1));
		Data[Count++] = InputData;
		Max = Count;
	};

	T* Data;
	int32_t Count;
	int32_t Max;
};

struct FString : private TArray<wchar_t>
{
	inline FString()
	{
	};

	FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{
		auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

inline void(*FNameToString)(void*, FString&);
inline void(*FreeMemory)(void*);

enum EName : int32_t
{
	NAME_None = 0,
	NAME_ByteProperty = 1,
	NAME_IntProperty = 2,
	NAME_BoolProperty = 3,
	NAME_FloatProperty = 4,
	NAME_ObjectProperty = 5,
	NAME_NameProperty = 6,
	NAME_DelegateProperty = 7,
	NAME_DoubleProperty = 8,
	NAME_ArrayProperty = 9,
	NAME_StructProperty = 10,
	NAME_VectorProperty = 11,
	NAME_RotatorProperty = 12,
	NAME_StrProperty = 13,
	NAME_TextProperty = 14,
	NAME_InterfaceProperty = 15,
	NAME_MulticastDelegateProperty = 16,
	NAME_LazyObjectProperty = 18,
	NAME_SoftObjectProperty = 19,
	NAME_Int64Property = 20,
	NAME_Int32Property = 21,
	NAME_Int16Property = 22,
	NAME_Int8Property = 23,
	NAME_UInt64Property = 24,
	NAME_UInt32Property = 25,
	NAME_UInt16Property = 26,
	NAME_MapProperty = 28,
	NAME_SetProperty = 29,
	NAME_Core = 30,
	NAME_Engine = 31,
	NAME_Editor = 32,
	NAME_CoreUObject = 33,
	NAME_EnumProperty = 34,
	NAME_Cylinder = 50,
	NAME_BoxSphereBounds = 51,
	NAME_Sphere = 52,
	NAME_Box = 53,
	NAME_Vector2D = 54,
	NAME_IntRect = 55,
	NAME_IntPoint = 56,
	NAME_Vector4 = 57,
	NAME_Name = 58,
	NAME_Vector = 59,
	NAME_Rotator = 60,
	NAME_SHVector = 61,
	NAME_Color = 62,
	NAME_Plane = 63,
	NAME_Matrix = 64,
	NAME_LinearColor = 65,
	NAME_AdvanceFrame = 66,
	NAME_Pointer = 67,
	NAME_Double = 68,
	NAME_Quat = 69,
	NAME_Self = 70,
	NAME_Transform = 71,
	NAME_Object = 100,
	NAME_Camera = 101,
	NAME_Actor = 102,
	NAME_ObjectRedirector = 103,
	NAME_ObjectArchetype = 104,
	NAME_Class = 105,
	NAME_ScriptStruct = 106,
	NAME_Function = 107,
	NAME_Pawn = 108,
	NAME_State = 200,
	NAME_TRUE = 201,
	NAME_FALSE = 202,
	NAME_Enum = 203,
	NAME_Default = 204,
	NAME_Skip = 205,
	NAME_Input = 206,
	NAME_Package = 207,
	NAME_Groups = 208,
	NAME_Interface = 209,
	NAME_Components = 210,
	NAME_Global = 211,
	NAME_Super = 212,
	NAME_Outer = 213,
	NAME_Map = 214,
	NAME_Role = 215,
	NAME_RemoteRole = 216,
	NAME_PersistentLevel = 217,
	NAME_TheWorld = 218,
	NAME_PackageMetaData = 219,
	NAME_InitialState = 220,
	NAME_Game = 221,
	NAME_SelectionColor = 222,
	NAME_UI = 223,
	NAME_ExecuteUbergraph = 224,
	NAME_DeviceID = 225,
	NAME_RootStat = 226,
	NAME_MoveActor = 227,
	NAME_All = 230,
	NAME_MeshEmitterVertexColor = 231,
	NAME_TextureOffsetParameter = 232,
	NAME_TextureScaleParameter = 233,
	NAME_ImpactVel = 234,
	NAME_SlideVel = 235,
	NAME_TextureOffset1Parameter = 236,
	NAME_MeshEmitterDynamicParameter = 237,
	NAME_ExpressionInput = 238,
	NAME_Untitled = 239,
	NAME_Timer = 240,
	NAME_Team = 241,
	NAME_Low = 242,
	NAME_High = 243,
	NAME_NetworkGUID = 244,
	NAME_GameThread = 245,
	NAME_RenderThread = 246,
	NAME_OtherChildren = 247,
	NAME_Location = 248,
	NAME_Rotation = 249,
	NAME_BSP = 250,
	NAME_EditorSettings = 251,
	NAME_AudioThread = 252,
	NAME_ID = 253,
	NAME_UserDefinedEnum = 254,
	NAME_Control = 255,
	NAME_Voice = 256,
	NAME_Zlib = 257,
	NAME_Gzip = 258,
	NAME_LZ4 = 259,
	NAME_Mobile = 260,
	NAME_DGram = 280,
	NAME_Stream = 281,
	NAME_GameNetDriver = 282,
	NAME_PendingNetDriver = 283,
	NAME_BeaconNetDriver = 284,
	NAME_FlushNetDormancy = 285,
	NAME_DemoNetDriver = 286,
	NAME_GameSession = 287,
	NAME_PartySession = 288,
	NAME_GamePort = 289,
	NAME_BeaconPort = 290,
	NAME_MeshPort = 291,
	NAME_MeshNetDriver = 292,
	NAME_LiveStreamVoice = 293,
	NAME_LiveStreamAnimation = 294,
	NAME_Linear = 300,
	NAME_Point = 301,
	NAME_Aniso = 302,
	NAME_LightMapResolution = 303,
	NAME_UnGrouped = 311,
	NAME_VoiceChat = 312,
	NAME_Playing = 320,
	NAME_Spectating = 322,
	NAME_Inactive = 325,
	NAME_PerfWarning = 350,
	NAME_Info = 351,
	NAME_Init = 352,
	NAME_Exit = 353,
	NAME_Cmd = 354,
	NAME_Warning = 355,
	NAME_Error = 356,
	NAME_FontCharacter = 400,
	NAME_InitChild2StartBone = 401,
	NAME_SoundCueLocalized = 402,
	NAME_SoundCue = 403,
	NAME_RawDistributionFloat = 404,
	NAME_RawDistributionVector = 405,
	NAME_InterpCurveFloat = 406,
	NAME_InterpCurveVector2D = 407,
	NAME_InterpCurveVector = 408,
	NAME_InterpCurveTwoVectors = 409,
	NAME_InterpCurveQuat = 410,
	NAME_AI = 450,
	NAME_NavMesh = 451,
	NAME_PerformanceCapture = 500,
	NAME_EditorLayout = 600,
	NAME_EditorKeyBindings = 601,
	NAME_GameUserSettings = 602,
	NAME_Filename = 700,
	NAME_Lerp = 701,
	NAME_Root = 702,
	NAME_MaxHardcodedNameIndex
};

struct FName;


struct FName
{
	int32_t ComparisonIndex;
	int32_t Number;

	FName() = default;

	FName(int32_t Name)
	{
		ComparisonIndex = Name;
	}

	FName(EName Name)
	{
		ComparisonIndex = Name;
	}

	std::string ToString()
	{
		if (!this)
			return "";

		FString temp;

		FNameToString(this, temp);

		auto wName = std::wstring(temp.c_str());
		auto name = std::string(wName.begin(), wName.end());

		FreeMemory((void*)temp.c_str());

		return name;
	}

	bool operator==(EName Name)
	{
		return ComparisonIndex == Name;
	}

	bool operator==(const FName& Other)
	{
		return ComparisonIndex == Other.ComparisonIndex;
	}

	bool operator!=(const FName& Other)
	{
		return ComparisonIndex != Other.ComparisonIndex;
	}

	std::wstring ToWString()
	{
		if (!this)
			return L"";

		FString temp;

		FNameToString(this, temp);

		auto wName = std::wstring(temp.c_str());

		FreeMemory((void*)temp.c_str());

		return wName;
	}
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FText
{
	char UnknownData[0x18];
};

struct FScriptDelegate
{
	char UnknownData[16];
};

struct FScriptMulticastDelegate
{
	char UnknownData[16];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

struct FWeakObjectPtr
{
public:
	inline bool SerialNumbersMatch(FUObjectItem* ObjectItem) const
	{
		return ObjectItem->SerialNumber == ObjectSerialNumber;
	}

	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	inline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T*() const
	{
		return TBASE::Get();
	}

	inline operator const T*() const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{

};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{

};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
