// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraMeshTransforms__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraMeshTransforms__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraMeshTransforms__pf();
// End Cross Module References
	static UEnum* E__ENiagaraMeshTransforms__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraMeshTransforms"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraMeshTransforms")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraMeshTransforms__pf, EnumPackage, TEXT("ENiagaraMeshTransforms"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraMeshTransforms__pf>()
	{
		return E__ENiagaraMeshTransforms__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraMeshTransforms__pf(E__ENiagaraMeshTransforms__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraMeshTransforms"), TEXT("ENiagaraMeshTransforms"), true, TEXT("/Niagara/Enums/ENiagaraMeshTransforms"), TEXT("/Niagara/Enums/ENiagaraMeshTransforms.ENiagaraMeshTransforms"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraMeshTransforms__pf_Hash() { return 575573449U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraMeshTransforms__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraMeshTransforms"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraMeshTransforms"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraMeshTransforms__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraMeshTransforms::NewEnumerator0", (int64)E__ENiagaraMeshTransforms__pf::NewEnumerator0 },
				{ "ENiagaraMeshTransforms::NewEnumerator1", (int64)E__ENiagaraMeshTransforms__pf::NewEnumerator1 },
				{ "ENiagaraMeshTransforms::NewEnumerator2", (int64)E__ENiagaraMeshTransforms__pf::NewEnumerator2 },
				{ "ENiagaraMeshTransforms::NewEnumerator3", (int64)E__ENiagaraMeshTransforms__pf::NewEnumerator3 },
				{ "ENiagaraMeshTransforms::ENiagaraMeshTransforms_MAX", (int64)E__ENiagaraMeshTransforms__pf::E__ENiagaraMeshTransforms__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraMeshTransforms__pf_MAX.Name", "E__ENiagaraMeshTransforms__pf::E__ENiagaraMeshTransforms__pf_MAX" },
				{ "E__ENiagaraMeshTransforms__pf_MAX.OverrideName", "ENiagaraMeshTransforms::ENiagaraMeshTransforms_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraMeshTransforms__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraMeshTransforms__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraMeshTransforms__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraMeshTransforms::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraMeshTransforms__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraMeshTransforms::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__ENiagaraMeshTransforms__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "ENiagaraMeshTransforms::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__ENiagaraMeshTransforms__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "ENiagaraMeshTransforms::NewEnumerator3" },
				{ "OverrideNativeName", "ENiagaraMeshTransforms" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraMeshTransforms.ENiagaraMeshTransforms" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraMeshTransforms")); },
				E__ENiagaraMeshTransforms__pf__GetUserFriendlyName,
				"ENiagaraMeshTransforms",
				"E__ENiagaraMeshTransforms__pf",
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
