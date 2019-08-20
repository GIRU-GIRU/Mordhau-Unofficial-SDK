#pragma once

#include "CoreMinimal.h"
#include "ModelComponent.generated.h"

UCLASS()
class UModelComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBodySetup* ModelBodySetup;


};