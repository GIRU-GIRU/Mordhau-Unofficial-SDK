#pragma once

#include "CoreMinimal.h"
#include "VectorFieldComponent.generated.h"

UCLASS()
class UVectorFieldComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UVectorField* VectorField;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Intensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Tightness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPreviewVectorField : 1;

	UFUNCTION(BlueprintCallable, Category = "VectorFieldComponent")
	void SetIntensity(float NewIntensity);

};