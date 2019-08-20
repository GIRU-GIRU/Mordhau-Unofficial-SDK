#pragma once

#include "CoreMinimal.h"
#include "BoxComponent.generated.h"

UCLASS()
class UBoxComponent : public UShapeComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BoxExtent;

	UFUNCTION(BlueprintCallable, Category = "BoxComponent")
	void SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps);
	UFUNCTION(BlueprintCallable, Category = "BoxComponent")
		struct FVector GetUnscaledBoxExtent();
	UFUNCTION(BlueprintCallable, Category = "BoxComponent")
		struct FVector GetScaledBoxExtent();

};