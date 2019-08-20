#pragma once

#include "CoreMinimal.h"
#include "NavigationSystemConfig.generated.h"

UCLASS()
class UNavigationSystemConfig : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath NavigationSystemClass;


};