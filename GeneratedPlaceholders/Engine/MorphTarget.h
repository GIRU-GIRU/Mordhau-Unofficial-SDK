#pragma once

#include "CoreMinimal.h"
#include "MorphTarget.generated.h"

UCLASS()
class UMorphTarget : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* BaseSkelMesh;


};