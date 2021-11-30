// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Hand_Positions_Enum__pf423755669.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHand_Positions_Enum__pf423755669() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Hand_Positions_Enum__pf();
// End Cross Module References
	static UEnum* E__Hand_Positions_Enum__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Hand_Positions_Enum")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Hand_Positions_Enum__pf, EnumPackage, TEXT("Hand_Positions_Enum"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__Hand_Positions_Enum__pf>()
	{
		return E__Hand_Positions_Enum__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Hand_Positions_Enum__pf(E__Hand_Positions_Enum__pf_StaticEnum, TEXT("/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum"), TEXT("Hand_Positions_Enum"), true, TEXT("/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum"), TEXT("/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum.Hand_Positions_Enum"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Hand_Positions_Enum__pf_Hash() { return 557296105U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Hand_Positions_Enum__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Hand_Positions_Enum"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Hand_Positions_Enum__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Hand_Positions_Enum::NewEnumerator0", (int64)E__Hand_Positions_Enum__pf::NewEnumerator0 },
				{ "Hand_Positions_Enum::NewEnumerator1", (int64)E__Hand_Positions_Enum__pf::NewEnumerator1 },
				{ "Hand_Positions_Enum::NewEnumerator2", (int64)E__Hand_Positions_Enum__pf::NewEnumerator2 },
				{ "Hand_Positions_Enum::NewEnumerator3", (int64)E__Hand_Positions_Enum__pf::NewEnumerator3 },
				{ "Hand_Positions_Enum::Hand_Positions_MAX", (int64)E__Hand_Positions_Enum__pf::E__Hand_Positions_Enum__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Hand_Positions_Enum__pf_MAX.Name", "E__Hand_Positions_Enum__pf::E__Hand_Positions_Enum__pf_MAX" },
				{ "E__Hand_Positions_Enum__pf_MAX.OverrideName", "Hand_Positions_Enum::Hand_Positions_MAX" },
				{ "EnumDisplayNameFn", "E__Hand_Positions_Enum__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Hand_Positions_Enum__pf423755669.h" },
				{ "NewEnumerator0.Name", "E__Hand_Positions_Enum__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "Hand_Positions_Enum::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__Hand_Positions_Enum__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "Hand_Positions_Enum::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__Hand_Positions_Enum__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "Hand_Positions_Enum::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__Hand_Positions_Enum__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "Hand_Positions_Enum::NewEnumerator3" },
				{ "OverrideNativeName", "Hand_Positions_Enum" },
				{ "ReplaceConverted", "/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum.Hand_Positions_Enum" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum")); },
				E__Hand_Positions_Enum__pf__GetUserFriendlyName,
				"Hand_Positions_Enum",
				"E__Hand_Positions_Enum__pf",
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
