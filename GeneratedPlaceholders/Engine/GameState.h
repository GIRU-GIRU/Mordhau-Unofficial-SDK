#pragma once

#include "CoreMinimal.h"
#include "GameState.generated.h"

UCLASS()
class AGameState : public AGameStateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MatchState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PreviousMatchState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ElapsedTime;

	UFUNCTION(BlueprintCallable, Category = "GameState")
	void OnRep_MatchState();
	UFUNCTION(BlueprintCallable, Category = "GameState")
		void OnRep_ElapsedTime();

};