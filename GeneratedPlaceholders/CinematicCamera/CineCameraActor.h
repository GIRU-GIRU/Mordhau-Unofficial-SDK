#pragma once

#include "CoreMinimal.h"
#include "CineCameraActor.generated.h"

UCLASS()
class ACineCameraActor : public ACameraActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCameraLookatTrackingSettings LookatTrackingSettings;

	UFUNCTION(BlueprintCallable, Category = "CineCameraActor")
	class UCineCameraComponent* GetCineCameraComponent();

};