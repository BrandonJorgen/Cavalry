// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/E_FireMode__pf1725717533.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_FireMode__pf1725717533() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_FireMode__pf();
// End Cross Module References
	static UEnum* E__E_FireMode__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enums/E_FireMode"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("E_FireMode")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__E_FireMode__pf, EnumPackage, TEXT("E_FireMode"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__E_FireMode__pf>()
	{
		return E__E_FireMode__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__E_FireMode__pf(E__E_FireMode__pf_StaticEnum, TEXT("/Game/Blueprints/Enums/E_FireMode"), TEXT("E_FireMode"), true, TEXT("/Game/Blueprints/Enums/E_FireMode"), TEXT("/Game/Blueprints/Enums/E_FireMode.E_FireMode"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__E_FireMode__pf_Hash() { return 326188363U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__E_FireMode__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enums/E_FireMode"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("E_FireMode"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__E_FireMode__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "E_FireMode::NewEnumerator0", (int64)E__E_FireMode__pf::NewEnumerator0 },
				{ "E_FireMode::NewEnumerator2", (int64)E__E_FireMode__pf::NewEnumerator2 },
				{ "E_FireMode::E_MAX", (int64)E__E_FireMode__pf::E__E_FireMode__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__E_FireMode__pf_MAX.Name", "E__E_FireMode__pf::E__E_FireMode__pf_MAX" },
				{ "E__E_FireMode__pf_MAX.OverrideName", "E_FireMode::E_MAX" },
				{ "EnumDisplayNameFn", "E__E_FireMode__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/E_FireMode__pf1725717533.h" },
				{ "NewEnumerator0.Name", "E__E_FireMode__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "E_FireMode::NewEnumerator0" },
				{ "NewEnumerator2.Name", "E__E_FireMode__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "E_FireMode::NewEnumerator2" },
				{ "OverrideNativeName", "E_FireMode" },
				{ "ReplaceConverted", "/Game/Blueprints/Enums/E_FireMode.E_FireMode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enums/E_FireMode")); },
				E__E_FireMode__pf__GetUserFriendlyName,
				"E_FireMode",
				"E__E_FireMode__pf",
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
