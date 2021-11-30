// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_BulletBase__pf1418999182.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_BulletBase__pf1418999182() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_BulletBase_C__pf1418999182();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_BulletBase_C__pf1418999182::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_BulletBase_C__pf1418999182::execbpf__ExecuteUbergraph_BP_BulletBase__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_BP_BulletBase__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_BulletBase_C__pf1418999182::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ABP_BulletBase_C__pf1418999182::StaticRegisterNativesABP_BulletBase_C__pf1418999182()
	{
		UClass* Class = ABP_BulletBase_C__pf1418999182::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_BP_BulletBase_0", &ABP_BulletBase_C__pf1418999182::execbpf__ExecuteUbergraph_BP_BulletBase__pf_0 },
			{ "ReceiveBeginPlay", &ABP_BulletBase_C__pf1418999182::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics
	{
		struct BP_BulletBase_C__pf1418999182_eventbpf__ExecuteUbergraph_BP_BulletBase__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_BulletBase_C__pf1418999182_eventbpf__ExecuteUbergraph_BP_BulletBase__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_BulletBase__pf1418999182.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_BP_BulletBase_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_BulletBase_C__pf1418999182, nullptr, "ExecuteUbergraph_BP_BulletBase_0", nullptr, nullptr, sizeof(BP_BulletBase_C__pf1418999182_eventbpf__ExecuteUbergraph_BP_BulletBase__pf_0_Parms), Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_ABP_BulletBase_C__pf1418999182();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_BP_BulletBase_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_BulletBase__pf1418999182.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_BulletBase_C__pf1418999182, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_BulletBase_C__pf1418999182();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_NoRegister()
	{
		return ABP_BulletBase_C__pf1418999182::StaticClass();
	}
	struct Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Bullet_SM__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Bullet_SM__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProjectileMovement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProjectileMovement__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ExecuteUbergraph_BP_BulletBase__pf_0, "ExecuteUbergraph_BP_BulletBase_0" }, // 1896762626
		{ &Z_Construct_UFunction_ABP_BulletBase_C__pf1418999182_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 442055732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_BulletBase__pf1418999182.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_BulletBase__pf1418999182.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_BulletBase_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Weapons/BP_BulletBase.BP_BulletBase_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Arrow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BulletBase__pf1418999182.h" },
		{ "OverrideNativeName", "Arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Arrow__pf = { "Arrow", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BulletBase_C__pf1418999182, bpv__Arrow__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Arrow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Arrow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Bullet_SM__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BulletBase__pf1418999182.h" },
		{ "OverrideNativeName", "Bullet_SM" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Bullet_SM__pf = { "Bullet_SM", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BulletBase_C__pf1418999182, bpv__Bullet_SM__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Bullet_SM__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Bullet_SM__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_BulletBase__pf1418999182.h" },
		{ "OverrideNativeName", "ProjectileMovement" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__ProjectileMovement__pf = { "ProjectileMovement", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_BulletBase_C__pf1418999182, bpv__ProjectileMovement__pf), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__ProjectileMovement__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Arrow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__Bullet_SM__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::NewProp_bpv__ProjectileMovement__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_BulletBase_C__pf1418999182>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::ClassParams = {
		&ABP_BulletBase_C__pf1418999182::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_BulletBase_C__pf1418999182()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Weapons/BP_BulletBase"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_BulletBase_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_BulletBase_C__pf1418999182_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_BulletBase_C__pf1418999182, TEXT("BP_BulletBase_C"), 3815355516);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_BulletBase_C__pf1418999182>()
	{
		return ABP_BulletBase_C__pf1418999182::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_BulletBase_C__pf1418999182(Z_Construct_UClass_ABP_BulletBase_C__pf1418999182, &ABP_BulletBase_C__pf1418999182::StaticClass, TEXT("/Game/Blueprints/Weapons/BP_BulletBase"), TEXT("BP_BulletBase_C"), true, TEXT("/Game/Blueprints/Weapons/BP_BulletBase"), TEXT("/Game/Blueprints/Weapons/BP_BulletBase.BP_BulletBase_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_BulletBase_C__pf1418999182);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
