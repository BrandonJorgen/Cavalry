// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPC_War__pf1490413170.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPC_War__pf1490413170() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABPC_War_C__pf1490413170_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABPC_War_C__pf1490413170();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170();
// End Cross Module References
	void ABPC_War_C__pf1490413170::StaticRegisterNativesABPC_War_C__pf1490413170()
	{
	}
	UClass* Z_Construct_UClass_ABPC_War_C__pf1490413170_NoRegister()
	{
		return ABPC_War_C__pf1490413170::StaticClass();
	}
	struct Z_Construct_UClass_ABPC_War_C__pf1490413170_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABPC_War_C__pf1490413170_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPC_War_C__pf1490413170_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BPC_War__pf1490413170.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPC_War__pf1490413170.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BPC_War_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Characters/BPC_War.BPC_War_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABPC_War_C__pf1490413170_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABPC_War_C__pf1490413170>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABPC_War_C__pf1490413170_Statics::ClassParams = {
		&ABPC_War_C__pf1490413170::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABPC_War_C__pf1490413170_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABPC_War_C__pf1490413170_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABPC_War_C__pf1490413170()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Characters/BPC_War"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPC_War_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABPC_War_C__pf1490413170_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABPC_War_C__pf1490413170, TEXT("BPC_War_C"), 1734564945);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABPC_War_C__pf1490413170>()
	{
		return ABPC_War_C__pf1490413170::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABPC_War_C__pf1490413170(Z_Construct_UClass_ABPC_War_C__pf1490413170, &ABPC_War_C__pf1490413170::StaticClass, TEXT("/Game/Blueprints/Characters/BPC_War"), TEXT("BPC_War_C"), true, TEXT("/Game/Blueprints/Characters/BPC_War"), TEXT("/Game/Blueprints/Characters/BPC_War.BPC_War_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABPC_War_C__pf1490413170);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
