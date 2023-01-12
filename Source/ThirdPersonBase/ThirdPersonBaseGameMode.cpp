// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonBaseGameMode.h"
#include "ThirdPersonBaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonBaseGameMode::AThirdPersonBaseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
