#pragma once

#include "CoreMinimal.h"
#include "StaticMeshCapturePointBanner.generated.h"

UCLASS()
class AStaticMeshCapturePointBanner : public ACapturePointBanner
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMeshComponent;


};