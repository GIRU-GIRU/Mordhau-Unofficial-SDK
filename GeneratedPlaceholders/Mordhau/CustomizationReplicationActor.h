#pragma once

#include "CoreMinimal.h"
#include "CustomizationReplicationActor.generated.h"

UCLASS()
class ACustomizationReplicationActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile LastAssignedProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class AMordhauCharacter>> RegisteredCharacters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasReplicatedAnything;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasEverAssigned;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWillDestroyOnUnregister;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* Cached1PMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* Cached1PDeadMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* CachedUnifiedMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArrayShortWithVersion ReplicatedFaceBonesTranslate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArrayShortWithVersion ReplicatedFaceBonesRotate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArrayShortWithVersion ReplicatedFaceBonesScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArrayAppearanceWithVersion ReplicatedAppearanceCustomization;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArraySkillsWithVersion ReplicatedSkillsCustomization;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArrayByteWithVersion ReplicatedDefaultEquipmentId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> DefaultEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArrayByteWithVersion ReplicatedWearableId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArrayByteWithVersion ReplicatedWearableColor1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArrayByteWithVersion ReplicatedWearableColor2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepArrayByteWithVersion ReplicatedWearablePattern;

	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
	void UpdateCharacterProfile(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void UnregisterCharacter(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void TriggerUpdateIfUpToDate();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void RegisterCharacter(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedWearablePattern();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedWearableId();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedWearableColor2();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedWearableColor1();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedSkillsCustomization();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedFaceBonesTranslate();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedFaceBonesScale();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedFaceBonesRotate();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedDefaultEquipmentId();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void OnRep_ReplicatedAppearanceCustomization();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		bool IsUpToDate();
	UFUNCTION(BlueprintCallable, Category = "CustomizationReplicationActor")
		void AssignDataFromProfile(const struct FCharacterProfile& Profile);

};