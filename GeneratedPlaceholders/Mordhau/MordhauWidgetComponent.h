#pragma once

#include "CoreMinimal.h"
#include "MordhauWidgetComponent.generated.h"

UCLASS()
class UMordhauWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WorldSpaceZOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D WidgetCullAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WidgetCullAngleZPositionOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceToCameraZPositionOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceToCamera;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString TextParameter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DistanceToCameraString;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsDistanceToCameraStringUpdated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngleToCamera;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int OverrideVisible;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class APlayerState> PlayerStateAlwaysSee;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShowInMapView;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShowInMainMenu;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUsesViewTargetTeamRestriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ViewTargetTeamRestriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FrameSkip;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauCameraManager* CachedPlayerCameraManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauGameState* CachedGameState;

	UFUNCTION(BlueprintCallable, Category = "MordhauWidgetComponent")
	void SetPlayerStateAlwaysSee(class APlayerState* PlayerState);

};