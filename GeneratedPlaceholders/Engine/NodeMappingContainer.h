#pragma once

#include "CoreMinimal.h"
#include "NodeMappingContainer.generated.h"

UCLASS()
class UNodeMappingContainer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, struct FNodeItem> SourceItems;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, struct FNodeItem> TargetItems;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, struct FName> SourceToTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00[0x28];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x28];


};