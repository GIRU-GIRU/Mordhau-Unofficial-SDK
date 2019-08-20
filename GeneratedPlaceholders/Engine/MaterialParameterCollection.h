#pragma once

#include "CoreMinimal.h"
#include "MaterialParameterCollection.generated.h"

UCLASS()
class UMaterialParameterCollection : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid StateId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCollectionScalarParameter> ScalarParameters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCollectionVectorParameter> VectorParameters;


};