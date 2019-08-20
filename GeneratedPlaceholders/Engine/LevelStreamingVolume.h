#pragma once

#include "CoreMinimal.h"
#include "LevelStreamingVolume.generated.h"

UCLASS()
class ALevelStreamingVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> StreamingLevelNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEditorPreVisOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EStreamingVolumeUsage> StreamingUsage;


};