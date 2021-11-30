// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/E_Horsemen__pf1725717533.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_Horsemen__pf1725717533() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Horsemen__pf();
// End Cross Module References
	static UEnum* E__E_Horsemen__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enums/E_Horsemen"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("E_Horsemen")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__E_Horsemen__pf, EnumPackage, TEXT("E_Horsemen"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__E_Horsemen__pf>()
	{
		return E__E_Horsemen__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__E_Horsemen__pf(E__E_Horsemen__pf_StaticEnum, TEXT("/Game/Blueprints/Enums/E_Horsemen"), TEXT("E_Horsemen"), true, TEXT("/Game/Blueprints/Enums/E_Horsemen"), TEXT("/Game/Blueprints/Enums/E_Horsemen.E_Horsemen"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__E_Horsemen__pf_Hash() { return 1967213742U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Horsemen__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enums/E_Horsemen"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("E_Horsemen"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__E_Horsemen__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "E_Horsemen::NewEnumerator0", (int64)E__E_Horsemen__pf::NewEnumerator0 },
				{ "E_Horsemen::NewEnumerator1", (int64)E__E_Horsemen__pf::NewEnumerator1 },
				{ "E_Horsemen::NewEnumerator2", (int64)E__E_Horsemen__pf::NewEnumerator2 },
				{ "E_Horsemen::NewEnumerator3", (int64)E__E_Horsemen__pf::NewEnumerator3 },
				{ "E_Horsemen::E_MAX", (int64)E__E_Horsemen__pf::E__E_Horsemen__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__E_Horsemen__pf_MAX.Name", "E__E_Horsemen__pf::E__E_Horsemen__pf_MAX" },
				{ "E__E_Horsemen__pf_MAX.OverrideName", "E_Horsemen::E_MAX" },
				{ "EnumDisplayNameFn", "E__E_Horsemen__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/E_Horsemen__pf1725717533.h" },
				{ "NewEnumerator0.Name", "E__E_Horsemen__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "E_Horsemen::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__E_Horsemen__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "E_Horsemen::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__E_Horsemen__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "E_Horsemen::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__E_Horsemen__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "E_Horsemen::NewEnumerator3" },
				{ "OverrideNativeName", "E_Horsemen" },
				{ "ReplaceConverted", "/Game/Blueprints/Enums/E_Horsemen.E_Horsemen" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Enums/E_Horsemen")); },
				E__E_Horsemen__pf__GetUserFriendlyName,
				"E_Horsemen",
				"E__E_Horsemen__pf",
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
