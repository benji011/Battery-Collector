/**
 *
 *  Pickup.h
 *  Author: Benjamin Lo
 *  Date: 2015/11/05
 *
 */
#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickup : public AActor
{
	GENERATED_BODY()
	
public:
	APickup();                                              										// 	Sets default values for this actor's properties
	virtual 	void 			BeginPlay() override;                        						// 	Called when the game starts or when spawned
	FORCEINLINE class 			UStaticMeshComponent* GetMesh() const { return PickupMesh; }		// 	Return the mesh for the pickup

	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool 						IsActive();															//	Is pickup active

	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void						SetActive(bool newPickupState);										//	Set pick up to active

	UFUNCTION(BlueprintNativeEvent, Category = "Pickup")
	void 						WasCollected();														//	Pick up has been collected
	virtual void 				WasCollected_Implementation();										//	Pickup item was collected

protected:
	bool 						bIsActive;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", Meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PickupMesh;															//	Static mesh to represent pick up in the level
};
