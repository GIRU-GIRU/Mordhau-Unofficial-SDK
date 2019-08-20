#pragma once

#include "CoreMinimal.h"
#include "PlayerState.generated.h"

UCLASS()
class APlayerState : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Score;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Ping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString PlayerName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PlayerId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsSpectator : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOnlySpectator : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsABot : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData02 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsInactive : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFromPreviousLevel : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* EngineMessageClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString SavedNetworkAddress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FUniqueNetIdRepl UniqueId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString PlayerNamePrivate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldUpdateReplicatedPing;

	UFUNCTION(BlueprintCallable, Category = "PlayerState")
	void ReceiveOverrideWith(class APlayerState* OldPlayerState);
	UFUNCTION(BlueprintCallable, Category = "PlayerState")
		void ReceiveCopyProperties(class APlayerState* NewPlayerState);
	UFUNCTION(BlueprintCallable, Category = "PlayerState")
		void OnRep_UniqueId();
	UFUNCTION(BlueprintCallable, Category = "PlayerState")
		void OnRep_Score();
	UFUNCTION(BlueprintCallable, Category = "PlayerState")
		void OnRep_PlayerName();
	UFUNCTION(BlueprintCallable, Category = "PlayerState")
		void OnRep_PlayerId();
	UFUNCTION(BlueprintCallable, Category = "PlayerState")
		void OnRep_bIsInactive();
	UFUNCTION(BlueprintCallable, Category = "PlayerState")
		struct FString GetPlayerName();

};