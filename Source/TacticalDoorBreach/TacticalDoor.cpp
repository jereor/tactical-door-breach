#include "TacticalDoor.h"

ATacticalDoor::ATacticalDoor()
{
 	PrimaryActorTick.bCanEverTick = true;

}

void ATacticalDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATacticalDoor::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATacticalDoor::Interact(AActor* Interactor)
{
	// TODO: open the door, play a sound, etc.
	UE_LOG(LogTemp, Warning, TEXT("Door opened!"));
}

