#pragma once

#include "CoreMinimal.h"
#include "MordhauActor.generated.h"

UCLASS()
class AMordhauActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauPlayerController> InstanceOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedThud;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* ThudSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ThudPitchMultiplierRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ThudVolumeMultiplierRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldReplicateThud;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThudMinVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThudMaxVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDelayBetweenThuds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NoThudUntilTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPreventClimbing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt KillsStat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIgnoresBleedOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceLongDeathYell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bReceiveCosmeticHits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollForceMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceRagdollOnDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReplayPriorityFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastClientsideLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FQuat LastClientsideRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InterpolationSmoothTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSmoothNetworkMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* InteractionWidgetComponentClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* InteractionWidgetClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText HeldInteractionText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText InteractionText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bNoInteractionWidgetWhenAttachedToChar;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform InteractionWidgetRelativeTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoDetermineWidgetTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMordhauWidgetComponent* InteractionWidgetComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPerformCustomDepthHighlight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHighlighted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxInteractWithDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsInteractable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsPassivelyInteractable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxInteractionHoldTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastLocallyRequestedPassiveInteractionTime;

	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
	void UpdateThudVelocity(float NewThudVelocity);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void UnHighlight();
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void PostInteractionWidgetCreated();
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnThud();
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnRep_ReplicatedThud();
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnReceiveCosmeticHit(class AActor* Source, class AActor* Agent, EAttackMove Move, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnPostDismemberedOther(const struct FName& bone, class ASeparatedBodyPart* Part);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnLocalPlayerUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnInteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnInteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnHighlightStart();
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnHighlightEnd();
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void OnHeldInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		bool IsAnyInstanceOwner(TArray<class AMordhauPlayerController*> ControllerArray);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void InteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void InteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void Highlight();
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		void HeldInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		bool CanInteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		bool CanInteract(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActor")
		bool CanHeldInteract(class AMordhauCharacter* Character);

};