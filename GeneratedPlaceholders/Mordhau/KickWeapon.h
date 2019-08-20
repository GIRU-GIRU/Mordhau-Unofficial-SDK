#pragma once

#include "CoreMinimal.h"
#include "KickWeapon.generated.h"

UCLASS()
class AKickWeapon : public AVirtualWeapon
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* KickAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* KickRiposteAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* KickComboAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* KickBounce;


};