// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Start_Mission_Breif__pf3256655095.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStart_Mission_Breif__pf3256655095() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_PlayerSelect_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStart_Mission_Breif_C__pf3256655095::execbpf__SelectxPlayer__pfT)
	{
		P_GET_OBJECT(UClass,Z_Param_bpp__PlayerInput__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SelectxPlayer__pfT(Z_Param_bpp__PlayerInput__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStart_Mission_Breif_C__pf3256655095::execbpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
		P_NATIVE_END;
	}
	static FName NAME_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT = FName(TEXT("Select Player"));
	void UStart_Mission_Breif_C__pf3256655095::eventbpf__SelectxPlayer__pfT(UClass* bpp__PlayerInput__pf)
	{
		Start_Mission_Breif_C__pf3256655095_eventbpf__SelectxPlayer__pfT_Parms Parms;
		Parms.bpp__PlayerInput__pf=bpp__PlayerInput__pf;
		ProcessEvent(FindFunctionChecked(NAME_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT),&Parms);
	}
	void UStart_Mission_Breif_C__pf3256655095::StaticRegisterNativesUStart_Mission_Breif_C__pf3256655095()
	{
		UClass* Class = UStart_Mission_Breif_C__pf3256655095::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature", &UStart_Mission_Breif_C__pf3256655095::execbpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf },
			{ "Select Player", &UStart_Mission_Breif_C__pf3256655095::execbpf__SelectxPlayer__pfT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Start_Mission_Breif__pf3256655095.h" },
		{ "OverrideNativeName", "BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095, nullptr, "BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__PlayerInput__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::NewProp_bpp__PlayerInput__pf = { "bpp__PlayerInput__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Start_Mission_Breif_C__pf3256655095_eventbpf__SelectxPlayer__pfT_Parms, bpp__PlayerInput__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::NewProp_bpp__PlayerInput__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Start_Mission_Breif__pf3256655095.h" },
		{ "OverrideNativeName", "Select Player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095, nullptr, "Select Player", nullptr, nullptr, sizeof(Start_Mission_Breif_C__pf3256655095_eventbpf__SelectxPlayer__pfT_Parms), Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT()
	{
		UObject* Outer = Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Select Player" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_NoRegister()
	{
		return UStart_Mission_Breif_C__pf3256655095::StaticClass();
	}
	struct Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StartGame__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StartGame__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_PlayerInput__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_b0l__K2Node_Event_PlayerInput__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Set_Game_State_Success___pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_Set_Game_State_Success___pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_Set_Game_State_Success___pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf, "BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature" }, // 3499954607
		{ &Z_Construct_UFunction_UStart_Mission_Breif_C__pf3256655095_bpf__SelectxPlayer__pfT, "Select Player" }, // 159591321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Start_Mission_Breif__pf3256655095.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Start_Mission_Breif__pf3256655095.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Start_Mission_Breif_C" },
		{ "ReplaceConverted", "/Game/HUD/Main_Menu/Start_Mission_Breif.Start_Mission_Breif_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_bpv__StartGame__pf_MetaData[] = {
		{ "Category", "Start_Mission_Breif" },
		{ "DisplayName", "Start Game" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Start_Mission_Breif__pf3256655095.h" },
		{ "OverrideNativeName", "StartGame" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_bpv__StartGame__pf = { "StartGame", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStart_Mission_Breif_C__pf3256655095, bpv__StartGame__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_bpv__StartGame__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_bpv__StartGame__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Start_Mission_Breif__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_Event_PlayerInput" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf = { "K2Node_Event_PlayerInput", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStart_Mission_Breif_C__pf3256655095, b0l__K2Node_Event_PlayerInput__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Start_Mission_Breif__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBP_Cavalry_Game_Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf = { "K2Node_DynamicCast_AsBP_Cavalry_Game_Instance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStart_Mission_Breif_C__pf3256655095, b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf), Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Start_Mission_Breif__pf3256655095.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((UStart_Mission_Breif_C__pf3256655095*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStart_Mission_Breif_C__pf3256655095), &Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Set_Game_State_Success___pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Start_Mission_Breif__pf3256655095.h" },
		{ "OverrideNativeName", "CallFunc_Set_Game_State_Success_" },
	};
#endif
	void Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Set_Game_State_Success___pf_SetBit(void* Obj)
	{
		((UStart_Mission_Breif_C__pf3256655095*)Obj)->b0l__CallFunc_Set_Game_State_Success___pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Set_Game_State_Success___pf = { "CallFunc_Set_Game_State_Success_", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStart_Mission_Breif_C__pf3256655095), &Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Set_Game_State_Success___pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Set_Game_State_Success___pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Set_Game_State_Success___pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_bpv__StartGame__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::NewProp_b0l__CallFunc_Set_Game_State_Success___pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_PlayerSelect_C_NoRegister, (int32)VTABLE_OFFSET(UStart_Mission_Breif_C__pf3256655095, IBPI_PlayerSelect_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStart_Mission_Breif_C__pf3256655095>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::ClassParams = {
		&UStart_Mission_Breif_C__pf3256655095::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Main_Menu/Start_Mission_Breif"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Start_Mission_Breif_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UStart_Mission_Breif_C__pf3256655095, TEXT("Start_Mission_Breif_C"), 397777020);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UStart_Mission_Breif_C__pf3256655095>()
	{
		return UStart_Mission_Breif_C__pf3256655095::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStart_Mission_Breif_C__pf3256655095(Z_Construct_UClass_UStart_Mission_Breif_C__pf3256655095, &UStart_Mission_Breif_C__pf3256655095::StaticClass, TEXT("/Game/HUD/Main_Menu/Start_Mission_Breif"), TEXT("Start_Mission_Breif_C"), true, TEXT("/Game/HUD/Main_Menu/Start_Mission_Breif"), TEXT("/Game/HUD/Main_Menu/Start_Mission_Breif.Start_Mission_Breif_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStart_Mission_Breif_C__pf3256655095);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
