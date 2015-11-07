// Fill out your copyright notice in the Description page of Project Settings.

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
		void             PlayerHealth();
};
