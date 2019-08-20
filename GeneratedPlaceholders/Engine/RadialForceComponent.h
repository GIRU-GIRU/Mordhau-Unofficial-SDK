#pragma once

#include "CoreMinimal.h"
#include "RadialForceComponent.generated.h"

UCLASS()
class URadialForceComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ImpulseStrength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bImpulseVelChange : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreOwningActor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ForceStrength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DestructibleDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;

	UFUNCTION(BlueprintCallable, Category = "RadialForceComponent")
	void RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);
	UFUNCTION(BlueprintCallable, Category = "RadialForceComponent")
		void FireImpulse();
	UFUNCTION(BlueprintCallable, Category = "RadialForceComponent")
		void AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType);

};