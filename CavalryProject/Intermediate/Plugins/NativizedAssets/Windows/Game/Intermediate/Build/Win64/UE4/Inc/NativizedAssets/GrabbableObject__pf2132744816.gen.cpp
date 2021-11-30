// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/GrabbableObject__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabbableObject__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGrabbableObject_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGrabbableObject_C__pf2132744816();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGrabbableObject_C__pf2132744816::execbpf__Grab__pf)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_bpp__MeshComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__RootActor__pf);
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__AttachTo__pf);
		P_GET_UBOOL(Z_Param_bpp__UseRoot__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Grab__pf(Z_Param_bpp__MeshComponent__pf,Z_Param_bpp__RootActor__pf,Z_Param_bpp__AttachTo__pf,Z_Param_bpp__UseRoot__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrabbableObject_C__pf2132744816::execbpf__Release__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__Simulate__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Release__pf(Z_Param_bpp__Simulate__pf);
		P_NATIVE_END;
	}
	void UGrabbableObject_C__pf2132744816::StaticRegisterNativesUGrabbableObject_C__pf2132744816()
	{
		UClass* Class = UGrabbableObject_C__pf2132744816::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Grab", &UGrabbableObject_C__pf2132744816::execbpf__Grab__pf },
			{ "Release", &UGrabbableObject_C__pf2132744816::execbpf__Release__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics
	{
		struct GrabbableObject_C__pf2132744816_eventbpf__Grab__pf_Parms
		{
			UMeshComponent* bpp__MeshComponent__pf;
			AActor* bpp__RootActor__pf;
			USceneComponent* bpp__AttachTo__pf;
			bool bpp__UseRoot__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__MeshComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__MeshComponent__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__RootActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__AttachTo__pf;
		static void NewProp_bpp__UseRoot__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__UseRoot__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__MeshComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__MeshComponent__pf = { "bpp__MeshComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GrabbableObject_C__pf2132744816_eventbpf__Grab__pf_Parms, bpp__MeshComponent__pf), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__MeshComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__MeshComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__RootActor__pf = { "bpp__RootActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GrabbableObject_C__pf2132744816_eventbpf__Grab__pf_Parms, bpp__RootActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__AttachTo__pf = { "bpp__AttachTo__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GrabbableObject_C__pf2132744816_eventbpf__Grab__pf_Parms, bpp__AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData)) };
	void Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__UseRoot__pf_SetBit(void* Obj)
	{
		((GrabbableObject_C__pf2132744816_eventbpf__Grab__pf_Parms*)Obj)->bpp__UseRoot__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__UseRoot__pf = { "bpp__UseRoot__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(GrabbableObject_C__pf2132744816_eventbpf__Grab__pf_Parms), &Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__UseRoot__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__MeshComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__RootActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__AttachTo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::NewProp_bpp__UseRoot__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "OverrideNativeName", "Grab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabbableObject_C__pf2132744816, nullptr, "Grab", nullptr, nullptr, sizeof(GrabbableObject_C__pf2132744816_eventbpf__Grab__pf_Parms), Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf()
	{
		UObject* Outer = Z_Construct_UClass_UGrabbableObject_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Grab" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics
	{
		struct GrabbableObject_C__pf2132744816_eventbpf__Release__pf_Parms
		{
			bool bpp__Simulate__pf;
		};
		static void NewProp_bpp__Simulate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Simulate__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::NewProp_bpp__Simulate__pf_SetBit(void* Obj)
	{
		((GrabbableObject_C__pf2132744816_eventbpf__Release__pf_Parms*)Obj)->bpp__Simulate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::NewProp_bpp__Simulate__pf = { "bpp__Simulate__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(GrabbableObject_C__pf2132744816_eventbpf__Release__pf_Parms), &Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::NewProp_bpp__Simulate__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::NewProp_bpp__Simulate__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "OverrideNativeName", "Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabbableObject_C__pf2132744816, nullptr, "Release", nullptr, nullptr, sizeof(GrabbableObject_C__pf2132744816_eventbpf__Release__pf_Parms), Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf()
	{
		UObject* Outer = Z_Construct_UClass_UGrabbableObject_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Release" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrabbableObject_C__pf2132744816_NoRegister()
	{
		return UGrabbableObject_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MeshComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MeshComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RootActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RootActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ComponentActive__pf_MetaData[];
#endif
		static void NewProp_bpv__ComponentActive__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__ComponentActive__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UsingRoot__pf_MetaData[];
#endif
		static void NewProp_bpv__UsingRoot__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__UsingRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Simulate__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_CustomEvent_Simulate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_Simulate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_MeshComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_MeshComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_RootActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_RootActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_AttachTo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_UseRoot__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_CustomEvent_UseRoot__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_UseRoot__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Grab__pf, "Grab" }, // 3775712991
		{ &Z_Construct_UFunction_UGrabbableObject_C__pf2132744816_bpf__Release__pf, "Release" }, // 3775358005
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GrabbableObject__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "GrabbableObject_C" },
		{ "ReplaceConverted", "/Game/Blueprints/GrabbableObject.GrabbableObject_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__MeshComponent__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Mesh Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MeshComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__MeshComponent__pf = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabbableObject_C__pf2132744816, bpv__MeshComponent__pf), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__MeshComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__MeshComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__RootActor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Root Actor" },
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RootActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__RootActor__pf = { "RootActor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabbableObject_C__pf2132744816, bpv__RootActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__RootActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__RootActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__ComponentActive__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Component Active" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ComponentActive" },
	};
#endif
	void Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__ComponentActive__pf_SetBit(void* Obj)
	{
		((UGrabbableObject_C__pf2132744816*)Obj)->bpv__ComponentActive__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__ComponentActive__pf = { "ComponentActive", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrabbableObject_C__pf2132744816), &Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__ComponentActive__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__ComponentActive__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__ComponentActive__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__UsingRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Using Root" },
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "UsingRoot" },
	};
#endif
	void Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__UsingRoot__pf_SetBit(void* Obj)
	{
		((UGrabbableObject_C__pf2132744816*)Obj)->bpv__UsingRoot__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__UsingRoot__pf = { "UsingRoot", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrabbableObject_C__pf2132744816), &Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__UsingRoot__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__UsingRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__UsingRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_Simulate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Simulate" },
	};
#endif
	void Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_Simulate__pf_SetBit(void* Obj)
	{
		((UGrabbableObject_C__pf2132744816*)Obj)->b0l__K2Node_CustomEvent_Simulate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_Simulate__pf = { "K2Node_CustomEvent_Simulate", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrabbableObject_C__pf2132744816), &Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_Simulate__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_Simulate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_Simulate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_MeshComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MeshComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_MeshComponent__pf = { "K2Node_CustomEvent_MeshComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabbableObject_C__pf2132744816, b0l__K2Node_CustomEvent_MeshComponent__pf), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_MeshComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_MeshComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_RootActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_RootActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_RootActor__pf = { "K2Node_CustomEvent_RootActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabbableObject_C__pf2132744816, b0l__K2Node_CustomEvent_RootActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_RootActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_RootActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_AttachTo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_AttachTo__pf = { "K2Node_CustomEvent_AttachTo", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabbableObject_C__pf2132744816, b0l__K2Node_CustomEvent_AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_AttachTo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_UseRoot__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GrabbableObject__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_UseRoot" },
	};
#endif
	void Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_UseRoot__pf_SetBit(void* Obj)
	{
		((UGrabbableObject_C__pf2132744816*)Obj)->b0l__K2Node_CustomEvent_UseRoot__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_UseRoot__pf = { "K2Node_CustomEvent_UseRoot", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrabbableObject_C__pf2132744816), &Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_UseRoot__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_UseRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_UseRoot__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__MeshComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__RootActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__ComponentActive__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_bpv__UsingRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_Simulate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_MeshComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_RootActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_AttachTo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_UseRoot__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabbableObject_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::ClassParams = {
		&UGrabbableObject_C__pf2132744816::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabbableObject_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/GrabbableObject"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("GrabbableObject_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabbableObject_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UGrabbableObject_C__pf2132744816, TEXT("GrabbableObject_C"), 2380277658);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UGrabbableObject_C__pf2132744816>()
	{
		return UGrabbableObject_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabbableObject_C__pf2132744816(Z_Construct_UClass_UGrabbableObject_C__pf2132744816, &UGrabbableObject_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/GrabbableObject"), TEXT("GrabbableObject_C"), true, TEXT("/Game/Blueprints/GrabbableObject"), TEXT("/Game/Blueprints/GrabbableObject.GrabbableObject_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabbableObject_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
