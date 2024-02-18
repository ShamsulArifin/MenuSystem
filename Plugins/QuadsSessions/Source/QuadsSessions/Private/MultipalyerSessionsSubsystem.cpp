// Fill out your copyright notice in the Description page of Project Settings.


#include "MultipalyerSessionsSubsystem.h"

#include "OnlineSubsystem.h"

UMultipalyerSessionsSubsystem::UMultipalyerSessionsSubsystem()
{
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem)
	{
		SessionInterface = Subsystem->GetSessionInterface();
	}
}
