// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_GrabbableObj__pf691914051.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_GrabbableObj__pf691914051() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_GrabbableObj_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_GrabbableObj_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
// End Cross Module References
	void IBPI_GrabbableObj_C::bpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Grab__pf instead.");
	}
	void IBPI_GrabbableObj_C::bpf__Release__pf(EControllerHand bpp__NewParam__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Release__pf instead.");
	}
	void UBPI_GrabbableObj_C::StaticRegisterNativesUBPI_GrabbableObj_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpp__HandSocket__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__AttachToMe__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__AttachToMe__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Actor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::NewProp_bpp__HandSocket__pf = { "bpp__HandSocket__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_GrabbableObj_C_eventbpf__Grab__pf_Parms, bpp__HandSocket__pf), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf = { "bpp__AttachToMe__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_GrabbableObj_C_eventbpf__Grab__pf_Parms, bpp__AttachToMe__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::NewProp_bpp__Actor__pf = { "bpp__Actor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_GrabbableObj_C_eventbpf__Grab__pf_Parms, bpp__Actor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::NewProp_bpp__HandSocket__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::NewProp_bpp__Actor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_GrabbableObj__pf691914051.h" },
		{ "OverrideNativeName", "Grab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_GrabbableObj_C, nullptr, "Grab", nullptr, nullptr, sizeof(BPI_GrabbableObj_C_eventbpf__Grab__pf_Parms), Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_GrabbableObj_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Grab" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__NewParam__pf_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpp__NewParam__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::NewProp_bpp__NewParam__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::NewProp_bpp__NewParam__pf = { "bpp__NewParam__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_GrabbableObj_C_eventbpf__Release__pf_Parms, bpp__NewParam__pf), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::NewProp_bpp__NewParam__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::NewProp_bpp__NewParam__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_GrabbableObj__pf691914051.h" },
		{ "OverrideNativeName", "Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_GrabbableObj_C, nullptr, "Release", nullptr, nullptr, sizeof(BPI_GrabbableObj_C_eventbpf__Release__pf_Parms), Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_GrabbableObj_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Release" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_GrabbableObj_C_NoRegister()
	{
		return UBPI_GrabbableObj_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_GrabbableObj_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_GrabbableObj_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_GrabbableObj_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Grab__pf, "Grab" }, // 1114400726
		{ &Z_Construct_UFunction_UBPI_GrabbableObj_C_bpf__Release__pf, "Release" }, // 2492930435
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_GrabbableObj_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_GrabbableObj__pf691914051.h" },
		{ "OverrideNativeName", "BPI_GrabbableObj_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Interfaces/BPI_GrabbableObj.BPI_GrabbableObj_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_GrabbableObj_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_GrabbableObj_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_GrabbableObj_C_Statics::ClassParams = {
		&UBPI_GrabbableObj_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_GrabbableObj_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_GrabbableObj_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_GrabbableObj_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Interfaces/BPI_GrabbableObj"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_GrabbableObj_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_GrabbableObj_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_GrabbableObj_C, TEXT("BPI_GrabbableObj_C"), 897342288);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_GrabbableObj_C>()
	{
		return UBPI_GrabbableObj_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_GrabbableObj_C(Z_Construct_UClass_UBPI_GrabbableObj_C, &UBPI_GrabbableObj_C::StaticClass, TEXT("/Game/Blueprints/Interfaces/BPI_GrabbableObj"), TEXT("BPI_GrabbableObj_C"), true, TEXT("/Game/Blueprints/Interfaces/BPI_GrabbableObj"), TEXT("/Game/Blueprints/Interfaces/BPI_GrabbableObj.BPI_GrabbableObj_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_GrabbableObj_C);
	static FName NAME_UBPI_GrabbableObj_C_bpf__Grab__pf = FName(TEXT("Grab"));
	void IBPI_GrabbableObj_C::Execute_bpf__Grab__pf(UObject* O, FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_GrabbableObj_C::StaticClass()));
		BPI_GrabbableObj_C_eventbpf__Grab__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_GrabbableObj_C_bpf__Grab__pf);
		if (Func)
		{
			Parms.bpp__HandSocket__pf=bpp__HandSocket__pf;
			Parms.bpp__AttachToMe__pf=bpp__AttachToMe__pf;
			Parms.bpp__Actor__pf=bpp__Actor__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UBPI_GrabbableObj_C_bpf__Release__pf = FName(TEXT("Release"));
	void IBPI_GrabbableObj_C::Execute_bpf__Release__pf(UObject* O, EControllerHand bpp__NewParam__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_GrabbableObj_C::StaticClass()));
		BPI_GrabbableObj_C_eventbpf__Release__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_GrabbableObj_C_bpf__Release__pf);
		if (Func)
		{
			Parms.bpp__NewParam__pf=bpp__NewParam__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
