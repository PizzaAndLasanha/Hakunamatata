// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/DialogueFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueFactory() {}
// Cross Module References
	DIALOGUEPLUGINEDITOR_API UClass* Z_Construct_UClass_UDialogueFactory_NoRegister();
	DIALOGUEPLUGINEDITOR_API UClass* Z_Construct_UClass_UDialogueFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DialoguePluginEditor();
// End Cross Module References
	void UDialogueFactory::StaticRegisterNativesUDialogueFactory()
	{
	}
	UClass* Z_Construct_UClass_UDialogueFactory_NoRegister()
	{
		return UDialogueFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UDialogueFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UFactory,
				(UObject* (*)())Z_Construct_UPackage__Script_DialoguePluginEditor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "DialogueFactory.h" },
				{ "ModuleRelativePath", "Private/DialogueFactory.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDialogueFactory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDialogueFactory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UDialogueFactory, 3893617302);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueFactory(Z_Construct_UClass_UDialogueFactory, &UDialogueFactory::StaticClass, TEXT("/Script/DialoguePluginEditor"), TEXT("UDialogueFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
