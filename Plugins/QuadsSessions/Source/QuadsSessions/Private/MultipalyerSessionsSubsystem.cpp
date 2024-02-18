// Fill out your copyright notice in the Description page of Project Settings.


#include "MultipalyerSessionsSubsystem.h"

#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Online/OnlineSessionNames.h"

UMultipalyerSessionsSubsystem::UMultipalyerSessionsSubsystem():
	CreateSessionCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreateSessionComplete)),
	FindSessionsCompleteDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnFindSessionsComplete)),
	JoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnJoinSessionComplete)),
	DestroySessionCompleteDelegate(FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnDestroySessionCompelte)),
	StartSessionCompleteDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnStartSessionComplete))
{
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem)
	{
		SessionInterface = Subsystem->GetSessionInterface();
	}
}

void UMultipalyerSessionsSubsystem::CreateSession(int32 NumPublicConnections, FString MatchType)
{
	
}

void UMultipalyerSessionsSubsystem::FindSessions(int32 MaxSearchResults)
{
	
}

void UMultipalyerSessionsSubsystem::JoinSession(const FOnlineSessionSearchResult& SearchResult)
{
	
}

void UMultipalyerSessionsSubsystem::DestroySession()
{
	
}

void UMultipalyerSessionsSubsystem::StartSession()
{
	
}

void UMultipalyerSessionsSubsystem::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
{
	
}

void UMultipalyerSessionsSubsystem::OnFindSessionsComplete(bool bWasSuccessful)
{
	
}

void UMultipalyerSessionsSubsystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	
}

void UMultipalyerSessionsSubsystem::OnDestroySessionCompelte(FName SessionName, bool bWasSuccessful)
{
	
}

void UMultipalyerSessionsSubsystem::OnStartSessionComplete(FName SessionName, bool bWasSuccessful)
{
	
}
