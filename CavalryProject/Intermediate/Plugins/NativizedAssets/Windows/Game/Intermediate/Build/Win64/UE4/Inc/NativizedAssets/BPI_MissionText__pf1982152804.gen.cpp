// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_MissionText__pf1982152804.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_MissionText__pf1982152804() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_MissionText_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_MissionText_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void IBPI_MissionText_C::bpf__UpdateMission__pf(FText const& bpp__ObjectiveDetails__pf__const)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__UpdateMission__pf instead.");
	}
	void IBPI_MissionText_C::bpf__UpdateObjectiveLoc__pf(FVector bpp__NewLocation__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__UpdateObjectiveLoc__pf instead.");
	}
	void UBPI_MissionText_C::StaticRegisterNativesUBPI_MissionText_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__ObjectiveDetails__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpp__ObjectiveDetails__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const = { "bpp__ObjectiveDetails__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_MissionText_C_eventbpf__UpdateMission__pf_Parms, bpp__ObjectiveDetails__pf__const), METADATA_PARAMS(Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_MissionText__pf1982152804.h" },
		{ "OverrideNativeName", "UpdateMission" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_MissionText_C, nullptr, "UpdateMission", nullptr, nullptr, sizeof(BPI_MissionText_C_eventbpf__UpdateMission__pf_Parms), Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_MissionText_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateMission" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__NewLocation__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::NewProp_bpp__NewLocation__pf = { "bpp__NewLocation__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_MissionText_C_eventbpf__UpdateObjectiveLoc__pf_Parms, bpp__NewLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::NewProp_bpp__NewLocation__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_MissionText__pf1982152804.h" },
		{ "OverrideNativeName", "UpdateObjectiveLoc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_MissionText_C, nullptr, "UpdateObjectiveLoc", nullptr, nullptr, sizeof(BPI_MissionText_C_eventbpf__UpdateObjectiveLoc__pf_Parms), Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_MissionText_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateObjectiveLoc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_MissionText_C_NoRegister()
	{
		return UBPI_MissionText_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_MissionText_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_MissionText_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_MissionText_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateMission__pf, "UpdateMission" }, // 293261157
		{ &Z_Construct_UFunction_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf, "UpdateObjectiveLoc" }, // 2394515339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_MissionText_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_MissionText__pf1982152804.h" },
		{ "OverrideNativeName", "BPI_MissionText_C" },
		{ "ReplaceConverted", "/Game/HUD/Widgets/BPI_MissionText.BPI_MissionText_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_MissionText_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_MissionText_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_MissionText_C_Statics::ClassParams = {
		&UBPI_MissionText_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_MissionText_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_MissionText_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_MissionText_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Widgets/BPI_MissionText"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_MissionText_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_MissionText_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_MissionText_C, TEXT("BPI_MissionText_C"), 1085786229);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_MissionText_C>()
	{
		return UBPI_MissionText_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_MissionText_C(Z_Construct_UClass_UBPI_MissionText_C, &UBPI_MissionText_C::StaticClass, TEXT("/Game/HUD/Widgets/BPI_MissionText"), TEXT("BPI_MissionText_C"), true, TEXT("/Game/HUD/Widgets/BPI_MissionText"), TEXT("/Game/HUD/Widgets/BPI_MissionText.BPI_MissionText_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_MissionText_C);
	static FName NAME_UBPI_MissionText_C_bpf__UpdateMission__pf = FName(TEXT("UpdateMission"));
	void IBPI_MissionText_C::Execute_bpf__UpdateMission__pf(UObject* O, FText const& bpp__ObjectiveDetails__pf__const)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_MissionText_C::StaticClass()));
		BPI_MissionText_C_eventbpf__UpdateMission__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_MissionText_C_bpf__UpdateMission__pf);
		if (Func)
		{
			Parms.bpp__ObjectiveDetails__pf__const=bpp__ObjectiveDetails__pf__const;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf = FName(TEXT("UpdateObjectiveLoc"));
	void IBPI_MissionText_C::Execute_bpf__UpdateObjectiveLoc__pf(UObject* O, FVector bpp__NewLocation__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_MissionText_C::StaticClass()));
		BPI_MissionText_C_eventbpf__UpdateObjectiveLoc__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_MissionText_C_bpf__UpdateObjectiveLoc__pf);
		if (Func)
		{
			Parms.bpp__NewLocation__pf=bpp__NewLocation__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
