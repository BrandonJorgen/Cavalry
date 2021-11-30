// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_Cavalry_GameInstance__pf3256655095.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Cavalry_GameInstance__pf3256655095() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__EGameState__pf();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MainMenu_Actor_C__pf3256655095_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Loading_Actor_C__pf3256655095_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__SetCharacter__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__CharacterIndex__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetCharacter__pf(Z_Param_bpp__CharacterIndex__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__GetCharacterData__pf)
	{
		P_GET_TARRAY_REF(FStruc_CharacterData__pf3256655095,Z_Param_Out_bpp__Character_Data__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetCharacterData__pf(Z_Param_Out_bpp__Character_Data__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__MissionBriefVisOff__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MissionBriefVisOff__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__MainMenuVisOff__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MainMenuVisOff__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__SpawnxMissionBrief__pfT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnxMissionBrief__pfT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__SpawnxMainMenu__pfT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnxMainMenu__pfT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__VerifyxActivexLevelxIndex__pfTTT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__VerifyxActivexLevelxIndex__pfTTT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__SetxGamexState__pfTT)
	{
		P_GET_ENUM(E__EGameState__pf,Z_Param_bpp__NewState__pf);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Successx__pfzy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetxGamexState__pfTT(E__EGameState__pf(Z_Param_bpp__NewState__pf),Z_Param_Out_bpp__Successx__pfzy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__GetxLevelxData__pfTT)
	{
		P_GET_TARRAY_REF(FStruc_LevelData__pf3256655095,Z_Param_Out_bpp__LevelxData__pfT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetxLevelxData__pfTT(Z_Param_Out_bpp__LevelxData__pfT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__StartNewLevel__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__ActivexLevelxIndex__pfTT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__StartNewLevel__pf(Z_Param_bpp__ActivexLevelxIndex__pfTT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	void UBP_Cavalry_GameInstance_C__pf3256655095::StaticRegisterNativesUBP_Cavalry_GameInstance_C__pf3256655095()
	{
		UClass* Class = UBP_Cavalry_GameInstance_C__pf3256655095::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_BP_Cavalry_GameInstance_0", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0 },
			{ "GetCharacterData", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__GetCharacterData__pf },
			{ "Get Level Data", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__GetxLevelxData__pfTT },
			{ "MainMenuVisOff", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__MainMenuVisOff__pf },
			{ "MissionBriefVisOff", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__MissionBriefVisOff__pf },
			{ "SetCharacter", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__SetCharacter__pf },
			{ "Set Game State", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__SetxGamexState__pfTT },
			{ "Spawn MainMenu", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__SpawnxMainMenu__pfT },
			{ "Spawn MissionBrief", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__SpawnxMissionBrief__pfT },
			{ "StartNewLevel", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__StartNewLevel__pf },
			{ "Verify Active Level Index", &UBP_Cavalry_GameInstance_C__pf3256655095::execbpf__VerifyxActivexLevelxIndex__pfTTT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics
	{
		struct BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_BP_Cavalry_GameInstance_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "ExecuteUbergraph_BP_Cavalry_GameInstance_0", nullptr, nullptr, sizeof(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Parms), Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_BP_Cavalry_GameInstance_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics
	{
		struct BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__GetCharacterData__pf_Parms
		{
			TArray<FStruc_CharacterData__pf3256655095> bpp__Character_Data__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Character_Data__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__Character_Data__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::NewProp_bpp__Character_Data__pf_Inner = { "bpp__Character_Data__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::NewProp_bpp__Character_Data__pf = { "bpp__Character_Data__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__GetCharacterData__pf_Parms, bpp__Character_Data__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::NewProp_bpp__Character_Data__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::NewProp_bpp__Character_Data__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "GetCharacterData" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "GetCharacterData", nullptr, nullptr, sizeof(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__GetCharacterData__pf_Parms), Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetCharacterData" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics
	{
		struct BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__GetxLevelxData__pfTT_Parms
		{
			TArray<FStruc_LevelData__pf3256655095> bpp__LevelxData__pfT;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__LevelxData__pfT_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__LevelxData__pfT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::NewProp_bpp__LevelxData__pfT_Inner = { "bpp__LevelxData__pfT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::NewProp_bpp__LevelxData__pfT = { "bpp__LevelxData__pfT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__GetxLevelxData__pfTT_Parms, bpp__LevelxData__pfT), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::NewProp_bpp__LevelxData__pfT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::NewProp_bpp__LevelxData__pfT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "Get Level Data" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "Get Level Data", nullptr, nullptr, sizeof(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__GetxLevelxData__pfTT_Parms), Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Get Level Data" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MainMenuVisOff__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MainMenuVisOff__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "MainMenuVisOff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MainMenuVisOff__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "MainMenuVisOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MainMenuVisOff__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MainMenuVisOff__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MainMenuVisOff__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MainMenuVisOff" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MainMenuVisOff__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MissionBriefVisOff__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MissionBriefVisOff__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "MissionBriefVisOff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MissionBriefVisOff__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "MissionBriefVisOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MissionBriefVisOff__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MissionBriefVisOff__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MissionBriefVisOff__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MissionBriefVisOff" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MissionBriefVisOff__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics
	{
		struct BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__SetCharacter__pf_Parms
		{
			int32 bpp__CharacterIndex__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__CharacterIndex__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::NewProp_bpp__CharacterIndex__pf = { "bpp__CharacterIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__SetCharacter__pf_Parms, bpp__CharacterIndex__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::NewProp_bpp__CharacterIndex__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "SetCharacter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "SetCharacter", nullptr, nullptr, sizeof(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__SetCharacter__pf_Parms), Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetCharacter" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics
	{
		struct BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__SetxGamexState__pfTT_Parms
		{
			E__EGameState__pf bpp__NewState__pf;
			bool bpp__Successx__pfzy;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__NewState__pf_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpp__NewState__pf;
		static void NewProp_bpp__Successx__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Successx__pfzy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::NewProp_bpp__NewState__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::NewProp_bpp__NewState__pf = { "bpp__NewState__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__SetxGamexState__pfTT_Parms, bpp__NewState__pf), Z_Construct_UEnum_NativizedAssets_E__EGameState__pf, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::NewProp_bpp__Successx__pfzy_SetBit(void* Obj)
	{
		((BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__SetxGamexState__pfTT_Parms*)Obj)->bpp__Successx__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::NewProp_bpp__Successx__pfzy = { "bpp__Successx__pfzy", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__SetxGamexState__pfTT_Parms), &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::NewProp_bpp__Successx__pfzy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::NewProp_bpp__NewState__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::NewProp_bpp__NewState__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::NewProp_bpp__Successx__pfzy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "Set Game State" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "Set Game State", nullptr, nullptr, sizeof(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__SetxGamexState__pfTT_Parms), Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Set Game State" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMainMenu__pfT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMainMenu__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "Spawn MainMenu" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMainMenu__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "Spawn MainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMainMenu__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMainMenu__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMainMenu__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Spawn MainMenu" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMainMenu__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMissionBrief__pfT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMissionBrief__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "Spawn MissionBrief" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMissionBrief__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "Spawn MissionBrief", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMissionBrief__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMissionBrief__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMissionBrief__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Spawn MissionBrief" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMissionBrief__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics
	{
		struct BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__StartNewLevel__pf_Parms
		{
			int32 bpp__ActivexLevelxIndex__pfTT;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__ActivexLevelxIndex__pfTT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::NewProp_bpp__ActivexLevelxIndex__pfTT = { "bpp__ActivexLevelxIndex__pfTT", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__StartNewLevel__pf_Parms, bpp__ActivexLevelxIndex__pfTT), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::NewProp_bpp__ActivexLevelxIndex__pfTT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "StartNewLevel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "StartNewLevel", nullptr, nullptr, sizeof(BP_Cavalry_GameInstance_C__pf3256655095_eventbpf__StartNewLevel__pf_Parms), Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "StartNewLevel" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__VerifyxActivexLevelxIndex__pfTTT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__VerifyxActivexLevelxIndex__pfTTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "Verify Active Level Index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__VerifyxActivexLevelxIndex__pfTTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, nullptr, "Verify Active Level Index", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__VerifyxActivexLevelxIndex__pfTTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__VerifyxActivexLevelxIndex__pfTTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__VerifyxActivexLevelxIndex__pfTTT()
	{
		UObject* Outer = Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Verify Active Level Index" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__VerifyxActivexLevelxIndex__pfTTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_NoRegister()
	{
		return UBP_Cavalry_GameInstance_C__pf3256655095::StaticClass();
	}
	struct Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__LevelxData__pfT_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LevelxData__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__LevelxData__pfT;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__GamexState__pfT_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GamexState__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__GamexState__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ActivexLevelxIndex__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ActivexLevelxIndex__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RootWidget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RootWidget__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MainMenu__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MainMenu__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MissionBrief__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MissionBrief__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LoadingScreen__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LoadingScreen__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PlayerToSpawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__PlayerToSpawn__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Character_Data__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Character_Data__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Character_Data__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Active_Level_Index__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_Active_Level_Index__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0, "ExecuteUbergraph_BP_Cavalry_GameInstance_0" }, // 1298626002
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetCharacterData__pf, "GetCharacterData" }, // 241963466
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__GetxLevelxData__pfTT, "Get Level Data" }, // 161628213
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MainMenuVisOff__pf, "MainMenuVisOff" }, // 120452200
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__MissionBriefVisOff__pf, "MissionBriefVisOff" }, // 505891089
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetCharacter__pf, "SetCharacter" }, // 3600806685
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SetxGamexState__pfTT, "Set Game State" }, // 822074729
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMainMenu__pfT, "Spawn MainMenu" }, // 669562767
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__SpawnxMissionBrief__pfT, "Spawn MissionBrief" }, // 1443688366
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__StartNewLevel__pf, "StartNewLevel" }, // 3491293287
		{ &Z_Construct_UFunction_UBP_Cavalry_GameInstance_C__pf3256655095_bpf__VerifyxActivexLevelxIndex__pfTTT, "Verify Active Level Index" }, // 1649091183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_Cavalry_GameInstance_C" },
		{ "ReplaceConverted", "/Game/HUD/Main_Menu/BP_Cavalry_GameInstance.BP_Cavalry_GameInstance_C" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LevelxData__pfT_Inner = { "bpv__LevelxData__pfT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStruc_LevelData__pf3256655095, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LevelxData__pfT_MetaData[] = {
		{ "Category", "Config" },
		{ "DisplayName", "Level Data" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Level Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LevelxData__pfT = { "Level Data", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, bpv__LevelxData__pfT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LevelxData__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LevelxData__pfT_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__GamexState__pfT_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__GamexState__pfT_MetaData[] = {
		{ "Category", "Runtime Allocation" },
		{ "DisplayName", "Game State" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Game State" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__GamexState__pfT = { "Game State", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, bpv__GamexState__pfT), Z_Construct_UEnum_NativizedAssets_E__EGameState__pf, METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__GamexState__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__GamexState__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__ActivexLevelxIndex__pfTT_MetaData[] = {
		{ "Category", "Runtime Allocation" },
		{ "DisplayName", "Active Level Index" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Active Level Index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__ActivexLevelxIndex__pfTT = { "Active Level Index", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, bpv__ActivexLevelxIndex__pfTT), METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__ActivexLevelxIndex__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__ActivexLevelxIndex__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__RootWidget__pf_MetaData[] = {
		{ "Category", "Runtime Allocation" },
		{ "DisplayName", "Root Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RootWidget" },
		{ "tooltip", "The Active high level Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__RootWidget__pf = { "RootWidget", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, bpv__RootWidget__pf), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__RootWidget__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__RootWidget__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MainMenu__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Main Menu" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MainMenu" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MainMenu__pf = { "MainMenu", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, bpv__MainMenu__pf), Z_Construct_UClass_ABP_MainMenu_Actor_C__pf3256655095_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MainMenu__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MainMenu__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MissionBrief__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Mission Brief" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MissionBrief" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MissionBrief__pf = { "MissionBrief", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, bpv__MissionBrief__pf), Z_Construct_UClass_ABP_MissionBrief_Actor_C__pf3256655095_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MissionBrief__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MissionBrief__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LoadingScreen__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Loading Screen" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LoadingScreen" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LoadingScreen__pf = { "LoadingScreen", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, bpv__LoadingScreen__pf), Z_Construct_UClass_ABP_Loading_Actor_C__pf3256655095_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LoadingScreen__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LoadingScreen__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__PlayerToSpawn__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Player to Spawn" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PlayerToSpawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__PlayerToSpawn__pf = { "PlayerToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, bpv__PlayerToSpawn__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__PlayerToSpawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__PlayerToSpawn__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__Character_Data__pf_Inner = { "bpv__Character_Data__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStruc_CharacterData__pf3256655095, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__Character_Data__pf_MetaData[] = {
		{ "Category", "Config" },
		{ "DisplayName", "Character Data" },
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Character_Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__Character_Data__pf = { "Character_Data", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, bpv__Character_Data__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__Character_Data__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__Character_Data__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Active_Level_Index__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_Cavalry_GameInstance__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Active_Level_Index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Active_Level_Index__pf = { "K2Node_CustomEvent_Active_Level_Index", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBP_Cavalry_GameInstance_C__pf3256655095, b0l__K2Node_CustomEvent_Active_Level_Index__pf), METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Active_Level_Index__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Active_Level_Index__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LevelxData__pfT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LevelxData__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__GamexState__pfT_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__GamexState__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__ActivexLevelxIndex__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__RootWidget__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MainMenu__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__MissionBrief__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__LoadingScreen__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__PlayerToSpawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__Character_Data__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_bpv__Character_Data__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::NewProp_b0l__K2Node_CustomEvent_Active_Level_Index__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_Cavalry_GameInstance_C__pf3256655095>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::ClassParams = {
		&UBP_Cavalry_GameInstance_C__pf3256655095::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/BP_Cavalry_GameInstance"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Cavalry_GameInstance_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBP_Cavalry_GameInstance_C__pf3256655095, TEXT("BP_Cavalry_GameInstance_C"), 2088448006);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBP_Cavalry_GameInstance_C__pf3256655095>()
	{
		return UBP_Cavalry_GameInstance_C__pf3256655095::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBP_Cavalry_GameInstance_C__pf3256655095(Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095, &UBP_Cavalry_GameInstance_C__pf3256655095::StaticClass, TEXT("/Game/HUD/Main_Menu/BP_Cavalry_GameInstance"), TEXT("BP_Cavalry_GameInstance_C"), true, TEXT("/Game/HUD/Main_Menu/BP_Cavalry_GameInstance"), TEXT("/Game/HUD/Main_Menu/BP_Cavalry_GameInstance.BP_Cavalry_GameInstance_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_Cavalry_GameInstance_C__pf3256655095);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
