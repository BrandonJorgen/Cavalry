// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_GearCommunication__pf691914051.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_GearCommunication__pf691914051() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_GearCommunication_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_GearCommunication_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	void IBPI_GearCommunication_C::bpf__CheckForTeleport__pf()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__CheckForTeleport__pf instead.");
	}
	void UBPI_GearCommunication_C::StaticRegisterNativesUBPI_GearCommunication_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_GearCommunication__pf691914051.h" },
		{ "OverrideNativeName", "CheckForTeleport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_GearCommunication_C, nullptr, "CheckForTeleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_GearCommunication_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CheckForTeleport" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_GearCommunication_C_NoRegister()
	{
		return UBPI_GearCommunication_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_GearCommunication_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_GearCommunication_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_GearCommunication_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf, "CheckForTeleport" }, // 2598028862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_GearCommunication_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_GearCommunication__pf691914051.h" },
		{ "OverrideNativeName", "BPI_GearCommunication_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Interfaces/BPI_GearCommunication.BPI_GearCommunication_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_GearCommunication_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_GearCommunication_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_GearCommunication_C_Statics::ClassParams = {
		&UBPI_GearCommunication_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_GearCommunication_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_GearCommunication_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_GearCommunication_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Interfaces/BPI_GearCommunication"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_GearCommunication_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_GearCommunication_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_GearCommunication_C, TEXT("BPI_GearCommunication_C"), 2243769188);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_GearCommunication_C>()
	{
		return UBPI_GearCommunication_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_GearCommunication_C(Z_Construct_UClass_UBPI_GearCommunication_C, &UBPI_GearCommunication_C::StaticClass, TEXT("/Game/Blueprints/Interfaces/BPI_GearCommunication"), TEXT("BPI_GearCommunication_C"), true, TEXT("/Game/Blueprints/Interfaces/BPI_GearCommunication"), TEXT("/Game/Blueprints/Interfaces/BPI_GearCommunication.BPI_GearCommunication_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_GearCommunication_C);
	static FName NAME_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf = FName(TEXT("CheckForTeleport"));
	void IBPI_GearCommunication_C::Execute_bpf__CheckForTeleport__pf(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_GearCommunication_C::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBPI_GearCommunication_C_bpf__CheckForTeleport__pf);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
