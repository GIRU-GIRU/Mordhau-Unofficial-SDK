#pragma once

#include "CoreMinimal.h"
#include "NavLinkComponent.generated.h"

UCLASS()
class UNavLinkComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNavigationLink> Links;


};