/**
 *
 *  CharacterHUD.h
 *  Author: Benjamin Lo
 *  Date: 2015/11/08
 *
 */
#pragma once

#include "GameFramework/HUD.h"
#include "CharacterHUD.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ACharacterHUD : public AHUD
{
    GENERATED_BODY()
	public:
		ACharacterHUD();
  
		UPROPERTY()
		UFont*           _HUDFont;

		virtual void     DrawHUD() override;
 
	private:
		void             PlayerHealth();		//	Get players health to display in the HUD
		void 			 GameOver();			//	Game Over
};
