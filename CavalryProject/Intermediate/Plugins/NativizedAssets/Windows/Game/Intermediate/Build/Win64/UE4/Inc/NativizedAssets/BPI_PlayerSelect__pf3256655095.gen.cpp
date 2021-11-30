// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_PlayerSelect__pf3256655095.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_PlayerSelect__pf3256655095() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_PlayerSelect_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_PlayerSelect_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void IBPI_PlayerSelect_C::bpf__SelectxPlayer__pfT(UClass* bpp__PlayerInput__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__SelectxPlayer__pfT instead.");
	}
	void UBPI_PlayerSelect_C::StaticRegisterNativesUBPI_PlayerSelect_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__PlayerInput__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::NewProp_bpp__PlayerInput__pf = { "bpp__PlayerInput__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_PlayerSelect_C_eventbpf__SelectxPlayer__pfT_Parms, bpp__PlayerInput__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::NewProp_bpp__PlayerInput__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_PlayerSelect__pf3256655095.h" },
		{ "OverrideNativeName", "Select Player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_PlayerSelect_C, nullptr, "Select Player", nullptr, nullptr, sizeof(BPI_PlayerSelect_C_eventbpf__SelectxPlayer__pfT_Parms), Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_PlayerSelect_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Select Player" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_PlayerSelect_C_NoRegister()
	{
		return UBPI_PlayerSelect_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_PlayerSelect_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_PlayerSelect_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_PlayerSelect_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT, "Select Player" }, // 4037608587
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_PlayerSelect_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_PlayerSelect__pf3256655095.h" },
		{ "OverrideNativeName", "BPI_PlayerSelect_C" },
		{ "ReplaceConverted", "/Game/HUD/Main_Menu/BPI_PlayerSelect.BPI_PlayerSelect_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_PlayerSelect_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_PlayerSelect_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_PlayerSelect_C_Statics::ClassParams = {
		&UBPI_PlayerSelect_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_PlayerSelect_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_PlayerSelect_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_PlayerSelect_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/BPI_PlayerSelect"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_PlayerSelect_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_PlayerSelect_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_PlayerSelect_C, TEXT("BPI_PlayerSelect_C"), 3535585764);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_PlayerSelect_C>()
	{
		return UBPI_PlayerSelect_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_PlayerSelect_C(Z_Construct_UClass_UBPI_PlayerSelect_C, &UBPI_PlayerSelect_C::StaticClass, TEXT("/Game/HUD/Main_Menu/BPI_PlayerSelect"), TEXT("BPI_PlayerSelect_C"), true, TEXT("/Game/HUD/Main_Menu/BPI_PlayerSelect"), TEXT("/Game/HUD/Main_Menu/BPI_PlayerSelect.BPI_PlayerSelect_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_PlayerSelect_C);
	static FName NAME_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT = FName(TEXT("Select Player"));
	void IBPI_PlayerSelect_C::Execute_bpf__SelectxPlayer__pfT(UObject* O, UClass* bpp__PlayerInput__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_PlayerSelect_C::StaticClass()));
		BPI_PlayerSelect_C_eventbpf__SelectxPlayer__pfT_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_PlayerSelect_C_bpf__SelectxPlayer__pfT);
		if (Func)
		{
			Parms.bpp__PlayerInput__pf=bpp__PlayerInput__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
