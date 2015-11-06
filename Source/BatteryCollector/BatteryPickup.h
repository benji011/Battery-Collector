/**
 *
 *  BatteryPickup.h
 *  Author: Benjamin Lo
 *  Date: 2015/11/05
 *
 */
#pragma once

#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
    
public:
    ABatteryPickup();      									// 	Sets default values for this actor's properties
    void 		WasCollected_Implementation() override;		//	Implementation

    float 		GetPower(); 								//	Access battery power level

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float 		_batteryPower;								//	Set the amount the battery power gives to the character

};
