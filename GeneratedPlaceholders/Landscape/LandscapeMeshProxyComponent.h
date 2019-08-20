#pragma once

#include "CoreMinimal.h"
#include "LandscapeMeshProxyComponent.generated.h"

UCLASS()
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid LandscapeGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FIntPoint> ProxyComponentBases;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int8_t ProxyLOD;


};