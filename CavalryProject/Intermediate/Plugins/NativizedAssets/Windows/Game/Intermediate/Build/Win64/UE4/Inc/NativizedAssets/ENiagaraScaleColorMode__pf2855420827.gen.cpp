// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ENiagaraScaleColorMode__pf2855420827.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENiagaraScaleColorMode__pf2855420827() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraScaleColorMode__pf();
// End Cross Module References
	static UEnum* E__ENiagaraScaleColorMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraScaleColorMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("ENiagaraScaleColorMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__ENiagaraScaleColorMode__pf, EnumPackage, TEXT("ENiagaraScaleColorMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__ENiagaraScaleColorMode__pf>()
	{
		return E__ENiagaraScaleColorMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__ENiagaraScaleColorMode__pf(E__ENiagaraScaleColorMode__pf_StaticEnum, TEXT("/Niagara/Enums/ENiagaraScaleColorMode"), TEXT("ENiagaraScaleColorMode"), true, TEXT("/Niagara/Enums/ENiagaraScaleColorMode"), TEXT("/Niagara/Enums/ENiagaraScaleColorMode.ENiagaraScaleColorMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraScaleColorMode__pf_Hash() { return 4268806860U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__ENiagaraScaleColorMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraScaleColorMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraScaleColorMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__ENiagaraScaleColorMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraScaleColorMode::NewEnumerator0", (int64)E__ENiagaraScaleColorMode__pf::NewEnumerator0 },
				{ "ENiagaraScaleColorMode::NewEnumerator1", (int64)E__ENiagaraScaleColorMode__pf::NewEnumerator1 },
				{ "ENiagaraScaleColorMode::ENiagaraScaleColorMode_MAX", (int64)E__ENiagaraScaleColorMode__pf::E__ENiagaraScaleColorMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__ENiagaraScaleColorMode__pf_MAX.Name", "E__ENiagaraScaleColorMode__pf::E__ENiagaraScaleColorMode__pf_MAX" },
				{ "E__ENiagaraScaleColorMode__pf_MAX.OverrideName", "ENiagaraScaleColorMode::ENiagaraScaleColorMode_MAX" },
				{ "EnumDisplayNameFn", "E__ENiagaraScaleColorMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/ENiagaraScaleColorMode__pf2855420827.h" },
				{ "NewEnumerator0.Name", "E__ENiagaraScaleColorMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "ENiagaraScaleColorMode::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__ENiagaraScaleColorMode__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "ENiagaraScaleColorMode::NewEnumerator1" },
				{ "OverrideNativeName", "ENiagaraScaleColorMode" },
				{ "ReplaceConverted", "/Niagara/Enums/ENiagaraScaleColorMode.ENiagaraScaleColorMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Niagara/Enums/ENiagaraScaleColorMode")); },
				E__ENiagaraScaleColorMode__pf__GetUserFriendlyName,
				"ENiagaraScaleColorMode",
				"E__ENiagaraScaleColorMode__pf",
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
