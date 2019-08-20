#pragma once

#include "CoreMinimal.h"
#include "InterpTrackMove.generated.h"

UCLASS()
class UInterpTrackMove : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveVector PosTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveVector EulerTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpLookupTrack LookupTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName LookAtGroupName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LinCurveTension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngCurveTension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseQuatInterpolation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowArrowAtKeys : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableMovement : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowTranslationOnCurveEd : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowRotationOnCurveEd : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHide3DTrack : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EInterpTrackMoveRotMode> RotMode;


};