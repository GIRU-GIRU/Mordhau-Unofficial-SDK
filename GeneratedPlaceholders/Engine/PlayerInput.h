#pragma once

#include "CoreMinimal.h"
#include "PlayerInput.generated.h"

UCLASS()
class UPlayerInput : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FKeyBind> DebugExecBindings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> InvertedAxis;

	UFUNCTION(BlueprintCallable, Category = "PlayerInput")
	void SetMouseSensitivity(float Sensitivity);
	UFUNCTION(BlueprintCallable, Category = "PlayerInput")
		void SetBind(const struct FName& BindName, const struct FString& Command);
	UFUNCTION(BlueprintCallable, Category = "PlayerInput")
		void InvertAxisKey(const struct FKey& AxisKey);
	UFUNCTION(BlueprintCallable, Category = "PlayerInput")
		void InvertAxis(const struct FName& AxisName);
	UFUNCTION(BlueprintCallable, Category = "PlayerInput")
		void ClearSmoothing();

};