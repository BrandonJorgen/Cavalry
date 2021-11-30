// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABP_Tool_ShieldBase_Whitebox_01__pf2439319826() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine();
// End Cross Module References
	DEFINE_FUNCTION(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::execbpf__AnimGraph__pf)
	{
		P_GET_STRUCT_REF(FPoseLink,Z_Param_Out_bpp__AnimGraph__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AnimGraph__pf(Z_Param_Out_bpp__AnimGraph__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::execbpf__BlueprintUpdateAnimation__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaTimeX__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BlueprintUpdateAnimation__pf(Z_Param_bpp__DeltaTimeX__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf();
		P_NATIVE_END;
	}
	static FName NAME_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf = FName(TEXT("BlueprintUpdateAnimation"));
	void UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
	{
		ABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_eventbpf__BlueprintUpdateAnimation__pf_Parms Parms;
		Parms.bpp__DeltaTimeX__pf=bpp__DeltaTimeX__pf;
		ProcessEvent(FindFunctionChecked(NAME_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf),&Parms);
	}
	void UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::StaticRegisterNativesUABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826()
	{
		UClass* Class = UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimGraph", &UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::execbpf__AnimGraph__pf },
			{ "BlueprintUpdateAnimation", &UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::execbpf__BlueprintUpdateAnimation__pf },
			{ "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9", &UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics
	{
		struct ABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_eventbpf__AnimGraph__pf_Parms
		{
			FPoseLink bpp__AnimGraph__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__AnimGraph__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf = { "bpp__AnimGraph__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_eventbpf__AnimGraph__pf_Parms, bpp__AnimGraph__pf), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::Function_MetaDataParams[] = {
		{ "AnimBlueprintFunction", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "AnimGraph" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, nullptr, "AnimGraph", nullptr, nullptr, sizeof(ABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_eventbpf__AnimGraph__pf_Parms), Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf()
	{
		UObject* Outer = Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AnimGraph" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaTimeX__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf = { "bpp__DeltaTimeX__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_eventbpf__BlueprintUpdateAnimation__pf_Parms, bpp__DeltaTimeX__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is updated */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "BlueprintUpdateAnimation" },
		{ "ToolTip", "Executed when the Animation is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, nullptr, "BlueprintUpdateAnimation", nullptr, nullptr, sizeof(ABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_eventbpf__BlueprintUpdateAnimation__pf_Parms), Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf()
	{
		UObject* Outer = Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BlueprintUpdateAnimation" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, nullptr, "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf()
	{
		UObject* Outer = Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_NoRegister()
	{
		return UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::StaticClass();
	}
	struct Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_Root__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_Root__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_TransitionResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_TransitionResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_SequencePlayer_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_SequencePlayer_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_SequencePlayer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_SequencePlayer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateMachine__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateMachine__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Moving__pf_MetaData[];
#endif
		static void NewProp_bpv__Moving__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Moving__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaTimeX__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__AnimGraph__pf, "AnimGraph" }, // 1844608278
		{ &Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__BlueprintUpdateAnimation__pf, "BlueprintUpdateAnimation" }, // 2560305310
		{ &Z_Construct_UFunction_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9__pf, "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Tool_ShieldBase_Whitebox_01_AnimGraphNode_TransitionResult_03690FC74761D2799AFCABBC1FC316B9" }, // 359149587
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "ABP_Tool_ShieldBase_Whitebox_01_C" },
		{ "ReplaceConverted", "/Game/Meshes/Placeholder/War/ABP_Tool_ShieldBase_Whitebox_01.ABP_Tool_ShieldBase_Whitebox_01_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "AnimGraphNode_Root" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_Root__pf = { "AnimGraphNode_Root", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, bpv__AnimGraphNode_Root__pf), Z_Construct_UScriptStruct_FAnimNode_Root, METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "AnimGraphNode_TransitionResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf = { "AnimGraphNode_TransitionResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, bpv__AnimGraphNode_TransitionResult__pf), Z_Construct_UScriptStruct_FAnimNode_TransitionResult, METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "AnimGraphNode_SequencePlayer_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_1__pf = { "AnimGraphNode_SequencePlayer_1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, bpv__AnimGraphNode_SequencePlayer_1__pf), Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf = { "AnimGraphNode_StateResult_1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, bpv__AnimGraphNode_StateResult_1__pf), Z_Construct_UScriptStruct_FAnimNode_StateResult, METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "AnimGraphNode_SequencePlayer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer__pf = { "AnimGraphNode_SequencePlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, bpv__AnimGraphNode_SequencePlayer__pf), Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf = { "AnimGraphNode_StateResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, bpv__AnimGraphNode_StateResult__pf), Z_Construct_UScriptStruct_FAnimNode_StateResult, METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateMachine" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf = { "AnimGraphNode_StateMachine", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, bpv__AnimGraphNode_StateMachine__pf), Z_Construct_UScriptStruct_FAnimNode_StateMachine, METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__Moving__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Moving" },
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Moving" },
	};
#endif
	void Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__Moving__pf_SetBit(void* Obj)
	{
		((UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826*)Obj)->bpv__Moving__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__Moving__pf = { "Moving", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826), &Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__Moving__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__Moving__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__Moving__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABP_Tool_ShieldBase_Whitebox_01__pf2439319826.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaTimeX" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf = { "K2Node_Event_DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, b0l__K2Node_Event_DeltaTimeX__pf), METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_Root__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_SequencePlayer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_bpv__Moving__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::ClassParams = {
		&UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Meshes/Placeholder/War/ABP_Tool_ShieldBase_Whitebox_01"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ABP_Tool_ShieldBase_Whitebox_01_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, TEXT("ABP_Tool_ShieldBase_Whitebox_01_C"), 1750020565);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826>()
	{
		return UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826(Z_Construct_UClass_UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826, &UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826::StaticClass, TEXT("/Game/Meshes/Placeholder/War/ABP_Tool_ShieldBase_Whitebox_01"), TEXT("ABP_Tool_ShieldBase_Whitebox_01_C"), true, TEXT("/Game/Meshes/Placeholder/War/ABP_Tool_ShieldBase_Whitebox_01"), TEXT("/Game/Meshes/Placeholder/War/ABP_Tool_ShieldBase_Whitebox_01.ABP_Tool_ShieldBase_Whitebox_01_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABP_Tool_ShieldBase_Whitebox_01_C__pf2439319826);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
