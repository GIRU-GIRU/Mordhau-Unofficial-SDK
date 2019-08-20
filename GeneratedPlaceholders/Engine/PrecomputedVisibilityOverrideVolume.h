#pragma once

#include "CoreMinimal.h"
#include "PrecomputedVisibilityOverrideVolume.generated.h"

UCLASS()
class APrecomputedVisibilityOverrideVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> OverrideVisibleActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> OverrideInvisibleActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> OverrideInvisibleLevels;


};