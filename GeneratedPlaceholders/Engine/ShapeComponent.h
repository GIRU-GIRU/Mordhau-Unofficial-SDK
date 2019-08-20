#pragma once

#include "CoreMinimal.h"
#include "ShapeComponent.generated.h"

UCLASS()
class UShapeComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor ShapeColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBodySetup* ShapeBodySetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawOnlyIfSelected : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldCollideWhenPlacing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDynamicObstacle : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* AreaClass;


};