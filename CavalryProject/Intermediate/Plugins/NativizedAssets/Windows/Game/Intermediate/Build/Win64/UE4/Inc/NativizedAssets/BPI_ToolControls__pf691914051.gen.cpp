// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_ToolControls__pf691914051.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_ToolControls__pf691914051() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_ToolControls_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_ToolControls_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	void IBPI_ToolControls_C::bpf__ActivateTool__pf(bool bpp__Active__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__ActivateTool__pf instead.");
	}
	void UBPI_ToolControls_C::StaticRegisterNativesUBPI_ToolControls_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics
	{
		static void NewProp_bpp__Active__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Active__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::NewProp_bpp__Active__pf_SetBit(void* Obj)
	{
		((BPI_ToolControls_C_eventbpf__ActivateTool__pf_Parms*)Obj)->bpp__Active__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::NewProp_bpp__Active__pf = { "bpp__Active__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BPI_ToolControls_C_eventbpf__ActivateTool__pf_Parms), &Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::NewProp_bpp__Active__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::NewProp_bpp__Active__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_ToolControls__pf691914051.h" },
		{ "OverrideNativeName", "ActivateTool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_ToolControls_C, nullptr, "ActivateTool", nullptr, nullptr, sizeof(BPI_ToolControls_C_eventbpf__ActivateTool__pf_Parms), Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_ToolControls_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ActivateTool" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_ToolControls_C_NoRegister()
	{
		return UBPI_ToolControls_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_ToolControls_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_ToolControls_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_ToolControls_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_ToolControls_C_bpf__ActivateTool__pf, "ActivateTool" }, // 1996888068
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_ToolControls_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_ToolControls__pf691914051.h" },
		{ "OverrideNativeName", "BPI_ToolControls_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Interfaces/BPI_ToolControls.BPI_ToolControls_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_ToolControls_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_ToolControls_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_ToolControls_C_Statics::ClassParams = {
		&UBPI_ToolControls_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_ToolControls_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_ToolControls_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_ToolControls_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Interfaces/BPI_ToolControls"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_ToolControls_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_ToolControls_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_ToolControls_C, TEXT("BPI_ToolControls_C"), 498520486);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_ToolControls_C>()
	{
		return UBPI_ToolControls_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_ToolControls_C(Z_Construct_UClass_UBPI_ToolControls_C, &UBPI_ToolControls_C::StaticClass, TEXT("/Game/Blueprints/Interfaces/BPI_ToolControls"), TEXT("BPI_ToolControls_C"), true, TEXT("/Game/Blueprints/Interfaces/BPI_ToolControls"), TEXT("/Game/Blueprints/Interfaces/BPI_ToolControls.BPI_ToolControls_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_ToolControls_C);
	static FName NAME_UBPI_ToolControls_C_bpf__ActivateTool__pf = FName(TEXT("ActivateTool"));
	void IBPI_ToolControls_C::Execute_bpf__ActivateTool__pf(UObject* O, bool bpp__Active__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_ToolControls_C::StaticClass()));
		BPI_ToolControls_C_eventbpf__ActivateTool__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_ToolControls_C_bpf__ActivateTool__pf);
		if (Func)
		{
			Parms.bpp__Active__pf=bpp__Active__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
