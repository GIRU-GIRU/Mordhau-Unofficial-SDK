#pragma once

#include "CoreMinimal.h"
#include "HierarchicalLODSetup.generated.h"

UCLASS()
class UHierarchicalLODSetup : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FHierarchicalSimplification> HierarchicalLODSetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00[0x28];


};