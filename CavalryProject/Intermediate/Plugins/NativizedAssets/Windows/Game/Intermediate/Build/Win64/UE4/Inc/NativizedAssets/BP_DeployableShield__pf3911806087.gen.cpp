// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_DeployableShield__pf3911806087.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_DeployableShield__pf3911806087() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Tool_Base_C__pf3911806087();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
// End Cross Module References
	DEFINE_FUNCTION(ABP_DeployableShield_C__pf3911806087::execbpf__DeployBase__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__DeployBase__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_DeployableShield_C__pf3911806087::execbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const);
		P_NATIVE_END;
	}
	void ABP_DeployableShield_C__pf3911806087::StaticRegisterNativesABP_DeployableShield_C__pf3911806087()
	{
		UClass* Class = ABP_DeployableShield_C__pf3911806087::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__BP_DeployableShield_Box Collider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature", &ABP_DeployableShield_C__pf3911806087::execbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT },
			{ "DeployBase", &ABP_DeployableShield_C__pf3911806087::execbpf__DeployBase__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics
	{
		struct BP_DeployableShield_C__pf3911806087_eventbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
			bool bpp__bFromSweep__pf;
			FHitResult bpp__SweepResult__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OverlappedComponent__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__OtherBodyIndex__pf;
		static void NewProp_bpp__bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SweepResult__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SweepResult__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DeployableShield_C__pf3911806087_eventbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DeployableShield_C__pf3911806087_eventbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DeployableShield_C__pf3911806087_eventbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DeployableShield_C__pf3911806087_eventbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((BP_DeployableShield_C__pf3911806087_eventbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_DeployableShield_C__pf3911806087_eventbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms), &Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_DeployableShield_C__pf3911806087_eventbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "BndEvt__BP_DeployableShield_Box Collider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087, nullptr, "BndEvt__BP_DeployableShield_Box Collider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(BP_DeployableShield_C__pf3911806087_eventbpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms), Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__BP_DeployableShield_Box Collider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__DeployBase__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__DeployBase__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "DeployBase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__DeployBase__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087, nullptr, "DeployBase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__DeployBase__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__DeployBase__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__DeployBase__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "DeployBase" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__DeployBase__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_NoRegister()
	{
		return ABP_DeployableShield_C__pf3911806087::StaticClass();
	}
	struct Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BoxxCollider__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__BoxxCollider__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Audio__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Audio__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ShieldSpawnPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ShieldSpawnPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OwnerGear__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__OwnerGear__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ThrowLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__ThrowLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_BreakVector_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__CallFunc_BreakVector_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_BreakVector_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__CallFunc_BreakVector_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_BreakVector_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__CallFunc_BreakVector_Z__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[];
#endif
		static void NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__Temp_bool_IsClosed_Variable__pf_MetaData[];
#endif
		static void NewProp_b1l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__Temp_bool_IsClosed_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[];
#endif
		static void NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b1l__K2Node_Event_NewParam__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_NewParam__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_b1l__K2Node_Event_NewParam__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_BreakVector_X_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__CallFunc_BreakVector_X_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_BreakVector_Y_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__CallFunc_BreakVector_Y_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_BreakVector_Z_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__CallFunc_BreakVector_Z_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABP_Tool_Base_C__pf3911806087,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__BndEvt__BP_DeployableShield_BoxxCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pfT, "BndEvt__BP_DeployableShield_Box Collider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature" }, // 3261716192
		{ &Z_Construct_UFunction_ABP_DeployableShield_C__pf3911806087_bpf__DeployBase__pf, "DeployBase" }, // 1835687701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_DeployableShield__pf3911806087.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_DeployableShield_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Tools/BP_DeployableShield.BP_DeployableShield_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__BoxxCollider__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "Box Collider" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__BoxxCollider__pfT = { "Box Collider", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, bpv__BoxxCollider__pfT), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__BoxxCollider__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__BoxxCollider__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__Audio__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "Audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__Audio__pf = { "Audio", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, bpv__Audio__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__Audio__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__Audio__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ShieldSpawnPoint__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "ShieldSpawnPoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ShieldSpawnPoint__pf = { "ShieldSpawnPoint", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, bpv__ShieldSpawnPoint__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ShieldSpawnPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ShieldSpawnPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__OwnerGear__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Owner Gear" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "OwnerGear" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__OwnerGear__pf = { "OwnerGear", nullptr, (EPropertyFlags)0x0011000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, bpv__OwnerGear__pf), Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__OwnerGear__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__OwnerGear__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ThrowLocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Throw Location" },
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ThrowLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ThrowLocation__pf = { "ThrowLocation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, bpv__ThrowLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ThrowLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ThrowLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "Temp_bool_Has_Been_Initd_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit(void* Obj)
	{
		((ABP_DeployableShield_C__pf3911806087*)Obj)->b1l__Temp_bool_Has_Been_Initd_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf = { "Temp_bool_Has_Been_Initd_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DeployableShield_C__pf3911806087), &Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_IsClosed_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "Temp_bool_IsClosed_Variable" },
	};
#endif
	void Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_IsClosed_Variable__pf_SetBit(void* Obj)
	{
		((ABP_DeployableShield_C__pf3911806087*)Obj)->b1l__Temp_bool_IsClosed_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_IsClosed_Variable__pf = { "Temp_bool_IsClosed_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DeployableShield_C__pf3911806087), &Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_IsClosed_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_IsClosed_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_IsClosed_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((ABP_DeployableShield_C__pf3911806087*)Obj)->b1l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_DeployableShield_C__pf3911806087), &Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_Event_NewParam__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_Event_NewParam__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "K2Node_Event_NewParam" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_Event_NewParam__pf = { "K2Node_Event_NewParam", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__K2Node_Event_NewParam__pf), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_Event_NewParam__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_Event_NewParam__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X_1__pf = { "CallFunc_BreakVector_X_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__CallFunc_BreakVector_X_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y_1__pf = { "CallFunc_BreakVector_Y_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__CallFunc_BreakVector_Y_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z_1__pf = { "CallFunc_BreakVector_Z_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__CallFunc_BreakVector_Z_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_DeployableShield__pf3911806087.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf = { "CallFunc_K2_SetWorldRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_DeployableShield_C__pf3911806087, b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__BoxxCollider__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__Audio__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ShieldSpawnPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__OwnerGear__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_bpv__ThrowLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__Temp_bool_IsClosed_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_Event_NewParam__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__K2Node_Event_NewParam__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_X_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Y_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_BreakVector_Z_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::NewProp_b1l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_DeployableShield_C__pf3911806087>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::ClassParams = {
		&ABP_DeployableShield_C__pf3911806087::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Tools/BP_DeployableShield"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_DeployableShield_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_DeployableShield_C__pf3911806087, TEXT("BP_DeployableShield_C"), 2555261081);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_DeployableShield_C__pf3911806087>()
	{
		return ABP_DeployableShield_C__pf3911806087::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_DeployableShield_C__pf3911806087(Z_Construct_UClass_ABP_DeployableShield_C__pf3911806087, &ABP_DeployableShield_C__pf3911806087::StaticClass, TEXT("/Game/Blueprints/Tools/BP_DeployableShield"), TEXT("BP_DeployableShield_C"), true, TEXT("/Game/Blueprints/Tools/BP_DeployableShield"), TEXT("/Game/Blueprints/Tools/BP_DeployableShield.BP_DeployableShield_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_DeployableShield_C__pf3911806087);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
