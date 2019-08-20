#pragma once

#include "CoreMinimal.h"
#include "AIController.generated.h"

UCLASS()
class AAIController : public AController
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStopAILogicOnUnposses : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLOSflag : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSkipExtraLOSChecks : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowStrafe : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWantsPlayerState : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSetControlRotationFromPawnOrientation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPathFollowingComponent* PathFollowingComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBrainComponent* BrainComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAIPerceptionComponent* PerceptionComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnActionsComponent* ActionsComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlackboardComponent* Blackboard;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGameplayTasksComponent* CachedGameplayTasksComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DefaultNavigationFilterClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate ReceiveMoveCompleted;

	UFUNCTION(BlueprintCallable, Category = "AIController")
	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void UnclaimTaskResource(class UClass* ResourceClass);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void SetMoveBlockDetection(bool bEnable);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void OnUnpossess(class APawn* UnpossessedPawn);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void OnPossess(class APawn* PossessedPawn);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void K2_SetFocus(class AActor* NewFocus);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void K2_SetFocalPoint(const struct FVector& FP);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void K2_ClearFocus();
	UFUNCTION(BlueprintCallable, Category = "AIController")
		bool HasPartialPath();
	UFUNCTION(BlueprintCallable, Category = "AIController")
		class UPathFollowingComponent* GetPathFollowingComponent();
	UFUNCTION(BlueprintCallable, Category = "AIController")
		TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	UFUNCTION(BlueprintCallable, Category = "AIController")
		struct FVector GetImmediateMoveDestination();
	UFUNCTION(BlueprintCallable, Category = "AIController")
		class AActor* GetFocusActor();
	UFUNCTION(BlueprintCallable, Category = "AIController")
		struct FVector GetFocalPointOnActor(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "AIController")
		struct FVector GetFocalPoint();
	UFUNCTION(BlueprintCallable, Category = "AIController")
		class UAIPerceptionComponent* GetAIPerceptionComponent();
	UFUNCTION(BlueprintCallable, Category = "AIController")
		void ClaimTaskResource(class UClass* ResourceClass);

};