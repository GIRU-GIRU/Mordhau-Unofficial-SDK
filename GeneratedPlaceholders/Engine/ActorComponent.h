#pragma once

#include "CoreMinimal.h"
#include "ActorComponent.generated.h"

UCLASS()
class UActorComponent : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FActorComponentTickFunction PrimaryComponentTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> ComponentTags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAssetUserData*> AssetUserData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01 : 3;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReplicates : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNetAddressable : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData02 : 3;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData03 : 7;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoActivate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsActive : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEditableWhenInherited : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData04 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanEverAffectNavigation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData05 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsEditorOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EComponentCreationMethod CreationMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSimpleMemberReference> UCSModifiedProperties;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnComponentActivated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnComponentDeactivated;

	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
	void ToggleActive();
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void SetTickableWhenPaused(bool bTickableWhenPaused);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void SetIsReplicated(bool ShouldReplicate);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void SetComponentTickInterval(float TickInterval);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void SetComponentTickEnabled(bool bEnabled);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void SetAutoActivate(bool bNewAutoActivate);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void SetActive(bool bNewActive, bool bReset);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void OnRep_IsActive();
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void K2_DestroyComponent(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		bool IsComponentTickEnabled();
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		bool IsBeingDestroyed();
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		bool IsActive();
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		class AActor* GetOwner();
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		float GetComponentTickInterval();
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void Deactivate();
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		bool ComponentHasTag(const struct FName& Tag);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	UFUNCTION(BlueprintCallable, Category = "ActorComponent")
		void Activate(bool bReset);

};