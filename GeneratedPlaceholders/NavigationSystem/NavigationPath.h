#pragma once

#include "CoreMinimal.h"
#include "NavigationPath.generated.h"

UCLASS()
class UNavigationPath : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate PathUpdatedNotifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVector> PathPoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENavigationOptionFlag> RecalculateOnInvalidation;

	UFUNCTION(BlueprintCallable, Category = "NavigationPath")
	bool IsValid();
	UFUNCTION(BlueprintCallable, Category = "NavigationPath")
		bool IsStringPulled();
	UFUNCTION(BlueprintCallable, Category = "NavigationPath")
		bool IsPartial();
	UFUNCTION(BlueprintCallable, Category = "NavigationPath")
		float GetPathLength();
	UFUNCTION(BlueprintCallable, Category = "NavigationPath")
		float GetPathCost();
	UFUNCTION(BlueprintCallable, Category = "NavigationPath")
		struct FString GetDebugString();
	UFUNCTION(BlueprintCallable, Category = "NavigationPath")
		void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);
	UFUNCTION(BlueprintCallable, Category = "NavigationPath")
		void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);

};