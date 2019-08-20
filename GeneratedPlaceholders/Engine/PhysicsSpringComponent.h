#pragma once

#include "CoreMinimal.h"
#include "PhysicsSpringComponent.generated.h"

UCLASS()
class UPhysicsSpringComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpringLengthAtRest;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpringRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> SpringChannel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIgnoreSelf;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpringCompression;

	UFUNCTION(BlueprintCallable, Category = "PhysicsSpringComponent")
	struct FVector GetSpringRestingPoint();
	UFUNCTION(BlueprintCallable, Category = "PhysicsSpringComponent")
		struct FVector GetSpringDirection();
	UFUNCTION(BlueprintCallable, Category = "PhysicsSpringComponent")
		struct FVector GetSpringCurrentEndPoint();
	UFUNCTION(BlueprintCallable, Category = "PhysicsSpringComponent")
		float GetNormalizedCompressionScalar();

};