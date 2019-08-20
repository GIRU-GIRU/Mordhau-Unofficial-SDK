#pragma once

#include "CoreMinimal.h"
#include "LeaderboardBlueprintLibrary.generated.h"

UCLASS()
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "LeaderboardBlueprintLibrary")
	bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);

};