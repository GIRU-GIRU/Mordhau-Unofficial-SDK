#pragma once

#include "CoreMinimal.h"
#include "GameStateBase.generated.h"

UCLASS()
class AGameStateBase : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GameModeClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AGameModeBase* AuthorityGameMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* SpectatorClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class APlayerState*> PlayerArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bReplicatedHasBegunPlay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReplicatedWorldTimeSeconds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ServerWorldTimeSecondsDelta;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ServerWorldTimeSecondsUpdateFrequency;

	UFUNCTION(BlueprintCallable, Category = "GameStateBase")
	void OnRep_SpectatorClass();
	UFUNCTION(BlueprintCallable, Category = "GameStateBase")
		void OnRep_ReplicatedWorldTimeSeconds();
	UFUNCTION(BlueprintCallable, Category = "GameStateBase")
		void OnRep_ReplicatedHasBegunPlay();
	UFUNCTION(BlueprintCallable, Category = "GameStateBase")
		void OnRep_GameModeClass();
	UFUNCTION(BlueprintCallable, Category = "GameStateBase")
		bool HasMatchStarted();
	UFUNCTION(BlueprintCallable, Category = "GameStateBase")
		bool HasBegunPlay();
	UFUNCTION(BlueprintCallable, Category = "GameStateBase")
		float GetServerWorldTimeSeconds();
	UFUNCTION(BlueprintCallable, Category = "GameStateBase")
		float GetPlayerStartTime(class AController* Controller);
	UFUNCTION(BlueprintCallable, Category = "GameStateBase")
		float GetPlayerRespawnDelay(class AController* Controller);

};