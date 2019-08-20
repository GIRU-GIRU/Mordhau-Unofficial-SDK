#pragma once

#include "CoreMinimal.h"
#include "AchievementBlueprintLibrary.generated.h"

UCLASS()
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "AchievementBlueprintLibrary")
	void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress);
	UFUNCTION(BlueprintCallable, Category = "AchievementBlueprintLibrary")
		void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);

};