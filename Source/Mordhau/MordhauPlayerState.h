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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Kills;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Team;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Rank;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauCharacter>            LastMordhauCharacter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsAdmin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsMuted;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsAlive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
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
