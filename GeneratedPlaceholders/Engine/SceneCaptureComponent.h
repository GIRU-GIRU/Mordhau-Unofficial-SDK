#pragma once

#include "CoreMinimal.h"
#include "SceneCaptureComponent.generated.h"

UCLASS()
class USceneCaptureComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> HiddenComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> HiddenActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> ShowOnlyComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> ShowOnlyActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCaptureEveryFrame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCaptureOnMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAlwaysPersistRenderingState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODDistanceFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxViewDistanceOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CaptureSortPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEngineShowFlagsSetting> ShowFlagSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ProfilingEventName;

	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent")
	void ShowOnlyComponent(class UPrimitiveComponent* InComponent);
	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent")
		void ShowOnlyActorComponents(class AActor* InActor);
	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent")
		void SetCaptureSortPriority(int NewCaptureSortPriority);
	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent")
		void RemoveShowOnlyComponent(class UPrimitiveComponent* InComponent);
	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent")
		void RemoveShowOnlyActorComponents(class AActor* InActor);
	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent")
		void HideComponent(class UPrimitiveComponent* InComponent);
	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent")
		void HideActorComponents(class AActor* InActor);
	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent")
		void ClearShowOnlyComponents(class UPrimitiveComponent* InComponent);
	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent")
		void ClearHiddenComponents();

};