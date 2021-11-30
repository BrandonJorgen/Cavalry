// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_TakeDamage__pf691914051.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_TakeDamage__pf691914051() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_TakeDamage_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_TakeDamage_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void IBPI_TakeDamage_C::bpf__TakeDamage__pf(int32 bpp__DamageAmount__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__TakeDamage__pf instead.");
	}
	void IBPI_TakeDamage_C::bpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__TakeDamageActor__pf instead.");
	}
	void UBPI_TakeDamage_C::StaticRegisterNativesUBPI_TakeDamage_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__DamageAmount__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::NewProp_bpp__DamageAmount__pf = { "bpp__DamageAmount__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_TakeDamage_C_eventbpf__TakeDamage__pf_Parms, bpp__DamageAmount__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::NewProp_bpp__DamageAmount__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_TakeDamage__pf691914051.h" },
		{ "OverrideNativeName", "TakeDamage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_TakeDamage_C, nullptr, "TakeDamage", nullptr, nullptr, sizeof(BPI_TakeDamage_C_eventbpf__TakeDamage__pf_Parms), Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_TakeDamage_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TakeDamage" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__DamageAmount__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__DamagingActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamageAmount__pf = { "bpp__DamageAmount__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_TakeDamage_C_eventbpf__TakeDamageActor__pf_Parms, bpp__DamageAmount__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamagingActor__pf = { "bpp__DamagingActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_TakeDamage_C_eventbpf__TakeDamageActor__pf_Parms, bpp__DamagingActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamageAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamagingActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_TakeDamage__pf691914051.h" },
		{ "OverrideNativeName", "TakeDamageActor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_TakeDamage_C, nullptr, "TakeDamageActor", nullptr, nullptr, sizeof(BPI_TakeDamage_C_eventbpf__TakeDamageActor__pf_Parms), Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_TakeDamage_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TakeDamageActor" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_TakeDamage_C_NoRegister()
	{
		return UBPI_TakeDamage_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_TakeDamage_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_TakeDamage_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_TakeDamage_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamage__pf, "TakeDamage" }, // 1012112673
		{ &Z_Construct_UFunction_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf, "TakeDamageActor" }, // 2944575909
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_TakeDamage_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_TakeDamage__pf691914051.h" },
		{ "OverrideNativeName", "BPI_TakeDamage_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Interfaces/BPI_TakeDamage.BPI_TakeDamage_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_TakeDamage_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_TakeDamage_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_TakeDamage_C_Statics::ClassParams = {
		&UBPI_TakeDamage_C::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBPI_TakeDamage_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_TakeDamage_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_TakeDamage_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Interfaces/BPI_TakeDamage"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_TakeDamage_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_TakeDamage_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_TakeDamage_C, TEXT("BPI_TakeDamage_C"), 4221440205);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_TakeDamage_C>()
	{
		return UBPI_TakeDamage_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_TakeDamage_C(Z_Construct_UClass_UBPI_TakeDamage_C, &UBPI_TakeDamage_C::StaticClass, TEXT("/Game/Blueprints/Interfaces/BPI_TakeDamage"), TEXT("BPI_TakeDamage_C"), true, TEXT("/Game/Blueprints/Interfaces/BPI_TakeDamage"), TEXT("/Game/Blueprints/Interfaces/BPI_TakeDamage.BPI_TakeDamage_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_TakeDamage_C);
	static FName NAME_UBPI_TakeDamage_C_bpf__TakeDamage__pf = FName(TEXT("TakeDamage"));
	void IBPI_TakeDamage_C::Execute_bpf__TakeDamage__pf(UObject* O, int32 bpp__DamageAmount__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_TakeDamage_C::StaticClass()));
		BPI_TakeDamage_C_eventbpf__TakeDamage__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_TakeDamage_C_bpf__TakeDamage__pf);
		if (Func)
		{
			Parms.bpp__DamageAmount__pf=bpp__DamageAmount__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf = FName(TEXT("TakeDamageActor"));
	void IBPI_TakeDamage_C::Execute_bpf__TakeDamageActor__pf(UObject* O, int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_TakeDamage_C::StaticClass()));
		BPI_TakeDamage_C_eventbpf__TakeDamageActor__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_TakeDamage_C_bpf__TakeDamageActor__pf);
		if (Func)
		{
			Parms.bpp__DamageAmount__pf=bpp__DamageAmount__pf;
			Parms.bpp__DamagingActor__pf=bpp__DamagingActor__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
