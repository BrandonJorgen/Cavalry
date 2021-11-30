// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_PickupCube__pf563933975.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_PickupCube__pf563933975() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PickupCube_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PickupCube_C__pf563933975();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPickupActorInterface_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_PickupCube_C__pf563933975::execbpf__Pickup__pf)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__AttachTo__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Pickup__pf(Z_Param_bpp__AttachTo__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_PickupCube_C__pf563933975::execbpf__Drop__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Drop__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_PickupCube_C__pf563933975_bpf__Drop__pf = FName(TEXT("Drop"));
	void ABP_PickupCube_C__pf563933975::eventbpf__Drop__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_PickupCube_C__pf563933975_bpf__Drop__pf),NULL);
	}
	static FName NAME_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf = FName(TEXT("Pickup"));
	void ABP_PickupCube_C__pf563933975::eventbpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
	{
		BP_PickupCube_C__pf563933975_eventbpf__Pickup__pf_Parms Parms;
		Parms.bpp__AttachTo__pf=bpp__AttachTo__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf),&Parms);
	}
	void ABP_PickupCube_C__pf563933975::StaticRegisterNativesABP_PickupCube_C__pf563933975()
	{
		UClass* Class = ABP_PickupCube_C__pf563933975::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &ABP_PickupCube_C__pf563933975::execbpf__Drop__pf },
			{ "Pickup", &ABP_PickupCube_C__pf563933975::execbpf__Pickup__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Drop__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Drop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_PickupCube__pf563933975.h" },
		{ "OverrideNativeName", "Drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Drop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PickupCube_C__pf563933975, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Drop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Drop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Drop__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PickupCube_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Drop" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Drop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__AttachTo__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf = { "bpp__AttachTo__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PickupCube_C__pf563933975_eventbpf__Pickup__pf_Parms, bpp__AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_PickupCube__pf563933975.h" },
		{ "OverrideNativeName", "Pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PickupCube_C__pf563933975, nullptr, "Pickup", nullptr, nullptr, sizeof(BP_PickupCube_C__pf563933975_eventbpf__Pickup__pf_Parms), Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PickupCube_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Pickup" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_PickupCube_C__pf563933975_NoRegister()
	{
		return ABP_PickupCube_C__pf563933975::StaticClass();
	}
	struct Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_AttachTo__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Drop__pf, "Drop" }, // 421026500
		{ &Z_Construct_UFunction_ABP_PickupCube_C__pf563933975_bpf__Pickup__pf, "Pickup" }, // 690073311
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "BP_PickupCube__pf563933975.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_PickupCube__pf563933975.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_PickupCube_C" },
		{ "ReplaceConverted", "/Game/VirtualRealityBP/Blueprints/BP_PickupCube.BP_PickupCube_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PickupCube__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_AttachTo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf = { "K2Node_Event_AttachTo", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PickupCube_C__pf563933975, b0l__K2Node_Event_AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPickupActorInterface_C_NoRegister, (int32)VTABLE_OFFSET(ABP_PickupCube_C__pf563933975, IPickupActorInterface_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_PickupCube_C__pf563933975>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::ClassParams = {
		&ABP_PickupCube_C__pf563933975::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_PickupCube_C__pf563933975()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCube"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_PickupCube_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_PickupCube_C__pf563933975_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_PickupCube_C__pf563933975, TEXT("BP_PickupCube_C"), 761264551);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_PickupCube_C__pf563933975>()
	{
		return ABP_PickupCube_C__pf563933975::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_PickupCube_C__pf563933975(Z_Construct_UClass_ABP_PickupCube_C__pf563933975, &ABP_PickupCube_C__pf563933975::StaticClass, TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCube"), TEXT("BP_PickupCube_C"), true, TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCube"), TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCube.BP_PickupCube_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_PickupCube_C__pf563933975);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
