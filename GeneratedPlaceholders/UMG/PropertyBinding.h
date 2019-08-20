#pragma once

#include "CoreMinimal.h"
#include "PropertyBinding.generated.h"

UCLASS()
class UPropertyBinding : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UObject> SourceObject;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDynamicPropertyPath SourcePath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName DestinationProperty;


};