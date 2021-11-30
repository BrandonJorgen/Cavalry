// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_PickupCubeTEST__pf563933975.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_PickupCubeTEST__pf563933975() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UGrabbableObject_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPickupActorInterface_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_GrabbableObj_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_PickupCubeTEST_C__pf563933975::execbpf__Pickup__pf)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__AttachTo__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Pickup__pf(Z_Param_bpp__AttachTo__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_PickupCubeTEST_C__pf563933975::execbpf__Drop__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Drop__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_PickupCubeTEST_C__pf563933975::execbpf__Grab__pf)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_bpp__HandSocket__pf);
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__AttachToMe__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__Actor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Grab__pf(Z_Param_bpp__HandSocket__pf,Z_Param_bpp__AttachToMe__pf,Z_Param_bpp__Actor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_PickupCubeTEST_C__pf563933975::execbpf__Release__pf)
	{
		P_GET_ENUM(EControllerHand,Z_Param_bpp__NewParam__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Release__pf(EControllerHand(Z_Param_bpp__NewParam__pf));
		P_NATIVE_END;
	}
	static FName NAME_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf = FName(TEXT("Drop"));
	void ABP_PickupCubeTEST_C__pf563933975::eventbpf__Drop__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf),NULL);
	}
	static FName NAME_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf = FName(TEXT("Grab"));
	void ABP_PickupCubeTEST_C__pf563933975::eventbpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf)
	{
		BP_PickupCubeTEST_C__pf563933975_eventbpf__Grab__pf_Parms Parms;
		Parms.bpp__HandSocket__pf=bpp__HandSocket__pf;
		Parms.bpp__AttachToMe__pf=bpp__AttachToMe__pf;
		Parms.bpp__Actor__pf=bpp__Actor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf),&Parms);
	}
	static FName NAME_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf = FName(TEXT("Pickup"));
	void ABP_PickupCubeTEST_C__pf563933975::eventbpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
	{
		BP_PickupCubeTEST_C__pf563933975_eventbpf__Pickup__pf_Parms Parms;
		Parms.bpp__AttachTo__pf=bpp__AttachTo__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf),&Parms);
	}
	static FName NAME_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf = FName(TEXT("Release"));
	void ABP_PickupCubeTEST_C__pf563933975::eventbpf__Release__pf(EControllerHand bpp__NewParam__pf)
	{
		BP_PickupCubeTEST_C__pf563933975_eventbpf__Release__pf_Parms Parms;
		Parms.bpp__NewParam__pf=bpp__NewParam__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf),&Parms);
	}
	void ABP_PickupCubeTEST_C__pf563933975::StaticRegisterNativesABP_PickupCubeTEST_C__pf563933975()
	{
		UClass* Class = ABP_PickupCubeTEST_C__pf563933975::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &ABP_PickupCubeTEST_C__pf563933975::execbpf__Drop__pf },
			{ "Grab", &ABP_PickupCubeTEST_C__pf563933975::execbpf__Grab__pf },
			{ "Pickup", &ABP_PickupCubeTEST_C__pf563933975::execbpf__Pickup__pf },
			{ "Release", &ABP_PickupCubeTEST_C__pf563933975::execbpf__Release__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "Drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Drop" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::NewProp_bpp__HandSocket__pf = { "bpp__HandSocket__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PickupCubeTEST_C__pf563933975_eventbpf__Grab__pf_Parms, bpp__HandSocket__pf), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf = { "bpp__AttachToMe__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PickupCubeTEST_C__pf563933975_eventbpf__Grab__pf_Parms, bpp__AttachToMe__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::NewProp_bpp__Actor__pf = { "bpp__Actor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PickupCubeTEST_C__pf563933975_eventbpf__Grab__pf_Parms, bpp__Actor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::NewProp_bpp__HandSocket__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::NewProp_bpp__AttachToMe__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::NewProp_bpp__Actor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "Grab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975, nullptr, "Grab", nullptr, nullptr, sizeof(BP_PickupCubeTEST_C__pf563933975_eventbpf__Grab__pf_Parms), Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Grab" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf = { "bpp__AttachTo__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PickupCubeTEST_C__pf563933975_eventbpf__Pickup__pf_Parms, bpp__AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "Pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975, nullptr, "Pickup", nullptr, nullptr, sizeof(BP_PickupCubeTEST_C__pf563933975_eventbpf__Pickup__pf_Parms), Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Pickup" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__NewParam__pf_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpp__NewParam__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::NewProp_bpp__NewParam__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::NewProp_bpp__NewParam__pf = { "bpp__NewParam__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PickupCubeTEST_C__pf563933975_eventbpf__Release__pf_Parms, bpp__NewParam__pf), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::NewProp_bpp__NewParam__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::NewProp_bpp__NewParam__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "Release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975, nullptr, "Release", nullptr, nullptr, sizeof(BP_PickupCubeTEST_C__pf563933975_eventbpf__Release__pf_Parms), Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Release" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_NoRegister()
	{
		return ABP_PickupCubeTEST_C__pf563933975::StaticClass();
	}
	struct Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GrabbableObject__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GrabbableObject__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_Event_NewParam__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_NewParam__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b0l__K2Node_Event_NewParam__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_AttachTo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_HandSocket__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__K2Node_Event_HandSocket__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_AttachToMe__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_AttachToMe__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Actor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_Actor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Drop__pf, "Drop" }, // 2067221218
		{ &Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Grab__pf, "Grab" }, // 506008722
		{ &Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Pickup__pf, "Pickup" }, // 4128818020
		{ &Z_Construct_UFunction_ABP_PickupCubeTEST_C__pf563933975_bpf__Release__pf, "Release" }, // 2857643090
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "BP_PickupCubeTEST__pf563933975.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_PickupCubeTEST_C" },
		{ "ReplaceConverted", "/Game/VirtualRealityBP/Blueprints/BP_PickupCubeTEST.BP_PickupCubeTEST_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_bpv__GrabbableObject__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "GrabbableObject" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_bpv__GrabbableObject__pf = { "GrabbableObject", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PickupCubeTEST_C__pf563933975, bpv__GrabbableObject__pf), Z_Construct_UClass_UGrabbableObject_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_bpv__GrabbableObject__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_bpv__GrabbableObject__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_NewParam__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_NewParam__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_NewParam" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_NewParam__pf = { "K2Node_Event_NewParam", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PickupCubeTEST_C__pf563933975, b0l__K2Node_Event_NewParam__pf), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_NewParam__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_NewParam__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_AttachTo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf = { "K2Node_Event_AttachTo", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PickupCubeTEST_C__pf563933975, b0l__K2Node_Event_AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_HandSocket__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_HandSocket" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_HandSocket__pf = { "K2Node_Event_HandSocket", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PickupCubeTEST_C__pf563933975, b0l__K2Node_Event_HandSocket__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_HandSocket__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_HandSocket__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachToMe__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_AttachToMe" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachToMe__pf = { "K2Node_Event_AttachToMe", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PickupCubeTEST_C__pf563933975, b0l__K2Node_Event_AttachToMe__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachToMe__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachToMe__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_Actor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PickupCubeTEST__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_Actor__pf = { "K2Node_Event_Actor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PickupCubeTEST_C__pf563933975, b0l__K2Node_Event_Actor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_Actor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_Actor__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_bpv__GrabbableObject__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_NewParam__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_NewParam__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_HandSocket__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_AttachToMe__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_Actor__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPickupActorInterface_C_NoRegister, (int32)VTABLE_OFFSET(ABP_PickupCubeTEST_C__pf563933975, IPickupActorInterface_C), false },
			{ Z_Construct_UClass_UBPI_GrabbableObj_C_NoRegister, (int32)VTABLE_OFFSET(ABP_PickupCubeTEST_C__pf563933975, IBPI_GrabbableObj_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_PickupCubeTEST_C__pf563933975>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::ClassParams = {
		&ABP_PickupCubeTEST_C__pf563933975::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCubeTEST"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_PickupCubeTEST_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_PickupCubeTEST_C__pf563933975, TEXT("BP_PickupCubeTEST_C"), 21404716);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_PickupCubeTEST_C__pf563933975>()
	{
		return ABP_PickupCubeTEST_C__pf563933975::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_PickupCubeTEST_C__pf563933975(Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975, &ABP_PickupCubeTEST_C__pf563933975::StaticClass, TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCubeTEST"), TEXT("BP_PickupCubeTEST_C"), true, TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCubeTEST"), TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCubeTEST.BP_PickupCubeTEST_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_PickupCubeTEST_C__pf563933975);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
