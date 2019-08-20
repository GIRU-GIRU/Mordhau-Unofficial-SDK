#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleBeamModifier.generated.h"

UCLASS()
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBeamModifierType> ModifierType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBeamModifierOptions PositionOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector Position;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBeamModifierOptions TangentOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector Tangent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAbsoluteTangent : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBeamModifierOptions StrengthOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Strength;


};