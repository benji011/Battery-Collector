// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "BatteryCollectorGameMode.generated.h"

UENUM(BlueprintType)
enum class EBatteryPlayState
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

UCLASS(minimalapi)
class ABatteryCollectorGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ABatteryCollectorGameMode();
	virtual void 	Tick(float DeltaTime) override;										//	Update every frame
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power")
	float 			_decayRate;															//	Rate at which player loses character

private:

	EBatteryPlayState CurrentState();													//	Current state
	template<typename T>
	void 			ReadyToChangeLevel(T _myCharacter);		//	Check if we are ready to change level
};



