// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/sub_MissionDetails__pf3256655095.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesub_MissionDetails__pf3256655095() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	DEFINE_FUNCTION(Usub_MissionDetails_C__pf3256655095::execbpf__NewLevelSelected__pf)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_bpp__LevelName__pf__const);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_bpp__LevelDescription__pf__const);
		P_GET_OBJECT(UObject,Z_Param_bpp__LevelPortrait__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__NewLevelSelected__pf(Z_Param_Out_bpp__LevelName__pf__const,Z_Param_Out_bpp__LevelDescription__pf__const,Z_Param_bpp__LevelPortrait__pf);
		P_NATIVE_END;
	}
	void Usub_MissionDetails_C__pf3256655095::StaticRegisterNativesUsub_MissionDetails_C__pf3256655095()
	{
		UClass* Class = Usub_MissionDetails_C__pf3256655095::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewLevelSelected", &Usub_MissionDetails_C__pf3256655095::execbpf__NewLevelSelected__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics
	{
		struct sub_MissionDetails_C__pf3256655095_eventbpf__NewLevelSelected__pf_Parms
		{
			FText bpp__LevelName__pf__const;
			FText bpp__LevelDescription__pf__const;
			UObject* bpp__LevelPortrait__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__LevelName__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpp__LevelName__pf__const;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__LevelDescription__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpp__LevelDescription__pf__const;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__LevelPortrait__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelName__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelName__pf__const = { "bpp__LevelName__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_MissionDetails_C__pf3256655095_eventbpf__NewLevelSelected__pf_Parms, bpp__LevelName__pf__const), METADATA_PARAMS(Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelName__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelName__pf__const_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelDescription__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelDescription__pf__const = { "bpp__LevelDescription__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_MissionDetails_C__pf3256655095_eventbpf__NewLevelSelected__pf_Parms, bpp__LevelDescription__pf__const), METADATA_PARAMS(Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelDescription__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelDescription__pf__const_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelPortrait__pf = { "bpp__LevelPortrait__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_MissionDetails_C__pf3256655095_eventbpf__NewLevelSelected__pf_Parms, bpp__LevelPortrait__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelName__pf__const,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelDescription__pf__const,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__LevelPortrait__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/sub_MissionDetails__pf3256655095.h" },
		{ "OverrideNativeName", "NewLevelSelected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095, nullptr, "NewLevelSelected", nullptr, nullptr, sizeof(sub_MissionDetails_C__pf3256655095_eventbpf__NewLevelSelected__pf_Parms), Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf()
	{
		UObject* Outer = Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "NewLevelSelected" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_NoRegister()
	{
		return Usub_MissionDetails_C__pf3256655095::StaticClass();
	}
	struct Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image_LevelPortrait__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image_LevelPortrait__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_Description__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_Description__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_LevelName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_LevelName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_LevelName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_b0l__K2Node_CustomEvent_LevelName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_LevelDescription__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_b0l__K2Node_CustomEvent_LevelDescription__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_LevelPortrait__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_LevelPortrait__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Usub_MissionDetails_C__pf3256655095_bpf__NewLevelSelected__pf, "NewLevelSelected" }, // 3957542512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "sub_MissionDetails__pf3256655095.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/sub_MissionDetails__pf3256655095.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "sub_MissionDetails_C" },
		{ "ReplaceConverted", "/Game/HUD/Main_Menu/sub_MissionDetails.sub_MissionDetails_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__Image_LevelPortrait__pf_MetaData[] = {
		{ "Category", "sub_MissionDetails" },
		{ "DisplayName", "Image_LevelPortrait" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_MissionDetails__pf3256655095.h" },
		{ "OverrideNativeName", "Image_LevelPortrait" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__Image_LevelPortrait__pf = { "Image_LevelPortrait", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_MissionDetails_C__pf3256655095, bpv__Image_LevelPortrait__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__Image_LevelPortrait__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__Image_LevelPortrait__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_Description__pf_MetaData[] = {
		{ "Category", "sub_MissionDetails" },
		{ "DisplayName", "TextBlock_Description" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_MissionDetails__pf3256655095.h" },
		{ "OverrideNativeName", "TextBlock_Description" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_Description__pf = { "TextBlock_Description", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_MissionDetails_C__pf3256655095, bpv__TextBlock_Description__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_Description__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_Description__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_LevelName__pf_MetaData[] = {
		{ "Category", "sub_MissionDetails" },
		{ "DisplayName", "TextBlock_LevelName" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_MissionDetails__pf3256655095.h" },
		{ "OverrideNativeName", "TextBlock_LevelName" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_LevelName__pf = { "TextBlock_LevelName", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_MissionDetails_C__pf3256655095, bpv__TextBlock_LevelName__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_LevelName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_LevelName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelName__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_MissionDetails__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_LevelName" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelName__pf = { "K2Node_CustomEvent_LevelName", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_MissionDetails_C__pf3256655095, b0l__K2Node_CustomEvent_LevelName__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelDescription__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_MissionDetails__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_LevelDescription" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelDescription__pf = { "K2Node_CustomEvent_LevelDescription", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_MissionDetails_C__pf3256655095, b0l__K2Node_CustomEvent_LevelDescription__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelDescription__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelDescription__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelPortrait__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_MissionDetails__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_LevelPortrait" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelPortrait__pf = { "K2Node_CustomEvent_LevelPortrait", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_MissionDetails_C__pf3256655095, b0l__K2Node_CustomEvent_LevelPortrait__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelPortrait__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelPortrait__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_MissionDetails__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_SlateBrush" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf = { "K2Node_MakeStruct_SlateBrush", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_MissionDetails_C__pf3256655095, b0l__K2Node_MakeStruct_SlateBrush__pf), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__Image_LevelPortrait__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_Description__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_bpv__TextBlock_LevelName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelDescription__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_LevelPortrait__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::NewProp_b0l__K2Node_MakeStruct_SlateBrush__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Usub_MissionDetails_C__pf3256655095>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::ClassParams = {
		&Usub_MissionDetails_C__pf3256655095::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/sub_MissionDetails"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("sub_MissionDetails_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Usub_MissionDetails_C__pf3256655095, TEXT("sub_MissionDetails_C"), 2918494422);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Usub_MissionDetails_C__pf3256655095>()
	{
		return Usub_MissionDetails_C__pf3256655095::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Usub_MissionDetails_C__pf3256655095(Z_Construct_UClass_Usub_MissionDetails_C__pf3256655095, &Usub_MissionDetails_C__pf3256655095::StaticClass, TEXT("/Game/HUD/Main_Menu/sub_MissionDetails"), TEXT("sub_MissionDetails_C"), true, TEXT("/Game/HUD/Main_Menu/sub_MissionDetails"), TEXT("/Game/HUD/Main_Menu/sub_MissionDetails.sub_MissionDetails_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Usub_MissionDetails_C__pf3256655095);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
