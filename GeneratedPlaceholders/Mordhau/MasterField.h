#pragma once

#include "CoreMinimal.h"
#include "MasterField.generated.h"

UCLASS()
class AMasterField : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CreatedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeactivatedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeactivationStartedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAreSubfieldsHidden;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFieldActive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasBegunDeactivation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UFieldSpawnComponent*> SubFieldSpawns;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class ASubField>> SubFields;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox CombinedBoundsBox;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FieldLifeTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FieldDeactivationTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FieldFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> CollisionFilter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<class AActor*, int> ActorPresenceTickCount;

	UFUNCTION(BlueprintCallable, Category = "MasterField")
	void UpdateField();
	UFUNCTION(BlueprintCallable, Category = "MasterField")
		void SetSubFieldsHidden(bool bAreHidden);
	UFUNCTION(BlueprintCallable, Category = "MasterField")
		void RecomputeCombinedBoundingBox();
	UFUNCTION(BlueprintCallable, Category = "MasterField")
		TArray<class ASubField*> GetSubFields();
	UFUNCTION(BlueprintCallable, Category = "MasterField")
		struct FVector GetFieldBoundsCenter();
	UFUNCTION(BlueprintCallable, Category = "MasterField")
		void DeactivateAndDestroyField();
	UFUNCTION(BlueprintCallable, Category = "MasterField")
		void CreateField();
	UFUNCTION(BlueprintCallable, Category = "MasterField")
		float ComputeDistanceIntoField(const struct FVector& Location);
	UFUNCTION(BlueprintCallable, Category = "MasterField")
		void BeginFieldDeactivation();

};