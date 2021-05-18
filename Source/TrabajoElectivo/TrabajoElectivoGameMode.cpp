// Copyright Epic Games, Inc. All Rights Reserved.

#include "TrabajoElectivoGameMode.h"
#include "TrabajoElectivoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrabajoElectivoGameMode::ATrabajoElectivoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
