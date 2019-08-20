#pragma once

#include "CoreMinimal.h"
#include "PhysicalMaterial.generated.h"

UCLASS()
class UPhysicalMaterial : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Friction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFrictionCombineMode> FrictionCombineMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideFrictionCombineMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Restitution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideRestitutionCombineMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Density;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RaiseMassToPower;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DestructibleDamageThresholdScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicalMaterialPropertyBase* PhysicalMaterialProperty;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPhysicalSurface> SurfaceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TireFrictionScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTireFrictionScalePair> TireFrictionScales;


};