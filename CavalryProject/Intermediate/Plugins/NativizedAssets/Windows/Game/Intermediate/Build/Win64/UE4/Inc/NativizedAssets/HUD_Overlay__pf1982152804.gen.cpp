// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/HUD_Overlay__pf1982152804.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD_Overlay__pf1982152804() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UHUD_Overlay_C__pf1982152804();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UHUD_Overlay_C__pf1982152804::StaticRegisterNativesUHUD_Overlay_C__pf1982152804()
	{
	}
	UClass* Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_NoRegister()
	{
		return UHUD_Overlay_C__pf1982152804::StaticClass();
	}
	struct Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HelmetOverlay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HelmetOverlay__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HUD_Overlay__pf1982152804.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HUD_Overlay__pf1982152804.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "HUD_Overlay_C" },
		{ "ReplaceConverted", "/Game/HUD/Widgets/HUD_Overlay.HUD_Overlay_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::NewProp_bpv__HelmetOverlay__pf_MetaData[] = {
		{ "Category", "HUD_Overlay" },
		{ "DisplayName", "Helmet Overlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD_Overlay__pf1982152804.h" },
		{ "OverrideNativeName", "HelmetOverlay" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::NewProp_bpv__HelmetOverlay__pf = { "HelmetOverlay", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUD_Overlay_C__pf1982152804, bpv__HelmetOverlay__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::NewProp_bpv__HelmetOverlay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::NewProp_bpv__HelmetOverlay__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::NewProp_bpv__HelmetOverlay__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUD_Overlay_C__pf1982152804>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::ClassParams = {
		&UHUD_Overlay_C__pf1982152804::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUD_Overlay_C__pf1982152804()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Widgets/HUD_Overlay"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("HUD_Overlay_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHUD_Overlay_C__pf1982152804_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UHUD_Overlay_C__pf1982152804, TEXT("HUD_Overlay_C"), 859249376);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UHUD_Overlay_C__pf1982152804>()
	{
		return UHUD_Overlay_C__pf1982152804::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHUD_Overlay_C__pf1982152804(Z_Construct_UClass_UHUD_Overlay_C__pf1982152804, &UHUD_Overlay_C__pf1982152804::StaticClass, TEXT("/Game/HUD/Widgets/HUD_Overlay"), TEXT("HUD_Overlay_C"), true, TEXT("/Game/HUD/Widgets/HUD_Overlay"), TEXT("/Game/HUD/Widgets/HUD_Overlay.HUD_Overlay_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUD_Overlay_C__pf1982152804);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
