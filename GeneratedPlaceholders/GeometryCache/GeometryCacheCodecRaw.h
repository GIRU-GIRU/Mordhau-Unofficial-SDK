#pragma once

#include "CoreMinimal.h"
#include "GeometryCacheCodecRaw.generated.h"

UCLASS()
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DummyProperty;


};