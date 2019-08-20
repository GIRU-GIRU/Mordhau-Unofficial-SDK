#pragma once

#include "CoreMinimal.h"
#include "PlanarReflection.generated.h"

UCLASS()
class APlanarReflection : public ASceneCapture
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPlanarReflectionComponent* PlanarReflectionComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShowPreviewPlane;

	UFUNCTION(BlueprintCallable, Category = "PlanarReflection")
	void OnInterpToggle(bool bEnable);

};