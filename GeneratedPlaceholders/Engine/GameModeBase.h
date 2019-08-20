#pragma once

#include "CoreMinimal.h"
#include "GameModeBase.generated.h"

UCLASS()
class AGameModeBase : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString OptionsString;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GameSessionClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GameStateClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* PlayerControllerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* PlayerStateClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* HUDClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DefaultPawnClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* SpectatorClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ReplaySpectatorPlayerControllerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ServerStatReplicatorClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AGameSession* GameSession;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AGameStateBase* GameState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AServerStatReplicator* ServerStatReplicator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText DefaultPlayerName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseSeamlessTravel : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStartPlayersAsSpectators : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPauseable : 1;

	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
	void StartPlay();
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		bool ShouldReset(class AActor* ActorToReset);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void ReturnToMainMenuHost();
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void RestartPlayerAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void RestartPlayer(class AController* NewPlayer);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void ResetLevel();
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		bool PlayerCanRestart(class APlayerController* Player);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		bool MustSpectate(class APlayerController* NewPlayerController);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void K2_PostLogin(class APlayerController* NewPlayer);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void K2_OnRestartPlayer(class AController* NewPlayer);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void K2_OnLogout(class AController* ExitingController);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void K2_OnChangeName(class AController* Other, const struct FString& NewName, bool bNameChange);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		class AActor* K2_FindPlayerStart(class AController* Player, const struct FString& IncomingName);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void InitStartSpot(class AActor* StartSpot, class AController* NewPlayer);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void InitializeHUDForPlayer(class APlayerController* NewPlayer);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		bool HasMatchStarted();
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void HandleStartingNewPlayer(class APlayerController* NewPlayer);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		int GetNumSpectators();
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		int GetNumPlayers();
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		class UClass* GetDefaultPawnClassForController(class AController* InController);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		class AActor* FindPlayerStart(class AController* Player, const struct FString& IncomingName);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		class AActor* ChoosePlayerStart(class AController* Player);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		void ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange);
	UFUNCTION(BlueprintCallable, Category = "GameModeBase")
		bool CanSpectate(class APlayerController* Viewer, class APlayerState* ViewTarget);

};