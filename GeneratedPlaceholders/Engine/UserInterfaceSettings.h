#pragma once

#include "CoreMinimal.h"
#include "UserInterfaceSettings.generated.h"

UCLASS()
class UUserInterfaceSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ERenderFocusRule RenderFocusRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<EMouseCursor>, struct FHardwareCursorReference> HardwareCursors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<EMouseCursor>, struct FSoftClassPath> SoftwareCursors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath DefaultCursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath TextEditBeamCursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath CrosshairsCursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath HandCursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath GrabHandCursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath GrabHandClosedCursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath SlashedCircleCursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ApplicationScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EUIScalingRule UIScaleRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath CustomScalingRuleClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRuntimeFloatCurve UIScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowHighDPIInGameMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLoadWidgetsOnDedicatedServer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> CursorClasses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* CustomScalingRuleClassInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDPICustomScalingRule* CustomScalingRule;


};