/**
 *
 *  SpawnVolume.cpp
 *  Author: Benjamin Lo
 *  Date: 2015/11/05
 *
 */
#include "BatteryCollector.h"
#include "SpawnVolume.h"
#include "Kismet/KismetMathLibrary.h"
#include "Pickup.h"


/**
 *	Sets default values
 */
ASpawnVolume::ASpawnVolume()
{
	PrimaryActorTick.bCanEverTick 	= true;

	// Create box component for spawn location
	whereToSpawn 					= CreateDefaultSubobject<UBoxComponent>(TEXT("whereToSpawn"));
	RootComponent 					= whereToSpawn;

	// Spawn delay range
	spawnDelayRangeLow 				= 1.0f;
	spawnDelayRangeHigh 			= 4.5f;
}


/**
 *	Called when the game starts or when spawned
 */
void ASpawnVolume::BeginPlay()
{
	Super::BeginPlay();
	spawnDelay = FMath::FRandRange(spawnDelayRangeLow, spawnDelayRangeHigh);
	GetWorldTimerManager().SetTimer(spawnTimer, this, &ASpawnVolume::SpawnPickup, spawnDelay, false);
}


/**
 *	Called every frame
 */
void ASpawnVolume::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


/**
 *	Returns random point in volume as a vector
 */
FVector ASpawnVolume::GetRandomPointInVolume()
{
	FVector spawnOrigin = whereToSpawn -> Bounds.Origin;
	FVector spawnExtent = whereToSpawn -> Bounds.BoxExtent;

	return UKismetMathLibrary::RandomPointInBoundingBox(spawnOrigin, spawnExtent);
}


/**
 *	Handle spawning in the pick up
 */
void ASpawnVolume::SpawnPickup()
{
	// if set to spawn
	if (whatToSpawn != NULL)
	{
		// check if world is valid
		UWorld* const world = GetWorld();
		if (world)
		{
			// set spawn parameters
			FActorSpawnParameters 		spawnParams;
			spawnParams.Owner 		= 	this;
			spawnParams.Instigator 	= 	Instigator;

			FVector 	spawnLocation = GetRandomPointInVolume();		// 	Get random location to spawn at
			FRotator 	spawnRotation;									//	Get spawn rotation

			spawnRotation.Yaw 	= FMath::FRand() * 360.f;
			spawnRotation.Pitch = FMath::FRand() * 360.f;
			spawnRotation.Roll 	= FMath::FRand() * 360.f;

			// spawn the pick up
			APickup* const spawnedPickup = world -> SpawnActor<APickup>(whatToSpawn, spawnLocation, spawnRotation, spawnParams);

			spawnDelay = FMath::FRandRange(spawnDelayRangeLow, spawnDelayRangeHigh);
			GetWorldTimerManager().SetTimer(spawnTimer, this, &ASpawnVolume::SpawnPickup, spawnDelay, false);
		}
	}
}


