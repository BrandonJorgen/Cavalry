// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Shield__pf3911806087.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Shield__pf3911806087() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Shield_C__pf3911806087_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Shield_C__pf3911806087();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_TakeDamage_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Shield_C__pf3911806087::execbpf__CheckHealth__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CheckHealth__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Shield_C__pf3911806087::execbpf__TakeDamage__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__DamageAmount__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TakeDamage__pf(Z_Param_bpp__DamageAmount__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_Shield_C__pf3911806087::execbpf__TakeDamageActor__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__DamageAmount__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__DamagingActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TakeDamageActor__pf(Z_Param_bpp__DamageAmount__pf,Z_Param_bpp__DamagingActor__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf = FName(TEXT("TakeDamage"));
	void ABP_Shield_C__pf3911806087::eventbpf__TakeDamage__pf(int32 bpp__DamageAmount__pf)
	{
		BP_Shield_C__pf3911806087_eventbpf__TakeDamage__pf_Parms Parms;
		Parms.bpp__DamageAmount__pf=bpp__DamageAmount__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf),&Parms);
	}
	static FName NAME_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf = FName(TEXT("TakeDamageActor"));
	void ABP_Shield_C__pf3911806087::eventbpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf)
	{
		BP_Shield_C__pf3911806087_eventbpf__TakeDamageActor__pf_Parms Parms;
		Parms.bpp__DamageAmount__pf=bpp__DamageAmount__pf;
		Parms.bpp__DamagingActor__pf=bpp__DamagingActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf),&Parms);
	}
	void ABP_Shield_C__pf3911806087::StaticRegisterNativesABP_Shield_C__pf3911806087()
	{
		UClass* Class = ABP_Shield_C__pf3911806087::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckHealth", &ABP_Shield_C__pf3911806087::execbpf__CheckHealth__pf },
			{ "TakeDamage", &ABP_Shield_C__pf3911806087::execbpf__TakeDamage__pf },
			{ "TakeDamageActor", &ABP_Shield_C__pf3911806087::execbpf__TakeDamageActor__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__CheckHealth__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__CheckHealth__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Shield__pf3911806087.h" },
		{ "OverrideNativeName", "CheckHealth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__CheckHealth__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Shield_C__pf3911806087, nullptr, "CheckHealth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__CheckHealth__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__CheckHealth__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__CheckHealth__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Shield_C__pf3911806087();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CheckHealth" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__CheckHealth__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__DamageAmount__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::NewProp_bpp__DamageAmount__pf = { "bpp__DamageAmount__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Shield_C__pf3911806087_eventbpf__TakeDamage__pf_Parms, bpp__DamageAmount__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::NewProp_bpp__DamageAmount__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_Shield__pf3911806087.h" },
		{ "OverrideNativeName", "TakeDamage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Shield_C__pf3911806087, nullptr, "TakeDamage", nullptr, nullptr, sizeof(BP_Shield_C__pf3911806087_eventbpf__TakeDamage__pf_Parms), Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Shield_C__pf3911806087();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TakeDamage" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__DamageAmount__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__DamagingActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamageAmount__pf = { "bpp__DamageAmount__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Shield_C__pf3911806087_eventbpf__TakeDamageActor__pf_Parms, bpp__DamageAmount__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamagingActor__pf = { "bpp__DamagingActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Shield_C__pf3911806087_eventbpf__TakeDamageActor__pf_Parms, bpp__DamagingActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamageAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamagingActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_Shield__pf3911806087.h" },
		{ "OverrideNativeName", "TakeDamageActor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Shield_C__pf3911806087, nullptr, "TakeDamageActor", nullptr, nullptr, sizeof(BP_Shield_C__pf3911806087_eventbpf__TakeDamageActor__pf_Parms), Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Shield_C__pf3911806087();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TakeDamageActor" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Shield_C__pf3911806087_NoRegister()
	{
		return ABP_Shield_C__pf3911806087::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SkM_Shield__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SkM_Shield__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__shieldHealth__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__shieldHealth__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_Event_DamageAmount_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_Event_DamageAmount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_DamagingActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__CheckHealth__pf, "CheckHealth" }, // 456900985
		{ &Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamage__pf, "TakeDamage" }, // 4046469474
		{ &Z_Construct_UFunction_ABP_Shield_C__pf3911806087_bpf__TakeDamageActor__pf, "TakeDamageActor" }, // 170341014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_Shield__pf3911806087.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Shield__pf3911806087.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Shield_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Tools/BP_Shield.BP_Shield_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__SkM_Shield__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Shield__pf3911806087.h" },
		{ "OverrideNativeName", "SkM_Shield" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__SkM_Shield__pf = { "SkM_Shield", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Shield_C__pf3911806087, bpv__SkM_Shield__pf), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__SkM_Shield__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__SkM_Shield__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__shieldHealth__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Shield Health" },
		{ "ModuleRelativePath", "Public/BP_Shield__pf3911806087.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "shieldHealth" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__shieldHealth__pf = { "shieldHealth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Shield_C__pf3911806087, bpv__shieldHealth__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__shieldHealth__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__shieldHealth__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Shield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageAmount_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf = { "K2Node_Event_DamageAmount_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Shield_C__pf3911806087, b0l__K2Node_Event_DamageAmount_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Shield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageAmount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf = { "K2Node_Event_DamageAmount", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Shield_C__pf3911806087, b0l__K2Node_Event_DamageAmount__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Shield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_Event_DamagingActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf = { "K2Node_Event_DamagingActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_Shield_C__pf3911806087, b0l__K2Node_Event_DamagingActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__SkM_Shield__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_bpv__shieldHealth__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_TakeDamage_C_NoRegister, (int32)VTABLE_OFFSET(ABP_Shield_C__pf3911806087, IBPI_TakeDamage_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Shield_C__pf3911806087>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::ClassParams = {
		&ABP_Shield_C__pf3911806087::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_Shield_C__pf3911806087()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Tools/BP_Shield"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Shield_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Shield_C__pf3911806087, TEXT("BP_Shield_C"), 2748998757);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_Shield_C__pf3911806087>()
	{
		return ABP_Shield_C__pf3911806087::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Shield_C__pf3911806087(Z_Construct_UClass_ABP_Shield_C__pf3911806087, &ABP_Shield_C__pf3911806087::StaticClass, TEXT("/Game/Blueprints/Tools/BP_Shield"), TEXT("BP_Shield_C"), true, TEXT("/Game/Blueprints/Tools/BP_Shield"), TEXT("/Game/Blueprints/Tools/BP_Shield.BP_Shield_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Shield_C__pf3911806087);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
