#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSignedObject.generated.h"

UCLASS()
class UMovieSceneSignedObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid Signature;


};