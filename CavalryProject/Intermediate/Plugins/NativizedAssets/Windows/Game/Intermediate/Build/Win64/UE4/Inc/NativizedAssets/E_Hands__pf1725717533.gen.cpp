// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/E_Hands__pf1725717533.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_Hands__pf1725717533() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Hands__pf();
// End Cross Module References
	static UEnum* E__E_Hands__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enums/E_Hands"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("E_Hands")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__E_Hands__pf, EnumPackage, TEXT("E_Hands"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__E_Hands__pf>()
	{
		return E__E_Hands__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__E_Hands__pf(E__E_Hands__pf_StaticEnum, TEXT("/Game/Blueprints/Enums/E_Hands"), TEXT("E_Hands"), true, TEXT("/Game/Blueprints/Enums/E_Hands"), TEXT("/Game/Blueprints/Enums/E_Hands.E_Hands"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__E_Hands__pf_Hash() { return 1398400027U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Hands__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enums/E_Hands"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("E_Hands"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__E_Hands__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "E_Hands::NewEnumerator0", (int64)E__E_Hands__pf::NewEnumerator0 },
				{ "E_Hands::NewEnumerator1", (int64)E__E_Hands__pf::NewEnumerator1 },
				{ "E_Hands::E_MAX", (int64)E__E_Hands__pf::E__E_Hands__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__E_Hands__pf_MAX.Name", "E__E_Hands__pf::E__E_Hands__pf_MAX" },
				{ "E__E_Hands__pf_MAX.OverrideName", "E_Hands::E_MAX" },
				{ "EnumDisplayNameFn", "E__E_Hands__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/E_Hands__pf1725717533.h" },
				{ "NewEnumerator0.Name", "E__E_Hands__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "E_Hands::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__E_Hands__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "E_Hands::NewEnumerator1" },
				{ "OverrideNativeName", "E_Hands" },
				{ "ReplaceConverted", "/Game/Blueprints/Enums/E_Hands.E_Hands" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enums/E_Hands")); },
				E__E_Hands__pf__GetUserFriendlyName,
				"E_Hands",
				"E__E_Hands__pf",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::Dynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
