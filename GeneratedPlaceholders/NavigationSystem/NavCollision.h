#pragma once

#include "CoreMinimal.h"
#include "NavCollision.generated.h"

UCLASS()
class UNavCollision : public UNavCollisionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNavCollisionCylinder> CylinderCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNavCollisionBox> BoxCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* AreaClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGatherConvexGeometry : 1;


};