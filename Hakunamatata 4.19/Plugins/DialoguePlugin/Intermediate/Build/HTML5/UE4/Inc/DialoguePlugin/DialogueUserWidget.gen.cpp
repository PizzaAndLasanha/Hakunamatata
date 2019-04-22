// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DialogueUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueUserWidget() {}
// Cross Module References
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueUserWidget_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DialoguePlugin();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode();
	DIALOGUEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_UDialogueUserWidget_IsConditionsMetForNode = FName(TEXT("IsConditionsMetForNode"));
	bool UDialogueUserWidget::IsConditionsMetForNode(FDialogueNode Node)
	{
		DialogueUserWidget_eventIsConditionsMetForNode_Parms Parms;
		Parms.Node=Node;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueUserWidget_IsConditionsMetForNode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UDialogueUserWidget_RunEventsForNode = FName(TEXT("RunEventsForNode"));
	void UDialogueUserWidget::RunEventsForNode(FDialogueNode Node)
	{
		DialogueUserWidget_eventRunEventsForNode_Parms Parms;
		Parms.Node=Node;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueUserWidget_RunEventsForNode),&Parms);
	}
	void UDialogueUserWidget::StaticRegisterNativesUDialogueUserWidget()
	{
		UClass* Class = UDialogueUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsConditionsMetForNode", &UDialogueUserWidget::execIsConditionsMetForNode },
			{ "RunEventsForNode", &UDialogueUserWidget::execRunEventsForNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((DialogueUserWidget_eventIsConditionsMetForNode_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DialogueUserWidget_eventIsConditionsMetForNode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Struct, "Node", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(DialogueUserWidget_eventIsConditionsMetForNode_Parms, Node), Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Node,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Dialogue UI" },
				{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, "IsConditionsMetForNode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(DialogueUserWidget_eventIsConditionsMetForNode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Struct, "Node", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(DialogueUserWidget_eventRunEventsForNode_Parms, Node), Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Node,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Dialogue UI" },
				{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, "RunEventsForNode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(DialogueUserWidget_eventRunEventsForNode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueUserWidget_NoRegister()
	{
		return UDialogueUserWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UDialogueUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDialogueUserWidget_IsConditionsMetForNode, "IsConditionsMetForNode" }, // 2726661120
				{ &Z_Construct_UFunction_UDialogueUserWidget_RunEventsForNode, "RunEventsForNode" }, // 1894372901
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DialogueUserWidget.h" },
				{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCActor_MetaData[] = {
				{ "Category", "Dialogue UI" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
				{ "ToolTip", "The actor this dialogue belongs to" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCActor = { UE4CodeGen_Private::EPropertyClass::Object, "NPCActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UDialogueUserWidget, NPCActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_NPCActor_MetaData, ARRAY_COUNT(NewProp_NPCActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCActor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDialogueUserWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDialogueUserWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueUserWidget, 2026977392);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueUserWidget(Z_Construct_UClass_UDialogueUserWidget, &UDialogueUserWidget::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UDialogueUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
