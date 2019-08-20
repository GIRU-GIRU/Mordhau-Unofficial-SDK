#pragma once

#include "CoreMinimal.h"
#include "MordhauSpectator.generated.h"

UCLASS()
class AMordhauSpectator : public ASpectatorPawn
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlockInputAfterDeathTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutomaticallyAsksForSpawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CreatedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastSentCameraUpdate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseSmoothedTurnValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseSmoothingTurnVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseSmoothedLookUpValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseSmoothingLookUpVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFirstTick;

	UFUNCTION(BlueprintCallable, Category = "MordhauSpectator")
	void TertiarySpectatorAction();
	UFUNCTION(BlueprintCallable, Category = "MordhauSpectator")
		void SwitchToFreeCam();
	UFUNCTION(BlueprintCallable, Category = "MordhauSpectator")
		void SecondarySpectatorAction();
	UFUNCTION(BlueprintCallable, Category = "MordhauSpectator")
		void PrimarySpectatorAction();
	UFUNCTION(BlueprintCallable, Category = "MordhauSpectator")
		bool IsWatchingOwnDeath();

};