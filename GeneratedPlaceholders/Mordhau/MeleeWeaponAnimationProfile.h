#pragma once

#include "CoreMinimal.h"
#include "MeleeWeaponAnimationProfile.generated.h"

UCLASS()
class UMeleeWeaponAnimationProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StrikeAngleAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StrikeAngleAdditiveWindUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StrikeAngleAdditiveWindUp1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StrikeRiposteAngleAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StrikeRiposteAngleAdditiveWindUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StrikeRiposteAngleAdditiveWindUp1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StabAngleAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StabAngleAdditiveWindUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StabAngleAdditiveWindUp1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StabRiposteAngleAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StabRiposteAngleAdditiveWindUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive StabRiposteAngleAdditiveWindUp1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnglingSpineSpaceAdditive ParryAngleAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FeintAnimRate1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FeintAnimRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FeintAnimRateLeftStrike;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FeintAnimDurationOffset1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumFeintAnimDuration1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FeintAnimDurationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FeintAnimDurationOffsetLeftStrike;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumFeintAnimDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumFeintAnimDurationLeftStrike;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumFeintAnimDurationStab;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightWorldBounceCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightWorldBounceScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftWorldBounceCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftWorldBounceScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightWorldBounceCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightWorldBounceScaleCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftWorldBounceCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftWorldBounceScaleCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightParryBounceCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightParryBounceScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftParryBounceCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftParryBounceScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightParryBounceCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightParryLateBounceCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightParryBounceScaleCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftParryBounceCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftParryLateBounceCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftParryBounceScaleCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStrikeComboBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStrikeComboWindupCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStrikeComboBlendCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStrikeComboWindupCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStrikeReleaseCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* RightStrikeAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* RightStrike1PAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStrikeRiposteReleaseCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* RightStrikeRiposteAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* RightStrikeAltRiposteAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* RightStrikeClashAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* RightStrikeMorphAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* RightStrikeLeftComboAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* RightStrikeStabComboAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftStrikeComboBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftStrikeComboWindupCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftStrikeComboBlendCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftStrikeComboWindupCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftStrikeReleaseCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* LeftStrikeAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* LeftStrike1PAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LeftStrikeRiposteReleaseCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* LeftStrikeRiposteAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* LeftStrikeAltRiposteAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* LeftStrikeClashAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* LeftStrikeMorphAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* LeftStrikeRightComboAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* LeftStrikeStabComboAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStabComboBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStabComboWindupCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStabComboBlendCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RightStabComboWindupCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* StabReleaseCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* StabAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* StabRiposteAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* StabAltRiposteAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* StabClashAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* StabMorphAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* StabAltStabComboAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* StabStrikeComboAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* AltStabComboBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* AltStabComboWindupCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* AltStabComboBlendCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* AltStabComboWindupCurve1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* AltStabReleaseCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* AltStabAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* AltStabRiposteAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* AltStabAltRiposteAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* AltStabClashAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* AltStabMorphAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* AltStabStabComboAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* AltStabStrikeComboAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* BashAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* ParryAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* AltParryAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* ParryAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* ParryPushAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* ParryPushAdditive3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* AltParryPushAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* AltParryPushAdditive3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* RightStabBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LeftStabBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* RightStabBounce1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LeftStabBounce1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* RightStrikeBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LeftStrikeBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* RightStrikeBounce1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LeftStrikeBounce1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* RightStabChambered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LeftStabChambered;


};