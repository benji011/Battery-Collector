// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "BatteryCollector.h"
#include "BatteryCollectorGameMode.h"
#include "CharacterHUD.h"
#include "BatteryCollectorCharacter.h"
#include "Kismet/GameplayStatics.h"

ABatteryCollectorGameMode::ABatteryCollectorGameMode()
{
	HUDClass = ACharacterHUD::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	_decayRate = 0.01f;
}

/**
 *	Update every frame
 */
void ABatteryCollectorGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ABatteryCollectorCharacter* _myCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	if ((_myCharacter) && (_myCharacter -> GetCurrentPower() >= 0))
	{
		_myCharacter -> UpdatePower(-DeltaTime * _decayRate * (_myCharacter -> GetInitialPower()));
		ReadyToChangeLevel(_myCharacter);
	}
}


/**
 *	Check if we are ready to change level
 */
template<typename T>
void ABatteryCollectorGameMode::ReadyToChangeLevel(T _myCharacter)
{
	if (_myCharacter -> GetCurrentPower() >= 900)
	{
		// TODO: maybe create a stack & pop with a collection of levels, so that when one level is completed we pop that from the stack and only load the level by its id
		if (GetWorld() -> GetName() == "CollectionLevel")
		{
			UGameplayStatics::OpenLevel(GetWorld(), TEXT("Level_02"), true, "");
		}
		else if (GetWorld() -> GetName() == "Level_02")
		{
			UGameplayStatics::OpenLevel(GetWorld(), TEXT("CollectionLevel"), true, "");
		}
	}
}