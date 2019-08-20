#pragma once

#include "CoreMinimal.h"
#include "SoundCue.generated.h"

UCLASS()
class USoundCue : public USoundBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideAttenuation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bExcludeFromRandomNodeBranchCulling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundNode* FirstNode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PitchMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoundAttenuationSettings AttenuationOverrides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SubtitlePriority;


};