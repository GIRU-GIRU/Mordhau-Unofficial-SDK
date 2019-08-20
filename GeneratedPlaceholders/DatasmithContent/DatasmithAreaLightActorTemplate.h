#pragma once

#include "CoreMinimal.h"
#include "DatasmithAreaLightActorTemplate.generated.h"

UCLASS()
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithAreaLightActorShape LightShape;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D Dimensions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor Color;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Intensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHidden : 1;


};