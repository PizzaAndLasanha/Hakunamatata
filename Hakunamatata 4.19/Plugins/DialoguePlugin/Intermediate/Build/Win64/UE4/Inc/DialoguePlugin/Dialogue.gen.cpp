// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Dialogue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue() {}
// Cross Module References
	DIALOGUEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
	UPackage* Z_Construct_UPackage__Script_DialoguePlugin();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueConditions_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueEvents_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueEvents();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogueConditions();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogueConditions_IsConditionMet();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
	DIALOGUEPLUGIN_API UClass* Z_Construct_UClass_UDialogue();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_AssignPersistentOuter();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_CallFunctionByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_CleanOuter();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_GetFirstNode();
	DIALOGUEPLUGIN_API UFunction* Z_Construct_UFunction_UDialogue_GetNextNodes();
// End Cross Module References
class UScriptStruct* FDialogueNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIALOGUEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDialogueNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueNode, Z_Construct_UPackage__Script_DialoguePlugin(), TEXT("DialogueNode"), sizeof(FDialogueNode), Get_Z_Construct_UScriptStruct_FDialogueNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueNode(FDialogueNode::StaticStruct, TEXT("/Script/DialoguePlugin"), TEXT("DialogueNode"), false, nullptr, nullptr);
static struct FScriptStruct_DialoguePlugin_StaticRegisterNativesFDialogueNode
{
	FScriptStruct_DialoguePlugin_StaticRegisterNativesFDialogueNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueNode")),new UScriptStruct::TCppStructOps<FDialogueNode>);
	}
} ScriptStruct_DialoguePlugin_StaticRegisterNativesFDialogueNode;
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_DialoguePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueNode"), sizeof(FDialogueNode), Get_Z_Construct_UScriptStruct_FDialogueNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueWave = { UE4CodeGen_Private::EPropertyClass::Object, "DialogueWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDialogueNode, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(NewProp_DialogueWave_MetaData, ARRAY_COUNT(NewProp_DialogueWave_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDialogueNode, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions = { UE4CodeGen_Private::EPropertyClass::Array, "Conditions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010009, 1, nullptr, STRUCT_OFFSET(FDialogueNode, Conditions), METADATA_PARAMS(NewProp_Conditions_MetaData, ARRAY_COUNT(NewProp_Conditions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Conditions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UDialogueConditions_NoRegister, METADATA_PARAMS(NewProp_Conditions_Inner_MetaData, ARRAY_COUNT(NewProp_Conditions_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events = { UE4CodeGen_Private::EPropertyClass::Array, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000010009, 1, nullptr, STRUCT_OFFSET(FDialogueNode, Events), METADATA_PARAMS(NewProp_Events_MetaData, ARRAY_COUNT(NewProp_Events_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_Inner_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Events_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UDialogueEvents_NoRegister, METADATA_PARAMS(NewProp_Events_Inner_MetaData, ARRAY_COUNT(NewProp_Events_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDialogueNode, Coordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Coordinates_MetaData, ARRAY_COUNT(NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links = { UE4CodeGen_Private::EPropertyClass::Array, "Links", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDialogueNode, Links), METADATA_PARAMS(NewProp_Links_MetaData, ARRAY_COUNT(NewProp_Links_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Links_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Links", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
				{ "ToolTip", "Todo: Make this more adjustable, allow variables in text. Allow text to be colored differently, etc." },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDialogueNode, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPlayer_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			auto NewProp_isPlayer_SetBit = [](void* Obj){ ((FDialogueNode*)Obj)->isPlayer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "isPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDialogueNode), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isPlayer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isPlayer_MetaData, ARRAY_COUNT(NewProp_isPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[] = {
				{ "Category", "Dialogue Node" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_id = { UE4CodeGen_Private::EPropertyClass::Int, "id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FDialogueNode, id), METADATA_PARAMS(NewProp_id_MetaData, ARRAY_COUNT(NewProp_id_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueWave,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Conditions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Conditions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Links,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Links_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_id,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DialogueNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FDialogueNode),
				alignof(FDialogueNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueNode_CRC() { return 2191794366U; }
	static FName NAME_UDialogueEvents_RecieveEventTriggered = FName(TEXT("RecieveEventTriggered"));
	void UDialogueEvents::RecieveEventTriggered(APlayerController* ConsideringPlayer, AActor* NPCActor)
	{
		DialogueEvents_eventRecieveEventTriggered_Parms Parms;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.NPCActor=NPCActor;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueEvents_RecieveEventTriggered),&Parms);
	}
	void UDialogueEvents::StaticRegisterNativesUDialogueEvents()
	{
	}
	UFunction* Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCActor = { UE4CodeGen_Private::EPropertyClass::Object, "NPCActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DialogueEvents_eventRecieveEventTriggered_Parms, NPCActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "ConsideringPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DialogueEvents_eventRecieveEventTriggered_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConsideringPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Dialogue Condition" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
				{ "ToolTip", "Called when the event is triggered.\nReturn bool if you're on 4.16, because void crashes." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueEvents, "RecieveEventTriggered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(DialogueEvents_eventRecieveEventTriggered_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueEvents_NoRegister()
	{
		return UDialogueEvents::StaticClass();
	}
	UClass* Z_Construct_UClass_UDialogueEvents()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDialogueEvents_RecieveEventTriggered, "RecieveEventTriggered" }, // 2698716851
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "Default" },
				{ "BlueprintType", "true" },
				{ "HideCategories", "DoNotShow" },
				{ "IncludePath", "Dialogue.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
				{ "ToolTip", "Extend this class to add custom events" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDialogueEvents>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDialogueEvents::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueEvents, 149283812);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueEvents(Z_Construct_UClass_UDialogueEvents, &UDialogueEvents::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UDialogueEvents"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueEvents);
	static FName NAME_UDialogueConditions_IsConditionMet = FName(TEXT("IsConditionMet"));
	bool UDialogueConditions::IsConditionMet(APlayerController* ConsideringPlayer, AActor* NPCActor)
	{
		DialogueConditions_eventIsConditionMet_Parms Parms;
		Parms.ConsideringPlayer=ConsideringPlayer;
		Parms.NPCActor=NPCActor;
		ProcessEvent(FindFunctionChecked(NAME_UDialogueConditions_IsConditionMet),&Parms);
		return !!Parms.ReturnValue;
	}
	void UDialogueConditions::StaticRegisterNativesUDialogueConditions()
	{
		UClass* Class = UDialogueConditions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsConditionMet", &UDialogueConditions::execIsConditionMet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDialogueConditions_IsConditionMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((DialogueConditions_eventIsConditionMet_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DialogueConditions_eventIsConditionMet_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPCActor = { UE4CodeGen_Private::EPropertyClass::Object, "NPCActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DialogueConditions_eventIsConditionMet_Parms, NPCActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsideringPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "ConsideringPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DialogueConditions_eventIsConditionMet_Parms, ConsideringPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConsideringPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Dialogue Condition" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueConditions, "IsConditionMet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(DialogueConditions_eventIsConditionMet_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogueConditions_NoRegister()
	{
		return UDialogueConditions::StaticClass();
	}
	UClass* Z_Construct_UClass_UDialogueConditions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDialogueConditions_IsConditionMet, "IsConditionMet" }, // 11537618
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "Default" },
				{ "BlueprintType", "true" },
				{ "HideCategories", "DoNotShow" },
				{ "IncludePath", "Dialogue.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
				{ "ToolTip", "Extend this class to add custom conditions." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
				{ "ModuleRelativePath", "Public/Dialogue.h" },
				{ "ToolTip", "It is assigned in DialogueUserWidget.cpp just before calling IsConditionMet()" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UDialogueConditions, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_World_MetaData, ARRAY_COUNT(NewProp_World_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDialogueConditions>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDialogueConditions::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
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
	IMPLEMENT_CLASS(UDialogueConditions, 2675722380);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueConditions(Z_Construct_UClass_UDialogueConditions, &UDialogueConditions::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UDialogueConditions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueConditions);
	void UDialogue::StaticRegisterNativesUDialogue()
	{
		UClass* Class = UDialogue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignPersistentOuter", &UDialogue::execAssignPersistentOuter },
			{ "CallFunctionByName", &UDialogue::execCallFunctionByName },
			{ "CleanOuter", &UDialogue::execCleanOuter },
			{ "GetFirstNode", &UDialogue::execGetFirstNode },
			{ "GetNextNodes", &UDialogue::execGetNextNodes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDialogue_AssignPersistentOuter()
	{
		struct Dialogue_eventAssignPersistentOuter_Parms
		{
			UGameInstance* inGameInstance;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inGameInstance = { UE4CodeGen_Private::EPropertyClass::Object, "inGameInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Dialogue_eventAssignPersistentOuter_Parms, inGameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inGameInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, "AssignPersistentOuter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Dialogue_eventAssignPersistentOuter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDialogue_CallFunctionByName()
	{
		struct Dialogue_eventCallFunctionByName_Parms
		{
			UObject* Object;
			FString FunctionName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName = { UE4CodeGen_Private::EPropertyClass::Str, "FunctionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Dialogue_eventCallFunctionByName_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Dialogue_eventCallFunctionByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Object,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, "CallFunctionByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(Dialogue_eventCallFunctionByName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDialogue_CleanOuter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, "CleanOuter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDialogue_GetFirstNode()
	{
		struct Dialogue_eventGetFirstNode_Parms
		{
			FDialogueNode ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000580, 1, nullptr, STRUCT_OFFSET(Dialogue_eventGetFirstNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, "GetFirstNode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Dialogue_eventGetFirstNode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDialogue_GetNextNodes()
	{
		struct Dialogue_eventGetNextNodes_Parms
		{
			FDialogueNode Node;
			TArray<FDialogueNode> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000580, 1, nullptr, STRUCT_OFFSET(Dialogue_eventGetNextNodes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Struct, "Node", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(Dialogue_eventGetNextNodes_Parms, Node), Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Node,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogue, "GetNextNodes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Dialogue_eventGetNextNodes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogue_NoRegister()
	{
		return UDialogue::StaticClass();
	}
	UClass* Z_Construct_UClass_UDialogue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_DialoguePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDialogue_AssignPersistentOuter, "AssignPersistentOuter" }, // 2924301257
				{ &Z_Construct_UFunction_UDialogue_CallFunctionByName, "CallFunctionByName" }, // 1225289568
				{ &Z_Construct_UFunction_UDialogue_CleanOuter, "CleanOuter" }, // 2348221077
				{ &Z_Construct_UFunction_UDialogue_GetFirstNode, "GetFirstNode" }, // 182676227
				{ &Z_Construct_UFunction_UDialogue_GetNextNodes, "GetNextNodes" }, // 2584329949
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Dialogue.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentGameInstance_MetaData[] = {
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersistentGameInstance = { UE4CodeGen_Private::EPropertyClass::Object, "PersistentGameInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UDialogue, PersistentGameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(NewProp_PersistentGameInstance_MetaData, ARRAY_COUNT(NewProp_PersistentGameInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextNodeId_MetaData[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
				{ "ToolTip", "don't remove uproperty here" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextNodeId = { UE4CodeGen_Private::EPropertyClass::Int, "NextNodeId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UDialogue, NextNodeId), METADATA_PARAMS(NewProp_NextNodeId_MetaData, ARRAY_COUNT(NewProp_NextNodeId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UDialogue, Data), METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Text, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDialogue, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayIdleSplines_MetaData[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/Dialogue.h" },
			};
#endif
			auto NewProp_DisplayIdleSplines_SetBit = [](void* Obj){ ((UDialogue*)Obj)->DisplayIdleSplines = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayIdleSplines = { UE4CodeGen_Private::EPropertyClass::Bool, "DisplayIdleSplines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDialogue), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DisplayIdleSplines_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DisplayIdleSplines_MetaData, ARRAY_COUNT(NewProp_DisplayIdleSplines_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PersistentGameInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NextNodeId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayIdleSplines,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDialogue>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDialogue::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UDialogue, 282734708);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogue(Z_Construct_UClass_UDialogue, &UDialogue::StaticClass, TEXT("/Script/DialoguePlugin"), TEXT("UDialogue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
