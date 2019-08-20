#pragma once

#include "CoreMinimal.h"
#include "BrushComponent.generated.h"

UCLASS()
class UBrushComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UModel* Brush;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBodySetup* BrushBodySetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PrePivot;


};