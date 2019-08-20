#pragma once

#include "CoreMinimal.h"
#include "Viewport.generated.h"

UCLASS()
class UViewport : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor BackgroundColor;

	UFUNCTION(BlueprintCallable, Category = "Viewport")
	class AActor* Spawn(class UClass* ActorClass);
	UFUNCTION(BlueprintCallable, Category = "Viewport")
		void SetViewRotation(const struct FRotator& Rotation);
	UFUNCTION(BlueprintCallable, Category = "Viewport")
		void SetViewLocation(const struct FVector& Location);
	UFUNCTION(BlueprintCallable, Category = "Viewport")
		struct FRotator GetViewRotation();
	UFUNCTION(BlueprintCallable, Category = "Viewport")
		class UWorld* GetViewportWorld();
	UFUNCTION(BlueprintCallable, Category = "Viewport")
		struct FVector GetViewLocation();

};