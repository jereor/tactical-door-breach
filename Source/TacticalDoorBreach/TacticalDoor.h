#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "GameFramework/Actor.h"
#include "TacticalDoor.generated.h"

UCLASS()
class TACTICALDOORBREACH_API ATacticalDoor : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:
	ATacticalDoor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void Interact(AActor* Interactor) override;

};
