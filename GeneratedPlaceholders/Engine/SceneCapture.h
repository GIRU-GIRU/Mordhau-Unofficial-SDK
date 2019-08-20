#pragma once

#include "CoreMinimal.h"
#include "SceneCapture.generated.h"

UCLASS()
class ASceneCapture : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* MeshComp;


};