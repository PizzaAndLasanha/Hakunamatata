// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AActor;
class UGameInstance;
class UObject;
struct FDialogueNode;
#ifdef DIALOGUEPLUGIN_Dialogue_generated_h
#error "Dialogue.generated.h already included, missing '#pragma once' in Dialogue.h"
#endif
#define DIALOGUEPLUGIN_Dialogue_generated_h

#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_48_GENERATED_BODY \
	friend DIALOGUEPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode(); \
	DIALOGUEPLUGIN_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_EVENT_PARMS \
	struct DialogueEvents_eventRecieveEventTriggered_Parms \
	{ \
		APlayerController* ConsideringPlayer; \
		AActor* NPCActor; \
	};


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_CALLBACK_WRAPPERS
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueEvents(); \
	friend DIALOGUEPLUGIN_API class UClass* Z_Construct_UClass_UDialogueEvents(); \
public: \
	DECLARE_CLASS(UDialogueEvents, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueEvents) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueEvents(); \
	friend DIALOGUEPLUGIN_API class UClass* Z_Construct_UClass_UDialogueEvents(); \
public: \
	DECLARE_CLASS(UDialogueEvents, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueEvents) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueEvents) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueEvents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueEvents); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueEvents(UDialogueEvents&&); \
	NO_API UDialogueEvents(const UDialogueEvents&); \
public:


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueEvents(UDialogueEvents&&); \
	NO_API UDialogueEvents(const UDialogueEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueEvents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueEvents); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueEvents)


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_9_PROLOG \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_EVENT_PARMS


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_CALLBACK_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_CALLBACK_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_RPC_WRAPPERS \
	virtual bool IsConditionMet_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execIsConditionMet) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer); \
		P_GET_OBJECT(AActor,Z_Param_NPCActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Implementation(Z_Param_ConsideringPlayer,Z_Param_NPCActor); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsConditionMet_Implementation(APlayerController* ConsideringPlayer, AActor* NPCActor); \
 \
	DECLARE_FUNCTION(execIsConditionMet) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_ConsideringPlayer); \
		P_GET_OBJECT(AActor,Z_Param_NPCActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConditionMet_Implementation(Z_Param_ConsideringPlayer,Z_Param_NPCActor); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_EVENT_PARMS \
	struct DialogueConditions_eventIsConditionMet_Parms \
	{ \
		APlayerController* ConsideringPlayer; \
		AActor* NPCActor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		DialogueConditions_eventIsConditionMet_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_CALLBACK_WRAPPERS
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueConditions(); \
	friend DIALOGUEPLUGIN_API class UClass* Z_Construct_UClass_UDialogueConditions(); \
public: \
	DECLARE_CLASS(UDialogueConditions, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueConditions) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueConditions(); \
	friend DIALOGUEPLUGIN_API class UClass* Z_Construct_UClass_UDialogueConditions(); \
public: \
	DECLARE_CLASS(UDialogueConditions, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogueConditions) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueConditions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueConditions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueConditions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueConditions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueConditions(UDialogueConditions&&); \
	NO_API UDialogueConditions(const UDialogueConditions&); \
public:


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueConditions(UDialogueConditions&&); \
	NO_API UDialogueConditions(const UDialogueConditions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueConditions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueConditions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogueConditions)


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_24_PROLOG \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_EVENT_PARMS


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_RPC_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_CALLBACK_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_INCLASS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_CALLBACK_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCleanOuter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanOuter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignPersistentOuter) \
	{ \
		P_GET_OBJECT(UGameInstance,Z_Param_inGameInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignPersistentOuter(Z_Param_inGameInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallFunctionByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDialogue::CallFunctionByName(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextNodes) \
	{ \
		P_GET_STRUCT(FDialogueNode,Z_Param_Node); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDialogueNode>*)Z_Param__Result=P_THIS->GetNextNodes(Z_Param_Node); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDialogueNode*)Z_Param__Result=P_THIS->GetFirstNode(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCleanOuter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanOuter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignPersistentOuter) \
	{ \
		P_GET_OBJECT(UGameInstance,Z_Param_inGameInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignPersistentOuter(Z_Param_inGameInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallFunctionByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDialogue::CallFunctionByName(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextNodes) \
	{ \
		P_GET_STRUCT(FDialogueNode,Z_Param_Node); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FDialogueNode>*)Z_Param__Result=P_THIS->GetNextNodes(Z_Param_Node); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDialogueNode*)Z_Param__Result=P_THIS->GetFirstNode(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend DIALOGUEPLUGIN_API class UClass* Z_Construct_UClass_UDialogue(); \
public: \
	DECLARE_CLASS(UDialogue, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogue) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUDialogue(); \
	friend DIALOGUEPLUGIN_API class UClass* Z_Construct_UClass_UDialogue(); \
public: \
	DECLARE_CLASS(UDialogue, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/DialoguePlugin"), NO_API) \
	DECLARE_SERIALIZER(UDialogue) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public:


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogue(UDialogue&&); \
	NO_API UDialogue(const UDialogue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogue)


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_79_PROLOG
#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_RPC_WRAPPERS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_INCLASS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DialoguePlugin_Source_DialoguePlugin_Public_Dialogue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
