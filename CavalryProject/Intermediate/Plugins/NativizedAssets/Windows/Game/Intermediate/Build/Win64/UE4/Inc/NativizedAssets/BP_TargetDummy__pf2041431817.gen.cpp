// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_TargetDummy__pf2041431817.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_TargetDummy__pf2041431817() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_TakeDamage_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_TargetDummy_C__pf2041431817::execbpf__TakeDamage__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__DamageAmount__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TakeDamage__pf(Z_Param_bpp__DamageAmount__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_TargetDummy_C__pf2041431817::execbpf__SpawnTarget__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnTarget__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_TargetDummy_C__pf2041431817::execbpf__TakeDamageActor__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__DamageAmount__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__DamagingActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TakeDamageActor__pf(Z_Param_bpp__DamageAmount__pf,Z_Param_bpp__DamagingActor__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf = FName(TEXT("TakeDamage"));
	void ABP_TargetDummy_C__pf2041431817::eventbpf__TakeDamage__pf(int32 bpp__DamageAmount__pf)
	{
		BP_TargetDummy_C__pf2041431817_eventbpf__TakeDamage__pf_Parms Parms;
		Parms.bpp__DamageAmount__pf=bpp__DamageAmount__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf),&Parms);
	}
	static FName NAME_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf = FName(TEXT("TakeDamageActor"));
	void ABP_TargetDummy_C__pf2041431817::eventbpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf)
	{
		BP_TargetDummy_C__pf2041431817_eventbpf__TakeDamageActor__pf_Parms Parms;
		Parms.bpp__DamageAmount__pf=bpp__DamageAmount__pf;
		Parms.bpp__DamagingActor__pf=bpp__DamagingActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf),&Parms);
	}
	void ABP_TargetDummy_C__pf2041431817::StaticRegisterNativesABP_TargetDummy_C__pf2041431817()
	{
		UClass* Class = ABP_TargetDummy_C__pf2041431817::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnTarget", &ABP_TargetDummy_C__pf2041431817::execbpf__SpawnTarget__pf },
			{ "TakeDamage", &ABP_TargetDummy_C__pf2041431817::execbpf__TakeDamage__pf },
			{ "TakeDamageActor", &ABP_TargetDummy_C__pf2041431817::execbpf__TakeDamageActor__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__SpawnTarget__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__SpawnTarget__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "SpawnTarget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__SpawnTarget__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817, nullptr, "SpawnTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__SpawnTarget__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__SpawnTarget__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__SpawnTarget__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SpawnTarget" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__SpawnTarget__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__DamageAmount__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::NewProp_bpp__DamageAmount__pf = { "bpp__DamageAmount__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_TargetDummy_C__pf2041431817_eventbpf__TakeDamage__pf_Parms, bpp__DamageAmount__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::NewProp_bpp__DamageAmount__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "TakeDamage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817, nullptr, "TakeDamage", nullptr, nullptr, sizeof(BP_TargetDummy_C__pf2041431817_eventbpf__TakeDamage__pf_Parms), Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TakeDamage" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__DamageAmount__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__DamagingActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamageAmount__pf = { "bpp__DamageAmount__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_TargetDummy_C__pf2041431817_eventbpf__TakeDamageActor__pf_Parms, bpp__DamageAmount__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamagingActor__pf = { "bpp__DamagingActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_TargetDummy_C__pf2041431817_eventbpf__TakeDamageActor__pf_Parms, bpp__DamagingActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamageAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamagingActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "TakeDamageActor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817, nullptr, "TakeDamageActor", nullptr, nullptr, sizeof(BP_TargetDummy_C__pf2041431817_eventbpf__TakeDamageActor__pf_Parms), Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TakeDamageActor" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_NoRegister()
	{
		return ABP_TargetDummy_C__pf2041431817::StaticClass();
	}
	struct Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Dummy_SM__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Dummy_SM__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__health__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__health__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__targetAlive__pf_MetaData[];
#endif
		static void NewProp_bpv__targetAlive__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__targetAlive__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf;
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
	UObject* (*const Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__SpawnTarget__pf, "SpawnTarget" }, // 1300791949
		{ &Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamage__pf, "TakeDamage" }, // 399417761
		{ &Z_Construct_UFunction_ABP_TargetDummy_C__pf2041431817_bpf__TakeDamageActor__pf, "TakeDamageActor" }, // 1477132153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_TargetDummy__pf2041431817.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_TargetDummy_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Playground/BP_TargetDummy.BP_TargetDummy_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__Dummy_SM__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "Dummy_SM" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__Dummy_SM__pf = { "Dummy_SM", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TargetDummy_C__pf2041431817, bpv__Dummy_SM__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__Dummy_SM__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__Dummy_SM__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TargetDummy_C__pf2041431817, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__health__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Health" },
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "health" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__health__pf = { "health", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TargetDummy_C__pf2041431817, bpv__health__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__health__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__health__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__targetAlive__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Target Alive" },
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "targetAlive" },
	};
#endif
	void Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__targetAlive__pf_SetBit(void* Obj)
	{
		((ABP_TargetDummy_C__pf2041431817*)Obj)->bpv__targetAlive__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__targetAlive__pf = { "targetAlive", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_TargetDummy_C__pf2041431817), &Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__targetAlive__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__targetAlive__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__targetAlive__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf = { "K2Node_CreateDelegate_OutputDelegate", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TargetDummy_C__pf2041431817, b0l__K2Node_CreateDelegate_OutputDelegate__pf), Z_Construct_UDelegateFunction_Engine_TimerDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TargetDummy_C__pf2041431817, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageAmount_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf = { "K2Node_Event_DamageAmount_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TargetDummy_C__pf2041431817, b0l__K2Node_Event_DamageAmount_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageAmount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf = { "K2Node_Event_DamageAmount", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TargetDummy_C__pf2041431817, b0l__K2Node_Event_DamageAmount__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_TargetDummy__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_Event_DamagingActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf = { "K2Node_Event_DamagingActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_TargetDummy_C__pf2041431817, b0l__K2Node_Event_DamagingActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__Dummy_SM__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__health__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_bpv__targetAlive__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_TakeDamage_C_NoRegister, (int32)VTABLE_OFFSET(ABP_TargetDummy_C__pf2041431817, IBPI_TakeDamage_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_TargetDummy_C__pf2041431817>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::ClassParams = {
		&ABP_TargetDummy_C__pf2041431817::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Playground/BP_TargetDummy"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_TargetDummy_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_TargetDummy_C__pf2041431817, TEXT("BP_TargetDummy_C"), 1422530675);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_TargetDummy_C__pf2041431817>()
	{
		return ABP_TargetDummy_C__pf2041431817::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_TargetDummy_C__pf2041431817(Z_Construct_UClass_ABP_TargetDummy_C__pf2041431817, &ABP_TargetDummy_C__pf2041431817::StaticClass, TEXT("/Game/Blueprints/Playground/BP_TargetDummy"), TEXT("BP_TargetDummy_C"), true, TEXT("/Game/Blueprints/Playground/BP_TargetDummy"), TEXT("/Game/Blueprints/Playground/BP_TargetDummy.BP_TargetDummy_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_TargetDummy_C__pf2041431817);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
