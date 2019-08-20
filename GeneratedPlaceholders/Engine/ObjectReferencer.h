#pragma once

#include "CoreMinimal.h"
#include "ObjectReferencer.generated.h"

UCLASS()
class UObjectReferencer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> ReferencedObjects;


};