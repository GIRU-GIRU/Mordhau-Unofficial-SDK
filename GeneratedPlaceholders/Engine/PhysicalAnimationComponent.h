#pragma once

#include "CoreMinimal.h"
#include "PhysicalAnimationComponent.generated.h"

UCLASS()
class UPhysicalAnimationComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrengthMultiplyer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* SkeletalMeshComponent;

	UFUNCTION(BlueprintCallable, Category = "PhysicalAnimationComponent")
	void SetStrengthMultiplyer(float InStrengthMultiplyer);
	UFUNCTION(BlueprintCallable, Category = "PhysicalAnimationComponent")
		void SetSkeletalMeshComponent(class USkeletalMeshComponent* InSkeletalMeshComponent);
	UFUNCTION(BlueprintCallable, Category = "PhysicalAnimationComponent")
		struct FTransform GetBodyTargetTransform(const struct FName& BodyName);
	UFUNCTION(BlueprintCallable, Category = "PhysicalAnimationComponent")
		void ApplyPhysicalAnimationSettingsBelow(const struct FName& BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
	UFUNCTION(BlueprintCallable, Category = "PhysicalAnimationComponent")
		void ApplyPhysicalAnimationSettings(const struct FName& BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData);
	UFUNCTION(BlueprintCallable, Category = "PhysicalAnimationComponent")
		void ApplyPhysicalAnimationProfileBelow(const struct FName& BodyName, const struct FName& ProfileName, bool bIncludeSelf, bool bClearNotFound);

};