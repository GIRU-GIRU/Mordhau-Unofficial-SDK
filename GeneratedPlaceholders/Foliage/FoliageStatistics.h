#pragma once

#include "CoreMinimal.h"
#include "FoliageStatistics.generated.h"

UCLASS()
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "FoliageStatistics")
	int STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	UFUNCTION(BlueprintCallable, Category = "FoliageStatistics")
		int STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);

};