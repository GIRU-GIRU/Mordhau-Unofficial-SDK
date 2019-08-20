#pragma once

#include "CoreMinimal.h"
#include "AnimComposite.generated.h"

UCLASS()
class UAnimComposite : public UAnimCompositeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnimTrack AnimationTrack;


};