// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BPI_DamageDirection__pf760233656.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_DamageDirection__pf760233656() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_DamageDirection_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_DamageDirection_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void IBPI_DamageDirection_C::bpf__Damage_Source__pf(FVector bpp__Source__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Damage_Source__pf instead.");
	}
	void IBPI_DamageDirection_C::bpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Player_Was_Hit__pf instead.");
	}
	void UBPI_DamageDirection_C::StaticRegisterNativesUBPI_DamageDirection_C()
	{
	}
	struct Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Source__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::NewProp_bpp__Source__pf = { "bpp__Source__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BPI_DamageDirection_C_eventbpf__Damage_Source__pf_Parms, bpp__Source__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::NewProp_bpp__Source__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_DamageDirection__pf760233656.h" },
		{ "OverrideNativeName", "Damage_Source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_DamageDirection_C, nullptr, "Damage_Source", nullptr, nullptr, sizeof(BPI_DamageDirection_C_eventbpf__Damage_Source__pf_Parms), Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_DamageDirection_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Damage_Source" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics
	{
		static void NewProp_bpp__CurrentlyHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__CurrentlyHit__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf_SetBit(void* Obj)
	{
		((BPI_DamageDirection_C_eventbpf__Player_Was_Hit__pf_Parms*)Obj)->bpp__CurrentlyHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf = { "bpp__CurrentlyHit__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BPI_DamageDirection_C_eventbpf__Player_Was_Hit__pf_Parms), &Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BPI_DamageDirection__pf760233656.h" },
		{ "OverrideNativeName", "Player_Was_Hit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_DamageDirection_C, nullptr, "Player_Was_Hit", nullptr, nullptr, sizeof(BPI_DamageDirection_C_eventbpf__Player_Was_Hit__pf_Parms), Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBPI_DamageDirection_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Player_Was_Hit" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_DamageDirection_C_NoRegister()
	{
		return UBPI_DamageDirection_C::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_DamageDirection_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_DamageDirection_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_DamageDirection_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Damage_Source__pf, "Damage_Source" }, // 783984584
		{ &Z_Construct_UFunction_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf, "Player_Was_Hit" }, // 3217126755
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_DamageDirection_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BPI_DamageDirection__pf760233656.h" },
		{ "OverrideNativeName", "BPI_DamageDirection_C" },
		{ "ReplaceConverted", "/Game/HUD/Widgets/Damage_Display/BPI_DamageDirection.BPI_DamageDirection_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_DamageDirection_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_DamageDirection_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_DamageDirection_C_Statics::ClassParams = {
		&UBPI_DamageDirection_C::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBPI_DamageDirection_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_DamageDirection_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_DamageDirection_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Widgets/Damage_Display/BPI_DamageDirection"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BPI_DamageDirection_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_DamageDirection_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBPI_DamageDirection_C, TEXT("BPI_DamageDirection_C"), 3358644667);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBPI_DamageDirection_C>()
	{
		return UBPI_DamageDirection_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_DamageDirection_C(Z_Construct_UClass_UBPI_DamageDirection_C, &UBPI_DamageDirection_C::StaticClass, TEXT("/Game/HUD/Widgets/Damage_Display/BPI_DamageDirection"), TEXT("BPI_DamageDirection_C"), true, TEXT("/Game/HUD/Widgets/Damage_Display/BPI_DamageDirection"), TEXT("/Game/HUD/Widgets/Damage_Display/BPI_DamageDirection.BPI_DamageDirection_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_DamageDirection_C);
	static FName NAME_UBPI_DamageDirection_C_bpf__Damage_Source__pf = FName(TEXT("Damage_Source"));
	void IBPI_DamageDirection_C::Execute_bpf__Damage_Source__pf(UObject* O, FVector bpp__Source__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_DamageDirection_C::StaticClass()));
		BPI_DamageDirection_C_eventbpf__Damage_Source__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_DamageDirection_C_bpf__Damage_Source__pf);
		if (Func)
		{
			Parms.bpp__Source__pf=bpp__Source__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf = FName(TEXT("Player_Was_Hit"));
	void IBPI_DamageDirection_C::Execute_bpf__Player_Was_Hit__pf(UObject* O, bool bpp__CurrentlyHit__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_DamageDirection_C::StaticClass()));
		BPI_DamageDirection_C_eventbpf__Player_Was_Hit__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_DamageDirection_C_bpf__Player_Was_Hit__pf);
		if (Func)
		{
			Parms.bpp__CurrentlyHit__pf=bpp__CurrentlyHit__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
