#pragma once

#include "CoreMinimal.h"
#include "PhysicsConstraintTemplate.generated.h"

UCLASS()
class UPhysicsConstraintTemplate : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FConstraintInstance DefaultInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPhysicsConstraintProfileHandle> ProfileHandles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FConstraintProfileProperties DefaultProfile;


};