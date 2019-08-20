#pragma once

#include "CoreMinimal.h"
#include "MordhauInput.generated.h"

UCLASS()
class UMordhauInput : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseSteamInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDefaultBindingsChecked;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EActionSetChangeState ActionSetChangeState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInputAxisConfigEntry> AxisConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInputActionKeyMapping> ActionMappings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInputAxisKeyMapping> AxisMappings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, struct FDigitalActionKey> DigitalActionKeyMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, struct FAnalogActionKey> AnalogActionKeyMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ControlScheme;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AngleAttacksWithMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MouseXIsFlipAttackSide;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int InverseAttackDirectionX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int InverseAttackDirectionY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AngleAttackAfterPress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ToggleSprint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMouseXInverted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseXSensitivity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMouseYInverted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseYSensitivity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bGamepadLeftXInverted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GamepadLeftXSensitivity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GamepadLeftXDeadzone;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bGamepadLeftYInverted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GamepadLeftYSensitivity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GamepadLeftYDeadzone;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bGamepadRightXInverted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GamepadRightXSensitivity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GamepadRightXDeadzone;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bGamepadRightYInverted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GamepadRightYSensitivity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GamepadRightYDeadzone;

	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
	void ShowGamepadTextInput(EInputTextMode TextMode, EInputLineMode LineMode, const struct FString& Description, const struct FString& ExistingText, int MaxLen);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void ShowBindingPanel();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetToggleSprint(int NewToggleSprint);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetMouseYSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetMouseYInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetMouseXSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetMouseXIsFlipAttackSide(int NewIsFlipAttackSide);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetMouseXInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetInverseAttackDirectionY(int NewInverseAttackDirectionX);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetInverseAttackDirectionX(int NewInverseAttackDirectionX);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadRightYSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadRightYInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadRightYDeadzone(float NewDeadzone);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadRightXSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadRightXInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadRightXDeadzone(float NewDeadzone);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadLeftYSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadLeftYInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadLeftYDeadzone(float NewDeadzone);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadLeftXSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadLeftXInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetGamepadLeftXDeadzone(float NewDeadzone);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetControlScheme(int NewControlScheme);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetAngleAttacksWithMovement(int NewAngleAttacksWithMovement);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetAngleAttackAfterPress(int NewAngleAttackAfterPress);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SetActiveActionSet(EActionSet ActionSet);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void SaveSettings();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void RestoreDefaultSettings();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		int GetToggleSprint();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetMouseYSensitivity();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		bool GetMouseYInverted();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetMouseXSensitivity();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		int GetMouseXIsFlipAttackSide();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		bool GetMouseXInverted();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FVector2D GetMouseSensitivityLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		int GetInverseAttackDirectionY();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		int GetInverseAttackDirectionX();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FVector2D GetGamepadSensitivityLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetGamepadRightYSensitivity();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		bool GetGamepadRightYInverted();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetGamepadRightYDeadzone();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetGamepadRightXSensitivity();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		bool GetGamepadRightXInverted();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetGamepadRightXDeadzone();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetGamepadLeftYSensitivity();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		bool GetGamepadLeftYInverted();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetGamepadLeftYDeadzone();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetGamepadLeftXSensitivity();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		bool GetGamepadLeftXInverted();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float GetGamepadLeftXDeadzone();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FVector2D GetGamepadDeadzoneLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		int GetControlScheme();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		float STATIC_GetAxisScale(const struct FInputAxisKeyMapping& AxisKeyBinding);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FName STATIC_GetAxisOppositeDirectionName(const struct FName& AxisName);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FName STATIC_GetAxisName(const struct FInputAxisKeyMapping& AxisKeyBinding);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void GetAxisKeyBindings(TArray<struct FInputAxisKeyMapping>* AxisKeyBindings);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FInputAxisKeyMapping GetAxisKeyBinding(const struct FName& AxisName);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FKey STATIC_GetAxisKey(const struct FInputAxisKeyMapping& AxisKeyBinding);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		int GetAngleAttacksWithMovement();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		int GetAngleAttackAfterPress();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FName STATIC_GetActionName(const struct FInputActionKeyMapping& ActionKeyBinding);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void GetActionKeyBindings(TArray<struct FInputActionKeyMapping>* ActionKeyBindings);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FInputActionKeyMapping GetActionKeyBinding(const struct FName& ActionName);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		struct FKey STATIC_GetActionKey(const struct FInputActionKeyMapping& ActionKeyBinding);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void ClearKeyBindings();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void ApplySettings();
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void AddAxisKeyBinding(const struct FName& AxisName, const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "MordhauInput")
		void AddActionKeyBinding(const struct FName& ActionName, const struct FKey& Key);

};