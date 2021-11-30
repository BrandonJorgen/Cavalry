// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_MissionBrief_Actor__pf3256655095.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_MissionBrief_Actor__pf3256655095() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_MissionBrief_Actor_C__pf3256655095::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_MissionBrief_Actor_C__pf3256655095::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ABP_MissionBrief_Actor_C__pf3256655095::StaticRegisterNativesABP_MissionBrief_Actor_C__pf3256655095()
	{
		UClass* Class = ABP_MissionBrief_Actor_C__pf3256655095::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &ABP_MissionBrief_Actor_C__pf3256655095::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_MissionBrief_Actor__pf3256655095.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_NoRegister()
	{
		return ABP_MissionBrief_Actor_C__pf3256655095::StaticClass();
	}
	struct Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Start_Button_Loc__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Start_Button_Loc__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StartButton_Widget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StartButton_Widget__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Menu_Origin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Menu_Origin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_MissionBrief_Actor_C__pf3256655095_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1575540547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_MissionBrief_Actor__pf3256655095.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_MissionBrief_Actor__pf3256655095.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_MissionBrief_Actor_C" },
		{ "ReplaceConverted", "/Game/HUD/Main_Menu/BP_MissionBrief_Actor.BP_MissionBrief_Actor_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Start_Button_Loc__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MissionBrief_Actor__pf3256655095.h" },
		{ "OverrideNativeName", "Start_Button_Loc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Start_Button_Loc__pf = { "Start_Button_Loc", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MissionBrief_Actor_C__pf3256655095, bpv__Start_Button_Loc__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Start_Button_Loc__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Start_Button_Loc__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__StartButton_Widget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MissionBrief_Actor__pf3256655095.h" },
		{ "OverrideNativeName", "StartButton_Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__StartButton_Widget__pf = { "StartButton_Widget", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MissionBrief_Actor_C__pf3256655095, bpv__StartButton_Widget__pf), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__StartButton_Widget__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__StartButton_Widget__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Menu_Origin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MissionBrief_Actor__pf3256655095.h" },
		{ "OverrideNativeName", "Menu_Origin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Menu_Origin__pf = { "Menu_Origin", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MissionBrief_Actor_C__pf3256655095, bpv__Menu_Origin__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Menu_Origin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Menu_Origin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MissionBrief_Actor__pf3256655095.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MissionBrief_Actor_C__pf3256655095, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Start_Button_Loc__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__StartButton_Widget__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__Menu_Origin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::NewProp_bpv__DefaultSceneRoot__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_MissionBrief_Actor_C__pf3256655095>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::ClassParams = {
		&ABP_MissionBrief_Actor_C__pf3256655095::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/BP_MissionBrief_Actor"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_MissionBrief_Actor_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_MissionBrief_Actor_C__pf3256655095, TEXT("BP_MissionBrief_Actor_C"), 1889956547);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_MissionBrief_Actor_C__pf3256655095>()
	{
		return ABP_MissionBrief_Actor_C__pf3256655095::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_MissionBrief_Actor_C__pf3256655095(Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095, &ABP_MissionBrief_Actor_C__pf3256655095::StaticClass, TEXT("/Game/HUD/Main_Menu/BP_MissionBrief_Actor"), TEXT("BP_MissionBrief_Actor_C"), true, TEXT("/Game/HUD/Main_Menu/BP_MissionBrief_Actor"), TEXT("/Game/HUD/Main_Menu/BP_MissionBrief_Actor.BP_MissionBrief_Actor_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_MissionBrief_Actor_C__pf3256655095);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
