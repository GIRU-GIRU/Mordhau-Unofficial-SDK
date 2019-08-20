#pragma once

#include "CoreMinimal.h"
#include "LandscapeInfo.generated.h"

UCLASS()
class ULandscapeInfo : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TLazyObjectPtr<class ALandscape> LandscapeActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid LandscapeGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ComponentSizeQuads;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubsectionSizeQuads;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ComponentNumSubsections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector DrawScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x50];


};