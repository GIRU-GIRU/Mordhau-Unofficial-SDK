#pragma once

#include "CoreMinimal.h"
#include "DamageType.generated.h"

UCLASS()
class UDamageType : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCausedByWorld : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bScaleMomentumByMass : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRadialDamageVelChange : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DamageImpulse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DestructibleImpulse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DestructibleDamageSpreadScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DamageFalloff;


};