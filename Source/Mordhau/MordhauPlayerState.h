// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MordhauCharacter.h"
#include "MordhauPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int Kills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int Team;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int Rank;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauCharacter>            LastMordhauCharacter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsAdmin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsMuted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsAlive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsFriend;		
	UFUNCTION(BlueprintCallable, Category = "tmpcategoryPS")
	void OnRep_Team();									
	UFUNCTION(BlueprintCallable, Category = "tmpcategoryPS")
	void OnRep_Kills();								
	UFUNCTION(BlueprintCallable, Category = "tmpcategoryPS")
	void OnRep_DeathsAndFlags();						
	UFUNCTION(BlueprintCallable, Category = "tmpcategoryPS")
	void OnRep_Assists();								
	UFUNCTION(BlueprintCallable, Category = "tmpcategoryPS")
	void AddScore(int Amount);
	UFUNCTION(BlueprintCallable, Category = "tmpcategoryPS")
	void AddKills(int Amount);
	UFUNCTION(BlueprintCallable, Category = "tmpcategoryPS")
	void AddDeaths(int Amount);
	UFUNCTION(BlueprintCallable, Category = "tmpcategoryPS")
	void AddAssists(int Amount);
};
