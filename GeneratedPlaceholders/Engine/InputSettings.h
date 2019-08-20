#pragma once

#include "CoreMinimal.h"
#include "InputSettings.generated.h"

UCLASS()
class UInputSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInputAxisConfigEntry> AxisConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAltEnterTogglesFullscreen : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bF11TogglesFullscreen : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseMouseForTouch : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableMouseSmoothing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableFOVScaling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCaptureMouseOnLaunch : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefaultViewportMouseLock : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAlwaysShowTouchInterface : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowConsoleOnFourFingerTap : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableGestureRecognizer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseAutocorrect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> ExcludedAutocorrectOS;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> ExcludedAutocorrectCultures;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> ExcludedAutocorrectDeviceModels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMouseCaptureMode DefaultViewportMouseCaptureMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMouseLockMode DefaultViewportMouseLockMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FOVScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DoubleClickTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInputActionKeyMapping> ActionMappings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInputAxisKeyMapping> AxisMappings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultTouchInterface;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FKey ConsoleKey;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FKey> ConsoleKeys;

	UFUNCTION(BlueprintCallable, Category = "InputSettings")
	void SaveKeyMappings();
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		void RemoveAxisMapping(const struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		void RemoveActionMapping(const struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		class UInputSettings* STATIC_GetInputSettings();
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		void GetAxisNames(TArray<struct FName>* AxisNames);
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		void GetAxisMappingByName(const struct FName& InAxisName, TArray<struct FInputAxisKeyMapping>* OutMappings);
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		void GetActionNames(TArray<struct FName>* ActionNames);
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		void GetActionMappingByName(const struct FName& InActionName, TArray<struct FInputActionKeyMapping>* OutMappings);
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		void ForceRebuildKeymaps();
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		void AddAxisMapping(const struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	UFUNCTION(BlueprintCallable, Category = "InputSettings")
		void AddActionMapping(const struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);

};