// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "MultipalyerSessionsSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class QUADSSESSIONS_API UMultipalyerSessionsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMultipalyerSessionsSubsystem();
protected:

private:
	IOnlineSessionPtr SessionInterface;
};
