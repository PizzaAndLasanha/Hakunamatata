// Copyright Underflow Studios 2017

#include "DialogueUserWidget.h"
#include "Dialogue.h"

bool UDialogueUserWidget::IsConditionsMetForNode_Implementation(FDialogueNode Node)
{
	for (UDialogueConditions* Condition : Node.Conditions)
	{
		if (IsValid(Condition))
		{		
			if (!Condition->IsConditionMet(GetOwningPlayer(), NPCActor))
			{
				return false;
			}
		}
	}
	return true;
}

void UDialogueUserWidget::RunEventsForNode_Implementation(FDialogueNode Node)
{
	for (UDialogueEvents* Event : Node.Events)
	{
		if (IsValid(Event))
		{
			Event->RecieveEventTriggered(GetOwningPlayer(), NPCActor);
		}
	}
}
