// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Struc_CharacterData__pf3256655095.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStruc_CharacterData__pf3256655095() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FStruc_CharacterData__pf3256655095::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/Struc_CharacterData"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Struc_CharacterData")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095, StructPackage, TEXT("Struc_CharacterData"), sizeof(FStruc_CharacterData__pf3256655095), Get_Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FStruc_CharacterData__pf3256655095>()
{
	return FStruc_CharacterData__pf3256655095::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStruc_CharacterData__pf3256655095(FStruc_CharacterData__pf3256655095::StaticStruct, TEXT("/Game/HUD/Main_Menu/Struc_CharacterData"), TEXT("Struc_CharacterData"), true, TEXT("/Game/HUD/Main_Menu/Struc_CharacterData"), TEXT("/Game/HUD/Main_Menu/Struc_CharacterData.Struc_CharacterData"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFStruc_CharacterData__pf3256655095
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFStruc_CharacterData__pf3256655095()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Struc_CharacterData")),new UScriptStruct::TCppStructOps<FStruc_CharacterData__pf3256655095>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFStruc_CharacterData__pf3256655095;
	struct Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/Struc_CharacterData"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Struc_CharacterData__pf3256655095.h" },
		{ "OverrideNativeName", "Struc_CharacterData" },
		{ "ReplaceConverted", "/Game/HUD/Main_Menu/Struc_CharacterData.Struc_CharacterData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStruc_CharacterData__pf3256655095>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf_MetaData[] = {
		{ "Category", "Struc_CharacterData__pf3256655095" },
		{ "DisplayName", "ID" },
		{ "ModuleRelativePath", "Public/Struc_CharacterData__pf3256655095.h" },
		{ "OverrideNativeName", "ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf = { "ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_CharacterData__pf3256655095, bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf_MetaData[] = {
		{ "Category", "Struc_CharacterData__pf3256655095" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/Struc_CharacterData__pf3256655095.h" },
		{ "OverrideNativeName", "Name_11_7C49E5F347C142A89A1C7BA4644CC9A0" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf = { "Name_11_7C49E5F347C142A89A1C7BA4644CC9A0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_CharacterData__pf3256655095, bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf_MetaData[] = {
		{ "Category", "Struc_CharacterData__pf3256655095" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/Struc_CharacterData__pf3256655095.h" },
		{ "OverrideNativeName", "Description_12_F4B3087547A8585A495D1FA2957C210D" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf = { "Description_12_F4B3087547A8585A495D1FA2957C210D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_CharacterData__pf3256655095, bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf_MetaData[] = {
		{ "Category", "Struc_CharacterData__pf3256655095" },
		{ "DisplayName", "Character" },
		{ "ModuleRelativePath", "Public/Struc_CharacterData__pf3256655095.h" },
		{ "OverrideNativeName", "Character_17_1A17CA034A492038F4A2DDABFAE689BC" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf = { "Character_17_1A17CA034A492038F4A2DDABFAE689BC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_CharacterData__pf3256655095, bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf_MetaData[] = {
		{ "Category", "Struc_CharacterData__pf3256655095" },
		{ "DisplayName", "Image" },
		{ "ModuleRelativePath", "Public/Struc_CharacterData__pf3256655095.h" },
		{ "OverrideNativeName", "Image_14_3FAA3787483113AC10F5E88AFFE6745A" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf = { "Image_14_3FAA3787483113AC10F5E88AFFE6745A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStruc_CharacterData__pf3256655095, bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::NewProp_bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"Struc_CharacterData",
		sizeof(FStruc_CharacterData__pf3256655095),
		alignof(FStruc_CharacterData__pf3256655095),
		Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/Struc_CharacterData"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Struc_CharacterData"), sizeof(FStruc_CharacterData__pf3256655095), Get_Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095_Hash() { return 1132594367U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
