﻿// Copyright (C) 2018 Gonçalo Marques - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UINavButton.h"
#include "UINavBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UINAVIGATION_API UUINavBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = UINavigationLibrary)
		static void SetSoundClassVolume(class USoundClass* TargetClass, float NewVolume);
	UFUNCTION(BlueprintPure, Category = UINavigationLibrary)
		static float GetSoundClassVolume(class USoundClass* TargetClass);
	
	UFUNCTION(BlueprintCallable, Category = UINavigationLibrary)
		static void SetPostProcessSettings(FString Variable, FString Value);
	UFUNCTION(BlueprintPure, Category = UINavigationLibrary)
		static FString GetPostProcessSettings(FString Variable);

	// Resets the input settings to their default state
	UFUNCTION(BlueprintCallable, Category = UINavInput)
		static void ResetInputSettings();

	// Checks whether a gamepad is connected
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = UINavigationLibrary)
		static bool IsGamepadConnected();

	// Returns the desired grid's dimension
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = UINavWidget)
		static int GetGridDimension(const FGrid Grid);

	// Returns whether the given button is valid (isn't hidden, collaped or disabled)
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = UINavWidget)
		static bool IsButtonValid(UUINavButton* Button);
	
};
