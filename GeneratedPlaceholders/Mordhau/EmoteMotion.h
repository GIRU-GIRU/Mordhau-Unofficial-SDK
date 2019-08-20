#pragma once

#include "CoreMinimal.h"
#include "EmoteMotion.generated.h"

UCLASS()
class UEmoteMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Duration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CanEmoteAfter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CancelTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CancelBlendTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D TurnCaps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* TransitionInMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Montage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* TransitionOutMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartMontageTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartTransitionOutMontageTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForce3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHideLeftHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHideRightHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUnequipLeftHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUnequipRightHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDropLeftHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LeftHandDropForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDropRightHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RightHandDropForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasStartedMainMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasStartedMainMontageTransitionOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment> HidLeft;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment> HidRight;

	UFUNCTION(BlueprintCallable, Category = "EmoteMotion")
	void DoDrop(class AMordhauEquipment* Equipment, const struct FVector& Force);

};