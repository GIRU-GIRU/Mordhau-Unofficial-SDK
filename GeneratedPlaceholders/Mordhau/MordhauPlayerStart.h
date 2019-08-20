#pragma once

#include "CoreMinimal.h"
#include "MordhauPlayerStart.generated.h"

UCLASS()
class AMordhauPlayerStart : public APlayerStart
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsSpawnDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Token;

	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerStart")
	bool IsAllowedSpawnFor(class AController* Player);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerStart")
		float GetSpawnPreferenceFor(class AController* Player);

};