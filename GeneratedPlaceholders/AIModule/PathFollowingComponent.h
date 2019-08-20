#pragma once

#include "CoreMinimal.h"
#include "PathFollowingComponent.generated.h"

UCLASS()
class UPathFollowingComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavMovementComponent* MovementComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ANavigationData* MyNavData;

	UFUNCTION(BlueprintCallable, Category = "PathFollowingComponent")
	void OnNavDataRegistered(class ANavigationData* NavData);
	UFUNCTION(BlueprintCallable, Category = "PathFollowingComponent")
		void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "PathFollowingComponent")
		struct FVector GetPathDestination();
	UFUNCTION(BlueprintCallable, Category = "PathFollowingComponent")
		TEnumAsByte<EPathFollowingAction> GetPathActionType();

};