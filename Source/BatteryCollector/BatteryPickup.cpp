/**
 *
 *  BatteryPickup.cpp
 *  Author: Benjamin Lo
 *  Date: 2015/11/05
 *
 */
#include "BatteryCollector.h"
#include "BatteryPickup.h"


/**
 *  Sets default values for this actor's properties
 */
ABatteryPickup::ABatteryPickup()
{
    GetMesh() 	 -> SetSimulatePhysics(true);
    _batteryPower = 150.f;
}


/**
 *	Implementation
 */
void ABatteryPickup::WasCollected_Implementation()
{
	//	Use pick up behavior
	Super::WasCollected_Implementation();
	Destroy();
}


/**
 *	Access battery power level
 */
float ABatteryPickup::GetPower()
{
	return _batteryPower;
}