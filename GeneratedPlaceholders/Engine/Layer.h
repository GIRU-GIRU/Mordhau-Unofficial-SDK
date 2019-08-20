#pragma once

#include "CoreMinimal.h"
#include "Layer.generated.h"

UCLASS()
class ULayer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName LayerName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLayerActorStats> ActorStats;


};