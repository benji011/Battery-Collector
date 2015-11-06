/**
 *
 *  Pickup.h
 *  Author: Benjamin Lo
 *  Date: 2015/11/05
 *
 */
#include "BatteryCollector.h"
#include "Pickup.h"


/**
 *	Sets default values
 */
APickup::APickup()
{
	PrimaryActorTick.bCanEverTick 	= false;
	PickupMesh 						= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	RootComponent					= PickupMesh;

	// All pickups start active
	bIsActive						= true;
}


/**
 *	Called when the game starts or when spawned
 */
void APickup::BeginPlay()
{
	Super::BeginPlay();
}


/**
 *	Is pickup active
 */
bool APickup::IsActive()
{
	return bIsActive;
}


/**
 *	Set pick up to active
 */
void APickup::SetActive(bool newPickupState)
{
	bIsActive = newPickupState;
}


/**
 *	Pickup item was collected
 */
void APickup::WasCollected_Implementation()
{
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDebugString);
}





