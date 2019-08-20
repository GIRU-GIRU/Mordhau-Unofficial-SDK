#pragma once

#include "CoreMinimal.h"
#include "NavLinkDefinition.generated.h"

UCLASS()
class UNavLinkDefinition : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNavigationLink> Links;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNavigationSegmentLink> SegmentLinks;


};