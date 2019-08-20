#pragma once

#include "CoreMinimal.h"
#include "PhysicsConstraintActor.generated.h"

UCLASS()
class APhysicsConstraintActor : public ARigidBodyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintComponent* ConstraintComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ConstraintActor1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ConstraintActor2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableCollision : 1;


};