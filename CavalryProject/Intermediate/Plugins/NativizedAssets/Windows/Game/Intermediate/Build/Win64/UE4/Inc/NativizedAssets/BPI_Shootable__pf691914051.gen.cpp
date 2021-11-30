// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_Shootable__pf691914051.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_Shootable__pf691914051() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_Shootable_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_Shootable_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	void IBPI_Shootable_C::bpf__Shot__pf()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Shot__pf instead.");
	}
	void UBPI_Shootable_C::StaticRegisterNativesUBPI_Shootable_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_Shootable_C_bpf__Shot__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_Shootable_C_bpf__Shot__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_Shootable__pf691914051.h" },
		{ "OverrideNativeName", "Shot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_Shootable_C_bpf__Shot__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_Shootable_C, nullptr, "Shot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_Shootable_C_bpf__Shot__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_Shootable_C_bpf__Shot__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_Shootable_C_bpf__Shot__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_Shootable_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Shot" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_Shootable_C_bpf__Shot__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_Shootable_C_NoRegister()
	{
		return UBPI_Shootable_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_Shootable_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_Shootable_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_Shootable_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_Shootable_C_bpf__Shot__pf, "Shot" }, // 628674600
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_Shootable_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_Shootable__pf691914051.h" },
		{ "OverrideNativeName", "BPI_Shootable_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Interfaces/BPI_Shootable.BPI_Shootable_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_Shootable_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_Shootable_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_Shootable_C_Statics::ClassParams = {
		&UBPI_Shootable_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_Shootable_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_Shootable_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_Shootable_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Interfaces/BPI_Shootable"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_Shootable_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_Shootable_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_Shootable_C, TEXT("BPI_Shootable_C"), 2325746197);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_Shootable_C>()
	{
		return UBPI_Shootable_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_Shootable_C(Z_Construct_UClass_UBPI_Shootable_C, &UBPI_Shootable_C::StaticClass, TEXT("/Game/Blueprints/Interfaces/BPI_Shootable"), TEXT("BPI_Shootable_C"), true, TEXT("/Game/Blueprints/Interfaces/BPI_Shootable"), TEXT("/Game/Blueprints/Interfaces/BPI_Shootable.BPI_Shootable_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_Shootable_C);
	static FName NAME_UBPI_Shootable_C_bpf__Shot__pf = FName(TEXT("Shot"));
	void IBPI_Shootable_C::Execute_bpf__Shot__pf(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_Shootable_C::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBPI_Shootable_C_bpf__Shot__pf);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
