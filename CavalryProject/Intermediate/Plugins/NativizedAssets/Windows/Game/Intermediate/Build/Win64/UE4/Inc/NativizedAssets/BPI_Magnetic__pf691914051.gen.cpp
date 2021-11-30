// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_Magnetic__pf691914051.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_Magnetic__pf691914051() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_Magnetic_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_Magnetic_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void IBPI_Magnetic_C::bpf__Magnetize__pf(AActor* bpp__Magnet__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Magnetize__pf instead.");
	}
	void UBPI_Magnetic_C::StaticRegisterNativesUBPI_Magnetic_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Magnet__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::NewProp_bpp__Magnet__pf = { "bpp__Magnet__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_Magnetic_C_eventbpf__Magnetize__pf_Parms, bpp__Magnet__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::NewProp_bpp__Magnet__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_Magnetic__pf691914051.h" },
		{ "OverrideNativeName", "Magnetize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_Magnetic_C, nullptr, "Magnetize", nullptr, nullptr, sizeof(BPI_Magnetic_C_eventbpf__Magnetize__pf_Parms), Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_Magnetic_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Magnetize" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_Magnetic_C_NoRegister()
	{
		return UBPI_Magnetic_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_Magnetic_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_Magnetic_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_Magnetic_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_Magnetic_C_bpf__Magnetize__pf, "Magnetize" }, // 304263456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_Magnetic_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_Magnetic__pf691914051.h" },
		{ "OverrideNativeName", "BPI_Magnetic_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Interfaces/BPI_Magnetic.BPI_Magnetic_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_Magnetic_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_Magnetic_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_Magnetic_C_Statics::ClassParams = {
		&UBPI_Magnetic_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_Magnetic_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_Magnetic_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_Magnetic_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Interfaces/BPI_Magnetic"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_Magnetic_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_Magnetic_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_Magnetic_C, TEXT("BPI_Magnetic_C"), 3662379883);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_Magnetic_C>()
	{
		return UBPI_Magnetic_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_Magnetic_C(Z_Construct_UClass_UBPI_Magnetic_C, &UBPI_Magnetic_C::StaticClass, TEXT("/Game/Blueprints/Interfaces/BPI_Magnetic"), TEXT("BPI_Magnetic_C"), true, TEXT("/Game/Blueprints/Interfaces/BPI_Magnetic"), TEXT("/Game/Blueprints/Interfaces/BPI_Magnetic.BPI_Magnetic_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_Magnetic_C);
	static FName NAME_UBPI_Magnetic_C_bpf__Magnetize__pf = FName(TEXT("Magnetize"));
	void IBPI_Magnetic_C::Execute_bpf__Magnetize__pf(UObject* O, AActor* bpp__Magnet__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_Magnetic_C::StaticClass()));
		BPI_Magnetic_C_eventbpf__Magnetize__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_Magnetic_C_bpf__Magnetize__pf);
		if (Func)
		{
			Parms.bpp__Magnet__pf=bpp__Magnet__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
