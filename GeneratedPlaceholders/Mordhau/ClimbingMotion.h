#pragma once

#include "CoreMinimal.h"
#include "ClimbingMotion.generated.h"

UCLASS()
class UClimbingMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* ClimbSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClimbRecoveryDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AuthorityMoveUpStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AuthorityMoveLateralStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AuthorityMoveLateralDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SlowClimbRecoveryDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SlowAuthorityMoveUpStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SlowAuthorityMoveLateralStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SlowAuthorityMoveLateralDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D TurnCaps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsSlowClimb;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClimbOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LedgeOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LedgeNormal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClimbStartMeshLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector AuthMoveStartLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsAuthMovingUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsAuthMovingLaterally;


};