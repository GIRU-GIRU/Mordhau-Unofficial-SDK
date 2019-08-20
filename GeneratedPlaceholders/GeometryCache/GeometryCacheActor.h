#pragma once

#include "CoreMinimal.h"
#include "GeometryCacheActor.generated.h"

UCLASS()
class AGeometryCacheActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGeometryCacheComponent* GeometryCacheComponent;

	UFUNCTION(BlueprintCallable, Category = "GeometryCacheActor")
	class UGeometryCacheComponent* GetGeometryCacheComponent();

};