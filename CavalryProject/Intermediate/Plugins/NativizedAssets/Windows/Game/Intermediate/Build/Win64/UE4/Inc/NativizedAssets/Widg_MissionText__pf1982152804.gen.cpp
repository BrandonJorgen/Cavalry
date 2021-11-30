// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Widg_MissionText__pf1982152804.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidg_MissionText__pf1982152804() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UWidg_MissionText_C__pf1982152804();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidg_MissionText_C__pf1982152804::execbpf__Get_TextBlock_MissionBrief_Text_0__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->bpf__Get_TextBlock_MissionBrief_Text_0__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidg_MissionText_C__pf1982152804::execbpf__Get_TextBlock_MissionTitle_Text_0__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->bpf__Get_TextBlock_MissionTitle_Text_0__pf();
		P_NATIVE_END;
	}
	void UWidg_MissionText_C__pf1982152804::StaticRegisterNativesUWidg_MissionText_C__pf1982152804()
	{
		UClass* Class = UWidg_MissionText_C__pf1982152804::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get_TextBlock_MissionBrief_Text_0", &UWidg_MissionText_C__pf1982152804::execbpf__Get_TextBlock_MissionBrief_Text_0__pf },
			{ "Get_TextBlock_MissionTitle_Text_0", &UWidg_MissionText_C__pf1982152804::execbpf__Get_TextBlock_MissionTitle_Text_0__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics
	{
		struct Widg_MissionText_C__pf1982152804_eventbpf__Get_TextBlock_MissionBrief_Text_0__pf_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Widg_MissionText_C__pf1982152804_eventbpf__Get_TextBlock_MissionBrief_Text_0__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Widg_MissionText__pf1982152804.h" },
		{ "OverrideNativeName", "Get_TextBlock_MissionBrief_Text_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidg_MissionText_C__pf1982152804, nullptr, "Get_TextBlock_MissionBrief_Text_0", nullptr, nullptr, sizeof(Widg_MissionText_C__pf1982152804_eventbpf__Get_TextBlock_MissionBrief_Text_0__pf_Parms), Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_UWidg_MissionText_C__pf1982152804();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Get_TextBlock_MissionBrief_Text_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics
	{
		struct Widg_MissionText_C__pf1982152804_eventbpf__Get_TextBlock_MissionTitle_Text_0__pf_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Widg_MissionText_C__pf1982152804_eventbpf__Get_TextBlock_MissionTitle_Text_0__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Widg_MissionText__pf1982152804.h" },
		{ "OverrideNativeName", "Get_TextBlock_MissionTitle_Text_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidg_MissionText_C__pf1982152804, nullptr, "Get_TextBlock_MissionTitle_Text_0", nullptr, nullptr, sizeof(Widg_MissionText_C__pf1982152804_eventbpf__Get_TextBlock_MissionTitle_Text_0__pf_Parms), Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_UWidg_MissionText_C__pf1982152804();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Get_TextBlock_MissionTitle_Text_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_NoRegister()
	{
		return UWidg_MissionText_C__pf1982152804::StaticClass();
	}
	struct Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_MissionBrief__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_MissionBrief__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_MissionTitle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_MissionTitle__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Title__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Title__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MissionDetails__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__MissionDetails__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionBrief_Text_0__pf, "Get_TextBlock_MissionBrief_Text_0" }, // 1276648459
		{ &Z_Construct_UFunction_UWidg_MissionText_C__pf1982152804_bpf__Get_TextBlock_MissionTitle_Text_0__pf, "Get_TextBlock_MissionTitle_Text_0" }, // 2589589134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widg_MissionText__pf1982152804.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widg_MissionText__pf1982152804.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Widg_MissionText_C" },
		{ "ReplaceConverted", "/Game/HUD/Widgets/Widg_MissionText.Widg_MissionText_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionBrief__pf_MetaData[] = {
		{ "Category", "Widg_MissionText" },
		{ "DisplayName", "TextBlock_MissionBrief" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widg_MissionText__pf1982152804.h" },
		{ "OverrideNativeName", "TextBlock_MissionBrief" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionBrief__pf = { "TextBlock_MissionBrief", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidg_MissionText_C__pf1982152804, bpv__TextBlock_MissionBrief__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionBrief__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionBrief__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionTitle__pf_MetaData[] = {
		{ "Category", "Widg_MissionText" },
		{ "DisplayName", "TextBlock_MissionTitle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widg_MissionText__pf1982152804.h" },
		{ "OverrideNativeName", "TextBlock_MissionTitle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionTitle__pf = { "TextBlock_MissionTitle", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidg_MissionText_C__pf1982152804, bpv__TextBlock_MissionTitle__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionTitle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionTitle__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__Title__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Title" },
		{ "ModuleRelativePath", "Public/Widg_MissionText__pf1982152804.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Title" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__Title__pf = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidg_MissionText_C__pf1982152804, bpv__Title__pf), METADATA_PARAMS(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__Title__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__Title__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__MissionDetails__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Mission Details" },
		{ "ModuleRelativePath", "Public/Widg_MissionText__pf1982152804.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MissionDetails" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__MissionDetails__pf = { "MissionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidg_MissionText_C__pf1982152804, bpv__MissionDetails__pf), METADATA_PARAMS(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__MissionDetails__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__MissionDetails__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionBrief__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__TextBlock_MissionTitle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__Title__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::NewProp_bpv__MissionDetails__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidg_MissionText_C__pf1982152804>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::ClassParams = {
		&UWidg_MissionText_C__pf1982152804::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidg_MissionText_C__pf1982152804()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Widgets/Widg_MissionText"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Widg_MissionText_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UWidg_MissionText_C__pf1982152804, TEXT("Widg_MissionText_C"), 2067725453);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UWidg_MissionText_C__pf1982152804>()
	{
		return UWidg_MissionText_C__pf1982152804::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidg_MissionText_C__pf1982152804(Z_Construct_UClass_UWidg_MissionText_C__pf1982152804, &UWidg_MissionText_C__pf1982152804::StaticClass, TEXT("/Game/HUD/Widgets/Widg_MissionText"), TEXT("Widg_MissionText_C"), true, TEXT("/Game/HUD/Widgets/Widg_MissionText"), TEXT("/Game/HUD/Widgets/Widg_MissionText.Widg_MissionText_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidg_MissionText_C__pf1982152804);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
