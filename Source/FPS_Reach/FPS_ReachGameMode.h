// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPS_ReachGameMode.generated.h"

/**
 *  Simple GameMode for a first person game
 */
UCLASS(abstract)
class AFPS_ReachGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFPS_ReachGameMode();
};



