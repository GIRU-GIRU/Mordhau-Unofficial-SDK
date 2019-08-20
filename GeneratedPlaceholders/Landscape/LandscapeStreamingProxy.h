#pragma once

#include "CoreMinimal.h"
#include "LandscapeStreamingProxy.generated.h"

UCLASS()
class ALandscapeStreamingProxy : public ALandscapeProxy
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TLazyObjectPtr<class ALandscape> LandscapeActor;


};