// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Struc_LevelData__pf3256655095.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStruc_LevelData__pf3256655095() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FStruc_LevelData__pf3256655095::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/Struc_LevelData"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Struc_LevelData")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095, StructPackage, TEXT("Struc_LevelData"), sizeof(FStruc_LevelData__pf3256655095), Get_Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FStruc_LevelData__pf3256655095>()
{
	return FStruc_LevelData__pf3256655095::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStruc_LevelData__pf3256655095(FStruc_LevelData__pf3256655095::StaticStruct, TEXT("/Game/HUD/Main_Menu/Struc_LevelData"), TEXT("Struc_LevelData"), true, TEXT("/Game/HUD/Main_Menu/Struc_LevelData"), TEXT("/Game/HUD/Main_Menu/Struc_LevelData.Struc_LevelData"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFStruc_LevelData__pf3256655095
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFStruc_LevelData__pf3256655095()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Struc_LevelData")),new UScriptStruct::TCppStructOps<FStruc_LevelData__pf3256655095>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFStruc_LevelData__pf3256655095;
	struct Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FileName_18_381C602747293309CC84E4A69220030E__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__FileName_18_381C602747293309CC84E4A69220030E__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf_MetaData[];
#endif
		static void NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy_MetaData[];
#endif
		static void NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/Struc_LevelData"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Struc_LevelData__pf3256655095.h" },
		{ "OverrideNativeName", "Struc_LevelData" },
		{ "ReplaceConverted", "/Game/HUD/Main_Menu/Struc_LevelData.Struc_LevelData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStruc_LevelData__pf3256655095>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf_MetaData[] = {
		{ "Category", "Struc_LevelData__pf3256655095" },
		{ "DisplayName", "ID" },
		{ "ModuleRelativePath", "Public/Struc_LevelData__pf3256655095.h" },
		{ "OverrideNativeName", "ID_2_5D80B9494B987756E44A79ADEC0572F1" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf = { "ID_2_5D80B9494B987756E44A79ADEC0572F1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_LevelData__pf3256655095, bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf_MetaData[] = {
		{ "Category", "Struc_LevelData__pf3256655095" },
		{ "DisplayName", "DisplayName" },
		{ "ModuleRelativePath", "Public/Struc_LevelData__pf3256655095.h" },
		{ "OverrideNativeName", "DisplayName_20_B93A6AF9452F28B0797A9AA021970721" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf = { "DisplayName_20_B93A6AF9452F28B0797A9AA021970721", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_LevelData__pf3256655095, bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf_MetaData[] = {
		{ "Category", "Struc_LevelData__pf3256655095" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/Struc_LevelData__pf3256655095.h" },
		{ "OverrideNativeName", "Description_19_2DB7B48443B37A3B9EE8908E263439ED" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf = { "Description_19_2DB7B48443B37A3B9EE8908E263439ED", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_LevelData__pf3256655095, bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__FileName_18_381C602747293309CC84E4A69220030E__pf_MetaData[] = {
		{ "Category", "Struc_LevelData__pf3256655095" },
		{ "DisplayName", "FileName" },
		{ "ModuleRelativePath", "Public/Struc_LevelData__pf3256655095.h" },
		{ "OverrideNativeName", "FileName_18_381C602747293309CC84E4A69220030E" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__FileName_18_381C602747293309CC84E4A69220030E__pf = { "FileName_18_381C602747293309CC84E4A69220030E", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_LevelData__pf3256655095, bpv__FileName_18_381C602747293309CC84E4A69220030E__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__FileName_18_381C602747293309CC84E4A69220030E__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__FileName_18_381C602747293309CC84E4A69220030E__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf_MetaData[] = {
		{ "Category", "Struc_LevelData__pf3256655095" },
		{ "DisplayName", "Image" },
		{ "ModuleRelativePath", "Public/Struc_LevelData__pf3256655095.h" },
		{ "OverrideNativeName", "Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf = { "Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_LevelData__pf3256655095, bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf_MetaData[] = {
		{ "Category", "Struc_LevelData__pf3256655095" },
		{ "DisplayName", "Unlocked" },
		{ "ModuleRelativePath", "Public/Struc_LevelData__pf3256655095.h" },
		{ "OverrideNativeName", "Unlocked_16_A6894C31443748FF38A17287F32569FA" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf_SetBit(void* Obj)
	{
		((FStruc_LevelData__pf3256655095*)Obj)->bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf = { "Unlocked_16_A6894C31443748FF38A17287F32569FA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStruc_LevelData__pf3256655095), &Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy_MetaData[] = {
		{ "Category", "Struc_LevelData__pf3256655095" },
		{ "DisplayName", "HasGameplay?" },
		{ "ModuleRelativePath", "Public/Struc_LevelData__pf3256655095.h" },
		{ "OverrideNativeName", "HasGameplay?_15_02393D1F444182092204EA907E0E0BE6" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy_SetBit(void* Obj)
	{
		((FStruc_LevelData__pf3256655095*)Obj)->bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy = { "HasGameplay?_15_02393D1F444182092204EA907E0E0BE6", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStruc_LevelData__pf3256655095), &Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__FileName_18_381C602747293309CC84E4A69220030E__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::NewProp_bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"Struc_LevelData",
		sizeof(FStruc_LevelData__pf3256655095),
		alignof(FStruc_LevelData__pf3256655095),
		Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/Struc_LevelData"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Struc_LevelData"), sizeof(FStruc_LevelData__pf3256655095), Get_Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095_Hash() { return 1243985611U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
