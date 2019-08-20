#pragma once

#include "CoreMinimal.h"
#include "GameInstance.generated.h"

UCLASS()
class UGameInstance : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULocalPlayer*> LocalPlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UOnlineSession* OnlineSession;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> ReferencedObjects;

	UFUNCTION(BlueprintCallable, Category = "GameInstance")
	void ReceiveShutdown();
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
		void ReceiveInit();
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
		void HandleTravelError(TEnumAsByte<ETravelFailure> FailureType);
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
		void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
		void DebugRemovePlayer(int ControllerId);
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
		void DebugCreatePlayer(int ControllerId);

};