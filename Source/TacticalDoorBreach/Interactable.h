// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

UINTERFACE(MinimalAPI)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * @brief Interface that represents an interactable object in the game.
 *
 * This interface defines a contract for objects that can be interacted
 * with in the game. Any class implementing this interface must provide
 * an implementation for the Interact method. The specific details of
 * the interaction depend on the implementing class.
 */
class TACTICALDOORBREACH_API IInteractable
{
	GENERATED_BODY()

public:
	virtual void Interact(AActor* Instigator) = 0;
};
