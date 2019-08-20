#pragma once

#include "CoreMinimal.h"
#include "TurnBasedBlueprintLibrary.generated.h"

UCLASS()
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "TurnBasedBlueprintLibrary")
	void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "TurnBasedBlueprintLibrary")
		void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName);
	UFUNCTION(BlueprintCallable, Category = "TurnBasedBlueprintLibrary")
		void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "TurnBasedBlueprintLibrary")
		void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn);

};