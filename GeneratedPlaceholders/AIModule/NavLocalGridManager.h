#pragma once

#include "CoreMinimal.h"
#include "NavLocalGridManager.generated.h"

UCLASS()
class UNavLocalGridManager : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "NavLocalGridManager")
	bool STATIC_SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	UFUNCTION(BlueprintCallable, Category = "NavLocalGridManager")
		void STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	UFUNCTION(BlueprintCallable, Category = "NavLocalGridManager")
		bool STATIC_FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	UFUNCTION(BlueprintCallable, Category = "NavLocalGridManager")
		int STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	UFUNCTION(BlueprintCallable, Category = "NavLocalGridManager")
		int STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	UFUNCTION(BlueprintCallable, Category = "NavLocalGridManager")
		int STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	UFUNCTION(BlueprintCallable, Category = "NavLocalGridManager")
		int STATIC_AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);

};