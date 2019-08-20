#pragma once

#include "CoreMinimal.h"
#include "MatineeActorCameraAnim.generated.h"

UCLASS()
class AMatineeActorCameraAnim : public AMatineeActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCameraAnim* CameraAnim;


};