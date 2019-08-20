#pragma once

#include "CoreMinimal.h"
#include "NavigationQueryFilter.generated.h"

UCLASS()
class UNavigationQueryFilter : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNavigationFilterArea> Areas;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavigationFilterFlags IncludeFlags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavigationFilterFlags ExcludeFlags;


};