#pragma once

#include "CoreMinimal.h"
#include "DrawFrustumComponent.generated.h"

UCLASS()
class UDrawFrustumComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor FrustumColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrustumAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrustumAspectRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrustumStartDist;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrustumEndDist;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture* Texture;


};