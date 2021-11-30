// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/EGameState__pf3256655095.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameState__pf3256655095() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EGameState__pf();
// End Cross Module References
	static UEnum* E__EGameState__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/EGameState"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("EGameState")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__EGameState__pf, EnumPackage, TEXT("EGameState"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__EGameState__pf>()
	{
		return E__EGameState__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__EGameState__pf(E__EGameState__pf_StaticEnum, TEXT("/Game/HUD/Main_Menu/EGameState"), TEXT("EGameState"), true, TEXT("/Game/HUD/Main_Menu/EGameState"), TEXT("/Game/HUD/Main_Menu/EGameState.EGameState"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__EGameState__pf_Hash() { return 3125812627U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__EGameState__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/EGameState"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameState"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__EGameState__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameState::NewEnumerator1", (int64)E__EGameState__pf::NewEnumerator1 },
				{ "EGameState::NewEnumerator0", (int64)E__EGameState__pf::NewEnumerator0 },
				{ "EGameState::NewEnumerator2", (int64)E__EGameState__pf::NewEnumerator2 },
				{ "EGameState::NewEnumerator3", (int64)E__EGameState__pf::NewEnumerator3 },
				{ "EGameState::NewEnumerator4", (int64)E__EGameState__pf::NewEnumerator4 },
				{ "EGameState::EGameState_MAX", (int64)E__EGameState__pf::E__EGameState__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__EGameState__pf_MAX.Name", "E__EGameState__pf::E__EGameState__pf_MAX" },
				{ "E__EGameState__pf_MAX.OverrideName", "EGameState::EGameState_MAX" },
				{ "EnumDisplayNameFn", "E__EGameState__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/EGameState__pf3256655095.h" },
				{ "NewEnumerator0.Name", "E__EGameState__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "EGameState::NewEnumerator0" },
				{ "NewEnumerator1.Name", "E__EGameState__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "EGameState::NewEnumerator1" },
				{ "NewEnumerator2.Name", "E__EGameState__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "EGameState::NewEnumerator2" },
				{ "NewEnumerator3.Name", "E__EGameState__pf::NewEnumerator3" },
				{ "NewEnumerator3.OverrideName", "EGameState::NewEnumerator3" },
				{ "NewEnumerator4.Name", "E__EGameState__pf::NewEnumerator4" },
				{ "NewEnumerator4.OverrideName", "EGameState::NewEnumerator4" },
				{ "OverrideNativeName", "EGameState" },
				{ "ReplaceConverted", "/Game/HUD/Main_Menu/EGameState.EGameState" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/EGameState")); },
				E__EGameState__pf__GetUserFriendlyName,
				"EGameState",
				"E__EGameState__pf",
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
