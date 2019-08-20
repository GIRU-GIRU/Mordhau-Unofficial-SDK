#pragma once

#include "CoreMinimal.h"
#include "LightmappedSurfaceCollection.generated.h"

UCLASS()
class ULightmappedSurfaceCollection : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UModel* SourceModel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> Surfaces;


};