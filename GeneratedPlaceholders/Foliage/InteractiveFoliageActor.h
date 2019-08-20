#pragma once

#include "CoreMinimal.h"
#include "InteractiveFoliageActor.generated.h"

UCLASS()
class AInteractiveFoliageActor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector TouchingActorEntryPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FoliageVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FoliageForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FoliagePosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FoliageDamageImpulseScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FoliageTouchImpulseScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FoliageStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FoliageStiffnessQuadratic;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FoliageDamping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDamageImpulse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxTouchImpulse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Mass;

	UFUNCTION(BlueprintCallable, Category = "InteractiveFoliageActor")
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);

};