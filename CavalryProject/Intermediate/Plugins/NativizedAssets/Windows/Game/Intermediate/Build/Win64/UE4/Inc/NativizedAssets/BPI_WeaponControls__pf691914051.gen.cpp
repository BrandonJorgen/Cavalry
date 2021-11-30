// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_WeaponControls__pf691914051.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_WeaponControls__pf691914051() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_WeaponControls_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_WeaponControls_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Hands__pf();
// End Cross Module References
	void IBPI_WeaponControls_C::bpf__ChangeFiremode__pf()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__ChangeFiremode__pf instead.");
	}
	void IBPI_WeaponControls_C::bpf__ReleaseMagazine__pf()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__ReleaseMagazine__pf instead.");
	}
	void IBPI_WeaponControls_C::bpf__Shoot__pf(E__E_Hands__pf bpp__Hand__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Shoot__pf instead.");
	}
	void IBPI_WeaponControls_C::bpf__ShootRelease__pf()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__ShootRelease__pf instead.");
	}
	void UBPI_WeaponControls_C::StaticRegisterNativesUBPI_WeaponControls_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_WeaponControls__pf691914051.h" },
		{ "OverrideNativeName", "ChangeFiremode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_WeaponControls_C, nullptr, "ChangeFiremode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_WeaponControls_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ChangeFiremode" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_WeaponControls__pf691914051.h" },
		{ "OverrideNativeName", "ReleaseMagazine" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_WeaponControls_C, nullptr, "ReleaseMagazine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_WeaponControls_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReleaseMagazine" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__Hand__pf_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpp__Hand__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::NewProp_bpp__Hand__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::NewProp_bpp__Hand__pf = { "bpp__Hand__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_WeaponControls_C_eventbpf__Shoot__pf_Parms, bpp__Hand__pf), Z_Construct_UEnum_NativizedAssets_E__E_Hands__pf, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::NewProp_bpp__Hand__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::NewProp_bpp__Hand__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_WeaponControls__pf691914051.h" },
		{ "OverrideNativeName", "Shoot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_WeaponControls_C, nullptr, "Shoot", nullptr, nullptr, sizeof(BPI_WeaponControls_C_eventbpf__Shoot__pf_Parms), Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_WeaponControls_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Shoot" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ShootRelease__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ShootRelease__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_WeaponControls__pf691914051.h" },
		{ "OverrideNativeName", "ShootRelease" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ShootRelease__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_WeaponControls_C, nullptr, "ShootRelease", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ShootRelease__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ShootRelease__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ShootRelease__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_WeaponControls_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ShootRelease" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ShootRelease__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_WeaponControls_C_NoRegister()
	{
		return UBPI_WeaponControls_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_WeaponControls_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_WeaponControls_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_WeaponControls_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf, "ChangeFiremode" }, // 3080065523
		{ &Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf, "ReleaseMagazine" }, // 3580977964
		{ &Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__Shoot__pf, "Shoot" }, // 2304137080
		{ &Z_Construct_UFunction_UBPI_WeaponControls_C_bpf__ShootRelease__pf, "ShootRelease" }, // 2633940539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_WeaponControls_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_WeaponControls__pf691914051.h" },
		{ "OverrideNativeName", "BPI_WeaponControls_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Interfaces/BPI_WeaponControls.BPI_WeaponControls_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_WeaponControls_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_WeaponControls_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_WeaponControls_C_Statics::ClassParams = {
		&UBPI_WeaponControls_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_WeaponControls_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_WeaponControls_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_WeaponControls_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Interfaces/BPI_WeaponControls"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_WeaponControls_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_WeaponControls_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_WeaponControls_C, TEXT("BPI_WeaponControls_C"), 3671551392);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_WeaponControls_C>()
	{
		return UBPI_WeaponControls_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_WeaponControls_C(Z_Construct_UClass_UBPI_WeaponControls_C, &UBPI_WeaponControls_C::StaticClass, TEXT("/Game/Blueprints/Interfaces/BPI_WeaponControls"), TEXT("BPI_WeaponControls_C"), true, TEXT("/Game/Blueprints/Interfaces/BPI_WeaponControls"), TEXT("/Game/Blueprints/Interfaces/BPI_WeaponControls.BPI_WeaponControls_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_WeaponControls_C);
	static FName NAME_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf = FName(TEXT("ChangeFiremode"));
	void IBPI_WeaponControls_C::Execute_bpf__ChangeFiremode__pf(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBPI_WeaponControls_C_bpf__ChangeFiremode__pf);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf = FName(TEXT("ReleaseMagazine"));
	void IBPI_WeaponControls_C::Execute_bpf__ReleaseMagazine__pf(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBPI_WeaponControls_C_bpf__ReleaseMagazine__pf);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UBPI_WeaponControls_C_bpf__Shoot__pf = FName(TEXT("Shoot"));
	void IBPI_WeaponControls_C::Execute_bpf__Shoot__pf(UObject* O, E__E_Hands__pf bpp__Hand__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()));
		BPI_WeaponControls_C_eventbpf__Shoot__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_WeaponControls_C_bpf__Shoot__pf);
		if (Func)
		{
			Parms.bpp__Hand__pf=bpp__Hand__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UBPI_WeaponControls_C_bpf__ShootRelease__pf = FName(TEXT("ShootRelease"));
	void IBPI_WeaponControls_C::Execute_bpf__ShootRelease__pf(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_WeaponControls_C::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBPI_WeaponControls_C_bpf__ShootRelease__pf);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
