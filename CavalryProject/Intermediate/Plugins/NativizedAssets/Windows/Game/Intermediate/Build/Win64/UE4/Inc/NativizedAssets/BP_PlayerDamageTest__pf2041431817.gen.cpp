// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_PlayerDamageTest__pf2041431817.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_PlayerDamageTest__pf2041431817() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_TakeDamage_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_PlayerDamageTest_C__pf2041431817::execbpf__TakeDamage__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__DamageAmount__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TakeDamage__pf(Z_Param_bpp__DamageAmount__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_PlayerDamageTest_C__pf2041431817::execbpf__TakeDamageActor__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__DamageAmount__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__DamagingActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TakeDamageActor__pf(Z_Param_bpp__DamageAmount__pf,Z_Param_bpp__DamagingActor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_PlayerDamageTest_C__pf2041431817::execbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const);
		P_NATIVE_END;
	}
	static FName NAME_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf = FName(TEXT("TakeDamage"));
	void ABP_PlayerDamageTest_C__pf2041431817::eventbpf__TakeDamage__pf(int32 bpp__DamageAmount__pf)
	{
		BP_PlayerDamageTest_C__pf2041431817_eventbpf__TakeDamage__pf_Parms Parms;
		Parms.bpp__DamageAmount__pf=bpp__DamageAmount__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf),&Parms);
	}
	static FName NAME_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf = FName(TEXT("TakeDamageActor"));
	void ABP_PlayerDamageTest_C__pf2041431817::eventbpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf)
	{
		BP_PlayerDamageTest_C__pf2041431817_eventbpf__TakeDamageActor__pf_Parms Parms;
		Parms.bpp__DamageAmount__pf=bpp__DamageAmount__pf;
		Parms.bpp__DamagingActor__pf=bpp__DamagingActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf),&Parms);
	}
	void ABP_PlayerDamageTest_C__pf2041431817::StaticRegisterNativesABP_PlayerDamageTest_C__pf2041431817()
	{
		UClass* Class = ABP_PlayerDamageTest_C__pf2041431817::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", &ABP_PlayerDamageTest_C__pf2041431817::execbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "TakeDamage", &ABP_PlayerDamageTest_C__pf2041431817::execbpf__TakeDamage__pf },
			{ "TakeDamageActor", &ABP_PlayerDamageTest_C__pf2041431817::execbpf__TakeDamageActor__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics
	{
		struct BP_PlayerDamageTest_C__pf2041431817_eventbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PlayerDamageTest_C__pf2041431817_eventbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PlayerDamageTest_C__pf2041431817_eventbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PlayerDamageTest_C__pf2041431817_eventbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PlayerDamageTest_C__pf2041431817_eventbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((BP_PlayerDamageTest_C__pf2041431817_eventbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_PlayerDamageTest_C__pf2041431817_eventbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PlayerDamageTest_C__pf2041431817_eventbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817, nullptr, "BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(BP_PlayerDamageTest_C__pf2041431817_eventbpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__DamageAmount__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::NewProp_bpp__DamageAmount__pf = { "bpp__DamageAmount__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PlayerDamageTest_C__pf2041431817_eventbpf__TakeDamage__pf_Parms, bpp__DamageAmount__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::NewProp_bpp__DamageAmount__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "TakeDamage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817, nullptr, "TakeDamage", nullptr, nullptr, sizeof(BP_PlayerDamageTest_C__pf2041431817_eventbpf__TakeDamage__pf_Parms), Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TakeDamage" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__DamageAmount__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__DamagingActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamageAmount__pf = { "bpp__DamageAmount__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PlayerDamageTest_C__pf2041431817_eventbpf__TakeDamageActor__pf_Parms, bpp__DamageAmount__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamagingActor__pf = { "bpp__DamagingActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_PlayerDamageTest_C__pf2041431817_eventbpf__TakeDamageActor__pf_Parms, bpp__DamagingActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamageAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::NewProp_bpp__DamagingActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "TakeDamageActor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817, nullptr, "TakeDamageActor", nullptr, nullptr, sizeof(BP_PlayerDamageTest_C__pf2041431817_eventbpf__TakeDamageActor__pf_Parms), Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TakeDamageActor" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_NoRegister()
	{
		return ABP_PlayerDamageTest_C__pf2041431817::StaticClass();
	}
	struct Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DamageTrigger__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DamageTrigger__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Root__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Root__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__damageAmount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__damageAmount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_Event_DamageAmount_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_Event_DamageAmount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_DamagingActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__BP_PlayerDamageTest_DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" }, // 2373672818
		{ &Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamage__pf, "TakeDamage" }, // 2078901196
		{ &Z_Construct_UFunction_ABP_PlayerDamageTest_C__pf2041431817_bpf__TakeDamageActor__pf, "TakeDamageActor" }, // 2079496513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_PlayerDamageTest__pf2041431817.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_PlayerDamageTest_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Playground/BP_PlayerDamageTest.BP_PlayerDamageTest_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__DamageTrigger__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "DamageTrigger" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__DamageTrigger__pf = { "DamageTrigger", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, bpv__DamageTrigger__pf), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__DamageTrigger__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__DamageTrigger__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__Root__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__Root__pf = { "Root", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, bpv__Root__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__Root__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__Root__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__StaticMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__StaticMesh__pf = { "StaticMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__StaticMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__StaticMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__damageAmount__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Damage Amount" },
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "damageAmount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__damageAmount__pf = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, bpv__damageAmount__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__damageAmount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__damageAmount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageAmount_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf = { "K2Node_Event_DamageAmount_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, b0l__K2Node_Event_DamageAmount_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_Event_DamageAmount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf = { "K2Node_Event_DamageAmount", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, b0l__K2Node_Event_DamageAmount__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_Event_DamagingActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf = { "K2Node_Event_DamagingActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, b0l__K2Node_Event_DamagingActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((ABP_PlayerDamageTest_C__pf2041431817*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_PlayerDamageTest_C__pf2041431817), &Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBPI_Take_Damage" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf = { "K2Node_DynamicCast_AsBPI_Take_Damage", nullptr, (EPropertyFlags)0x0014000000202000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf), Z_Construct_UClass_UBPI_TakeDamage_C_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerDamageTest__pf2041431817.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABP_PlayerDamageTest_C__pf2041431817*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_PlayerDamageTest_C__pf2041431817), &Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__DamageTrigger__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__Root__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__StaticMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_bpv__damageAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamageAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_Event_DamagingActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_TakeDamage_C_NoRegister, (int32)VTABLE_OFFSET(ABP_PlayerDamageTest_C__pf2041431817, IBPI_TakeDamage_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_PlayerDamageTest_C__pf2041431817>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::ClassParams = {
		&ABP_PlayerDamageTest_C__pf2041431817::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Playground/BP_PlayerDamageTest"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_PlayerDamageTest_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_PlayerDamageTest_C__pf2041431817, TEXT("BP_PlayerDamageTest_C"), 248100086);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_PlayerDamageTest_C__pf2041431817>()
	{
		return ABP_PlayerDamageTest_C__pf2041431817::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_PlayerDamageTest_C__pf2041431817(Z_Construct_UClass_ABP_PlayerDamageTest_C__pf2041431817, &ABP_PlayerDamageTest_C__pf2041431817::StaticClass, TEXT("/Game/Blueprints/Playground/BP_PlayerDamageTest"), TEXT("BP_PlayerDamageTest_C"), true, TEXT("/Game/Blueprints/Playground/BP_PlayerDamageTest"), TEXT("/Game/Blueprints/Playground/BP_PlayerDamageTest.BP_PlayerDamageTest_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_PlayerDamageTest_C__pf2041431817);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
