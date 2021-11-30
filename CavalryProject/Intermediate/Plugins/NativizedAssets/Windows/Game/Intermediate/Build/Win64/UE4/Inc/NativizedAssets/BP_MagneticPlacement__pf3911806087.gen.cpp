// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_MagneticPlacement__pf3911806087.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_MagneticPlacement__pf3911806087() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__ENUM_ObjectType__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_Magnetic_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_MagneticPlacement_C__pf3911806087::execbpf__Magnetize__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__Magnet__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Magnetize__pf(Z_Param_bpp__Magnet__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf = FName(TEXT("Magnetize"));
	void ABP_MagneticPlacement_C__pf3911806087::eventbpf__Magnetize__pf(AActor* bpp__Magnet__pf)
	{
		BP_MagneticPlacement_C__pf3911806087_eventbpf__Magnetize__pf_Parms Parms;
		Parms.bpp__Magnet__pf=bpp__Magnet__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf),&Parms);
	}
	void ABP_MagneticPlacement_C__pf3911806087::StaticRegisterNativesABP_MagneticPlacement_C__pf3911806087()
	{
		UClass* Class = ABP_MagneticPlacement_C__pf3911806087::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Magnetize", &ABP_MagneticPlacement_C__pf3911806087::execbpf__Magnetize__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Magnet__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::NewProp_bpp__Magnet__pf = { "bpp__Magnet__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MagneticPlacement_C__pf3911806087_eventbpf__Magnetize__pf_Parms, bpp__Magnet__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::NewProp_bpp__Magnet__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_MagneticPlacement__pf3911806087.h" },
		{ "OverrideNativeName", "Magnetize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087, nullptr, "Magnetize", nullptr, nullptr, sizeof(BP_MagneticPlacement_C__pf3911806087_eventbpf__Magnetize__pf_Parms), Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Magnetize" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_NoRegister()
	{
		return ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	}
	struct Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CollisionxDetection__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CollisionxDetection__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Occupied__pf_MetaData[];
#endif
		static void NewProp_bpv__Occupied__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Occupied__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__ObjectxType__pfT_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ObjectxType__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__ObjectxType__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Magnet__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Magnet__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_MagneticPlacement_C__pf3911806087_bpf__Magnetize__pf, "Magnetize" }, // 2096919181
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_MagneticPlacement__pf3911806087.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_MagneticPlacement__pf3911806087.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_MagneticPlacement_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Tools/BP_MagneticPlacement.BP_MagneticPlacement_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__CollisionxDetection__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MagneticPlacement__pf3911806087.h" },
		{ "OverrideNativeName", "Collision Detection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__CollisionxDetection__pfT = { "Collision Detection", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MagneticPlacement_C__pf3911806087, bpv__CollisionxDetection__pfT), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__CollisionxDetection__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__CollisionxDetection__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__Occupied__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Occupied" },
		{ "ModuleRelativePath", "Public/BP_MagneticPlacement__pf3911806087.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Occupied" },
	};
#endif
	void Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__Occupied__pf_SetBit(void* Obj)
	{
		((ABP_MagneticPlacement_C__pf3911806087*)Obj)->bpv__Occupied__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__Occupied__pf = { "Occupied", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MagneticPlacement_C__pf3911806087), &Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__Occupied__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__Occupied__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__Occupied__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__ObjectxType__pfT_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__ObjectxType__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Object Type" },
		{ "ModuleRelativePath", "Public/BP_MagneticPlacement__pf3911806087.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Object Type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__ObjectxType__pfT = { "Object Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MagneticPlacement_C__pf3911806087, bpv__ObjectxType__pfT), Z_Construct_UEnum_NativizedAssets_E__ENUM_ObjectType__pf, METADATA_PARAMS(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__ObjectxType__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__ObjectxType__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_Magnet__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MagneticPlacement__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_Event_Magnet" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_Magnet__pf = { "K2Node_Event_Magnet", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MagneticPlacement_C__pf3911806087, b0l__K2Node_Event_Magnet__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_Magnet__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_Magnet__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__CollisionxDetection__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__Occupied__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__ObjectxType__pfT_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_bpv__ObjectxType__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::NewProp_b0l__K2Node_Event_Magnet__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_Magnetic_C_NoRegister, (int32)VTABLE_OFFSET(ABP_MagneticPlacement_C__pf3911806087, IBPI_Magnetic_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_MagneticPlacement_C__pf3911806087>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::ClassParams = {
		&ABP_MagneticPlacement_C__pf3911806087::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Tools/BP_MagneticPlacement"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_MagneticPlacement_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_MagneticPlacement_C__pf3911806087, TEXT("BP_MagneticPlacement_C"), 2315419173);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_MagneticPlacement_C__pf3911806087>()
	{
		return ABP_MagneticPlacement_C__pf3911806087::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_MagneticPlacement_C__pf3911806087(Z_Construct_UClass_ABP_MagneticPlacement_C__pf3911806087, &ABP_MagneticPlacement_C__pf3911806087::StaticClass, TEXT("/Game/Blueprints/Tools/BP_MagneticPlacement"), TEXT("BP_MagneticPlacement_C"), true, TEXT("/Game/Blueprints/Tools/BP_MagneticPlacement"), TEXT("/Game/Blueprints/Tools/BP_MagneticPlacement.BP_MagneticPlacement_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_MagneticPlacement_C__pf3911806087);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
