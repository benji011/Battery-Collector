// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "CharacterHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "BatteryCollectorCharacter.h"
#include "Engine.h"
#include "kismet/GameplayStatics.h"

/**
*    constructor
*/
ACharacterHUD::ACharacterHUD()
{
	static ConstructorHelpers::FObjectFinder<UFont> HUDFontOb(TEXT("/Engine/EngineFonts/RobotoDistanceField"));
	_HUDFont = HUDFontOb.Object;
}


/**
*    Draw the HUD by overriding DrawHUD
*/
void ACharacterHUD::DrawHUD()
{
	Super::DrawHUD();
	PlayerHealth();
}


/**
*    Get players health to display in the HUD
*/
void ACharacterHUD::PlayerHealth()
{
	// Get the players health
	ABatteryCollectorCharacter* 	_myCharacter 	= 	Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	FString 						_healthString 	=   FString::Printf(TEXT("Power Lvl : [ %1.f ]"), FMath::Abs(_myCharacter -> GetCurrentPower()));
	
	DrawText(_healthString, FColor::White, 50, 50, _HUDFont);
}