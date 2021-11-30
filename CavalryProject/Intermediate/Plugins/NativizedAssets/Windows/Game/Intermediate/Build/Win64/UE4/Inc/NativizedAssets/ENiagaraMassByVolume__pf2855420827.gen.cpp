// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraMassByVolume__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraMassByVolume__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraMassByVolume__pf();
// End Cross Module References
	static UEnum* E__ENiagaraMassByVolume__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraMassByVolume"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraMassByVolume")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraMassByVolume__pf, EnumPackage, TEXT("ENiagaraMassByVolume"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraMassByVolume__pf>()
	{
		return E__ENiagaraMassByVolume__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraMassByVolume__pf(E__ENiagaraMassByVolume__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraMassByVolume"), TEXT("ENiagaraMassByVolume"), true, TEXT("/Niagara/Enums/ENiagaraMassByVolume"), TEXT("/Niagara/Enums/ENiagaraMassByVolume.ENiagaraMassByVolume"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraMassByVolume__pf_Hash() { return 3890374898U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraMassByVolume__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraMassByVolume"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraMassByVolume"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraMassByVolume__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraMassByVolume::NewEnumerator1", (int64)E__ENiagaraMassByVolume__pf::NewEnumerator1 },
				{ "ENiagaraMassByVolume::NewEnumerator0", (int64)E__ENiagaraMassByVolume__pf::NewEnumerator0 },
				{ "ENiagaraMassByVolume::NewEnumerator5", (int64)E__ENiagaraMassByVolume__pf::NewEnumerator5 },
				{ "ENiagaraMassByVolume::NewEnumerator3", (int64)E__ENiagaraMassByVolume__pf::NewEnumerator3 },
				{ "ENiagaraMassByVolume::NewEnumerator4", (int64)E__ENiagaraMassByVolume__pf::NewEnumerator4 },
				{ "ENiagaraMassByVolume::NewEnumerator2", (int64)E__ENiagaraMassByVolume__pf::NewEnumerator2 },
				{ "ENiagaraMassByVolume::ENiagaraMassByVolume_MAX", (int64)E__ENiagaraMassByVolume__pf::E__ENiagaraMassByVolume__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraMassByVolume__pf_MAX.Name", "E__ENiagaraMassByVolume__pf::E__ENiagaraMassByVolume__pf_MAX" },
				{ "E__ENiagaraMassByVolume__pf_MAX.OverrideName", "ENiagaraMassByVolume::ENiagaraMassByVolume_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraMassByVolume__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraMassByVolume__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraMassByVolume__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraMassByVolume::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraMassByVolume__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraMassByVolume::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagaraMassByVolume__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraMassByVolume::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__ENiagaraMassByVolume__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "ENiagaraMassByVolume::NewEnumerator3" },
				{ "NewEnumerator4.Name", "E__ENiagaraMassByVolume__pf::NewEnumerator4" },
				{ "NewEnumerator4.OverrideName", "ENiagaraMassByVolume::NewEnumerator4" },
				{ "NewEnumerator5.Name", "E__ENiagaraMassByVolume__pf::NewEnumerator5" },
				{ "NewEnumerator5.OverrideName", "ENiagaraMassByVolume::NewEnumerator5" },
				{ "OverrideNativeName", "ENiagaraMassByVolume" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraMassByVolume.ENiagaraMassByVolume" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraMassByVolume")); },
				E__ENiagaraMassByVolume__pf__GetUserFriendlyName,
				"ENiagaraMassByVolume",
				"E__ENiagaraMassByVolume__pf",
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
