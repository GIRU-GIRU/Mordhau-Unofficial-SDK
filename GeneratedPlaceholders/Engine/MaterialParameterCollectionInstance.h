#pragma once

#include "CoreMinimal.h"
#include "MaterialParameterCollectionInstance.generated.h"

UCLASS()
class UMaterialParameterCollectionInstance : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialParameterCollection* Collection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWorld* World;


};