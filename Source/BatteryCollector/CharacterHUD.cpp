/**
 *
 *  CharacterHUD.cpp
 *  Author: Benjamin Lo
 *  Date: 2015/11/08
 *
 */
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
	GameOver();
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


/**
 *	Game Over
 */
void ACharacterHUD::GameOver()
{
	const FVector2D _center( Canvas -> ClipX * 0.5f, Canvas -> ClipY * 0.5f);
	ABatteryCollectorCharacter* 	_myCharacter 		= 	Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	FString 						_gameOverStr 	=   FString::Printf(TEXT("GAME OVER"));
	
	if (_myCharacter -> GetGameOverFlag() == true)
	{
		DrawText(_gameOverStr, FColor::White, _center.X, _center.Y, _HUDFont);
	}
}