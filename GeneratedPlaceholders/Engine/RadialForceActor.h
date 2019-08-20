#pragma once

#include "CoreMinimal.h"
#include "RadialForceActor.generated.h"

UCLASS()
class ARadialForceActor : public ARigidBodyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class URadialForceComponent* ForceComponent;

	UFUNCTION(BlueprintCallable, Category = "RadialForceActor")
	void ToggleForce();
	UFUNCTION(BlueprintCallable, Category = "RadialForceActor")
		void FireImpulse();
	UFUNCTION(BlueprintCallable, Category = "RadialForceActor")
		void EnableForce();
	UFUNCTION(BlueprintCallable, Category = "RadialForceActor")
		void DisableForce();

};