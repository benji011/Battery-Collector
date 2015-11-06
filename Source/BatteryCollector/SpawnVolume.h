/**
 *
 *  SpawnVolume.h
 *  Author: Benjamin Lo
 *  Date: 2015/11/05
 *
 */
#pragma once

#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawnVolume();																		// 	Sets default values for this actor's properties
	virtual void 				BeginPlay() override;									// 	Called when the game starts or when spawned
	virtual void 				Tick( float DeltaSeconds ) override;					// 	Called every frame
	
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return whereToSpawn; }	//	Returns where spawn location is

	UFUNCTION(BlueprintPure, Category = "Spawning")
	FVector 					GetRandomPointInVolume();								//	Returns random point in volume as a vector

protected:
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class APickup>  whatToSpawn;											//	What to spawn

	FTimerHandle 				spawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float 						spawnDelayRangeLow;										//	Minimum spawn delay
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float 						spawnDelayRangeHigh;									//	Maximum spawn delay

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* 		whereToSpawn;											//	Box component to specific spawn location
	void 						SpawnPickup();											//	Handle spawning in the pick up
	float 						spawnDelay;												//	Delay time for the next spawn
};
