#pragma once

#include "CoreMinimal.h"
#include "TurnBasedMatchInterface.generated.h"

UCLASS()
class UTurnBasedMatchInterface : public UInterface
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "TurnBasedMatchInterface")
	void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	UFUNCTION(BlueprintCallable, Category = "TurnBasedMatchInterface")
		void OnMatchEnded(const struct FString& Match);

};