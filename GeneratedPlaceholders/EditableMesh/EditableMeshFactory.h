#pragma once

#include "CoreMinimal.h"
#include "EditableMeshFactory.generated.h"

UCLASS()
class UEditableMeshFactory : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "EditableMeshFactory")
	class UEditableMesh* STATIC_MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int LODIndex);

};