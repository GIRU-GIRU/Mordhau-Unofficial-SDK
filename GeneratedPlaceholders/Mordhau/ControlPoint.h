#pragma once

#include "CoreMinimal.h"
#include "ControlPoint.generated.h"

UCLASS()
class AControlPoint : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> OverlapsCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Name;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHiddenPoint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsCapturable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTeam1OwnsPrerequisites;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTeam2OwnsPrerequisites;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSpawnsDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* DecalMaterialInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SpawnsTeam;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SpawnsToken;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMordhauWidgetComponent* WidgetComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoNotShowFloaterWidget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoNotShowInTopBarWidget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* UIMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* UIMaterialInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LastSetUIIconColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LastSetUIBorderColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastSetUIProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AwardScoreInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AwardScoreCapturing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AwardScoreCaptured;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AwardScoreNeutralizing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AwardScoreNeutralized;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ACapturePointBanner*> Banners;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* CaptureArea;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CaptureProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bBannersDoNotAnimateCaptureProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedCaptureProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkSmoothTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char OwningTeam;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CapturingTeam;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AControlPoint*> Team1PrerequisitePoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AControlPoint*> Team2PrerequisitePoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AMordhauPlayerStart*> SpawnPoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team1Presence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team2Presence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFlashing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPreventSpawningIfContested;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasEverReplicatedProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UncaptureSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* NeutralizeSpeedCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* CaptureSpeedCurve;

	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
	void UpdateVisuals();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void UpdateUIWidgets();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void UpdateUIMaterialInstance();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void UpdatePresenceNumbers();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void UpdateCaptureProgress(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void SetCaptureProgress(float NewProgress, unsigned char NewCaptor, bool bAwardScore);
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void OnStoppedFlashing();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void OnStartedFlashing();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void OnRep_ReplicatedCaptureProgress();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void OnRep_OwningTeam();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void OnRep_CapturingTeam();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void OnOwningTeamChanged();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void OnCapturingTeamChanged();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void OnCaptureAreaEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void OnCaptureAreaBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void EnemyLostPrerequisites();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		void EnemyGainedPrerequisites();
	UFUNCTION(BlueprintCallable, Category = "ControlPoint")
		bool CanCapture(unsigned char Team);

};