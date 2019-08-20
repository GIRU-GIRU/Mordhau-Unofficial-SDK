#pragma once

#include "CoreMinimal.h"
#include "StaticMeshActor.generated.h"

UCLASS()
class AStaticMeshActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bStaticMeshReplicateMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ENavDataGatheringMode NavigationGeometryGatheringMode;

	UFUNCTION(BlueprintCallable, Category = "StaticMeshActor")
	void SetMobility(TEnumAsByte<EComponentMobility> InMobility);

};