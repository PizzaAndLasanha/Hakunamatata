// Copyright Underflow Studios 2017

#pragma once

#include "CoreMinimal.h"
#include "Dialogue.h"
#include "Blueprint/UserWidget.h"
#include "DialogueUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGUEPLUGIN_API UDialogueUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogue UI")
	bool IsConditionsMetForNode(FDialogueNode Node);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogue UI")
	void RunEventsForNode(FDialogueNode Node);
	
	//The actor this dialogue belongs to
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = ( ExposeOnSpawn = true ), Category = "Dialogue UI")
	AActor* NPCActor;
};
