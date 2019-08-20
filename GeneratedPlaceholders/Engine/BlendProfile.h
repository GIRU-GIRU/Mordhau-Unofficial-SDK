#pragma once

#include "CoreMinimal.h"
#include "BlendProfile.generated.h"

UCLASS()
class UBlendProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeleton* OwningSkeleton;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBlendProfileBoneEntry> ProfileEntries;


};