// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_ToggleObjective__pf2435026734.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_ToggleObjective__pf2435026734() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_ToggleObjective_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_ToggleObjective_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	void IBPI_ToggleObjective_C::bpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__ToggleObjetiveBool__pf instead.");
	}
	void UBPI_ToggleObjective_C::StaticRegisterNativesUBPI_ToggleObjective_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics
	{
		static void NewProp_bpp__Objectivex__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Objectivex__pfzy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::NewProp_bpp__Objectivex__pfzy_SetBit(void* Obj)
	{
		((BPI_ToggleObjective_C_eventbpf__ToggleObjetiveBool__pf_Parms*)Obj)->bpp__Objectivex__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::NewProp_bpp__Objectivex__pfzy = { "bpp__Objectivex__pfzy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BPI_ToggleObjective_C_eventbpf__ToggleObjetiveBool__pf_Parms), &Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::NewProp_bpp__Objectivex__pfzy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::NewProp_bpp__Objectivex__pfzy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_ToggleObjective__pf2435026734.h" },
		{ "OverrideNativeName", "ToggleObjetiveBool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_ToggleObjective_C, nullptr, "ToggleObjetiveBool", nullptr, nullptr, sizeof(BPI_ToggleObjective_C_eventbpf__ToggleObjetiveBool__pf_Parms), Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_ToggleObjective_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ToggleObjetiveBool" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_ToggleObjective_C_NoRegister()
	{
		return UBPI_ToggleObjective_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_ToggleObjective_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_ToggleObjective_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_ToggleObjective_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf, "ToggleObjetiveBool" }, // 686721051
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_ToggleObjective_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_ToggleObjective__pf2435026734.h" },
		{ "OverrideNativeName", "BPI_ToggleObjective_C" },
		{ "ReplaceConverted", "/Game/HUD/Widgets/Objective_Display/BPI_ToggleObjective.BPI_ToggleObjective_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_ToggleObjective_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_ToggleObjective_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_ToggleObjective_C_Statics::ClassParams = {
		&UBPI_ToggleObjective_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_ToggleObjective_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_ToggleObjective_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_ToggleObjective_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Widgets/Objective_Display/BPI_ToggleObjective"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_ToggleObjective_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_ToggleObjective_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_ToggleObjective_C, TEXT("BPI_ToggleObjective_C"), 1258303135);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_ToggleObjective_C>()
	{
		return UBPI_ToggleObjective_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_ToggleObjective_C(Z_Construct_UClass_UBPI_ToggleObjective_C, &UBPI_ToggleObjective_C::StaticClass, TEXT("/Game/HUD/Widgets/Objective_Display/BPI_ToggleObjective"), TEXT("BPI_ToggleObjective_C"), true, TEXT("/Game/HUD/Widgets/Objective_Display/BPI_ToggleObjective"), TEXT("/Game/HUD/Widgets/Objective_Display/BPI_ToggleObjective.BPI_ToggleObjective_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_ToggleObjective_C);
	static FName NAME_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf = FName(TEXT("ToggleObjetiveBool"));
	void IBPI_ToggleObjective_C::Execute_bpf__ToggleObjetiveBool__pf(UObject* O, bool bpp__Objectivex__pfzy)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_ToggleObjective_C::StaticClass()));
		BPI_ToggleObjective_C_eventbpf__ToggleObjetiveBool__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_ToggleObjective_C_bpf__ToggleObjetiveBool__pf);
		if (Func)
		{
			Parms.bpp__Objectivex__pfzy=bpp__Objectivex__pfzy;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
