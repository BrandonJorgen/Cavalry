// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/sub_LevelSelect__pf3256655095.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesub_LevelSelect__pf3256655095() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UWidget_CharacterSelect_Button_C__pf3256655095_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UWidget_LevelSelect_Button_C__pf3256655095_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Usub_LevelSelect_C__pf3256655095::execbpf__CreateCharSelList__pf)
	{
		P_GET_TARRAY_REF(FStruc_CharacterData__pf3256655095,Z_Param_Out_bpp__CharacterxData__pfT);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Success__pf);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bpp__StartingCharacterIndex__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CreateCharSelList__pf(Z_Param_Out_bpp__CharacterxData__pfT,Z_Param_Out_bpp__Success__pf,Z_Param_Out_bpp__StartingCharacterIndex__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Usub_LevelSelect_C__pf3256655095::execbpf__GetCharSelButtons__pf)
	{
		P_GET_TARRAY_REF(UWidget_CharacterSelect_Button_C__pf3256655095*,Z_Param_Out_bpp__Local_CharacterButtons__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetCharSelButtons__pf(Z_Param_Out_bpp__Local_CharacterButtons__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Usub_LevelSelect_C__pf3256655095::execbpf__GetSelectionButtons__pf)
	{
		P_GET_TARRAY_REF(UWidget_LevelSelect_Button_C__pf3256655095*,Z_Param_Out_bpp__Local_SelectionButtons1__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetSelectionButtons__pf(Z_Param_Out_bpp__Local_SelectionButtons1__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Usub_LevelSelect_C__pf3256655095::execbpf__CreateSelectionList__pf)
	{
		P_GET_TARRAY_REF(FStruc_LevelData__pf3256655095,Z_Param_Out_bpp__LevelxData__pfT);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Success__pf);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bpp__StartingLevelIndex__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CreateSelectionList__pf(Z_Param_Out_bpp__LevelxData__pfT,Z_Param_Out_bpp__Success__pf,Z_Param_Out_bpp__StartingLevelIndex__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Usub_LevelSelect_C__pf3256655095::execbpf__NewLevelSelected__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__SelectedxLevelxIndex__pfTT__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__NewLevelSelected__pf(Z_Param_bpp__SelectedxLevelxIndex__pfTT__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Usub_LevelSelect_C__pf3256655095::execbpf__NewCharacterSelected__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__SelectedxCharacterxIndex__pfTT__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__NewCharacterSelected__pf(Z_Param_bpp__SelectedxCharacterxIndex__pfTT__const);
		P_NATIVE_END;
	}
	void Usub_LevelSelect_C__pf3256655095::StaticRegisterNativesUsub_LevelSelect_C__pf3256655095()
	{
		UClass* Class = Usub_LevelSelect_C__pf3256655095::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateCharSelList", &Usub_LevelSelect_C__pf3256655095::execbpf__CreateCharSelList__pf },
			{ "CreateSelectionList", &Usub_LevelSelect_C__pf3256655095::execbpf__CreateSelectionList__pf },
			{ "GetCharSelButtons", &Usub_LevelSelect_C__pf3256655095::execbpf__GetCharSelButtons__pf },
			{ "GetSelectionButtons", &Usub_LevelSelect_C__pf3256655095::execbpf__GetSelectionButtons__pf },
			{ "NewCharacterSelected", &Usub_LevelSelect_C__pf3256655095::execbpf__NewCharacterSelected__pf },
			{ "NewLevelSelected", &Usub_LevelSelect_C__pf3256655095::execbpf__NewLevelSelected__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics
	{
		struct sub_LevelSelect_C__pf3256655095_eventbpf__CreateCharSelList__pf_Parms
		{
			TArray<FStruc_CharacterData__pf3256655095> bpp__CharacterxData__pfT;
			bool bpp__Success__pf;
			int32 bpp__StartingCharacterIndex__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__CharacterxData__pfT_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__CharacterxData__pfT;
		static void NewProp_bpp__Success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Success__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__StartingCharacterIndex__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__CharacterxData__pfT_Inner = { "bpp__CharacterxData__pfT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__CharacterxData__pfT = { "bpp__CharacterxData__pfT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_LevelSelect_C__pf3256655095_eventbpf__CreateCharSelList__pf_Parms, bpp__CharacterxData__pfT), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__Success__pf_SetBit(void* Obj)
	{
		((sub_LevelSelect_C__pf3256655095_eventbpf__CreateCharSelList__pf_Parms*)Obj)->bpp__Success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__Success__pf = { "bpp__Success__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(sub_LevelSelect_C__pf3256655095_eventbpf__CreateCharSelList__pf_Parms), &Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__Success__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__StartingCharacterIndex__pf = { "bpp__StartingCharacterIndex__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_LevelSelect_C__pf3256655095_eventbpf__CreateCharSelList__pf_Parms, bpp__StartingCharacterIndex__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__CharacterxData__pfT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__CharacterxData__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__Success__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::NewProp_bpp__StartingCharacterIndex__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "CreateCharSelList" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095, nullptr, "CreateCharSelList", nullptr, nullptr, sizeof(sub_LevelSelect_C__pf3256655095_eventbpf__CreateCharSelList__pf_Parms), Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf()
	{
		UObject* Outer = Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CreateCharSelList" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics
	{
		struct sub_LevelSelect_C__pf3256655095_eventbpf__CreateSelectionList__pf_Parms
		{
			TArray<FStruc_LevelData__pf3256655095> bpp__LevelxData__pfT;
			bool bpp__Success__pf;
			int32 bpp__StartingLevelIndex__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__LevelxData__pfT_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__LevelxData__pfT;
		static void NewProp_bpp__Success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Success__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__StartingLevelIndex__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__LevelxData__pfT_Inner = { "bpp__LevelxData__pfT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__LevelxData__pfT = { "bpp__LevelxData__pfT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_LevelSelect_C__pf3256655095_eventbpf__CreateSelectionList__pf_Parms, bpp__LevelxData__pfT), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__Success__pf_SetBit(void* Obj)
	{
		((sub_LevelSelect_C__pf3256655095_eventbpf__CreateSelectionList__pf_Parms*)Obj)->bpp__Success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__Success__pf = { "bpp__Success__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(sub_LevelSelect_C__pf3256655095_eventbpf__CreateSelectionList__pf_Parms), &Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__Success__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__StartingLevelIndex__pf = { "bpp__StartingLevelIndex__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_LevelSelect_C__pf3256655095_eventbpf__CreateSelectionList__pf_Parms, bpp__StartingLevelIndex__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__LevelxData__pfT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__LevelxData__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__Success__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::NewProp_bpp__StartingLevelIndex__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "CreateSelectionList" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095, nullptr, "CreateSelectionList", nullptr, nullptr, sizeof(sub_LevelSelect_C__pf3256655095_eventbpf__CreateSelectionList__pf_Parms), Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf()
	{
		UObject* Outer = Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CreateSelectionList" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics
	{
		struct sub_LevelSelect_C__pf3256655095_eventbpf__GetCharSelButtons__pf_Parms
		{
			TArray<UWidget_CharacterSelect_Button_C__pf3256655095*> bpp__Local_CharacterButtons__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Local_CharacterButtons__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Local_CharacterButtons__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__Local_CharacterButtons__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::NewProp_bpp__Local_CharacterButtons__pf_Inner = { "bpp__Local_CharacterButtons__pf", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, 0, Z_Construct_UClass_UWidget_CharacterSelect_Button_C__pf3256655095_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::NewProp_bpp__Local_CharacterButtons__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::NewProp_bpp__Local_CharacterButtons__pf = { "bpp__Local_CharacterButtons__pf", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_LevelSelect_C__pf3256655095_eventbpf__GetCharSelButtons__pf_Parms, bpp__Local_CharacterButtons__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::NewProp_bpp__Local_CharacterButtons__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::NewProp_bpp__Local_CharacterButtons__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::NewProp_bpp__Local_CharacterButtons__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::NewProp_bpp__Local_CharacterButtons__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "GetCharSelButtons" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095, nullptr, "GetCharSelButtons", nullptr, nullptr, sizeof(sub_LevelSelect_C__pf3256655095_eventbpf__GetCharSelButtons__pf_Parms), Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf()
	{
		UObject* Outer = Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetCharSelButtons" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics
	{
		struct sub_LevelSelect_C__pf3256655095_eventbpf__GetSelectionButtons__pf_Parms
		{
			TArray<UWidget_LevelSelect_Button_C__pf3256655095*> bpp__Local_SelectionButtons1__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Local_SelectionButtons1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Local_SelectionButtons1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__Local_SelectionButtons1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::NewProp_bpp__Local_SelectionButtons1__pf_Inner = { "bpp__Local_SelectionButtons1__pf", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, 0, Z_Construct_UClass_UWidget_LevelSelect_Button_C__pf3256655095_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::NewProp_bpp__Local_SelectionButtons1__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::NewProp_bpp__Local_SelectionButtons1__pf = { "bpp__Local_SelectionButtons1__pf", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_LevelSelect_C__pf3256655095_eventbpf__GetSelectionButtons__pf_Parms, bpp__Local_SelectionButtons1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::NewProp_bpp__Local_SelectionButtons1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::NewProp_bpp__Local_SelectionButtons1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::NewProp_bpp__Local_SelectionButtons1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::NewProp_bpp__Local_SelectionButtons1__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "GetSelectionButtons" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095, nullptr, "GetSelectionButtons", nullptr, nullptr, sizeof(sub_LevelSelect_C__pf3256655095_eventbpf__GetSelectionButtons__pf_Parms), Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf()
	{
		UObject* Outer = Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetSelectionButtons" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics
	{
		struct sub_LevelSelect_C__pf3256655095_eventbpf__NewCharacterSelected__pf_Parms
		{
			int32 bpp__SelectedxCharacterxIndex__pfTT__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SelectedxCharacterxIndex__pfTT__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__SelectedxCharacterxIndex__pfTT__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::NewProp_bpp__SelectedxCharacterxIndex__pfTT__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::NewProp_bpp__SelectedxCharacterxIndex__pfTT__const = { "bpp__SelectedxCharacterxIndex__pfTT__const", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_LevelSelect_C__pf3256655095_eventbpf__NewCharacterSelected__pf_Parms, bpp__SelectedxCharacterxIndex__pfTT__const), METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::NewProp_bpp__SelectedxCharacterxIndex__pfTT__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::NewProp_bpp__SelectedxCharacterxIndex__pfTT__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::NewProp_bpp__SelectedxCharacterxIndex__pfTT__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "NewCharacterSelected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095, nullptr, "NewCharacterSelected", nullptr, nullptr, sizeof(sub_LevelSelect_C__pf3256655095_eventbpf__NewCharacterSelected__pf_Parms), Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf()
	{
		UObject* Outer = Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "NewCharacterSelected" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics
	{
		struct sub_LevelSelect_C__pf3256655095_eventbpf__NewLevelSelected__pf_Parms
		{
			int32 bpp__SelectedxLevelxIndex__pfTT__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SelectedxLevelxIndex__pfTT__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__SelectedxLevelxIndex__pfTT__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__SelectedxLevelxIndex__pfTT__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__SelectedxLevelxIndex__pfTT__const = { "bpp__SelectedxLevelxIndex__pfTT__const", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(sub_LevelSelect_C__pf3256655095_eventbpf__NewLevelSelected__pf_Parms, bpp__SelectedxLevelxIndex__pfTT__const), METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__SelectedxLevelxIndex__pfTT__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__SelectedxLevelxIndex__pfTT__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::NewProp_bpp__SelectedxLevelxIndex__pfTT__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "NewLevelSelected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095, nullptr, "NewLevelSelected", nullptr, nullptr, sizeof(sub_LevelSelect_C__pf3256655095_eventbpf__NewLevelSelected__pf_Parms), Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf()
	{
		UObject* Outer = Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "NewLevelSelected" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_NoRegister()
	{
		return Usub_LevelSelect_C__pf3256655095::StaticClass();
	}
	struct Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image_CharacterOverlay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image_CharacterOverlay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image_MissionOverlay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image_MissionOverlay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScrollBox_CharacterOptions__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ScrollBox_CharacterOptions__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScrollBox_MissionOptions__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ScrollBox_MissionOptions__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LevelSelButton_Class__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__LevelSelButton_Class__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CharacterSelButton_Class__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__CharacterSelButton_Class__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Selected_Level_Index__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_Selected_Level_Index__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Selected_Character_Index__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_Selected_Character_Index__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateCharSelList__pf, "CreateCharSelList" }, // 2894850035
		{ &Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__CreateSelectionList__pf, "CreateSelectionList" }, // 3783359548
		{ &Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetCharSelButtons__pf, "GetCharSelButtons" }, // 3508079703
		{ &Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__GetSelectionButtons__pf, "GetSelectionButtons" }, // 1135604089
		{ &Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewCharacterSelected__pf, "NewCharacterSelected" }, // 24220833
		{ &Z_Construct_UFunction_Usub_LevelSelect_C__pf3256655095_bpf__NewLevelSelected__pf, "NewLevelSelected" }, // 1983083494
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "sub_LevelSelect__pf3256655095.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "sub_LevelSelect_C" },
		{ "ReplaceConverted", "/Game/HUD/Main_Menu/sub_LevelSelect.sub_LevelSelect_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_CharacterOverlay__pf_MetaData[] = {
		{ "Category", "sub_LevelSelect" },
		{ "DisplayName", "Image_CharacterOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "Image_CharacterOverlay" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_CharacterOverlay__pf = { "Image_CharacterOverlay", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, bpv__Image_CharacterOverlay__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_CharacterOverlay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_CharacterOverlay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_MissionOverlay__pf_MetaData[] = {
		{ "Category", "sub_LevelSelect" },
		{ "DisplayName", "Image_MissionOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "Image_MissionOverlay" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_MissionOverlay__pf = { "Image_MissionOverlay", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, bpv__Image_MissionOverlay__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_MissionOverlay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_MissionOverlay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_CharacterOptions__pf_MetaData[] = {
		{ "Category", "sub_LevelSelect" },
		{ "DisplayName", "ScrollBox_CharacterOptions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "ScrollBox_CharacterOptions" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_CharacterOptions__pf = { "ScrollBox_CharacterOptions", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, bpv__ScrollBox_CharacterOptions__pf), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_CharacterOptions__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_CharacterOptions__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_MissionOptions__pf_MetaData[] = {
		{ "Category", "sub_LevelSelect" },
		{ "DisplayName", "ScrollBox_MissionOptions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "ScrollBox_MissionOptions" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_MissionOptions__pf = { "ScrollBox_MissionOptions", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, bpv__ScrollBox_MissionOptions__pf), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_MissionOptions__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_MissionOptions__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__LevelSelButton_Class__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Level Sel Button Class" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LevelSelButton_Class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__LevelSelButton_Class__pf = { "LevelSelButton_Class", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, bpv__LevelSelButton_Class__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__LevelSelButton_Class__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__LevelSelButton_Class__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__CharacterSelButton_Class__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Character Sel Button Class" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CharacterSelButton_Class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__CharacterSelButton_Class__pf = { "CharacterSelButton_Class", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, bpv__CharacterSelButton_Class__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__CharacterSelButton_Class__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__CharacterSelButton_Class__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf = { "Temp_int_Array_Index_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__Temp_int_Array_Index_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Level_Index__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Selected_Level_Index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Level_Index__pf = { "K2Node_CustomEvent_Selected_Level_Index", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__K2Node_CustomEvent_Selected_Level_Index__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Level_Index__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Level_Index__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf_Inner = { "b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidget_LevelSelect_Button_C__pf3256655095_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "CallFunc_GetSelectionButtons_Local_SelectionButtons1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf = { "CallFunc_GetSelectionButtons_Local_SelectionButtons1", nullptr, (EPropertyFlags)0x0010008000202008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf = { "Temp_int_Loop_Counter_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__Temp_int_Loop_Counter_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_UWidget_LevelSelect_Button_C__pf3256655095_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "CallFunc_GetSelectionIndex_SlectionIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex__pf = { "CallFunc_GetSelectionIndex_SlectionIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__CallFunc_GetSelectionIndex_SlectionIndex__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Character_Index__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Selected_Character_Index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Character_Index__pf = { "K2Node_CustomEvent_Selected_Character_Index", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__K2Node_CustomEvent_Selected_Character_Index__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Character_Index__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Character_Index__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf_Inner = { "b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidget_CharacterSelect_Button_C__pf3256655095_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "CallFunc_GetCharSelButtons_Local_CharacterButtons" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf = { "CallFunc_GetCharSelButtons_Local_CharacterButtons", nullptr, (EPropertyFlags)0x0010008000202008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UClass_UWidget_CharacterSelect_Button_C__pf3256655095_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/sub_LevelSelect__pf3256655095.h" },
		{ "OverrideNativeName", "CallFunc_GetSelectionIndex_SlectionIndex_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex_1__pf = { "CallFunc_GetSelectionIndex_SlectionIndex_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Usub_LevelSelect_C__pf3256655095, b0l__CallFunc_GetSelectionIndex_SlectionIndex_1__pf), METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_CharacterOverlay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__Image_MissionOverlay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_CharacterOptions__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__ScrollBox_MissionOptions__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__LevelSelButton_Class__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_bpv__CharacterSelButton_Class__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Array_Index_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Level_Index__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Selected_Character_Index__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::NewProp_b0l__CallFunc_GetSelectionIndex_SlectionIndex_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Usub_LevelSelect_C__pf3256655095>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::ClassParams = {
		&Usub_LevelSelect_C__pf3256655095::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/sub_LevelSelect"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("sub_LevelSelect_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Usub_LevelSelect_C__pf3256655095, TEXT("sub_LevelSelect_C"), 1337594280);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Usub_LevelSelect_C__pf3256655095>()
	{
		return Usub_LevelSelect_C__pf3256655095::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Usub_LevelSelect_C__pf3256655095(Z_Construct_UClass_Usub_LevelSelect_C__pf3256655095, &Usub_LevelSelect_C__pf3256655095::StaticClass, TEXT("/Game/HUD/Main_Menu/sub_LevelSelect"), TEXT("sub_LevelSelect_C"), true, TEXT("/Game/HUD/Main_Menu/sub_LevelSelect"), TEXT("/Game/HUD/Main_Menu/sub_LevelSelect.sub_LevelSelect_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Usub_LevelSelect_C__pf3256655095);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
