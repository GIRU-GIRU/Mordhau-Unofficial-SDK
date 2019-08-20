#pragma once

#include "CoreMinimal.h"
#include "MordhauWheeledVehicle.generated.h"

UCLASS()
class AMordhauWheeledVehicle : public AMordhauCompoundVehicle
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D RotationVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MoveSoundAttachSocket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MoveSoundFadeOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D MinRotationVelocityToPlayMoveSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MinTranslationVelocityToPlayMoveSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D RotationVelocityInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D RotationVelocityMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName LeftHandIKPushTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName RightHandIKPushTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* MoveSoundCue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastMoveSound;


};