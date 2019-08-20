#pragma once

#include "CoreMinimal.h"
#include "LandscapeMeshCollisionComponent.generated.h"

UCLASS()
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid MeshGuid;


};